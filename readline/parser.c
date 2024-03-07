#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 266
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 3
#define TOKEN_COUNT 103
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  aux_sym__statement_token1 = 1,
  aux_sym__statement_token2 = 2,
  aux_sym_comment_token1 = 3,
  aux_sym_comment_token2 = 4,
  aux_sym_conditional_construct_token1 = 5,
  aux_sym_conditional_construct_token2 = 6,
  aux_sym_conditional_construct_token3 = 7,
  aux_sym__mode_test_token1 = 8,
  anon_sym_EQ = 9,
  aux_sym__term_test_token1 = 10,
  aux_sym__term_test_token2 = 11,
  aux_sym__version_test_token1 = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_GT_EQ = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_GT = 17,
  anon_sym_LT = 18,
  aux_sym__version_test_token2 = 19,
  aux_sym__application_test_token1 = 20,
  aux_sym_include_directive_token1 = 21,
  aux_sym_include_directive_token2 = 22,
  aux_sym_variable_setting_token1 = 23,
  anon_sym_1 = 24,
  aux_sym_bool_value_token1 = 25,
  aux_sym_bool_value_token2 = 26,
  aux_sym_bool_value_token3 = 27,
  aux_sym_bell_value_token1 = 28,
  aux_sym_bell_value_token2 = 29,
  aux_sym_bell_value_token3 = 30,
  aux_sym_number_value_token1 = 31,
  aux_sym_edit_mode_value_token1 = 32,
  aux_sym_edit_mode_value_token2 = 33,
  aux_sym_keymap_value_token1 = 34,
  aux_sym_bool_variable_token1 = 35,
  aux_sym_bool_variable_token2 = 36,
  aux_sym_bool_variable_token3 = 37,
  aux_sym_bool_variable_token4 = 38,
  aux_sym_bool_variable_token5 = 39,
  aux_sym_bool_variable_token6 = 40,
  aux_sym_bool_variable_token7 = 41,
  aux_sym_bool_variable_token8 = 42,
  aux_sym_bool_variable_token9 = 43,
  aux_sym_bool_variable_token10 = 44,
  aux_sym_bool_variable_token11 = 45,
  aux_sym_bool_variable_token12 = 46,
  aux_sym_bool_variable_token13 = 47,
  aux_sym_bool_variable_token14 = 48,
  aux_sym_bool_variable_token15 = 49,
  aux_sym_bool_variable_token16 = 50,
  aux_sym_bool_variable_token17 = 51,
  aux_sym_bool_variable_token18 = 52,
  aux_sym_bool_variable_token19 = 53,
  aux_sym_bool_variable_token20 = 54,
  aux_sym_bool_variable_token21 = 55,
  aux_sym_bool_variable_token22 = 56,
  aux_sym_bool_variable_token23 = 57,
  aux_sym_bool_variable_token24 = 58,
  aux_sym_bool_variable_token25 = 59,
  aux_sym_bool_variable_token26 = 60,
  aux_sym_bool_variable_token27 = 61,
  aux_sym_bool_variable_token28 = 62,
  aux_sym_bool_variable_token29 = 63,
  aux_sym_bool_variable_token30 = 64,
  aux_sym_bool_variable_token31 = 65,
  aux_sym_bool_variable_token32 = 66,
  sym_bell_variable = 67,
  aux_sym_string_variable_token1 = 68,
  aux_sym_string_variable_token2 = 69,
  aux_sym_string_variable_token3 = 70,
  aux_sym_string_variable_token4 = 71,
  aux_sym_string_variable_token5 = 72,
  aux_sym_string_variable_token6 = 73,
  aux_sym_string_variable_token7 = 74,
  aux_sym_number_variable_token1 = 75,
  aux_sym_number_variable_token2 = 76,
  aux_sym_number_variable_token3 = 77,
  aux_sym_number_variable_token4 = 78,
  aux_sym_number_variable_token5 = 79,
  sym_edit_mode_variable = 80,
  sym_keymap_variable = 81,
  anon_sym_COLON = 82,
  sym_function_name = 83,
  anon_sym_DQUOTE = 84,
  aux_sym__double_quoted_string_token1 = 85,
  aux_sym__quoted_string_token1 = 86,
  aux_sym__quoted_string_token2 = 87,
  sym_escape_sequence = 88,
  anon_sym_DASH = 89,
  aux_sym_symbolic_character_name_token1 = 90,
  aux_sym_symbolic_character_name_token2 = 91,
  aux_sym_symbolic_character_name_token3 = 92,
  aux_sym_symbolic_character_name_token4 = 93,
  aux_sym_symbolic_character_name_token5 = 94,
  aux_sym_symbolic_character_name_token6 = 95,
  aux_sym_symbolic_character_name_token7 = 96,
  aux_sym_symbolic_character_name_token8 = 97,
  aux_sym_symbolic_character_name_token9 = 98,
  aux_sym_symbolic_character_name_token10 = 99,
  aux_sym_symbolic_character_name_token11 = 100,
  aux_sym_symbolic_character_name_token12 = 101,
  sym_key_literal = 102,
  sym_source = 103,
  sym__statement = 104,
  sym_comment = 105,
  sym_conditional_construct = 106,
  sym_test = 107,
  sym__mode_test = 108,
  sym__term_test = 109,
  sym__version_test = 110,
  sym__application_test = 111,
  sym__variable_test = 112,
  sym_include_directive = 113,
  sym_variable_setting = 114,
  sym__bool_assignment = 115,
  sym__bell_assignment = 116,
  sym__string_assignment = 117,
  sym__number_assignment = 118,
  sym__edit_mode_assignment = 119,
  sym__keymap_assignment = 120,
  sym_bool_value = 121,
  sym_bell_value = 122,
  sym_string_value = 123,
  sym_number_value = 124,
  sym_edit_mode_value = 125,
  sym_keymap_value = 126,
  sym_bool_variable = 127,
  sym_string_variable = 128,
  sym_number_variable = 129,
  sym_key_binding = 130,
  sym_keyseq = 131,
  sym_macro = 132,
  sym__double_quoted_string = 133,
  sym__quoted_string = 134,
  sym_keyname = 135,
  sym_symbolic_character_name = 136,
  aux_sym_source_repeat1 = 137,
  aux_sym__statement_repeat1 = 138,
  aux_sym__double_quoted_string_repeat1 = 139,
  aux_sym__quoted_string_repeat1 = 140,
  aux_sym_keyname_repeat1 = 141,
  alias_sym_alternative = 142,
  alias_sym_consequence = 143,
  alias_sym_file_path = 144,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym__statement_token2] = "_statement_token2",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_conditional_construct_token1] = "$if",
  [aux_sym_conditional_construct_token2] = "$else",
  [aux_sym_conditional_construct_token3] = "$endif",
  [aux_sym__mode_test_token1] = "mode",
  [anon_sym_EQ] = "=",
  [aux_sym__term_test_token1] = "term",
  [aux_sym__term_test_token2] = "term_name",
  [aux_sym__version_test_token1] = "version",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [aux_sym__version_test_token2] = "version_number",
  [aux_sym__application_test_token1] = "application_name",
  [aux_sym_include_directive_token1] = "$include",
  [aux_sym_include_directive_token2] = "include_directive_token2",
  [aux_sym_variable_setting_token1] = "set",
  [anon_sym_1] = "1",
  [aux_sym_bool_value_token1] = "bool_value_token1",
  [aux_sym_bool_value_token2] = "bool_value_token2",
  [aux_sym_bool_value_token3] = "ERROR",
  [aux_sym_bell_value_token1] = "bell_value_token1",
  [aux_sym_bell_value_token2] = "bell_value_token2",
  [aux_sym_bell_value_token3] = "bell_value_token3",
  [aux_sym_number_value_token1] = "number_value_token1",
  [aux_sym_edit_mode_value_token1] = "edit_mode_value_token1",
  [aux_sym_edit_mode_value_token2] = "edit_mode_value_token2",
  [aux_sym_keymap_value_token1] = "keymap_value_token1",
  [aux_sym_bool_variable_token1] = "bool_variable_token1",
  [aux_sym_bool_variable_token2] = "bool_variable_token2",
  [aux_sym_bool_variable_token3] = "bool_variable_token3",
  [aux_sym_bool_variable_token4] = "bool_variable_token4",
  [aux_sym_bool_variable_token5] = "bool_variable_token5",
  [aux_sym_bool_variable_token6] = "bool_variable_token6",
  [aux_sym_bool_variable_token7] = "bool_variable_token7",
  [aux_sym_bool_variable_token8] = "bool_variable_token8",
  [aux_sym_bool_variable_token9] = "bool_variable_token9",
  [aux_sym_bool_variable_token10] = "bool_variable_token10",
  [aux_sym_bool_variable_token11] = "bool_variable_token11",
  [aux_sym_bool_variable_token12] = "bool_variable_token12",
  [aux_sym_bool_variable_token13] = "bool_variable_token13",
  [aux_sym_bool_variable_token14] = "bool_variable_token14",
  [aux_sym_bool_variable_token15] = "bool_variable_token15",
  [aux_sym_bool_variable_token16] = "bool_variable_token16",
  [aux_sym_bool_variable_token17] = "bool_variable_token17",
  [aux_sym_bool_variable_token18] = "bool_variable_token18",
  [aux_sym_bool_variable_token19] = "bool_variable_token19",
  [aux_sym_bool_variable_token20] = "bool_variable_token20",
  [aux_sym_bool_variable_token21] = "bool_variable_token21",
  [aux_sym_bool_variable_token22] = "bool_variable_token22",
  [aux_sym_bool_variable_token23] = "bool_variable_token23",
  [aux_sym_bool_variable_token24] = "bool_variable_token24",
  [aux_sym_bool_variable_token25] = "bool_variable_token25",
  [aux_sym_bool_variable_token26] = "bool_variable_token26",
  [aux_sym_bool_variable_token27] = "bool_variable_token27",
  [aux_sym_bool_variable_token28] = "bool_variable_token28",
  [aux_sym_bool_variable_token29] = "bool_variable_token29",
  [aux_sym_bool_variable_token30] = "bool_variable_token30",
  [aux_sym_bool_variable_token31] = "bool_variable_token31",
  [aux_sym_bool_variable_token32] = "bool_variable_token32",
  [sym_bell_variable] = "bell_variable",
  [aux_sym_string_variable_token1] = "string_variable_token1",
  [aux_sym_string_variable_token2] = "string_variable_token2",
  [aux_sym_string_variable_token3] = "string_variable_token3",
  [aux_sym_string_variable_token4] = "string_variable_token4",
  [aux_sym_string_variable_token5] = "string_variable_token5",
  [aux_sym_string_variable_token6] = "string_variable_token6",
  [aux_sym_string_variable_token7] = "string_variable_token7",
  [aux_sym_number_variable_token1] = "number_variable_token1",
  [aux_sym_number_variable_token2] = "number_variable_token2",
  [aux_sym_number_variable_token3] = "number_variable_token3",
  [aux_sym_number_variable_token4] = "number_variable_token4",
  [aux_sym_number_variable_token5] = "number_variable_token5",
  [sym_edit_mode_variable] = "edit_mode_variable",
  [sym_keymap_variable] = "keymap_variable",
  [anon_sym_COLON] = ":",
  [sym_function_name] = "function_name",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quoted_string_token1] = "_double_quoted_string_token1",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [aux_sym__quoted_string_token2] = "_quoted_string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DASH] = "-",
  [aux_sym_symbolic_character_name_token1] = "symbolic_character_name_token1",
  [aux_sym_symbolic_character_name_token2] = "symbolic_character_name_token2",
  [aux_sym_symbolic_character_name_token3] = "symbolic_character_name_token3",
  [aux_sym_symbolic_character_name_token4] = "symbolic_character_name_token4",
  [aux_sym_symbolic_character_name_token5] = "symbolic_character_name_token5",
  [aux_sym_symbolic_character_name_token6] = "symbolic_character_name_token6",
  [aux_sym_symbolic_character_name_token7] = "symbolic_character_name_token7",
  [aux_sym_symbolic_character_name_token8] = "symbolic_character_name_token8",
  [aux_sym_symbolic_character_name_token9] = "symbolic_character_name_token9",
  [aux_sym_symbolic_character_name_token10] = "symbolic_character_name_token10",
  [aux_sym_symbolic_character_name_token11] = "symbolic_character_name_token11",
  [aux_sym_symbolic_character_name_token12] = "symbolic_character_name_token12",
  [sym_key_literal] = "key_literal",
  [sym_source] = "source",
  [sym__statement] = "_statement",
  [sym_comment] = "comment",
  [sym_conditional_construct] = "conditional_construct",
  [sym_test] = "test",
  [sym__mode_test] = "_mode_test",
  [sym__term_test] = "_term_test",
  [sym__version_test] = "_version_test",
  [sym__application_test] = "_application_test",
  [sym__variable_test] = "_variable_test",
  [sym_include_directive] = "include_directive",
  [sym_variable_setting] = "variable_setting",
  [sym__bool_assignment] = "_bool_assignment",
  [sym__bell_assignment] = "_bell_assignment",
  [sym__string_assignment] = "_string_assignment",
  [sym__number_assignment] = "_number_assignment",
  [sym__edit_mode_assignment] = "_edit_mode_assignment",
  [sym__keymap_assignment] = "_keymap_assignment",
  [sym_bool_value] = "bool_value",
  [sym_bell_value] = "bell_value",
  [sym_string_value] = "string_value",
  [sym_number_value] = "number_value",
  [sym_edit_mode_value] = "edit_mode_value",
  [sym_keymap_value] = "keymap_value",
  [sym_bool_variable] = "bool_variable",
  [sym_string_variable] = "string_variable",
  [sym_number_variable] = "number_variable",
  [sym_key_binding] = "key_binding",
  [sym_keyseq] = "keyseq",
  [sym_macro] = "macro",
  [sym__double_quoted_string] = "_double_quoted_string",
  [sym__quoted_string] = "_quoted_string",
  [sym_keyname] = "keyname",
  [sym_symbolic_character_name] = "symbolic_character_name",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym__double_quoted_string_repeat1] = "_double_quoted_string_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym_keyname_repeat1] = "keyname_repeat1",
  [alias_sym_alternative] = "alternative",
  [alias_sym_consequence] = "consequence",
  [alias_sym_file_path] = "file_path",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym__statement_token2] = aux_sym__statement_token2,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_conditional_construct_token1] = aux_sym_conditional_construct_token1,
  [aux_sym_conditional_construct_token2] = aux_sym_conditional_construct_token2,
  [aux_sym_conditional_construct_token3] = aux_sym_conditional_construct_token3,
  [aux_sym__mode_test_token1] = aux_sym__mode_test_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__term_test_token1] = aux_sym__term_test_token1,
  [aux_sym__term_test_token2] = aux_sym__term_test_token2,
  [aux_sym__version_test_token1] = aux_sym__version_test_token1,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym__version_test_token2] = aux_sym__version_test_token2,
  [aux_sym__application_test_token1] = aux_sym__application_test_token1,
  [aux_sym_include_directive_token1] = aux_sym_include_directive_token1,
  [aux_sym_include_directive_token2] = aux_sym_include_directive_token2,
  [aux_sym_variable_setting_token1] = aux_sym_variable_setting_token1,
  [anon_sym_1] = anon_sym_1,
  [aux_sym_bool_value_token1] = aux_sym_bool_value_token1,
  [aux_sym_bool_value_token2] = aux_sym_bool_value_token2,
  [aux_sym_bool_value_token3] = aux_sym_bool_value_token3,
  [aux_sym_bell_value_token1] = aux_sym_bell_value_token1,
  [aux_sym_bell_value_token2] = aux_sym_bell_value_token2,
  [aux_sym_bell_value_token3] = aux_sym_bell_value_token3,
  [aux_sym_number_value_token1] = aux_sym_number_value_token1,
  [aux_sym_edit_mode_value_token1] = aux_sym_edit_mode_value_token1,
  [aux_sym_edit_mode_value_token2] = aux_sym_edit_mode_value_token2,
  [aux_sym_keymap_value_token1] = aux_sym_keymap_value_token1,
  [aux_sym_bool_variable_token1] = aux_sym_bool_variable_token1,
  [aux_sym_bool_variable_token2] = aux_sym_bool_variable_token2,
  [aux_sym_bool_variable_token3] = aux_sym_bool_variable_token3,
  [aux_sym_bool_variable_token4] = aux_sym_bool_variable_token4,
  [aux_sym_bool_variable_token5] = aux_sym_bool_variable_token5,
  [aux_sym_bool_variable_token6] = aux_sym_bool_variable_token6,
  [aux_sym_bool_variable_token7] = aux_sym_bool_variable_token7,
  [aux_sym_bool_variable_token8] = aux_sym_bool_variable_token8,
  [aux_sym_bool_variable_token9] = aux_sym_bool_variable_token9,
  [aux_sym_bool_variable_token10] = aux_sym_bool_variable_token10,
  [aux_sym_bool_variable_token11] = aux_sym_bool_variable_token11,
  [aux_sym_bool_variable_token12] = aux_sym_bool_variable_token12,
  [aux_sym_bool_variable_token13] = aux_sym_bool_variable_token13,
  [aux_sym_bool_variable_token14] = aux_sym_bool_variable_token14,
  [aux_sym_bool_variable_token15] = aux_sym_bool_variable_token15,
  [aux_sym_bool_variable_token16] = aux_sym_bool_variable_token16,
  [aux_sym_bool_variable_token17] = aux_sym_bool_variable_token17,
  [aux_sym_bool_variable_token18] = aux_sym_bool_variable_token18,
  [aux_sym_bool_variable_token19] = aux_sym_bool_variable_token19,
  [aux_sym_bool_variable_token20] = aux_sym_bool_variable_token20,
  [aux_sym_bool_variable_token21] = aux_sym_bool_variable_token21,
  [aux_sym_bool_variable_token22] = aux_sym_bool_variable_token22,
  [aux_sym_bool_variable_token23] = aux_sym_bool_variable_token23,
  [aux_sym_bool_variable_token24] = aux_sym_bool_variable_token24,
  [aux_sym_bool_variable_token25] = aux_sym_bool_variable_token25,
  [aux_sym_bool_variable_token26] = aux_sym_bool_variable_token26,
  [aux_sym_bool_variable_token27] = aux_sym_bool_variable_token27,
  [aux_sym_bool_variable_token28] = aux_sym_bool_variable_token28,
  [aux_sym_bool_variable_token29] = aux_sym_bool_variable_token29,
  [aux_sym_bool_variable_token30] = aux_sym_bool_variable_token30,
  [aux_sym_bool_variable_token31] = aux_sym_bool_variable_token31,
  [aux_sym_bool_variable_token32] = aux_sym_bool_variable_token32,
  [sym_bell_variable] = sym_bell_variable,
  [aux_sym_string_variable_token1] = aux_sym_string_variable_token1,
  [aux_sym_string_variable_token2] = aux_sym_string_variable_token2,
  [aux_sym_string_variable_token3] = aux_sym_string_variable_token3,
  [aux_sym_string_variable_token4] = aux_sym_string_variable_token4,
  [aux_sym_string_variable_token5] = aux_sym_string_variable_token5,
  [aux_sym_string_variable_token6] = aux_sym_string_variable_token6,
  [aux_sym_string_variable_token7] = aux_sym_string_variable_token7,
  [aux_sym_number_variable_token1] = aux_sym_number_variable_token1,
  [aux_sym_number_variable_token2] = aux_sym_number_variable_token2,
  [aux_sym_number_variable_token3] = aux_sym_number_variable_token3,
  [aux_sym_number_variable_token4] = aux_sym_number_variable_token4,
  [aux_sym_number_variable_token5] = aux_sym_number_variable_token5,
  [sym_edit_mode_variable] = sym_edit_mode_variable,
  [sym_keymap_variable] = sym_keymap_variable,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_function_name] = sym_function_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quoted_string_token1] = aux_sym__double_quoted_string_token1,
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [aux_sym__quoted_string_token2] = aux_sym__quoted_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_symbolic_character_name_token1] = aux_sym_symbolic_character_name_token1,
  [aux_sym_symbolic_character_name_token2] = aux_sym_symbolic_character_name_token2,
  [aux_sym_symbolic_character_name_token3] = aux_sym_symbolic_character_name_token3,
  [aux_sym_symbolic_character_name_token4] = aux_sym_symbolic_character_name_token4,
  [aux_sym_symbolic_character_name_token5] = aux_sym_symbolic_character_name_token5,
  [aux_sym_symbolic_character_name_token6] = aux_sym_symbolic_character_name_token6,
  [aux_sym_symbolic_character_name_token7] = aux_sym_symbolic_character_name_token7,
  [aux_sym_symbolic_character_name_token8] = aux_sym_symbolic_character_name_token8,
  [aux_sym_symbolic_character_name_token9] = aux_sym_symbolic_character_name_token9,
  [aux_sym_symbolic_character_name_token10] = aux_sym_symbolic_character_name_token10,
  [aux_sym_symbolic_character_name_token11] = aux_sym_symbolic_character_name_token11,
  [aux_sym_symbolic_character_name_token12] = aux_sym_symbolic_character_name_token12,
  [sym_key_literal] = sym_key_literal,
  [sym_source] = sym_source,
  [sym__statement] = sym__statement,
  [sym_comment] = sym_comment,
  [sym_conditional_construct] = sym_conditional_construct,
  [sym_test] = sym_test,
  [sym__mode_test] = sym__mode_test,
  [sym__term_test] = sym__term_test,
  [sym__version_test] = sym__version_test,
  [sym__application_test] = sym__application_test,
  [sym__variable_test] = sym__variable_test,
  [sym_include_directive] = sym_include_directive,
  [sym_variable_setting] = sym_variable_setting,
  [sym__bool_assignment] = sym__bool_assignment,
  [sym__bell_assignment] = sym__bell_assignment,
  [sym__string_assignment] = sym__string_assignment,
  [sym__number_assignment] = sym__number_assignment,
  [sym__edit_mode_assignment] = sym__edit_mode_assignment,
  [sym__keymap_assignment] = sym__keymap_assignment,
  [sym_bool_value] = sym_bool_value,
  [sym_bell_value] = sym_bell_value,
  [sym_string_value] = sym_string_value,
  [sym_number_value] = sym_number_value,
  [sym_edit_mode_value] = sym_edit_mode_value,
  [sym_keymap_value] = sym_keymap_value,
  [sym_bool_variable] = sym_bool_variable,
  [sym_string_variable] = sym_string_variable,
  [sym_number_variable] = sym_number_variable,
  [sym_key_binding] = sym_key_binding,
  [sym_keyseq] = sym_keyseq,
  [sym_macro] = sym_macro,
  [sym__double_quoted_string] = sym__double_quoted_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym_keyname] = sym_keyname,
  [sym_symbolic_character_name] = sym_symbolic_character_name,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__statement_repeat1] = aux_sym__statement_repeat1,
  [aux_sym__double_quoted_string_repeat1] = aux_sym__double_quoted_string_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
  [aux_sym_keyname_repeat1] = aux_sym_keyname_repeat1,
  [alias_sym_alternative] = alias_sym_alternative,
  [alias_sym_consequence] = alias_sym_consequence,
  [alias_sym_file_path] = alias_sym_file_path,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_construct_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_conditional_construct_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_conditional_construct_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__mode_test_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__term_test_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__term_test_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__version_test_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__version_test_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__application_test_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_include_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_setting_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bool_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_value_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_bell_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bell_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bell_value_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_edit_mode_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_edit_mode_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keymap_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bool_variable_token32] = {
    .visible = false,
    .named = false,
  },
  [sym_bell_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_variable_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_variable_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_variable_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_variable_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_variable_token5] = {
    .visible = false,
    .named = false,
  },
  [sym_edit_mode_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_keymap_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbolic_character_name_token12] = {
    .visible = false,
    .named = false,
  },
  [sym_key_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_construct] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym__mode_test] = {
    .visible = false,
    .named = true,
  },
  [sym__term_test] = {
    .visible = false,
    .named = true,
  },
  [sym__version_test] = {
    .visible = false,
    .named = true,
  },
  [sym__application_test] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_test] = {
    .visible = false,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_setting] = {
    .visible = true,
    .named = true,
  },
  [sym__bool_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__bell_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__string_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__number_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__edit_mode_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__keymap_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_bool_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bell_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_number_value] = {
    .visible = true,
    .named = true,
  },
  [sym_edit_mode_value] = {
    .visible = true,
    .named = true,
  },
  [sym_keymap_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_string_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_number_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_key_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_keyseq] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__double_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_keyname] = {
    .visible = true,
    .named = true,
  },
  [sym_symbolic_character_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyname_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_alternative] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_consequence] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_file_path] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_file_path,
  },
  [2] = {
    [4] = alias_sym_consequence,
  },
  [3] = {
    [5] = alias_sym_consequence,
  },
  [4] = {
    [6] = alias_sym_alternative,
  },
  [5] = {
    [7] = alias_sym_alternative,
  },
  [6] = {
    [4] = alias_sym_consequence,
    [7] = alias_sym_alternative,
  },
  [7] = {
    [4] = alias_sym_consequence,
    [8] = alias_sym_alternative,
  },
  [8] = {
    [8] = alias_sym_alternative,
  },
  [9] = {
    [5] = alias_sym_consequence,
    [8] = alias_sym_alternative,
  },
  [10] = {
    [4] = alias_sym_consequence,
    [9] = alias_sym_alternative,
  },
  [11] = {
    [5] = alias_sym_consequence,
    [9] = alias_sym_alternative,
  },
  [12] = {
    [9] = alias_sym_alternative,
  },
  [13] = {
    [5] = alias_sym_consequence,
    [10] = alias_sym_alternative,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_source_repeat1, 3,
    aux_sym_source_repeat1,
    alias_sym_alternative,
    alias_sym_consequence,
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
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 4,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 4,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 4,
  [70] = 70,
  [71] = 71,
  [72] = 4,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 4,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 4,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 4,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 4,
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
  [185] = 185,
  [186] = 186,
  [187] = 187,
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
  [226] = 226,
  [227] = 227,
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
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'd'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(61);
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(885);
      if (lookahead == '-') ADVANCE(892);
      if (lookahead == '1') ADVANCE(766);
      if (lookahead == ':') ADVANCE(882);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(906);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(885);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead != 0) ADVANCE(885);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(765);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(790);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(824);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(821);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(808);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(792);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(794);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(795);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(825);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(763);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == ':') ADVANCE(882);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(885);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(892);
      if (lookahead == ':') ADVANCE(882);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(888);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(886);
      if (lookahead != 0) ADVANCE(887);
      END_STATE();
    case 15:
      if (lookahead == 'x') ADVANCE(58);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(890);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(888);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(894);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(527);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(370);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(256);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(154);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(725);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(155);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(357);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(761);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(904);
      END_STATE();
    case 19:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(914);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(908);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(916);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(913);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(909);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(911);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(915);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(905);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(896);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(898);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 32:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(66);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(895);
      END_STATE();
    case 38:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(893);
      END_STATE();
    case 39:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      END_STATE();
    case 42:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(900);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(764);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(902);
      END_STATE();
    case 55:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(891);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(73);
      END_STATE();
    case 60:
      if (eof) ADVANCE(61);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '$') ADVANCE(907);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(914);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(908);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(916);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(913);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(909);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(911);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(912);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(905);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__statement_token2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_conditional_construct_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_conditional_construct_token2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_conditional_construct_token3);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__mode_test_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__term_test_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__term_test_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__version_test_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__version_test_token2);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__version_test_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(888);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(739);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(582);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(588);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(694);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(611);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(696);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(583);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(630);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == '-') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(347);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(851);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(858);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(674);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(659);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(756);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(752);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(619);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(581);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(620);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(278);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(675);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(395);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(475);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(655);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(687);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(698);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(714);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(569);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(571);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(724);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(846);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(863);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(403);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(529);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(748);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(677);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(398);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(618);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(730);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(861);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(845);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(753);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(711);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(709);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(857);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(871);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(873);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(874);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(728);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(678);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(875);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(876);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(528);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(662);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(757);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(744);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(649);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(758);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(741);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(742);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(707);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(734);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(613);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(697);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(664);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(666);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(469);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(735);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(747);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(646);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(592);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(593);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(595);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(870);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(842);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(836);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(844);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(731);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(579);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(722);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(684);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(682);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(640);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(658);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(692);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(668);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(607);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(727);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(602);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(600);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(601);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(729);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(634);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(881);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(726);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(616);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(631);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(632);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(732);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(868);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(869);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(749);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(537);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(642);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(645);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(647);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(750);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(736);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(719);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(721);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(838);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(866);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(852);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(859);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(855);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(853);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(862);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(835);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(877);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(843);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(854);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(700);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(673);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(699);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(710);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(587);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(715);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(717);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(879);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(865);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(849);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(755);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(754);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(545);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(627);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(629);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(723);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(683);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(644);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(720);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(837);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(856);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(671);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(847);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(860);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(891);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__application_test_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(761);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_include_directive_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(763);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_variable_setting_token1);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_bool_value_token1);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_bool_value_token2);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(818);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(789);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(810);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(791);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_bool_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(825);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_bell_value_token1);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_bell_value_token2);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_bell_value_token3);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_number_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token1);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_edit_mode_value_token2);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_keymap_value_token1);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_keymap_value_token1);
      if (lookahead == '-') ADVANCE(778);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_keymap_value_token1);
      if (lookahead == '-') ADVANCE(777);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_bool_variable_token1);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_bool_variable_token2);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_bool_variable_token3);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_bool_variable_token4);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_bool_variable_token5);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_bool_variable_token6);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_bool_variable_token7);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_bool_variable_token8);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_bool_variable_token9);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_bool_variable_token10);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_bool_variable_token11);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_bool_variable_token12);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_bool_variable_token13);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_bool_variable_token14);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_bool_variable_token15);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_bool_variable_token16);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_bool_variable_token17);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_bool_variable_token18);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_bool_variable_token19);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_bool_variable_token20);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_bool_variable_token21);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_bool_variable_token22);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_bool_variable_token23);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_bool_variable_token24);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_bool_variable_token25);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_bool_variable_token26);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_bool_variable_token27);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_bool_variable_token28);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_bool_variable_token29);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_bool_variable_token30);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_bool_variable_token31);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_bool_variable_token32);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_bell_variable);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_string_variable_token1);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_string_variable_token2);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_string_variable_token3);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_string_variable_token4);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_string_variable_token5);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_string_variable_token6);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_string_variable_token7);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_number_variable_token1);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_number_variable_token2);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_number_variable_token3);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_number_variable_token4);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_number_variable_token5);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_edit_mode_variable);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_keymap_variable);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_function_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(888);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(889);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(888);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token1);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token2);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token3);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token5);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token6);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token7);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token8);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token9);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token10);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token11);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_symbolic_character_name_token12);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_key_literal);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'x') ADVANCE(760);
      if (lookahead == 'C' ||
          lookahead == 'M') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(890);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(888);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_key_literal);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 60},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 60},
  [8] = {.lex_state = 60},
  [9] = {.lex_state = 60},
  [10] = {.lex_state = 60},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 60},
  [17] = {.lex_state = 60},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 60},
  [20] = {.lex_state = 60},
  [21] = {.lex_state = 60},
  [22] = {.lex_state = 60},
  [23] = {.lex_state = 60},
  [24] = {.lex_state = 60},
  [25] = {.lex_state = 60},
  [26] = {.lex_state = 60},
  [27] = {.lex_state = 60},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 60},
  [30] = {.lex_state = 60},
  [31] = {.lex_state = 60},
  [32] = {.lex_state = 60},
  [33] = {.lex_state = 60},
  [34] = {.lex_state = 60},
  [35] = {.lex_state = 60},
  [36] = {.lex_state = 60},
  [37] = {.lex_state = 60},
  [38] = {.lex_state = 60},
  [39] = {.lex_state = 60},
  [40] = {.lex_state = 60},
  [41] = {.lex_state = 60},
  [42] = {.lex_state = 60},
  [43] = {.lex_state = 60},
  [44] = {.lex_state = 60},
  [45] = {.lex_state = 60},
  [46] = {.lex_state = 60},
  [47] = {.lex_state = 60},
  [48] = {.lex_state = 60},
  [49] = {.lex_state = 60},
  [50] = {.lex_state = 60},
  [51] = {.lex_state = 60},
  [52] = {.lex_state = 60},
  [53] = {.lex_state = 60},
  [54] = {.lex_state = 60},
  [55] = {.lex_state = 60},
  [56] = {.lex_state = 60},
  [57] = {.lex_state = 60},
  [58] = {.lex_state = 60},
  [59] = {.lex_state = 60},
  [60] = {.lex_state = 60},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 60},
  [105] = {.lex_state = 60},
  [106] = {.lex_state = 60},
  [107] = {.lex_state = 60},
  [108] = {.lex_state = 60},
  [109] = {.lex_state = 60},
  [110] = {.lex_state = 60},
  [111] = {.lex_state = 60},
  [112] = {.lex_state = 60},
  [113] = {.lex_state = 60},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 60},
  [116] = {.lex_state = 60},
  [117] = {.lex_state = 60},
  [118] = {.lex_state = 60},
  [119] = {.lex_state = 60},
  [120] = {.lex_state = 60},
  [121] = {.lex_state = 60},
  [122] = {.lex_state = 60},
  [123] = {.lex_state = 60},
  [124] = {.lex_state = 60},
  [125] = {.lex_state = 60},
  [126] = {.lex_state = 60},
  [127] = {.lex_state = 60},
  [128] = {.lex_state = 60},
  [129] = {.lex_state = 60},
  [130] = {.lex_state = 60},
  [131] = {.lex_state = 60},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 60},
  [134] = {.lex_state = 60},
  [135] = {.lex_state = 60},
  [136] = {.lex_state = 60},
  [137] = {.lex_state = 60},
  [138] = {.lex_state = 60},
  [139] = {.lex_state = 60},
  [140] = {.lex_state = 60},
  [141] = {.lex_state = 60},
  [142] = {.lex_state = 60},
  [143] = {.lex_state = 60},
  [144] = {.lex_state = 60},
  [145] = {.lex_state = 60},
  [146] = {.lex_state = 60},
  [147] = {.lex_state = 60},
  [148] = {.lex_state = 60},
  [149] = {.lex_state = 60},
  [150] = {.lex_state = 60},
  [151] = {.lex_state = 60},
  [152] = {.lex_state = 60},
  [153] = {.lex_state = 60},
  [154] = {.lex_state = 60},
  [155] = {.lex_state = 60},
  [156] = {.lex_state = 60},
  [157] = {.lex_state = 60},
  [158] = {.lex_state = 60},
  [159] = {.lex_state = 60},
  [160] = {.lex_state = 60},
  [161] = {.lex_state = 60},
  [162] = {.lex_state = 60},
  [163] = {.lex_state = 60},
  [164] = {.lex_state = 60},
  [165] = {.lex_state = 60},
  [166] = {.lex_state = 60},
  [167] = {.lex_state = 60},
  [168] = {.lex_state = 60},
  [169] = {.lex_state = 60},
  [170] = {.lex_state = 60},
  [171] = {.lex_state = 60},
  [172] = {.lex_state = 60},
  [173] = {.lex_state = 60},
  [174] = {.lex_state = 60},
  [175] = {.lex_state = 60},
  [176] = {.lex_state = 60},
  [177] = {.lex_state = 60},
  [178] = {.lex_state = 60},
  [179] = {.lex_state = 60},
  [180] = {.lex_state = 60},
  [181] = {.lex_state = 60},
  [182] = {.lex_state = 60},
  [183] = {.lex_state = 60},
  [184] = {.lex_state = 60},
  [185] = {.lex_state = 60},
  [186] = {.lex_state = 60},
  [187] = {.lex_state = 60},
  [188] = {.lex_state = 60},
  [189] = {.lex_state = 60},
  [190] = {.lex_state = 60},
  [191] = {.lex_state = 60},
  [192] = {.lex_state = 60},
  [193] = {.lex_state = 60},
  [194] = {.lex_state = 60},
  [195] = {.lex_state = 60},
  [196] = {.lex_state = 60},
  [197] = {.lex_state = 60},
  [198] = {.lex_state = 60},
  [199] = {.lex_state = 60},
  [200] = {.lex_state = 60},
  [201] = {.lex_state = 60},
  [202] = {.lex_state = 60},
  [203] = {.lex_state = 60},
  [204] = {.lex_state = 60},
  [205] = {.lex_state = 60},
  [206] = {.lex_state = 60},
  [207] = {.lex_state = 60},
  [208] = {.lex_state = 60},
  [209] = {.lex_state = 60},
  [210] = {.lex_state = 60},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 60},
  [213] = {.lex_state = 60},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 60},
  [216] = {.lex_state = 60},
  [217] = {.lex_state = 60},
  [218] = {.lex_state = 60},
  [219] = {.lex_state = 60},
  [220] = {.lex_state = 60},
  [221] = {.lex_state = 60},
  [222] = {.lex_state = 60},
  [223] = {.lex_state = 60},
  [224] = {.lex_state = 60},
  [225] = {.lex_state = 60},
  [226] = {.lex_state = 60},
  [227] = {.lex_state = 60},
  [228] = {.lex_state = 60},
  [229] = {.lex_state = 60},
  [230] = {.lex_state = 60},
  [231] = {.lex_state = 60},
  [232] = {.lex_state = 60},
  [233] = {.lex_state = 60},
  [234] = {.lex_state = 60},
  [235] = {.lex_state = 60},
  [236] = {.lex_state = 60},
  [237] = {.lex_state = 11},
  [238] = {.lex_state = 60},
  [239] = {.lex_state = 11},
  [240] = {.lex_state = 60},
  [241] = {.lex_state = 60},
  [242] = {.lex_state = 60},
  [243] = {.lex_state = 60},
  [244] = {.lex_state = 60},
  [245] = {.lex_state = 60},
  [246] = {.lex_state = 60},
  [247] = {.lex_state = 60},
  [248] = {.lex_state = 60},
  [249] = {.lex_state = 60},
  [250] = {.lex_state = 60},
  [251] = {.lex_state = 11},
  [252] = {.lex_state = 11},
  [253] = {.lex_state = 11},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 60},
  [256] = {.lex_state = 60},
  [257] = {.lex_state = 60},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 60},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 59},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__statement_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym__version_test_token2] = ACTIONS(1),
    [aux_sym__application_test_token1] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__double_quoted_string_token1] = ACTIONS(1),
    [aux_sym__quoted_string_token1] = ACTIONS(1),
    [aux_sym__quoted_string_token2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_key_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(261),
    [sym__statement] = STATE(60),
    [sym_comment] = STATE(260),
    [sym_conditional_construct] = STATE(260),
    [sym_include_directive] = STATE(260),
    [sym_variable_setting] = STATE(210),
    [sym_key_binding] = STATE(210),
    [sym_keyseq] = STATE(259),
    [sym__double_quoted_string] = STATE(258),
    [sym_keyname] = STATE(259),
    [sym_symbolic_character_name] = STATE(239),
    [aux_sym_source_repeat1] = STATE(10),
    [aux_sym__statement_repeat1] = STATE(55),
    [aux_sym_keyname_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__statement_token1] = ACTIONS(5),
    [aux_sym__statement_token2] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(9),
    [aux_sym_conditional_construct_token1] = ACTIONS(11),
    [aux_sym_include_directive_token1] = ACTIONS(13),
    [aux_sym_variable_setting_token1] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_symbolic_character_name_token1] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token2] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token3] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token4] = ACTIONS(21),
    [aux_sym_symbolic_character_name_token5] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token6] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token7] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token8] = ACTIONS(21),
    [aux_sym_symbolic_character_name_token9] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token10] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token11] = ACTIONS(19),
    [aux_sym_symbolic_character_name_token12] = ACTIONS(19),
    [sym_key_literal] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(25), 1,
      aux_sym__statement_token1,
    ACTIONS(27), 1,
      aux_sym__mode_test_token1,
    ACTIONS(29), 1,
      aux_sym__term_test_token1,
    ACTIONS(31), 1,
      aux_sym__version_test_token1,
    ACTIONS(33), 1,
      aux_sym__application_test_token1,
    ACTIONS(37), 1,
      sym_bell_variable,
    ACTIONS(43), 1,
      sym_edit_mode_variable,
    ACTIONS(45), 1,
      sym_keymap_variable,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    STATE(172), 1,
      sym_test,
    STATE(213), 1,
      sym_number_variable,
    STATE(241), 1,
      sym_string_variable,
    STATE(242), 1,
      sym_bool_variable,
    ACTIONS(41), 5,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
    STATE(243), 5,
      sym__mode_test,
      sym__term_test,
      sym__version_test,
      sym__application_test,
      sym__variable_test,
    ACTIONS(39), 7,
      aux_sym_string_variable_token1,
      aux_sym_string_variable_token2,
      aux_sym_string_variable_token3,
      aux_sym_string_variable_token4,
      aux_sym_string_variable_token5,
      aux_sym_string_variable_token6,
      aux_sym_string_variable_token7,
    ACTIONS(35), 32,
      aux_sym_bool_variable_token1,
      aux_sym_bool_variable_token2,
      aux_sym_bool_variable_token3,
      aux_sym_bool_variable_token4,
      aux_sym_bool_variable_token5,
      aux_sym_bool_variable_token6,
      aux_sym_bool_variable_token7,
      aux_sym_bool_variable_token8,
      aux_sym_bool_variable_token9,
      aux_sym_bool_variable_token10,
      aux_sym_bool_variable_token11,
      aux_sym_bool_variable_token12,
      aux_sym_bool_variable_token13,
      aux_sym_bool_variable_token14,
      aux_sym_bool_variable_token15,
      aux_sym_bool_variable_token16,
      aux_sym_bool_variable_token17,
      aux_sym_bool_variable_token18,
      aux_sym_bool_variable_token19,
      aux_sym_bool_variable_token20,
      aux_sym_bool_variable_token21,
      aux_sym_bool_variable_token22,
      aux_sym_bool_variable_token23,
      aux_sym_bool_variable_token24,
      aux_sym_bool_variable_token25,
      aux_sym_bool_variable_token26,
      aux_sym_bool_variable_token27,
      aux_sym_bool_variable_token28,
      aux_sym_bool_variable_token29,
      aux_sym_bool_variable_token30,
      aux_sym_bool_variable_token31,
      aux_sym_bool_variable_token32,
  [97] = 12,
    ACTIONS(25), 1,
      aux_sym__statement_token1,
    ACTIONS(47), 1,
      sym_bell_variable,
    ACTIONS(49), 1,
      sym_edit_mode_variable,
    ACTIONS(51), 1,
      sym_keymap_variable,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    STATE(136), 1,
      sym_number_variable,
    STATE(137), 1,
      sym_string_variable,
    STATE(138), 1,
      sym_bool_variable,
    ACTIONS(41), 5,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
    STATE(238), 6,
      sym__bool_assignment,
      sym__bell_assignment,
      sym__string_assignment,
      sym__number_assignment,
      sym__edit_mode_assignment,
      sym__keymap_assignment,
    ACTIONS(39), 7,
      aux_sym_string_variable_token1,
      aux_sym_string_variable_token2,
      aux_sym_string_variable_token3,
      aux_sym_string_variable_token4,
      aux_sym_string_variable_token5,
      aux_sym_string_variable_token6,
      aux_sym_string_variable_token7,
    ACTIONS(35), 32,
      aux_sym_bool_variable_token1,
      aux_sym_bool_variable_token2,
      aux_sym_bool_variable_token3,
      aux_sym_bool_variable_token4,
      aux_sym_bool_variable_token5,
      aux_sym_bool_variable_token6,
      aux_sym_bool_variable_token7,
      aux_sym_bool_variable_token8,
      aux_sym_bool_variable_token9,
      aux_sym_bool_variable_token10,
      aux_sym_bool_variable_token11,
      aux_sym_bool_variable_token12,
      aux_sym_bool_variable_token13,
      aux_sym_bool_variable_token14,
      aux_sym_bool_variable_token15,
      aux_sym_bool_variable_token16,
      aux_sym_bool_variable_token17,
      aux_sym_bool_variable_token18,
      aux_sym_bool_variable_token19,
      aux_sym_bool_variable_token20,
      aux_sym_bool_variable_token21,
      aux_sym_bool_variable_token22,
      aux_sym_bool_variable_token23,
      aux_sym_bool_variable_token24,
      aux_sym_bool_variable_token25,
      aux_sym_bool_variable_token26,
      aux_sym_bool_variable_token27,
      aux_sym_bool_variable_token28,
      aux_sym_bool_variable_token29,
      aux_sym_bool_variable_token30,
      aux_sym_bool_variable_token31,
      aux_sym_bool_variable_token32,
  [180] = 4,
    ACTIONS(53), 1,
      aux_sym__statement_token1,
    ACTIONS(58), 1,
      aux_sym__application_test_token1,
    STATE(4), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 50,
      aux_sym__mode_test_token1,
      aux_sym__term_test_token1,
      aux_sym__version_test_token1,
      aux_sym_bool_variable_token1,
      aux_sym_bool_variable_token2,
      aux_sym_bool_variable_token3,
      aux_sym_bool_variable_token4,
      aux_sym_bool_variable_token5,
      aux_sym_bool_variable_token6,
      aux_sym_bool_variable_token7,
      aux_sym_bool_variable_token8,
      aux_sym_bool_variable_token9,
      aux_sym_bool_variable_token10,
      aux_sym_bool_variable_token11,
      aux_sym_bool_variable_token12,
      aux_sym_bool_variable_token13,
      aux_sym_bool_variable_token14,
      aux_sym_bool_variable_token15,
      aux_sym_bool_variable_token16,
      aux_sym_bool_variable_token17,
      aux_sym_bool_variable_token18,
      aux_sym_bool_variable_token19,
      aux_sym_bool_variable_token20,
      aux_sym_bool_variable_token21,
      aux_sym_bool_variable_token22,
      aux_sym_bool_variable_token23,
      aux_sym_bool_variable_token24,
      aux_sym_bool_variable_token25,
      aux_sym_bool_variable_token26,
      aux_sym_bool_variable_token27,
      aux_sym_bool_variable_token28,
      aux_sym_bool_variable_token29,
      aux_sym_bool_variable_token30,
      aux_sym_bool_variable_token31,
      aux_sym_bool_variable_token32,
      sym_bell_variable,
      aux_sym_string_variable_token1,
      aux_sym_string_variable_token2,
      aux_sym_string_variable_token3,
      aux_sym_string_variable_token4,
      aux_sym_string_variable_token5,
      aux_sym_string_variable_token6,
      aux_sym_string_variable_token7,
      aux_sym_number_variable_token1,
      aux_sym_number_variable_token2,
      aux_sym_number_variable_token3,
      aux_sym_number_variable_token4,
      aux_sym_number_variable_token5,
      sym_edit_mode_variable,
      sym_keymap_variable,
  [242] = 20,
    ACTIONS(62), 1,
      aux_sym__statement_token1,
    ACTIONS(65), 1,
      aux_sym__statement_token2,
    ACTIONS(68), 1,
      aux_sym_comment_token1,
    ACTIONS(71), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(74), 1,
      aux_sym_include_directive_token1,
    ACTIONS(77), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_key_literal,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(55), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(86), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(83), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [319] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(92), 1,
      aux_sym__statement_token1,
    ACTIONS(94), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(96), 1,
      aux_sym_conditional_construct_token3,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(34), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [397] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(98), 1,
      aux_sym__statement_token1,
    ACTIONS(100), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(102), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(33), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [475] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(104), 1,
      aux_sym__statement_token1,
    ACTIONS(106), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(108), 1,
      aux_sym_conditional_construct_token3,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(32), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [553] = 21,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(110), 1,
      aux_sym__statement_token1,
    ACTIONS(112), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(114), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(31), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [631] = 20,
    ACTIONS(5), 1,
      aux_sym__statement_token1,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(55), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [706] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(118), 1,
      aux_sym__statement_token1,
    ACTIONS(120), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(42), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [781] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(122), 1,
      aux_sym__statement_token1,
    ACTIONS(124), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(50), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [856] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(126), 1,
      aux_sym__statement_token1,
    ACTIONS(128), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(48), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [931] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(130), 1,
      aux_sym__statement_token1,
    ACTIONS(132), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(35), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1006] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(134), 1,
      aux_sym__statement_token1,
    ACTIONS(136), 1,
      aux_sym_conditional_construct_token3,
    STATE(19), 1,
      aux_sym_source_repeat1,
    STATE(49), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1081] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(138), 1,
      aux_sym__statement_token1,
    ACTIONS(140), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(54), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1156] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(142), 1,
      aux_sym__statement_token1,
    ACTIONS(144), 1,
      aux_sym_conditional_construct_token3,
    STATE(11), 1,
      aux_sym_source_repeat1,
    STATE(47), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1231] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(146), 1,
      aux_sym__statement_token1,
    ACTIONS(148), 1,
      aux_sym_conditional_construct_token3,
    STATE(25), 1,
      aux_sym_source_repeat1,
    STATE(51), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1306] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(150), 1,
      aux_sym__statement_token1,
    ACTIONS(152), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(43), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1381] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(154), 1,
      aux_sym__statement_token1,
    ACTIONS(156), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(44), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1456] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(158), 1,
      aux_sym__statement_token1,
    ACTIONS(160), 1,
      aux_sym_conditional_construct_token3,
    STATE(12), 1,
      aux_sym_source_repeat1,
    STATE(53), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1531] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(162), 1,
      aux_sym__statement_token1,
    ACTIONS(164), 1,
      aux_sym_conditional_construct_token3,
    STATE(13), 1,
      aux_sym_source_repeat1,
    STATE(38), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1606] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(166), 1,
      aux_sym__statement_token1,
    ACTIONS(168), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(45), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1681] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(170), 1,
      aux_sym__statement_token1,
    ACTIONS(172), 1,
      aux_sym_conditional_construct_token3,
    STATE(23), 1,
      aux_sym_source_repeat1,
    STATE(39), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1756] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(174), 1,
      aux_sym__statement_token1,
    ACTIONS(176), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(46), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1831] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(178), 1,
      aux_sym__statement_token1,
    ACTIONS(180), 1,
      aux_sym_conditional_construct_token3,
    STATE(5), 1,
      aux_sym_source_repeat1,
    STATE(40), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1906] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(182), 1,
      aux_sym__statement_token1,
    ACTIONS(184), 1,
      aux_sym_conditional_construct_token3,
    STATE(16), 1,
      aux_sym_source_repeat1,
    STATE(52), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [1981] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(186), 1,
      aux_sym__statement_token1,
    ACTIONS(188), 1,
      aux_sym_conditional_construct_token3,
    STATE(26), 1,
      aux_sym_source_repeat1,
    STATE(37), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2056] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(190), 1,
      aux_sym__statement_token1,
    ACTIONS(192), 1,
      aux_sym_conditional_construct_token3,
    STATE(14), 1,
      aux_sym_source_repeat1,
    STATE(41), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2131] = 20,
    ACTIONS(7), 1,
      aux_sym__statement_token2,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(194), 1,
      aux_sym__statement_token1,
    ACTIONS(196), 1,
      aux_sym_conditional_construct_token3,
    STATE(20), 1,
      aux_sym_source_repeat1,
    STATE(36), 1,
      aux_sym__statement_repeat1,
    STATE(60), 1,
      sym__statement,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(210), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(260), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2206] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(202), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(204), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2278] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(94), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(96), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2350] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(206), 1,
      aux_sym_conditional_construct_token2,
    ACTIONS(208), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2422] = 19,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(160), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(210), 1,
      aux_sym_conditional_construct_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2494] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(212), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2563] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(214), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2632] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(216), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2701] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(188), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2770] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(148), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2839] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(218), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2908] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(164), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [2977] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(220), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3046] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(222), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3115] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(224), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3184] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(226), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3253] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(228), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3322] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(172), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3391] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(230), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3460] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(184), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3529] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(232), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3598] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(234), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3667] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(196), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3736] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(136), 1,
      aux_sym_conditional_construct_token3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3805] = 18,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(236), 1,
      aux_sym_conditional_construct_token3,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3874] = 17,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      aux_sym_conditional_construct_token1,
    ACTIONS(13), 1,
      aux_sym_include_directive_token1,
    ACTIONS(15), 1,
      aux_sym_variable_setting_token1,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_key_literal,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    STATE(61), 1,
      aux_sym_keyname_repeat1,
    STATE(239), 1,
      sym_symbolic_character_name,
    STATE(258), 1,
      sym__double_quoted_string,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    STATE(198), 2,
      sym_variable_setting,
      sym_key_binding,
    STATE(259), 2,
      sym_keyseq,
      sym_keyname,
    STATE(255), 3,
      sym_comment,
      sym_conditional_construct,
      sym_include_directive,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3940] = 2,
    ACTIONS(240), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(238), 20,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
      aux_sym_include_directive_token1,
      aux_sym_variable_setting_token1,
      anon_sym_DQUOTE,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3968] = 2,
    ACTIONS(244), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(242), 20,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
      aux_sym_include_directive_token1,
      aux_sym_variable_setting_token1,
      anon_sym_DQUOTE,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [3996] = 2,
    ACTIONS(248), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(246), 20,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
      aux_sym_include_directive_token1,
      aux_sym_variable_setting_token1,
      anon_sym_DQUOTE,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [4024] = 4,
    ACTIONS(250), 1,
      aux_sym__statement_token1,
    STATE(59), 1,
      aux_sym__statement_repeat1,
    ACTIONS(58), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(56), 18,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
      aux_sym_include_directive_token1,
      aux_sym_variable_setting_token1,
      anon_sym_DQUOTE,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [4056] = 2,
    ACTIONS(255), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(253), 20,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
      aux_sym_comment_token1,
      aux_sym_conditional_construct_token1,
      aux_sym_conditional_construct_token2,
      aux_sym_conditional_construct_token3,
      aux_sym_include_directive_token1,
      aux_sym_variable_setting_token1,
      anon_sym_DQUOTE,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [4084] = 5,
    ACTIONS(257), 1,
      sym_key_literal,
    STATE(62), 1,
      aux_sym_keyname_repeat1,
    STATE(251), 1,
      sym_symbolic_character_name,
    ACTIONS(21), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(19), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [4110] = 5,
    ACTIONS(265), 1,
      sym_key_literal,
    STATE(62), 1,
      aux_sym_keyname_repeat1,
    STATE(264), 1,
      sym_symbolic_character_name,
    ACTIONS(262), 2,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
    ACTIONS(259), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [4136] = 2,
    ACTIONS(265), 3,
      aux_sym_symbolic_character_name_token4,
      aux_sym_symbolic_character_name_token8,
      sym_key_literal,
    ACTIONS(267), 10,
      aux_sym_symbolic_character_name_token1,
      aux_sym_symbolic_character_name_token2,
      aux_sym_symbolic_character_name_token3,
      aux_sym_symbolic_character_name_token5,
      aux_sym_symbolic_character_name_token6,
      aux_sym_symbolic_character_name_token7,
      aux_sym_symbolic_character_name_token9,
      aux_sym_symbolic_character_name_token10,
      aux_sym_symbolic_character_name_token11,
      aux_sym_symbolic_character_name_token12,
  [4154] = 4,
    ACTIONS(269), 1,
      aux_sym__statement_token1,
    STATE(64), 1,
      aux_sym__statement_repeat1,
    ACTIONS(58), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(56), 7,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      aux_sym__version_test_token2,
      sym_function_name,
      aux_sym__quoted_string_token1,
  [4175] = 4,
    ACTIONS(272), 1,
      aux_sym__statement_token1,
    STATE(64), 1,
      aux_sym__statement_repeat1,
    ACTIONS(274), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(276), 4,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
  [4193] = 6,
    ACTIONS(278), 1,
      aux_sym__statement_token1,
    ACTIONS(280), 1,
      aux_sym__statement_token2,
    ACTIONS(282), 1,
      aux_sym_bool_value_token3,
    STATE(72), 1,
      aux_sym__statement_repeat1,
    STATE(226), 1,
      sym_bell_value,
    ACTIONS(284), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [4214] = 6,
    ACTIONS(286), 1,
      aux_sym__statement_token1,
    ACTIONS(288), 1,
      aux_sym__statement_token2,
    ACTIONS(292), 1,
      aux_sym_bool_value_token3,
    STATE(69), 1,
      aux_sym__statement_repeat1,
    STATE(221), 1,
      sym_bool_value,
    ACTIONS(290), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [4235] = 5,
    ACTIONS(286), 1,
      aux_sym__statement_token1,
    ACTIONS(292), 1,
      aux_sym_bool_value_token3,
    STATE(69), 1,
      aux_sym__statement_repeat1,
    STATE(240), 1,
      sym_bool_value,
    ACTIONS(290), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [4253] = 4,
    ACTIONS(58), 1,
      aux_sym_bool_value_token3,
    ACTIONS(294), 1,
      aux_sym__statement_token1,
    STATE(69), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 4,
      aux_sym__statement_token2,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [4269] = 5,
    ACTIONS(278), 1,
      aux_sym__statement_token1,
    ACTIONS(282), 1,
      aux_sym_bool_value_token3,
    STATE(72), 1,
      aux_sym__statement_repeat1,
    STATE(240), 1,
      sym_bell_value,
    ACTIONS(284), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [4287] = 5,
    ACTIONS(292), 1,
      aux_sym_bool_value_token3,
    ACTIONS(297), 1,
      aux_sym__statement_token1,
    STATE(68), 1,
      aux_sym__statement_repeat1,
    STATE(215), 1,
      sym_bool_value,
    ACTIONS(290), 3,
      anon_sym_1,
      aux_sym_bool_value_token1,
      aux_sym_bool_value_token2,
  [4305] = 4,
    ACTIONS(58), 1,
      aux_sym_bool_value_token3,
    ACTIONS(299), 1,
      aux_sym__statement_token1,
    STATE(72), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 4,
      aux_sym__statement_token2,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [4321] = 5,
    ACTIONS(282), 1,
      aux_sym_bool_value_token3,
    ACTIONS(302), 1,
      aux_sym__statement_token1,
    STATE(70), 1,
      aux_sym__statement_repeat1,
    STATE(215), 1,
      sym_bell_value,
    ACTIONS(284), 3,
      aux_sym_bell_value_token1,
      aux_sym_bell_value_token2,
      aux_sym_bell_value_token3,
  [4339] = 6,
    ACTIONS(304), 1,
      aux_sym__statement_token1,
    ACTIONS(306), 1,
      aux_sym__statement_token2,
    ACTIONS(308), 1,
      aux_sym_bool_value_token3,
    STATE(76), 1,
      aux_sym__statement_repeat1,
    STATE(225), 1,
      sym_edit_mode_value,
    ACTIONS(310), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [4359] = 6,
    ACTIONS(312), 1,
      aux_sym__statement_token1,
    ACTIONS(314), 1,
      aux_sym__statement_token2,
    ACTIONS(316), 1,
      aux_sym_bool_value_token3,
    ACTIONS(318), 1,
      aux_sym_number_value_token1,
    STATE(84), 1,
      aux_sym__statement_repeat1,
    STATE(217), 1,
      sym_number_value,
  [4378] = 4,
    ACTIONS(58), 1,
      aux_sym_bool_value_token3,
    ACTIONS(320), 1,
      aux_sym__statement_token1,
    STATE(76), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 3,
      aux_sym__statement_token2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [4393] = 5,
    ACTIONS(304), 1,
      aux_sym__statement_token1,
    ACTIONS(308), 1,
      aux_sym_bool_value_token3,
    STATE(76), 1,
      aux_sym__statement_repeat1,
    STATE(240), 1,
      sym_edit_mode_value,
    ACTIONS(310), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [4410] = 6,
    ACTIONS(272), 1,
      aux_sym__statement_token1,
    ACTIONS(323), 1,
      sym_function_name,
    ACTIONS(325), 1,
      aux_sym__quoted_string_token1,
    STATE(64), 1,
      aux_sym__statement_repeat1,
    STATE(232), 1,
      sym_macro,
    STATE(235), 1,
      sym__quoted_string,
  [4429] = 5,
    ACTIONS(308), 1,
      aux_sym_bool_value_token3,
    ACTIONS(327), 1,
      aux_sym__statement_token1,
    STATE(77), 1,
      aux_sym__statement_repeat1,
    STATE(215), 1,
      sym_edit_mode_value,
    ACTIONS(310), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [4446] = 6,
    ACTIONS(329), 1,
      aux_sym__statement_token1,
    ACTIONS(331), 1,
      aux_sym__statement_token2,
    ACTIONS(333), 1,
      aux_sym_bool_value_token3,
    ACTIONS(335), 1,
      aux_sym_keymap_value_token1,
    STATE(88), 1,
      aux_sym__statement_repeat1,
    STATE(223), 1,
      sym_keymap_value,
  [4465] = 6,
    ACTIONS(325), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(337), 1,
      aux_sym__statement_token1,
    ACTIONS(339), 1,
      sym_function_name,
    STATE(78), 1,
      aux_sym__statement_repeat1,
    STATE(235), 1,
      sym__quoted_string,
    STATE(236), 1,
      sym_macro,
  [4484] = 4,
    ACTIONS(272), 1,
      aux_sym__statement_token1,
    ACTIONS(341), 1,
      anon_sym_EQ,
    STATE(64), 1,
      aux_sym__statement_repeat1,
    ACTIONS(343), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4498] = 4,
    ACTIONS(272), 1,
      aux_sym__statement_token1,
    ACTIONS(345), 1,
      anon_sym_EQ,
    STATE(64), 1,
      aux_sym__statement_repeat1,
    ACTIONS(347), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4512] = 4,
    ACTIONS(58), 1,
      aux_sym_bool_value_token3,
    ACTIONS(349), 1,
      aux_sym__statement_token1,
    STATE(84), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 2,
      aux_sym__statement_token2,
      aux_sym_number_value_token1,
  [4526] = 5,
    ACTIONS(312), 1,
      aux_sym__statement_token1,
    ACTIONS(316), 1,
      aux_sym_bool_value_token3,
    ACTIONS(318), 1,
      aux_sym_number_value_token1,
    STATE(84), 1,
      aux_sym__statement_repeat1,
    STATE(240), 1,
      sym_number_value,
  [4542] = 4,
    ACTIONS(272), 1,
      aux_sym__statement_token1,
    ACTIONS(352), 1,
      anon_sym_EQ,
    STATE(64), 1,
      aux_sym__statement_repeat1,
    ACTIONS(354), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4556] = 5,
    ACTIONS(316), 1,
      aux_sym_bool_value_token3,
    ACTIONS(318), 1,
      aux_sym_number_value_token1,
    ACTIONS(356), 1,
      aux_sym__statement_token1,
    STATE(85), 1,
      aux_sym__statement_repeat1,
    STATE(215), 1,
      sym_number_value,
  [4572] = 4,
    ACTIONS(58), 1,
      aux_sym_bool_value_token3,
    ACTIONS(358), 1,
      aux_sym__statement_token1,
    STATE(88), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 2,
      aux_sym__statement_token2,
      aux_sym_keymap_value_token1,
  [4586] = 5,
    ACTIONS(361), 1,
      aux_sym__statement_token1,
    ACTIONS(363), 1,
      aux_sym__statement_token2,
    ACTIONS(365), 1,
      aux_sym_include_directive_token2,
    STATE(97), 1,
      aux_sym__statement_repeat1,
    STATE(219), 1,
      sym_string_value,
  [4602] = 4,
    ACTIONS(272), 1,
      aux_sym__statement_token1,
    ACTIONS(367), 1,
      anon_sym_EQ,
    STATE(64), 1,
      aux_sym__statement_repeat1,
    ACTIONS(369), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4616] = 4,
    ACTIONS(272), 1,
      aux_sym__statement_token1,
    ACTIONS(371), 1,
      anon_sym_EQ,
    STATE(64), 1,
      aux_sym__statement_repeat1,
    ACTIONS(373), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4630] = 5,
    ACTIONS(333), 1,
      aux_sym_bool_value_token3,
    ACTIONS(335), 1,
      aux_sym_keymap_value_token1,
    ACTIONS(375), 1,
      aux_sym__statement_token1,
    STATE(93), 1,
      aux_sym__statement_repeat1,
    STATE(215), 1,
      sym_keymap_value,
  [4646] = 5,
    ACTIONS(329), 1,
      aux_sym__statement_token1,
    ACTIONS(333), 1,
      aux_sym_bool_value_token3,
    ACTIONS(335), 1,
      aux_sym_keymap_value_token1,
    STATE(88), 1,
      aux_sym__statement_repeat1,
    STATE(240), 1,
      sym_keymap_value,
  [4662] = 4,
    ACTIONS(272), 1,
      aux_sym__statement_token1,
    ACTIONS(377), 1,
      anon_sym_EQ,
    STATE(64), 1,
      aux_sym__statement_repeat1,
    ACTIONS(379), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4676] = 3,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(383), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [4687] = 4,
    ACTIONS(361), 1,
      aux_sym__statement_token1,
    ACTIONS(365), 1,
      aux_sym_include_directive_token2,
    STATE(97), 1,
      aux_sym__statement_repeat1,
    STATE(240), 1,
      sym_string_value,
  [4700] = 3,
    ACTIONS(386), 1,
      aux_sym__statement_token1,
    STATE(97), 1,
      aux_sym__statement_repeat1,
    ACTIONS(56), 2,
      aux_sym__statement_token2,
      aux_sym_include_directive_token2,
  [4711] = 3,
    ACTIONS(389), 1,
      aux_sym__quoted_string_token1,
    STATE(102), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(391), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [4722] = 4,
    ACTIONS(365), 1,
      aux_sym_include_directive_token2,
    ACTIONS(393), 1,
      aux_sym__statement_token1,
    STATE(96), 1,
      aux_sym__statement_repeat1,
    STATE(215), 1,
      sym_string_value,
  [4735] = 4,
    ACTIONS(361), 1,
      aux_sym__statement_token1,
    ACTIONS(395), 1,
      aux_sym__statement_token2,
    ACTIONS(397), 1,
      aux_sym_include_directive_token2,
    STATE(97), 1,
      aux_sym__statement_repeat1,
  [4748] = 3,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(401), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [4759] = 3,
    ACTIONS(403), 1,
      aux_sym__quoted_string_token1,
    STATE(102), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(405), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [4770] = 3,
    ACTIONS(308), 1,
      aux_sym_bool_value_token3,
    STATE(230), 1,
      sym_edit_mode_value,
    ACTIONS(310), 2,
      aux_sym_edit_mode_value_token1,
      aux_sym_edit_mode_value_token2,
  [4781] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(408), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [4791] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(410), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [4801] = 3,
    ACTIONS(408), 1,
      aux_sym__statement_token2,
    ACTIONS(412), 1,
      aux_sym__statement_token1,
    STATE(158), 1,
      aux_sym__statement_repeat1,
  [4811] = 3,
    ACTIONS(414), 1,
      aux_sym__statement_token1,
    ACTIONS(416), 1,
      aux_sym__statement_token2,
    STATE(105), 1,
      aux_sym__statement_repeat1,
  [4821] = 3,
    ACTIONS(418), 1,
      aux_sym__statement_token1,
    ACTIONS(420), 1,
      aux_sym__statement_token2,
    STATE(147), 1,
      aux_sym__statement_repeat1,
  [4831] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(416), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [4841] = 3,
    ACTIONS(422), 1,
      aux_sym__statement_token1,
    ACTIONS(424), 1,
      aux_sym__statement_token2,
    STATE(135), 1,
      aux_sym__statement_repeat1,
  [4851] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(424), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [4861] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(426), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [4871] = 3,
    ACTIONS(428), 1,
      aux_sym__statement_token1,
    ACTIONS(430), 1,
      aux_sym__statement_token2,
    STATE(100), 1,
      aux_sym__statement_repeat1,
  [4881] = 3,
    ACTIONS(272), 1,
      aux_sym__statement_token1,
    ACTIONS(432), 1,
      aux_sym__version_test_token2,
    STATE(64), 1,
      aux_sym__statement_repeat1,
  [4891] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(434), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [4901] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(436), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [4911] = 3,
    ACTIONS(436), 1,
      aux_sym__statement_token2,
    ACTIONS(438), 1,
      aux_sym__statement_token1,
    STATE(161), 1,
      aux_sym__statement_repeat1,
  [4921] = 3,
    ACTIONS(440), 1,
      aux_sym__statement_token1,
    ACTIONS(442), 1,
      aux_sym__statement_token2,
    STATE(121), 1,
      aux_sym__statement_repeat1,
  [4931] = 3,
    ACTIONS(444), 1,
      aux_sym__statement_token1,
    ACTIONS(446), 1,
      aux_sym__statement_token2,
    STATE(120), 1,
      aux_sym__statement_repeat1,
  [4941] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(448), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [4951] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(450), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [4961] = 3,
    ACTIONS(452), 1,
      aux_sym__statement_token1,
    ACTIONS(454), 1,
      aux_sym__statement_token2,
    STATE(139), 1,
      aux_sym__statement_repeat1,
  [4971] = 3,
    ACTIONS(456), 1,
      aux_sym__statement_token1,
    ACTIONS(458), 1,
      aux_sym__statement_token2,
    STATE(140), 1,
      aux_sym__statement_repeat1,
  [4981] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(460), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [4991] = 3,
    ACTIONS(448), 1,
      aux_sym__statement_token2,
    ACTIONS(462), 1,
      aux_sym__statement_token1,
    STATE(143), 1,
      aux_sym__statement_repeat1,
  [5001] = 3,
    ACTIONS(450), 1,
      aux_sym__statement_token2,
    ACTIONS(464), 1,
      aux_sym__statement_token1,
    STATE(144), 1,
      aux_sym__statement_repeat1,
  [5011] = 3,
    ACTIONS(466), 1,
      aux_sym__statement_token1,
    ACTIONS(468), 1,
      aux_sym__statement_token2,
    STATE(162), 1,
      aux_sym__statement_repeat1,
  [5021] = 3,
    ACTIONS(460), 1,
      aux_sym__statement_token2,
    ACTIONS(470), 1,
      aux_sym__statement_token1,
    STATE(178), 1,
      aux_sym__statement_repeat1,
  [5031] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(472), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5041] = 3,
    ACTIONS(474), 1,
      aux_sym__statement_token1,
    ACTIONS(476), 1,
      aux_sym__statement_token2,
    STATE(181), 1,
      aux_sym__statement_repeat1,
  [5051] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(478), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5061] = 2,
    STATE(98), 1,
      aux_sym__quoted_string_repeat1,
    ACTIONS(480), 2,
      aux_sym__quoted_string_token2,
      sym_escape_sequence,
  [5069] = 3,
    ACTIONS(482), 1,
      aux_sym__statement_token1,
    ACTIONS(484), 1,
      aux_sym__statement_token2,
    STATE(184), 1,
      aux_sym__statement_repeat1,
  [5079] = 3,
    ACTIONS(486), 1,
      aux_sym__statement_token1,
    ACTIONS(488), 1,
      aux_sym__statement_token2,
    STATE(149), 1,
      aux_sym__statement_repeat1,
  [5089] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(490), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5099] = 3,
    ACTIONS(492), 1,
      aux_sym__statement_token1,
    ACTIONS(494), 1,
      aux_sym__statement_token2,
    STATE(75), 1,
      aux_sym__statement_repeat1,
  [5109] = 3,
    ACTIONS(496), 1,
      aux_sym__statement_token1,
    ACTIONS(498), 1,
      aux_sym__statement_token2,
    STATE(89), 1,
      aux_sym__statement_repeat1,
  [5119] = 3,
    ACTIONS(500), 1,
      aux_sym__statement_token1,
    ACTIONS(502), 1,
      aux_sym__statement_token2,
    STATE(67), 1,
      aux_sym__statement_repeat1,
  [5129] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(504), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5139] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(506), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5149] = 3,
    ACTIONS(504), 1,
      aux_sym__statement_token2,
    ACTIONS(508), 1,
      aux_sym__statement_token1,
    STATE(159), 1,
      aux_sym__statement_repeat1,
  [5159] = 3,
    ACTIONS(506), 1,
      aux_sym__statement_token2,
    ACTIONS(510), 1,
      aux_sym__statement_token1,
    STATE(160), 1,
      aux_sym__statement_repeat1,
  [5169] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(512), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5179] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(488), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5189] = 3,
    ACTIONS(514), 1,
      aux_sym__statement_token1,
    ACTIONS(516), 1,
      aux_sym__statement_token2,
    STATE(163), 1,
      aux_sym__statement_repeat1,
  [5199] = 3,
    ACTIONS(518), 1,
      aux_sym__statement_token1,
    ACTIONS(520), 1,
      aux_sym__statement_token2,
    STATE(164), 1,
      aux_sym__statement_repeat1,
  [5209] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(522), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5219] = 3,
    ACTIONS(512), 1,
      aux_sym__statement_token2,
    ACTIONS(524), 1,
      aux_sym__statement_token1,
    STATE(167), 1,
      aux_sym__statement_repeat1,
  [5229] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(526), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5239] = 3,
    ACTIONS(528), 1,
      aux_sym__statement_token1,
    ACTIONS(530), 1,
      aux_sym__statement_token2,
    STATE(168), 1,
      aux_sym__statement_repeat1,
  [5249] = 3,
    ACTIONS(532), 1,
      aux_sym__statement_token1,
    ACTIONS(534), 1,
      aux_sym__statement_token2,
    STATE(80), 1,
      aux_sym__statement_repeat1,
  [5259] = 3,
    ACTIONS(526), 1,
      aux_sym__statement_token2,
    ACTIONS(536), 1,
      aux_sym__statement_token1,
    STATE(170), 1,
      aux_sym__statement_repeat1,
  [5269] = 3,
    ACTIONS(538), 1,
      aux_sym__statement_token1,
    ACTIONS(540), 1,
      aux_sym__statement_token2,
    STATE(74), 1,
      aux_sym__statement_repeat1,
  [5279] = 3,
    ACTIONS(542), 1,
      aux_sym__statement_token1,
    ACTIONS(544), 1,
      aux_sym__statement_token2,
    STATE(66), 1,
      aux_sym__statement_repeat1,
  [5289] = 3,
    ACTIONS(546), 1,
      aux_sym__statement_token1,
    ACTIONS(548), 1,
      aux_sym__statement_token2,
    STATE(174), 1,
      aux_sym__statement_repeat1,
  [5299] = 3,
    ACTIONS(522), 1,
      aux_sym__statement_token2,
    ACTIONS(550), 1,
      aux_sym__statement_token1,
    STATE(185), 1,
      aux_sym__statement_repeat1,
  [5309] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(484), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5319] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(552), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5329] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(554), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5339] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(548), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5349] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(556), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5359] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(558), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5369] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(560), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5379] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(562), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5389] = 3,
    ACTIONS(560), 1,
      aux_sym__statement_token2,
    ACTIONS(564), 1,
      aux_sym__statement_token1,
    STATE(187), 1,
      aux_sym__statement_repeat1,
  [5399] = 3,
    ACTIONS(562), 1,
      aux_sym__statement_token2,
    ACTIONS(566), 1,
      aux_sym__statement_token1,
    STATE(188), 1,
      aux_sym__statement_repeat1,
  [5409] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(568), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5419] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(570), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5429] = 3,
    ACTIONS(570), 1,
      aux_sym__statement_token2,
    ACTIONS(572), 1,
      aux_sym__statement_token1,
    STATE(190), 1,
      aux_sym__statement_repeat1,
  [5439] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(574), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5449] = 3,
    ACTIONS(576), 1,
      aux_sym__statement_token1,
    ACTIONS(578), 1,
      aux_sym__statement_token2,
    STATE(191), 1,
      aux_sym__statement_repeat1,
  [5459] = 3,
    ACTIONS(580), 1,
      aux_sym__statement_token1,
    ACTIONS(582), 1,
      aux_sym__statement_token2,
    STATE(129), 1,
      aux_sym__statement_repeat1,
  [5469] = 3,
    ACTIONS(574), 1,
      aux_sym__statement_token2,
    ACTIONS(584), 1,
      aux_sym__statement_token1,
    STATE(193), 1,
      aux_sym__statement_repeat1,
  [5479] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(586), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5489] = 3,
    ACTIONS(588), 1,
      aux_sym__statement_token1,
    ACTIONS(590), 1,
      aux_sym__statement_token2,
    STATE(194), 1,
      aux_sym__statement_repeat1,
  [5499] = 3,
    ACTIONS(558), 1,
      aux_sym__statement_token2,
    ACTIONS(592), 1,
      aux_sym__statement_token1,
    STATE(186), 1,
      aux_sym__statement_repeat1,
  [5509] = 3,
    ACTIONS(586), 1,
      aux_sym__statement_token2,
    ACTIONS(594), 1,
      aux_sym__statement_token1,
    STATE(196), 1,
      aux_sym__statement_repeat1,
  [5519] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(596), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5529] = 3,
    ACTIONS(598), 1,
      aux_sym__statement_token1,
    ACTIONS(600), 1,
      aux_sym__statement_token2,
    STATE(189), 1,
      aux_sym__statement_repeat1,
  [5539] = 3,
    ACTIONS(596), 1,
      aux_sym__statement_token2,
    ACTIONS(602), 1,
      aux_sym__statement_token1,
    STATE(203), 1,
      aux_sym__statement_repeat1,
  [5549] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(604), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5559] = 3,
    ACTIONS(604), 1,
      aux_sym__statement_token2,
    ACTIONS(606), 1,
      aux_sym__statement_token1,
    STATE(207), 1,
      aux_sym__statement_repeat1,
  [5569] = 3,
    ACTIONS(608), 1,
      aux_sym__statement_token1,
    ACTIONS(610), 1,
      aux_sym__statement_token2,
    STATE(205), 1,
      aux_sym__statement_repeat1,
  [5579] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(612), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5589] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(614), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5599] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(616), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5609] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(618), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5619] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(610), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5629] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(620), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5639] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(622), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5649] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(624), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5659] = 3,
    ACTIONS(624), 1,
      aux_sym__statement_token2,
    ACTIONS(626), 1,
      aux_sym__statement_token1,
    STATE(115), 1,
      aux_sym__statement_repeat1,
  [5669] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(628), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5679] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(630), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5689] = 3,
    ACTIONS(630), 1,
      aux_sym__statement_token2,
    ACTIONS(632), 1,
      aux_sym__statement_token1,
    STATE(112), 1,
      aux_sym__statement_repeat1,
  [5699] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(634), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5709] = 3,
    ACTIONS(636), 1,
      aux_sym__statement_token1,
    ACTIONS(638), 1,
      aux_sym__statement_token2,
    STATE(111), 1,
      aux_sym__statement_repeat1,
  [5719] = 3,
    ACTIONS(640), 1,
      aux_sym__statement_token1,
    ACTIONS(642), 1,
      aux_sym__statement_token2,
    STATE(131), 1,
      aux_sym__statement_repeat1,
  [5729] = 3,
    ACTIONS(634), 1,
      aux_sym__statement_token2,
    ACTIONS(644), 1,
      aux_sym__statement_token1,
    STATE(109), 1,
      aux_sym__statement_repeat1,
  [5739] = 3,
    ACTIONS(620), 1,
      aux_sym__statement_token2,
    ACTIONS(646), 1,
      aux_sym__statement_token1,
    STATE(209), 1,
      aux_sym__statement_repeat1,
  [5749] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(642), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5759] = 3,
    ACTIONS(648), 1,
      aux_sym__statement_token1,
    ACTIONS(650), 1,
      aux_sym__statement_token2,
    STATE(104), 1,
      aux_sym__statement_repeat1,
  [5769] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(652), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5779] = 3,
    ACTIONS(628), 1,
      aux_sym__statement_token2,
    ACTIONS(654), 1,
      aux_sym__statement_token1,
    STATE(157), 1,
      aux_sym__statement_repeat1,
  [5789] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(656), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5799] = 3,
    ACTIONS(658), 1,
      aux_sym__statement_token1,
    ACTIONS(660), 1,
      aux_sym__statement_token2,
    STATE(116), 1,
      aux_sym__statement_repeat1,
  [5809] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(662), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5819] = 3,
    ACTIONS(656), 1,
      aux_sym__statement_token2,
    ACTIONS(664), 1,
      aux_sym__statement_token1,
    STATE(124), 1,
      aux_sym__statement_repeat1,
  [5829] = 3,
    ACTIONS(198), 1,
      aux_sym__statement_token1,
    ACTIONS(666), 1,
      aux_sym__statement_token2,
    STATE(59), 1,
      aux_sym__statement_repeat1,
  [5839] = 3,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
    ACTIONS(668), 1,
      aux_sym__statement_token1,
    STATE(201), 1,
      aux_sym__statement_repeat1,
  [5849] = 2,
    STATE(101), 1,
      aux_sym__double_quoted_string_repeat1,
    ACTIONS(670), 2,
      aux_sym__double_quoted_string_token1,
      sym_escape_sequence,
  [5857] = 1,
    ACTIONS(672), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5862] = 2,
    ACTIONS(674), 1,
      aux_sym__statement_token1,
    STATE(90), 1,
      aux_sym__statement_repeat1,
  [5869] = 2,
    ACTIONS(676), 1,
      aux_sym__statement_token2,
    ACTIONS(678), 1,
      aux_sym_comment_token2,
  [5876] = 1,
    ACTIONS(680), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5881] = 1,
    ACTIONS(682), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5886] = 1,
    ACTIONS(684), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5891] = 1,
    ACTIONS(686), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5896] = 1,
    ACTIONS(688), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5901] = 1,
    ACTIONS(690), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5906] = 1,
    ACTIONS(692), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5911] = 1,
    ACTIONS(694), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5916] = 1,
    ACTIONS(696), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5921] = 1,
    ACTIONS(698), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5926] = 1,
    ACTIONS(700), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5931] = 1,
    ACTIONS(702), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5936] = 1,
    ACTIONS(704), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5941] = 2,
    ACTIONS(706), 1,
      aux_sym__statement_token1,
    STATE(114), 1,
      aux_sym__statement_repeat1,
  [5948] = 1,
    ACTIONS(708), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5953] = 1,
    ACTIONS(710), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5958] = 1,
    ACTIONS(712), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5963] = 1,
    ACTIONS(714), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5968] = 2,
    ACTIONS(716), 1,
      aux_sym__statement_token1,
    STATE(2), 1,
      aux_sym__statement_repeat1,
  [5975] = 2,
    ACTIONS(718), 1,
      aux_sym__statement_token1,
    STATE(3), 1,
      aux_sym__statement_repeat1,
  [5982] = 1,
    ACTIONS(720), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5987] = 1,
    ACTIONS(722), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [5992] = 1,
    ACTIONS(724), 2,
      anon_sym_COLON,
      anon_sym_DASH,
  [5997] = 1,
    ACTIONS(726), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6002] = 2,
    ACTIONS(728), 1,
      anon_sym_COLON,
    ACTIONS(730), 1,
      anon_sym_DASH,
  [6009] = 1,
    ACTIONS(732), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6014] = 2,
    ACTIONS(734), 1,
      aux_sym__statement_token1,
    STATE(91), 1,
      aux_sym__statement_repeat1,
  [6021] = 2,
    ACTIONS(736), 1,
      aux_sym__statement_token1,
    STATE(82), 1,
      aux_sym__statement_repeat1,
  [6028] = 1,
    ACTIONS(738), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6033] = 2,
    ACTIONS(740), 1,
      aux_sym__statement_token1,
    STATE(94), 1,
      aux_sym__statement_repeat1,
  [6040] = 2,
    ACTIONS(742), 1,
      aux_sym__statement_token1,
    STATE(83), 1,
      aux_sym__statement_repeat1,
  [6047] = 1,
    ACTIONS(744), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6052] = 1,
    ACTIONS(746), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6057] = 2,
    ACTIONS(748), 1,
      aux_sym__statement_token1,
    STATE(86), 1,
      aux_sym__statement_repeat1,
  [6064] = 1,
    ACTIONS(750), 2,
      aux_sym__statement_token1,
      aux_sym__statement_token2,
  [6069] = 2,
    ACTIONS(752), 1,
      aux_sym__statement_token1,
    STATE(65), 1,
      aux_sym__statement_repeat1,
  [6076] = 2,
    ACTIONS(730), 1,
      anon_sym_DASH,
    ACTIONS(754), 1,
      anon_sym_COLON,
  [6083] = 1,
    ACTIONS(756), 1,
      anon_sym_EQ,
  [6087] = 1,
    ACTIONS(758), 1,
      anon_sym_EQ,
  [6091] = 1,
    ACTIONS(754), 1,
      anon_sym_COLON,
  [6095] = 1,
    ACTIONS(642), 1,
      aux_sym__statement_token2,
  [6099] = 1,
    ACTIONS(760), 1,
      aux_sym__statement_token2,
  [6103] = 1,
    ACTIONS(762), 1,
      aux_sym__statement_token2,
  [6107] = 1,
    ACTIONS(764), 1,
      anon_sym_COLON,
  [6111] = 1,
    ACTIONS(766), 1,
      anon_sym_COLON,
  [6115] = 1,
    ACTIONS(200), 1,
      aux_sym__statement_token2,
  [6119] = 1,
    ACTIONS(768), 1,
      ts_builtin_sym_end,
  [6123] = 1,
    ACTIONS(728), 1,
      anon_sym_COLON,
  [6127] = 1,
    ACTIONS(770), 1,
      anon_sym_COLON,
  [6131] = 1,
    ACTIONS(730), 1,
      anon_sym_DASH,
  [6135] = 1,
    ACTIONS(772), 1,
      aux_sym__term_test_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 242,
  [SMALL_STATE(6)] = 319,
  [SMALL_STATE(7)] = 397,
  [SMALL_STATE(8)] = 475,
  [SMALL_STATE(9)] = 553,
  [SMALL_STATE(10)] = 631,
  [SMALL_STATE(11)] = 706,
  [SMALL_STATE(12)] = 781,
  [SMALL_STATE(13)] = 856,
  [SMALL_STATE(14)] = 931,
  [SMALL_STATE(15)] = 1006,
  [SMALL_STATE(16)] = 1081,
  [SMALL_STATE(17)] = 1156,
  [SMALL_STATE(18)] = 1231,
  [SMALL_STATE(19)] = 1306,
  [SMALL_STATE(20)] = 1381,
  [SMALL_STATE(21)] = 1456,
  [SMALL_STATE(22)] = 1531,
  [SMALL_STATE(23)] = 1606,
  [SMALL_STATE(24)] = 1681,
  [SMALL_STATE(25)] = 1756,
  [SMALL_STATE(26)] = 1831,
  [SMALL_STATE(27)] = 1906,
  [SMALL_STATE(28)] = 1981,
  [SMALL_STATE(29)] = 2056,
  [SMALL_STATE(30)] = 2131,
  [SMALL_STATE(31)] = 2206,
  [SMALL_STATE(32)] = 2278,
  [SMALL_STATE(33)] = 2350,
  [SMALL_STATE(34)] = 2422,
  [SMALL_STATE(35)] = 2494,
  [SMALL_STATE(36)] = 2563,
  [SMALL_STATE(37)] = 2632,
  [SMALL_STATE(38)] = 2701,
  [SMALL_STATE(39)] = 2770,
  [SMALL_STATE(40)] = 2839,
  [SMALL_STATE(41)] = 2908,
  [SMALL_STATE(42)] = 2977,
  [SMALL_STATE(43)] = 3046,
  [SMALL_STATE(44)] = 3115,
  [SMALL_STATE(45)] = 3184,
  [SMALL_STATE(46)] = 3253,
  [SMALL_STATE(47)] = 3322,
  [SMALL_STATE(48)] = 3391,
  [SMALL_STATE(49)] = 3460,
  [SMALL_STATE(50)] = 3529,
  [SMALL_STATE(51)] = 3598,
  [SMALL_STATE(52)] = 3667,
  [SMALL_STATE(53)] = 3736,
  [SMALL_STATE(54)] = 3805,
  [SMALL_STATE(55)] = 3874,
  [SMALL_STATE(56)] = 3940,
  [SMALL_STATE(57)] = 3968,
  [SMALL_STATE(58)] = 3996,
  [SMALL_STATE(59)] = 4024,
  [SMALL_STATE(60)] = 4056,
  [SMALL_STATE(61)] = 4084,
  [SMALL_STATE(62)] = 4110,
  [SMALL_STATE(63)] = 4136,
  [SMALL_STATE(64)] = 4154,
  [SMALL_STATE(65)] = 4175,
  [SMALL_STATE(66)] = 4193,
  [SMALL_STATE(67)] = 4214,
  [SMALL_STATE(68)] = 4235,
  [SMALL_STATE(69)] = 4253,
  [SMALL_STATE(70)] = 4269,
  [SMALL_STATE(71)] = 4287,
  [SMALL_STATE(72)] = 4305,
  [SMALL_STATE(73)] = 4321,
  [SMALL_STATE(74)] = 4339,
  [SMALL_STATE(75)] = 4359,
  [SMALL_STATE(76)] = 4378,
  [SMALL_STATE(77)] = 4393,
  [SMALL_STATE(78)] = 4410,
  [SMALL_STATE(79)] = 4429,
  [SMALL_STATE(80)] = 4446,
  [SMALL_STATE(81)] = 4465,
  [SMALL_STATE(82)] = 4484,
  [SMALL_STATE(83)] = 4498,
  [SMALL_STATE(84)] = 4512,
  [SMALL_STATE(85)] = 4526,
  [SMALL_STATE(86)] = 4542,
  [SMALL_STATE(87)] = 4556,
  [SMALL_STATE(88)] = 4572,
  [SMALL_STATE(89)] = 4586,
  [SMALL_STATE(90)] = 4602,
  [SMALL_STATE(91)] = 4616,
  [SMALL_STATE(92)] = 4630,
  [SMALL_STATE(93)] = 4646,
  [SMALL_STATE(94)] = 4662,
  [SMALL_STATE(95)] = 4676,
  [SMALL_STATE(96)] = 4687,
  [SMALL_STATE(97)] = 4700,
  [SMALL_STATE(98)] = 4711,
  [SMALL_STATE(99)] = 4722,
  [SMALL_STATE(100)] = 4735,
  [SMALL_STATE(101)] = 4748,
  [SMALL_STATE(102)] = 4759,
  [SMALL_STATE(103)] = 4770,
  [SMALL_STATE(104)] = 4781,
  [SMALL_STATE(105)] = 4791,
  [SMALL_STATE(106)] = 4801,
  [SMALL_STATE(107)] = 4811,
  [SMALL_STATE(108)] = 4821,
  [SMALL_STATE(109)] = 4831,
  [SMALL_STATE(110)] = 4841,
  [SMALL_STATE(111)] = 4851,
  [SMALL_STATE(112)] = 4861,
  [SMALL_STATE(113)] = 4871,
  [SMALL_STATE(114)] = 4881,
  [SMALL_STATE(115)] = 4891,
  [SMALL_STATE(116)] = 4901,
  [SMALL_STATE(117)] = 4911,
  [SMALL_STATE(118)] = 4921,
  [SMALL_STATE(119)] = 4931,
  [SMALL_STATE(120)] = 4941,
  [SMALL_STATE(121)] = 4951,
  [SMALL_STATE(122)] = 4961,
  [SMALL_STATE(123)] = 4971,
  [SMALL_STATE(124)] = 4981,
  [SMALL_STATE(125)] = 4991,
  [SMALL_STATE(126)] = 5001,
  [SMALL_STATE(127)] = 5011,
  [SMALL_STATE(128)] = 5021,
  [SMALL_STATE(129)] = 5031,
  [SMALL_STATE(130)] = 5041,
  [SMALL_STATE(131)] = 5051,
  [SMALL_STATE(132)] = 5061,
  [SMALL_STATE(133)] = 5069,
  [SMALL_STATE(134)] = 5079,
  [SMALL_STATE(135)] = 5089,
  [SMALL_STATE(136)] = 5099,
  [SMALL_STATE(137)] = 5109,
  [SMALL_STATE(138)] = 5119,
  [SMALL_STATE(139)] = 5129,
  [SMALL_STATE(140)] = 5139,
  [SMALL_STATE(141)] = 5149,
  [SMALL_STATE(142)] = 5159,
  [SMALL_STATE(143)] = 5169,
  [SMALL_STATE(144)] = 5179,
  [SMALL_STATE(145)] = 5189,
  [SMALL_STATE(146)] = 5199,
  [SMALL_STATE(147)] = 5209,
  [SMALL_STATE(148)] = 5219,
  [SMALL_STATE(149)] = 5229,
  [SMALL_STATE(150)] = 5239,
  [SMALL_STATE(151)] = 5249,
  [SMALL_STATE(152)] = 5259,
  [SMALL_STATE(153)] = 5269,
  [SMALL_STATE(154)] = 5279,
  [SMALL_STATE(155)] = 5289,
  [SMALL_STATE(156)] = 5299,
  [SMALL_STATE(157)] = 5309,
  [SMALL_STATE(158)] = 5319,
  [SMALL_STATE(159)] = 5329,
  [SMALL_STATE(160)] = 5339,
  [SMALL_STATE(161)] = 5349,
  [SMALL_STATE(162)] = 5359,
  [SMALL_STATE(163)] = 5369,
  [SMALL_STATE(164)] = 5379,
  [SMALL_STATE(165)] = 5389,
  [SMALL_STATE(166)] = 5399,
  [SMALL_STATE(167)] = 5409,
  [SMALL_STATE(168)] = 5419,
  [SMALL_STATE(169)] = 5429,
  [SMALL_STATE(170)] = 5439,
  [SMALL_STATE(171)] = 5449,
  [SMALL_STATE(172)] = 5459,
  [SMALL_STATE(173)] = 5469,
  [SMALL_STATE(174)] = 5479,
  [SMALL_STATE(175)] = 5489,
  [SMALL_STATE(176)] = 5499,
  [SMALL_STATE(177)] = 5509,
  [SMALL_STATE(178)] = 5519,
  [SMALL_STATE(179)] = 5529,
  [SMALL_STATE(180)] = 5539,
  [SMALL_STATE(181)] = 5549,
  [SMALL_STATE(182)] = 5559,
  [SMALL_STATE(183)] = 5569,
  [SMALL_STATE(184)] = 5579,
  [SMALL_STATE(185)] = 5589,
  [SMALL_STATE(186)] = 5599,
  [SMALL_STATE(187)] = 5609,
  [SMALL_STATE(188)] = 5619,
  [SMALL_STATE(189)] = 5629,
  [SMALL_STATE(190)] = 5639,
  [SMALL_STATE(191)] = 5649,
  [SMALL_STATE(192)] = 5659,
  [SMALL_STATE(193)] = 5669,
  [SMALL_STATE(194)] = 5679,
  [SMALL_STATE(195)] = 5689,
  [SMALL_STATE(196)] = 5699,
  [SMALL_STATE(197)] = 5709,
  [SMALL_STATE(198)] = 5719,
  [SMALL_STATE(199)] = 5729,
  [SMALL_STATE(200)] = 5739,
  [SMALL_STATE(201)] = 5749,
  [SMALL_STATE(202)] = 5759,
  [SMALL_STATE(203)] = 5769,
  [SMALL_STATE(204)] = 5779,
  [SMALL_STATE(205)] = 5789,
  [SMALL_STATE(206)] = 5799,
  [SMALL_STATE(207)] = 5809,
  [SMALL_STATE(208)] = 5819,
  [SMALL_STATE(209)] = 5829,
  [SMALL_STATE(210)] = 5839,
  [SMALL_STATE(211)] = 5849,
  [SMALL_STATE(212)] = 5857,
  [SMALL_STATE(213)] = 5862,
  [SMALL_STATE(214)] = 5869,
  [SMALL_STATE(215)] = 5876,
  [SMALL_STATE(216)] = 5881,
  [SMALL_STATE(217)] = 5886,
  [SMALL_STATE(218)] = 5891,
  [SMALL_STATE(219)] = 5896,
  [SMALL_STATE(220)] = 5901,
  [SMALL_STATE(221)] = 5906,
  [SMALL_STATE(222)] = 5911,
  [SMALL_STATE(223)] = 5916,
  [SMALL_STATE(224)] = 5921,
  [SMALL_STATE(225)] = 5926,
  [SMALL_STATE(226)] = 5931,
  [SMALL_STATE(227)] = 5936,
  [SMALL_STATE(228)] = 5941,
  [SMALL_STATE(229)] = 5948,
  [SMALL_STATE(230)] = 5953,
  [SMALL_STATE(231)] = 5958,
  [SMALL_STATE(232)] = 5963,
  [SMALL_STATE(233)] = 5968,
  [SMALL_STATE(234)] = 5975,
  [SMALL_STATE(235)] = 5982,
  [SMALL_STATE(236)] = 5987,
  [SMALL_STATE(237)] = 5992,
  [SMALL_STATE(238)] = 5997,
  [SMALL_STATE(239)] = 6002,
  [SMALL_STATE(240)] = 6009,
  [SMALL_STATE(241)] = 6014,
  [SMALL_STATE(242)] = 6021,
  [SMALL_STATE(243)] = 6028,
  [SMALL_STATE(244)] = 6033,
  [SMALL_STATE(245)] = 6040,
  [SMALL_STATE(246)] = 6047,
  [SMALL_STATE(247)] = 6052,
  [SMALL_STATE(248)] = 6057,
  [SMALL_STATE(249)] = 6064,
  [SMALL_STATE(250)] = 6069,
  [SMALL_STATE(251)] = 6076,
  [SMALL_STATE(252)] = 6083,
  [SMALL_STATE(253)] = 6087,
  [SMALL_STATE(254)] = 6091,
  [SMALL_STATE(255)] = 6095,
  [SMALL_STATE(256)] = 6099,
  [SMALL_STATE(257)] = 6103,
  [SMALL_STATE(258)] = 6107,
  [SMALL_STATE(259)] = 6111,
  [SMALL_STATE(260)] = 6115,
  [SMALL_STATE(261)] = 6119,
  [SMALL_STATE(262)] = 6123,
  [SMALL_STATE(263)] = 6127,
  [SMALL_STATE(264)] = 6131,
  [SMALL_STATE(265)] = 6135,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(55),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(60),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(214),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(233),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(113),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(234),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(211),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(237),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(237),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(262),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(59),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(237),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2), SHIFT_REPEAT(237),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyname_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(64),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(69),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(72),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(76),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(84),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(88),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(95),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(97),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(102),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 8),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 10),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 7),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 6),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 5),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 9),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 6),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 6, .production_id = 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 11),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11, .production_id = 12),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 11),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 7),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7, .production_id = 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 7, .production_id = 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 10),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 8),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 9),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 11),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 8, .production_id = 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 4),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 5),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 6),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 13),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12, .production_id = 12),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 9, .production_id = 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 12),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 10),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 11),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 13),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 6),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 7),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 8),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 10, .production_id = 9),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 13, .production_id = 12),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_construct, 14, .production_id = 13),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__version_test, 5),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_assignment, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_value, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_assignment, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bool_assignment, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_value, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keymap_assignment, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keymap_value, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__edit_mode_assignment, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bell_assignment, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bell_value, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_test, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mode_test, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edit_mode_value, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbolic_character_name, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_setting, 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_test, 5),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_variable, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_variable, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_variable, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyname, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 3, .production_id = 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyseq, 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [768] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_readline(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
