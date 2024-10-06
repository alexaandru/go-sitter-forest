#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 208
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 1
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym__simple_identifier = 2,
  anon_sym_DASH = 3,
  anon_sym_and = 4,
  anon_sym_not = 5,
  anon_sym_COLON = 6,
  anon_sym_PIPE = 7,
  sym_start_anchor = 8,
  sym_end_anchor = 9,
  aux_sym_word_token1 = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_LT = 13,
  anon_sym_GT = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_STAR = 17,
  anon_sym_PLUS = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_app_LPAREN = 21,
  anon_sym_face_LPAREN = 22,
  anon_sym_deck_LPAREN = 23,
  anon_sym_gamepad_LPAREN = 24,
  anon_sym_noise_LPAREN = 25,
  anon_sym_parrot_LPAREN = 26,
  sym_settings_binding = 27,
  sym_tag_binding = 28,
  anon_sym_EQ = 29,
  anon_sym_SLASH = 30,
  anon_sym_PERCENT = 31,
  anon_sym_or = 32,
  anon_sym_key_LPAREN = 33,
  anon_sym_sleep_LPAREN = 34,
  aux_sym__implicit_string_argument_token1 = 35,
  anon_sym_LPAREN2 = 36,
  anon_sym_COMMA = 37,
  aux_sym_identifier_token1 = 38,
  sym_integer = 39,
  sym_float = 40,
  sym_implicit_string = 41,
  anon_sym_LBRACE_LBRACE = 42,
  anon_sym_RBRACE_RBRACE = 43,
  sym_string_escape_sequence = 44,
  anon_sym_BSLASH = 45,
  sym__newline = 46,
  sym__indent = 47,
  sym__dedent = 48,
  sym__string_start = 49,
  sym_string_content = 50,
  sym__string_end = 51,
  sym_source_file = 52,
  sym_matches = 53,
  sym_match_modifier = 54,
  sym_match = 55,
  sym_declarations = 56,
  sym_declaration = 57,
  sym_command_declaration = 58,
  sym_app_declaration = 59,
  sym_face_declaration = 60,
  sym_deck_declaration = 61,
  sym_gamepad_declaration = 62,
  sym_noise_declaration = 63,
  sym_parrot_declaration = 64,
  sym_tag_import_declaration = 65,
  sym_key_binding_declaration = 66,
  sym_settings_declaration = 67,
  sym_rule = 68,
  sym__optional_choice = 69,
  sym_choice = 70,
  sym__optional_anchor = 71,
  sym__optional_seq = 72,
  sym_seq = 73,
  sym__primary_rule = 74,
  sym_word = 75,
  sym_list = 76,
  sym_capture = 77,
  sym_optional = 78,
  sym_repeat = 79,
  sym_repeat1 = 80,
  sym_parenthesized_rule = 81,
  sym_app_binding = 82,
  sym_face_binding = 83,
  sym_deck_binding = 84,
  sym_gamepad_binding = 85,
  sym_noise_binding = 86,
  sym_parrot_binding = 87,
  sym__statements = 88,
  sym_block = 89,
  sym_statement = 90,
  sym_assignment_statement = 91,
  sym_expression_statement = 92,
  sym_expression = 93,
  sym_variable = 94,
  sym_parenthesized_expression = 95,
  sym_binary_operator = 96,
  sym_unary_operator = 97,
  sym_key_action = 98,
  sym_sleep_action = 99,
  sym__implicit_string_argument = 100,
  sym_action = 101,
  sym_argument_list = 102,
  sym_identifier = 103,
  sym_string = 104,
  sym_interpolation = 105,
  sym__escape_interpolation = 106,
  sym__not_escapesequence = 107,
  sym__not_interpolation = 108,
  aux_sym_matches_repeat1 = 109,
  aux_sym_matches_repeat2 = 110,
  aux_sym_match_repeat1 = 111,
  aux_sym_declarations_repeat1 = 112,
  aux_sym_choice_repeat1 = 113,
  aux_sym_seq_repeat1 = 114,
  aux_sym_block_repeat1 = 115,
  aux_sym_argument_list_repeat1 = 116,
  aux_sym_string_repeat1 = 117,
  alias_sym_key_binding = 118,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__simple_identifier] = "_simple_identifier",
  [anon_sym_DASH] = "-",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [sym_start_anchor] = "start_anchor",
  [sym_end_anchor] = "end_anchor",
  [aux_sym_word_token1] = "word_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_app_LPAREN] = "app(",
  [anon_sym_face_LPAREN] = "face(",
  [anon_sym_deck_LPAREN] = "deck(",
  [anon_sym_gamepad_LPAREN] = "gamepad(",
  [anon_sym_noise_LPAREN] = "noise(",
  [anon_sym_parrot_LPAREN] = "parrot(",
  [sym_settings_binding] = "settings_binding",
  [sym_tag_binding] = "tag_binding",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH] = "operator",
  [anon_sym_PERCENT] = "operator",
  [anon_sym_or] = "operator",
  [anon_sym_key_LPAREN] = "key(",
  [anon_sym_sleep_LPAREN] = "sleep(",
  [aux_sym__implicit_string_argument_token1] = "implicit_string",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_COMMA] = ",",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_implicit_string] = "implicit_string",
  [anon_sym_LBRACE_LBRACE] = "{",
  [anon_sym_RBRACE_RBRACE] = "}",
  [sym_string_escape_sequence] = "string_escape_sequence",
  [anon_sym_BSLASH] = "\\",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__string_start] = "\"",
  [sym_string_content] = "string_content",
  [sym__string_end] = "\"",
  [sym_source_file] = "source_file",
  [sym_matches] = "matches",
  [sym_match_modifier] = "match_modifier",
  [sym_match] = "match",
  [sym_declarations] = "declarations",
  [sym_declaration] = "declaration",
  [sym_command_declaration] = "command_declaration",
  [sym_app_declaration] = "app_declaration",
  [sym_face_declaration] = "face_declaration",
  [sym_deck_declaration] = "deck_declaration",
  [sym_gamepad_declaration] = "gamepad_declaration",
  [sym_noise_declaration] = "noise_declaration",
  [sym_parrot_declaration] = "parrot_declaration",
  [sym_tag_import_declaration] = "tag_import_declaration",
  [sym_key_binding_declaration] = "key_binding_declaration",
  [sym_settings_declaration] = "settings_declaration",
  [sym_rule] = "rule",
  [sym__optional_choice] = "_optional_choice",
  [sym_choice] = "choice",
  [sym__optional_anchor] = "_optional_anchor",
  [sym__optional_seq] = "_optional_seq",
  [sym_seq] = "seq",
  [sym__primary_rule] = "_primary_rule",
  [sym_word] = "word",
  [sym_list] = "list",
  [sym_capture] = "capture",
  [sym_optional] = "optional",
  [sym_repeat] = "repeat",
  [sym_repeat1] = "repeat1",
  [sym_parenthesized_rule] = "parenthesized_rule",
  [sym_app_binding] = "app_binding",
  [sym_face_binding] = "face_binding",
  [sym_deck_binding] = "deck_binding",
  [sym_gamepad_binding] = "gamepad_binding",
  [sym_noise_binding] = "noise_binding",
  [sym_parrot_binding] = "parrot_binding",
  [sym__statements] = "_statements",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_expression] = "expression",
  [sym_variable] = "variable",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_key_action] = "key_action",
  [sym_sleep_action] = "sleep_action",
  [sym__implicit_string_argument] = "_implicit_string_argument",
  [sym_action] = "action",
  [sym_argument_list] = "argument_list",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__escape_interpolation] = "string_content",
  [sym__not_escapesequence] = "string_content",
  [sym__not_interpolation] = "string_content",
  [aux_sym_matches_repeat1] = "matches_repeat1",
  [aux_sym_matches_repeat2] = "matches_repeat2",
  [aux_sym_match_repeat1] = "match_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [aux_sym_seq_repeat1] = "seq_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_key_binding] = "key_binding",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__simple_identifier] = sym__simple_identifier,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_start_anchor] = sym_start_anchor,
  [sym_end_anchor] = sym_end_anchor,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_app_LPAREN] = anon_sym_app_LPAREN,
  [anon_sym_face_LPAREN] = anon_sym_face_LPAREN,
  [anon_sym_deck_LPAREN] = anon_sym_deck_LPAREN,
  [anon_sym_gamepad_LPAREN] = anon_sym_gamepad_LPAREN,
  [anon_sym_noise_LPAREN] = anon_sym_noise_LPAREN,
  [anon_sym_parrot_LPAREN] = anon_sym_parrot_LPAREN,
  [sym_settings_binding] = sym_settings_binding,
  [sym_tag_binding] = sym_tag_binding,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_SLASH,
  [anon_sym_or] = anon_sym_SLASH,
  [anon_sym_key_LPAREN] = anon_sym_key_LPAREN,
  [anon_sym_sleep_LPAREN] = anon_sym_sleep_LPAREN,
  [aux_sym__implicit_string_argument_token1] = sym_implicit_string,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_implicit_string] = sym_implicit_string,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE,
  [sym_string_escape_sequence] = sym_string_escape_sequence,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__string_start] = sym__string_start,
  [sym_string_content] = sym_string_content,
  [sym__string_end] = sym__string_start,
  [sym_source_file] = sym_source_file,
  [sym_matches] = sym_matches,
  [sym_match_modifier] = sym_match_modifier,
  [sym_match] = sym_match,
  [sym_declarations] = sym_declarations,
  [sym_declaration] = sym_declaration,
  [sym_command_declaration] = sym_command_declaration,
  [sym_app_declaration] = sym_app_declaration,
  [sym_face_declaration] = sym_face_declaration,
  [sym_deck_declaration] = sym_deck_declaration,
  [sym_gamepad_declaration] = sym_gamepad_declaration,
  [sym_noise_declaration] = sym_noise_declaration,
  [sym_parrot_declaration] = sym_parrot_declaration,
  [sym_tag_import_declaration] = sym_tag_import_declaration,
  [sym_key_binding_declaration] = sym_key_binding_declaration,
  [sym_settings_declaration] = sym_settings_declaration,
  [sym_rule] = sym_rule,
  [sym__optional_choice] = sym__optional_choice,
  [sym_choice] = sym_choice,
  [sym__optional_anchor] = sym__optional_anchor,
  [sym__optional_seq] = sym__optional_seq,
  [sym_seq] = sym_seq,
  [sym__primary_rule] = sym__primary_rule,
  [sym_word] = sym_word,
  [sym_list] = sym_list,
  [sym_capture] = sym_capture,
  [sym_optional] = sym_optional,
  [sym_repeat] = sym_repeat,
  [sym_repeat1] = sym_repeat1,
  [sym_parenthesized_rule] = sym_parenthesized_rule,
  [sym_app_binding] = sym_app_binding,
  [sym_face_binding] = sym_face_binding,
  [sym_deck_binding] = sym_deck_binding,
  [sym_gamepad_binding] = sym_gamepad_binding,
  [sym_noise_binding] = sym_noise_binding,
  [sym_parrot_binding] = sym_parrot_binding,
  [sym__statements] = sym__statements,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_expression] = sym_expression,
  [sym_variable] = sym_variable,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_key_action] = sym_key_action,
  [sym_sleep_action] = sym_sleep_action,
  [sym__implicit_string_argument] = sym__implicit_string_argument,
  [sym_action] = sym_action,
  [sym_argument_list] = sym_argument_list,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__escape_interpolation] = sym_string_content,
  [sym__not_escapesequence] = sym_string_content,
  [sym__not_interpolation] = sym_string_content,
  [aux_sym_matches_repeat1] = aux_sym_matches_repeat1,
  [aux_sym_matches_repeat2] = aux_sym_matches_repeat2,
  [aux_sym_match_repeat1] = aux_sym_match_repeat1,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym_choice_repeat1] = aux_sym_choice_repeat1,
  [aux_sym_seq_repeat1] = aux_sym_seq_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_key_binding] = alias_sym_key_binding,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_start_anchor] = {
    .visible = true,
    .named = true,
  },
  [sym_end_anchor] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_word_token1] = {
    .visible = false,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_app_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_face_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deck_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gamepad_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noise_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parrot_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_settings_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_binding] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_key_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sleep_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__implicit_string_argument_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__string_start] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym__string_end] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_matches] = {
    .visible = true,
    .named = true,
  },
  [sym_match_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_command_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_app_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_face_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_deck_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_gamepad_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_noise_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parrot_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_key_binding_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__optional_choice] = {
    .visible = false,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
    .named = true,
  },
  [sym__optional_anchor] = {
    .visible = false,
    .named = true,
  },
  [sym__optional_seq] = {
    .visible = false,
    .named = true,
  },
  [sym_seq] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_rule] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat1] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_app_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_face_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_deck_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_gamepad_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_noise_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_parrot_binding] = {
    .visible = true,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_key_action] = {
    .visible = true,
    .named = true,
  },
  [sym_sleep_action] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_string_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__not_escapesequence] = {
    .visible = true,
    .named = true,
  },
  [sym__not_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_matches_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_matches_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_seq_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_key_binding] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_action_name = 1,
  field_arguments = 2,
  field_capture_name = 3,
  field_expression = 4,
  field_left = 5,
  field_list_name = 6,
  field_modifiers = 7,
  field_operator = 8,
  field_right = 9,
  field_variable_name = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action_name] = "action_name",
  [field_arguments] = "arguments",
  [field_capture_name] = "capture_name",
  [field_expression] = "expression",
  [field_left] = "left",
  [field_list_name] = "list_name",
  [field_modifiers] = "modifiers",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 3, .length = 2},
  [8] = {.index = 6, .length = 2},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 11, .length = 3},
  [12] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_list_name, 1},
  [1] =
    {field_capture_name, 1},
  [2] =
    {field_arguments, 1},
  [3] =
    {field_left, 0},
    {field_right, 2},
  [5] =
    {field_variable_name, 0},
  [6] =
    {field_operator, 0},
    {field_right, 1},
  [8] =
    {field_expression, 0},
  [9] =
    {field_action_name, 0},
    {field_arguments, 1},
  [11] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [14] =
    {field_left, 1},
    {field_modifiers, 0},
    {field_right, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = sym_block,
  },
  [7] = {
    [0] = alias_sym_key_binding,
  },
  [8] = {
    [0] = anon_sym_SLASH,
  },
  [11] = {
    [1] = anon_sym_SLASH,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_statement, 2,
    sym_statement,
    sym_block,
  sym_key_action, 2,
    sym_key_action,
    alias_sym_key_binding,
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
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 24,
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 29,
  [36] = 36,
  [37] = 31,
  [38] = 32,
  [39] = 33,
  [40] = 34,
  [41] = 30,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 65,
  [73] = 64,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 62,
  [82] = 82,
  [83] = 51,
  [84] = 84,
  [85] = 85,
  [86] = 54,
  [87] = 84,
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
  [100] = 91,
  [101] = 101,
  [102] = 102,
  [103] = 80,
  [104] = 77,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 88,
  [113] = 89,
  [114] = 111,
  [115] = 94,
  [116] = 116,
  [117] = 95,
  [118] = 90,
  [119] = 96,
  [120] = 92,
  [121] = 93,
  [122] = 122,
  [123] = 122,
  [124] = 98,
  [125] = 99,
  [126] = 101,
  [127] = 102,
  [128] = 85,
  [129] = 105,
  [130] = 130,
  [131] = 131,
  [132] = 131,
  [133] = 97,
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
  [154] = 152,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 156,
  [159] = 155,
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
  [194] = 169,
  [195] = 195,
  [196] = 196,
  [197] = 191,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 189,
};

static TSCharacterRange aux_sym_word_token1_character_set_1[] = {
  {'0', '9'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb2, 0xb3}, {0xb5, 0xb5}, {0xb9, 0xba}, {0xbc, 0xbe},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x660, 0x669}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7c0, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x966, 0x96f}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8},
  {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9e6, 0x9f1},
  {0x9f4, 0x9f9}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36},
  {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa6f}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8},
  {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xae6, 0xaef}, {0xaf9, 0xaf9},
  {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d},
  {0xb5f, 0xb61}, {0xb66, 0xb6f}, {0xb71, 0xb77}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xbe6, 0xbf2}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc66, 0xc6f},
  {0xc78, 0xc7e}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xce6, 0xcef}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d},
  {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd58, 0xd61}, {0xd66, 0xd78}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb},
  {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xde6, 0xdef}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe50, 0xe59}, {0xe81, 0xe82},
  {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4},
  {0xec6, 0xec6}, {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf20, 0xf33}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x1049}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x1090, 0x1099}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1369, 0x137c}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x17e0, 0x17e9},
  {0x17f0, 0x17f9}, {0x1810, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e},
  {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1a80, 0x1a89},
  {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b83, 0x1ba0}, {0x1bae, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2070, 0x2071}, {0x2074, 0x2079}, {0x207f, 0x2089},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2150, 0x2189}, {0x2460, 0x249b},
  {0x24ea, 0x24ff}, {0x2776, 0x2793}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2cfd, 0x2cfd}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27},
  {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe},
  {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3007}, {0x3021, 0x3029}, {0x3031, 0x3035},
  {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x3192, 0x3195},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3220, 0x3229}, {0x3248, 0x324f}, {0x3251, 0x325f}, {0x3280, 0x3289}, {0x32b1, 0x32bf}, {0x3400, 0x3400},
  {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d},
  {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801},
  {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa830, 0xa835}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8d0, 0xa8d9}, {0xa8f2, 0xa8f7},
  {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa900, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9e4},
  {0xa9e6, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf},
  {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4},
  {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2},
  {0xabf0, 0xabf9}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06},
  {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44},
  {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff10, 0xff19},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10107, 0x10133}, {0x10140, 0x10178},
  {0x1018a, 0x1018b}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e1, 0x102fb}, {0x10300, 0x10323}, {0x1032d, 0x1034a}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527},
  {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9},
  {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805},
  {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10858, 0x10876}, {0x10879, 0x1089e}, {0x108a7, 0x108af},
  {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b},
};

static TSCharacterRange aux_sym_word_token1_character_set_2[] = {
  {'\'', '\''}, {'-', '-'}, {'0', '9'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb2, 0xb3}, {0xb5, 0xb5},
  {0xb9, 0xba}, {0xbc, 0xbe}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec},
  {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c},
  {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea},
  {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x660, 0x669}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6fc},
  {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7c0, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa},
  {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e},
  {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x966, 0x96f}, {0x971, 0x980}, {0x985, 0x98c},
  {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd},
  {0x9df, 0x9e1}, {0x9e6, 0x9f1}, {0x9f4, 0x9f9}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30},
  {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa6f}, {0xa72, 0xa74}, {0xa85, 0xa8d},
  {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1},
  {0xae6, 0xaef}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39},
  {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb66, 0xb6f}, {0xb71, 0xb77}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0},
  {0xbe6, 0xbf2}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d},
  {0xc60, 0xc61}, {0xc66, 0xc6f}, {0xc78, 0xc7e}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3},
  {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xce6, 0xcef}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10},
  {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd58, 0xd61}, {0xd66, 0xd78}, {0xd7a, 0xd7f}, {0xd85, 0xd96},
  {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xde6, 0xdef}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46},
  {0xe50, 0xe59}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3},
  {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf20, 0xf33}, {0xf40, 0xf47},
  {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x1049}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066},
  {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x1090, 0x1099}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa},
  {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0},
  {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a},
  {0x1369, 0x137c}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea},
  {0x16ee, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7},
  {0x17dc, 0x17dc}, {0x17e0, 0x17e9}, {0x17f0, 0x17f9}, {0x1810, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa},
  {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a16},
  {0x1a20, 0x1a54}, {0x1a80, 0x1a89}, {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b83, 0x1ba0},
  {0x1bae, 0x1be5}, {0x1c00, 0x1c23}, {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec},
  {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d},
  {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe},
  {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2070, 0x2071},
  {0x2074, 0x2079}, {0x207f, 0x2089}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d},
  {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e},
  {0x2150, 0x2189}, {0x2460, 0x249b}, {0x24ea, 0x24ff}, {0x2776, 0x2793}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2cfd, 0x2cfd},
  {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae},
  {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3007},
  {0x3021, 0x3029}, {0x3031, 0x3035}, {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f},
  {0x3131, 0x318e}, {0x3192, 0x3195}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3220, 0x3229}, {0x3248, 0x324f}, {0x3251, 0x325f}, {0x3280, 0x3289},
  {0x32b1, 0x32bf}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b},
  {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3},
  {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa830, 0xa835}, {0xa840, 0xa873}, {0xa882, 0xa8b3},
  {0xa8d0, 0xa8d9}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa900, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2},
  {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76},
  {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd},
  {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a},
  {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xabf0, 0xabf9}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e},
  {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74},
  {0xfe76, 0xfefc}, {0xff10, 0xff19}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7},
  {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa},
  {0x10107, 0x10133}, {0x10140, 0x10178}, {0x1018a, 0x1018b}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e1, 0x102fb}, {0x10300, 0x10323}, {0x1032d, 0x1034a},
  {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9}, {0x104b0, 0x104d3},
  {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1},
  {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0},
  {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10858, 0x10876},
  {0x10879, 0x1089e}, {0x108a7, 0x108af}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '#', 106,
        '$', 219,
        '%', 243,
        '(', 251,
        ')', 232,
        '*', 229,
        '+', 230,
        ',', 252,
        '-', 209,
        '.', 80,
        '/', 242,
        '0', 255,
        ':', 216,
        '<', 225,
        '=', 241,
        '>', 226,
        '[', 227,
      );
      if (lookahead == '\\') SKIP(95);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '}') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(100);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(272);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '\r') SKIP(2);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(14);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '\r') SKIP(4);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '\r') SKIP(6);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(19);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(19);
      if (lookahead == '\r') SKIP(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(20);
      if (lookahead == '\r') SKIP(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '#', 106,
        '$', 219,
        '(', 231,
        ')', 232,
        '*', 229,
        '+', 230,
        ':', 216,
        '<', 225,
        '[', 227,
      );
      if (lookahead == '\\') SKIP(5);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '|') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_1, 475, lookahead)) ADVANCE(220);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '#', 106,
        '%', 243,
        '(', 251,
        ')', 232,
        '*', 229,
        '+', 230,
        ',', 252,
        '-', 209,
        '/', 242,
        ':', 216,
        '=', 241,
        '>', 226,
      );
      if (lookahead == '\\') SKIP(7);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '}') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(16);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '#', 106,
        '%', 243,
        ')', 232,
        '*', 229,
        '+', 230,
        ',', 252,
        '-', 209,
        '/', 242,
        ':', 216,
        '=', 241,
        '>', 226,
      );
      if (lookahead == '\\') SKIP(7);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '}') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == ')') ADVANCE(232);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '0') ADVANCE(255);
      if (lookahead == '\\') SKIP(3);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == 's') ADVANCE(151);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '#', 106,
        '(', 231,
        '-', 209,
        '.', 80,
        '0', 255,
        '\\', 273,
        '_', 253,
        'k', 140,
        's', 151,
        '{', 222,
        '}', 224,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '\\') SKIP(9);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\\') SKIP(11);
      if (lookahead == '_') ADVANCE(253);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(233);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(245);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(235);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(234);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(237);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(246);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(238);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(236);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(240);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(239);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(259);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 76:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 77:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      END_STATE();
    case 78:
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(268);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(259);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 94:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(100);
      END_STATE();
    case 95:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(100);
      if (lookahead == '\r') SKIP(94);
      END_STATE();
    case 96:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(101);
      END_STATE();
    case 97:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(101);
      if (lookahead == '\r') SKIP(96);
      END_STATE();
    case 98:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(102);
      END_STATE();
    case 99:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(102);
      if (lookahead == '\r') SKIP(98);
      END_STATE();
    case 100:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '#', 106,
        '$', 219,
        '%', 243,
        '(', 231,
        ')', 232,
        '*', 229,
        '+', 230,
        ',', 252,
        '-', 209,
        '.', 80,
        '/', 242,
        '0', 255,
        ':', 216,
        '<', 225,
        '=', 241,
        '>', 226,
        '[', 227,
      );
      if (lookahead == '\\') SKIP(95);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '}') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(100);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 101:
      if (eof) ADVANCE(103);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '[') ADVANCE(227);
      if (lookahead == '\\') SKIP(97);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'g') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '}') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_1, 475, lookahead)) ADVANCE(220);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '[') ADVANCE(227);
      if (lookahead == '\\') SKIP(99);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'k') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '{') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_1, 475, lookahead)) ADVANCE(220);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(250);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(245);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(245);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(246);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'c') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'c') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'g') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'g') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 's') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 't') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'y') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'y') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'k') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'm') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'y') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (set_contains(aux_sym_word_token1_character_set_2, 477, lookahead)) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(269);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(270);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_app_LPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_face_LPAREN);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_deck_LPAREN);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_gamepad_LPAREN);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_noise_LPAREN);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_parrot_LPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_settings_binding);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_tag_binding);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_key_LPAREN);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_sleep_LPAREN);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '.', 264,
        '_', 257,
        'B', 34,
        'b', 34,
        'E', 76,
        'e', 76,
        'O', 35,
        'o', 35,
        'X', 36,
        'x', 36,
        'J', 254,
        'L', 254,
        'j', 254,
        'l', 254,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '.', 264,
        '_', 257,
        'E', 76,
        'e', 76,
        'J', 254,
        'L', 254,
        'j', 254,
        'l', 254,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(267);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      ADVANCE_MAP(
        '\n', 272,
        '\r', 1,
        'U', 92,
        'u', 88,
        'x', 86,
        '"', 271,
        '\'', 271,
        '\\', 271,
        'a', 271,
        'b', 271,
        'f', 271,
        'n', 271,
        'r', 271,
        't', 271,
        'v', 271,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 101, .external_lex_state = 2},
  [2] = {.lex_state = 102, .external_lex_state = 2},
  [3] = {.lex_state = 102, .external_lex_state = 2},
  [4] = {.lex_state = 102, .external_lex_state = 2},
  [5] = {.lex_state = 18, .external_lex_state = 3},
  [6] = {.lex_state = 17, .external_lex_state = 4},
  [7] = {.lex_state = 17, .external_lex_state = 5},
  [8] = {.lex_state = 17, .external_lex_state = 5},
  [9] = {.lex_state = 17, .external_lex_state = 5},
  [10] = {.lex_state = 17, .external_lex_state = 5},
  [11] = {.lex_state = 17, .external_lex_state = 5},
  [12] = {.lex_state = 17, .external_lex_state = 5},
  [13] = {.lex_state = 17, .external_lex_state = 5},
  [14] = {.lex_state = 17, .external_lex_state = 4},
  [15] = {.lex_state = 17, .external_lex_state = 4},
  [16] = {.lex_state = 17, .external_lex_state = 5},
  [17] = {.lex_state = 17, .external_lex_state = 5},
  [18] = {.lex_state = 14, .external_lex_state = 2},
  [19] = {.lex_state = 17, .external_lex_state = 6},
  [20] = {.lex_state = 17, .external_lex_state = 6},
  [21] = {.lex_state = 14, .external_lex_state = 2},
  [22] = {.lex_state = 14, .external_lex_state = 2},
  [23] = {.lex_state = 14, .external_lex_state = 2},
  [24] = {.lex_state = 17, .external_lex_state = 6},
  [25] = {.lex_state = 17, .external_lex_state = 6},
  [26] = {.lex_state = 14, .external_lex_state = 2},
  [27] = {.lex_state = 17, .external_lex_state = 6},
  [28] = {.lex_state = 17, .external_lex_state = 6},
  [29] = {.lex_state = 17, .external_lex_state = 6},
  [30] = {.lex_state = 17, .external_lex_state = 6},
  [31] = {.lex_state = 17, .external_lex_state = 6},
  [32] = {.lex_state = 17, .external_lex_state = 6},
  [33] = {.lex_state = 17, .external_lex_state = 6},
  [34] = {.lex_state = 17, .external_lex_state = 6},
  [35] = {.lex_state = 17, .external_lex_state = 6},
  [36] = {.lex_state = 17, .external_lex_state = 6},
  [37] = {.lex_state = 17, .external_lex_state = 6},
  [38] = {.lex_state = 17, .external_lex_state = 6},
  [39] = {.lex_state = 17, .external_lex_state = 6},
  [40] = {.lex_state = 17, .external_lex_state = 6},
  [41] = {.lex_state = 17, .external_lex_state = 6},
  [42] = {.lex_state = 14, .external_lex_state = 2},
  [43] = {.lex_state = 102, .external_lex_state = 2},
  [44] = {.lex_state = 102, .external_lex_state = 2},
  [45] = {.lex_state = 102, .external_lex_state = 2},
  [46] = {.lex_state = 102, .external_lex_state = 2},
  [47] = {.lex_state = 102, .external_lex_state = 2},
  [48] = {.lex_state = 102, .external_lex_state = 2},
  [49] = {.lex_state = 102, .external_lex_state = 2},
  [50] = {.lex_state = 102, .external_lex_state = 2},
  [51] = {.lex_state = 102, .external_lex_state = 2},
  [52] = {.lex_state = 102, .external_lex_state = 2},
  [53] = {.lex_state = 102, .external_lex_state = 2},
  [54] = {.lex_state = 102, .external_lex_state = 2},
  [55] = {.lex_state = 102, .external_lex_state = 2},
  [56] = {.lex_state = 102, .external_lex_state = 2},
  [57] = {.lex_state = 102, .external_lex_state = 2},
  [58] = {.lex_state = 102, .external_lex_state = 2},
  [59] = {.lex_state = 102, .external_lex_state = 2},
  [60] = {.lex_state = 102, .external_lex_state = 2},
  [61] = {.lex_state = 102, .external_lex_state = 2},
  [62] = {.lex_state = 102, .external_lex_state = 2},
  [63] = {.lex_state = 14, .external_lex_state = 2},
  [64] = {.lex_state = 18, .external_lex_state = 7},
  [65] = {.lex_state = 18, .external_lex_state = 7},
  [66] = {.lex_state = 14, .external_lex_state = 2},
  [67] = {.lex_state = 14, .external_lex_state = 2},
  [68] = {.lex_state = 14, .external_lex_state = 2},
  [69] = {.lex_state = 18, .external_lex_state = 7},
  [70] = {.lex_state = 14, .external_lex_state = 2},
  [71] = {.lex_state = 14, .external_lex_state = 2},
  [72] = {.lex_state = 18, .external_lex_state = 7},
  [73] = {.lex_state = 18, .external_lex_state = 7},
  [74] = {.lex_state = 14, .external_lex_state = 2},
  [75] = {.lex_state = 14, .external_lex_state = 2},
  [76] = {.lex_state = 14, .external_lex_state = 2},
  [77] = {.lex_state = 15, .external_lex_state = 2},
  [78] = {.lex_state = 14, .external_lex_state = 2},
  [79] = {.lex_state = 19, .external_lex_state = 2},
  [80] = {.lex_state = 15, .external_lex_state = 2},
  [81] = {.lex_state = 17, .external_lex_state = 4},
  [82] = {.lex_state = 19, .external_lex_state = 2},
  [83] = {.lex_state = 17, .external_lex_state = 4},
  [84] = {.lex_state = 15, .external_lex_state = 8},
  [85] = {.lex_state = 15, .external_lex_state = 2},
  [86] = {.lex_state = 17, .external_lex_state = 4},
  [87] = {.lex_state = 15, .external_lex_state = 8},
  [88] = {.lex_state = 15, .external_lex_state = 2},
  [89] = {.lex_state = 15, .external_lex_state = 2},
  [90] = {.lex_state = 15, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 15, .external_lex_state = 2},
  [93] = {.lex_state = 15, .external_lex_state = 2},
  [94] = {.lex_state = 15, .external_lex_state = 2},
  [95] = {.lex_state = 15, .external_lex_state = 2},
  [96] = {.lex_state = 15, .external_lex_state = 2},
  [97] = {.lex_state = 15, .external_lex_state = 2},
  [98] = {.lex_state = 15, .external_lex_state = 2},
  [99] = {.lex_state = 15, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 15, .external_lex_state = 2},
  [102] = {.lex_state = 15, .external_lex_state = 2},
  [103] = {.lex_state = 15, .external_lex_state = 8},
  [104] = {.lex_state = 15, .external_lex_state = 8},
  [105] = {.lex_state = 15, .external_lex_state = 2},
  [106] = {.lex_state = 18, .external_lex_state = 7},
  [107] = {.lex_state = 18, .external_lex_state = 7},
  [108] = {.lex_state = 18, .external_lex_state = 7},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 18, .external_lex_state = 7},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 8},
  [113] = {.lex_state = 0, .external_lex_state = 8},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 8},
  [116] = {.lex_state = 15, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 8},
  [118] = {.lex_state = 0, .external_lex_state = 8},
  [119] = {.lex_state = 0, .external_lex_state = 8},
  [120] = {.lex_state = 0, .external_lex_state = 8},
  [121] = {.lex_state = 0, .external_lex_state = 8},
  [122] = {.lex_state = 0, .external_lex_state = 8},
  [123] = {.lex_state = 0, .external_lex_state = 8},
  [124] = {.lex_state = 0, .external_lex_state = 8},
  [125] = {.lex_state = 0, .external_lex_state = 8},
  [126] = {.lex_state = 0, .external_lex_state = 8},
  [127] = {.lex_state = 0, .external_lex_state = 8},
  [128] = {.lex_state = 0, .external_lex_state = 8},
  [129] = {.lex_state = 0, .external_lex_state = 8},
  [130] = {.lex_state = 19, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 8},
  [132] = {.lex_state = 0, .external_lex_state = 8},
  [133] = {.lex_state = 0, .external_lex_state = 8},
  [134] = {.lex_state = 19, .external_lex_state = 2},
  [135] = {.lex_state = 19, .external_lex_state = 2},
  [136] = {.lex_state = 19, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 19, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 8},
  [147] = {.lex_state = 20, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 8},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 20, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 8},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 20, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 249, .external_lex_state = 2},
  [156] = {.lex_state = 249, .external_lex_state = 2},
  [157] = {.lex_state = 249, .external_lex_state = 2},
  [158] = {.lex_state = 249, .external_lex_state = 2},
  [159] = {.lex_state = 249, .external_lex_state = 2},
  [160] = {.lex_state = 249, .external_lex_state = 2},
  [161] = {.lex_state = 249, .external_lex_state = 2},
  [162] = {.lex_state = 249, .external_lex_state = 2},
  [163] = {.lex_state = 249, .external_lex_state = 2},
  [164] = {.lex_state = 249, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 8},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 8},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 8},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 101, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 21, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 21, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_start_anchor] = ACTIONS(1),
    [sym_end_anchor] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_app_LPAREN] = ACTIONS(1),
    [anon_sym_face_LPAREN] = ACTIONS(1),
    [anon_sym_deck_LPAREN] = ACTIONS(1),
    [anon_sym_gamepad_LPAREN] = ACTIONS(1),
    [anon_sym_noise_LPAREN] = ACTIONS(1),
    [anon_sym_parrot_LPAREN] = ACTIONS(1),
    [sym_settings_binding] = ACTIONS(1),
    [sym_tag_binding] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_key_LPAREN] = ACTIONS(1),
    [anon_sym_sleep_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
    [sym_string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(184),
    [sym_matches] = STATE(2),
    [sym_match_modifier] = STATE(130),
    [sym_match] = STATE(79),
    [sym_declarations] = STATE(187),
    [sym_declaration] = STATE(3),
    [sym_command_declaration] = STATE(55),
    [sym_app_declaration] = STATE(55),
    [sym_face_declaration] = STATE(55),
    [sym_deck_declaration] = STATE(55),
    [sym_gamepad_declaration] = STATE(55),
    [sym_noise_declaration] = STATE(55),
    [sym_parrot_declaration] = STATE(55),
    [sym_tag_import_declaration] = STATE(55),
    [sym_key_binding_declaration] = STATE(55),
    [sym_settings_declaration] = STATE(55),
    [sym_rule] = STATE(196),
    [sym__optional_choice] = STATE(181),
    [sym_choice] = STATE(181),
    [sym__optional_anchor] = STATE(140),
    [sym__optional_seq] = STATE(139),
    [sym_seq] = STATE(139),
    [sym__primary_rule] = STATE(18),
    [sym_word] = STATE(18),
    [sym_list] = STATE(18),
    [sym_capture] = STATE(18),
    [sym_optional] = STATE(18),
    [sym_repeat] = STATE(18),
    [sym_repeat1] = STATE(18),
    [sym_parenthesized_rule] = STATE(18),
    [sym_app_binding] = STATE(200),
    [sym_face_binding] = STATE(166),
    [sym_deck_binding] = STATE(167),
    [sym_gamepad_binding] = STATE(168),
    [sym_noise_binding] = STATE(170),
    [sym_parrot_binding] = STATE(177),
    [sym_key_action] = STATE(178),
    [sym_identifier] = STATE(165),
    [aux_sym_matches_repeat1] = STATE(79),
    [aux_sym_matches_repeat2] = STATE(146),
    [aux_sym_match_repeat1] = STATE(130),
    [aux_sym_declarations_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__simple_identifier] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [sym_start_anchor] = ACTIONS(13),
    [aux_sym_word_token1] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_app_LPAREN] = ACTIONS(25),
    [anon_sym_face_LPAREN] = ACTIONS(27),
    [anon_sym_deck_LPAREN] = ACTIONS(29),
    [anon_sym_gamepad_LPAREN] = ACTIONS(31),
    [anon_sym_noise_LPAREN] = ACTIONS(33),
    [anon_sym_parrot_LPAREN] = ACTIONS(35),
    [sym_settings_binding] = ACTIONS(37),
    [sym_tag_binding] = ACTIONS(39),
    [anon_sym_key_LPAREN] = ACTIONS(41),
    [aux_sym_identifier_token1] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_start_anchor,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_app_LPAREN,
    ACTIONS(27), 1,
      anon_sym_face_LPAREN,
    ACTIONS(29), 1,
      anon_sym_deck_LPAREN,
    ACTIONS(31), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(33), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(35), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(37), 1,
      sym_settings_binding,
    ACTIONS(39), 1,
      sym_tag_binding,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym__optional_anchor,
    STATE(166), 1,
      sym_face_binding,
    STATE(167), 1,
      sym_deck_binding,
    STATE(168), 1,
      sym_gamepad_binding,
    STATE(170), 1,
      sym_noise_binding,
    STATE(177), 1,
      sym_parrot_binding,
    STATE(178), 1,
      sym_key_action,
    STATE(196), 1,
      sym_rule,
    STATE(200), 1,
      sym_app_binding,
    STATE(204), 1,
      sym_declarations,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(3), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(139), 2,
      sym__optional_seq,
      sym_seq,
    STATE(181), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(55), 10,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_deck_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [117] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_start_anchor,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_app_LPAREN,
    ACTIONS(27), 1,
      anon_sym_face_LPAREN,
    ACTIONS(29), 1,
      anon_sym_deck_LPAREN,
    ACTIONS(31), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(33), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(35), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(37), 1,
      sym_settings_binding,
    ACTIONS(39), 1,
      sym_tag_binding,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym__optional_anchor,
    STATE(166), 1,
      sym_face_binding,
    STATE(167), 1,
      sym_deck_binding,
    STATE(168), 1,
      sym_gamepad_binding,
    STATE(170), 1,
      sym_noise_binding,
    STATE(177), 1,
      sym_parrot_binding,
    STATE(178), 1,
      sym_key_action,
    STATE(196), 1,
      sym_rule,
    STATE(200), 1,
      sym_app_binding,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(4), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(139), 2,
      sym__optional_seq,
      sym_seq,
    STATE(181), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(55), 10,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_deck_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [231] = 31,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym_start_anchor,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_app_LPAREN,
    ACTIONS(72), 1,
      anon_sym_face_LPAREN,
    ACTIONS(75), 1,
      anon_sym_deck_LPAREN,
    ACTIONS(78), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(81), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(84), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(87), 1,
      sym_settings_binding,
    ACTIONS(90), 1,
      sym_tag_binding,
    ACTIONS(93), 1,
      anon_sym_key_LPAREN,
    STATE(140), 1,
      sym__optional_anchor,
    STATE(166), 1,
      sym_face_binding,
    STATE(167), 1,
      sym_deck_binding,
    STATE(168), 1,
      sym_gamepad_binding,
    STATE(170), 1,
      sym_noise_binding,
    STATE(177), 1,
      sym_parrot_binding,
    STATE(178), 1,
      sym_key_action,
    STATE(196), 1,
      sym_rule,
    STATE(200), 1,
      sym_app_binding,
    ACTIONS(51), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(4), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(139), 2,
      sym__optional_seq,
      sym_seq,
    STATE(181), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(55), 10,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_deck_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [345] = 13,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_key_LPAREN,
    ACTIONS(106), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym__string_start,
    STATE(80), 1,
      sym_identifier,
    STATE(116), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(108), 2,
      sym_integer,
      sym_float,
    ACTIONS(112), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(100), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      anon_sym_BSLASH,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [400] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(128), 1,
      sym__dedent,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(56), 1,
      sym_block,
    STATE(87), 1,
      sym_identifier,
    STATE(132), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(14), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(86), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [459] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(52), 1,
      sym_statement,
    STATE(61), 1,
      sym__statements,
    STATE(84), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [517] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(52), 1,
      sym_statement,
    STATE(60), 1,
      sym__statements,
    STATE(84), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [575] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(43), 1,
      sym__statements,
    STATE(52), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [633] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(52), 1,
      sym_statement,
    STATE(57), 1,
      sym__statements,
    STATE(84), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [691] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(47), 1,
      sym__statements,
    STATE(52), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [749] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(52), 1,
      sym_statement,
    STATE(58), 1,
      sym__statements,
    STATE(84), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [807] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(44), 1,
      sym__statements,
    STATE(52), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [865] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(134), 1,
      sym__dedent,
    STATE(87), 1,
      sym_identifier,
    STATE(132), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(15), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(86), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [921] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_key_LPAREN,
    ACTIONS(148), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(151), 1,
      sym_integer,
    ACTIONS(154), 1,
      sym_float,
    ACTIONS(157), 1,
      sym__dedent,
    ACTIONS(159), 1,
      sym__string_start,
    STATE(87), 1,
      sym_identifier,
    STATE(132), 1,
      sym_expression,
    ACTIONS(136), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(15), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(86), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [977] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(46), 1,
      sym__statements,
    STATE(52), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1035] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(45), 1,
      sym__statements,
    STATE(52), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1093] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    STATE(23), 1,
      aux_sym_seq_repeat1,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(162), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(66), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1139] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(91), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1190] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym_identifier,
    STATE(100), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1241] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_start_anchor,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(139), 2,
      sym__optional_seq,
      sym_seq,
    STATE(199), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1285] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_start_anchor,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(139), 2,
      sym__optional_seq,
      sym_seq,
    STATE(198), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1329] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      aux_sym_seq_repeat1,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(184), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(66), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1369] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_identifier,
    STATE(109), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1417] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_identifier,
    STATE(109), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1465] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      aux_sym_seq_repeat1,
    ACTIONS(190), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(193), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(66), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1505] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_identifier,
    STATE(109), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1553] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_identifier,
    STATE(109), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1601] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(111), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1646] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(103), 1,
      sym_identifier,
    STATE(122), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1691] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(103), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1736] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(103), 1,
      sym_identifier,
    STATE(120), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1781] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(103), 1,
      sym_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1826] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(103), 1,
      sym_identifier,
    STATE(133), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1871] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(114), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1916] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(109), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1961] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(89), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2006] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(92), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2051] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(93), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2096] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(97), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(105), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2141] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(103), 1,
      sym_identifier,
    STATE(123), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(129), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2186] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_start_anchor,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(139), 2,
      sym__optional_seq,
      sym_seq,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(211), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(215), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(219), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(223), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(227), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(231), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(235), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(239), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(243), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(247), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(251), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(255), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(259), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(263), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(267), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(271), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(275), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(279), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(283), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(287), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2726] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(137), 2,
      sym__optional_seq,
      sym_seq,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2760] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      sym_string_escape_sequence,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(301), 1,
      sym_string_content,
    ACTIONS(303), 1,
      sym__string_end,
    ACTIONS(295), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(69), 5,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_escapesequence,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2793] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(305), 1,
      sym_string_escape_sequence,
    ACTIONS(307), 1,
      sym_string_content,
    ACTIONS(309), 1,
      sym__string_end,
    ACTIONS(295), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(64), 5,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_escapesequence,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(311), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(313), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(317), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(321), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2893] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      sym_string_escape_sequence,
    ACTIONS(335), 1,
      anon_sym_BSLASH,
    ACTIONS(338), 1,
      sym_string_content,
    ACTIONS(341), 1,
      sym__string_end,
    ACTIONS(329), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(69), 5,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_escapesequence,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(345), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(349), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2968] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(351), 1,
      sym_string_escape_sequence,
    ACTIONS(353), 1,
      sym_string_content,
    ACTIONS(355), 1,
      sym__string_end,
    ACTIONS(295), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(73), 5,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_escapesequence,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [3001] = 9,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      sym_string_escape_sequence,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(301), 1,
      sym_string_content,
    ACTIONS(357), 1,
      sym__string_end,
    ACTIONS(295), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(69), 5,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_escapesequence,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [3034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(361), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(365), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(369), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 12,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_LPAREN2,
      anon_sym_COMMA,
  [3115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(315), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(317), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3136] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DASH,
    STATE(148), 1,
      aux_sym_matches_repeat2,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(11), 2,
      anon_sym_and,
      anon_sym_not,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(82), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(130), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_LPAREN2,
    STATE(94), 1,
      sym_argument_list,
    ACTIONS(378), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 3,
      sym__simple_identifier,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(287), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3204] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_DASH,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(382), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(387), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(82), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(130), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      sym__simple_identifier,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(243), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(392), 1,
      anon_sym_LPAREN2,
    STATE(115), 1,
      sym_argument_list,
    ACTIONS(378), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 10,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      sym__simple_identifier,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(255), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN2,
    ACTIONS(396), 1,
      anon_sym_EQ,
    STATE(115), 1,
      sym_argument_list,
    ACTIONS(378), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3371] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      anon_sym_or,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(404), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(406), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(414), 6,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(406), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(414), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3522] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_or,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(404), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(406), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN2,
    STATE(115), 1,
      sym_argument_list,
    ACTIONS(378), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 9,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_LPAREN2,
  [3611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3626] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(438), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(436), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      anon_sym_BSLASH,
  [3642] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(442), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(440), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      anon_sym_BSLASH,
  [3658] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(446), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(444), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      anon_sym_BSLASH,
  [3674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_or,
    ACTIONS(404), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(448), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(406), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3694] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(112), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(100), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      anon_sym_BSLASH,
  [3710] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_or,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    ACTIONS(404), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(406), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3755] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_or,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    ACTIONS(404), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(406), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_or,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    ACTIONS(404), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(406), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(414), 4,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
  [3860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_or,
    ACTIONS(462), 1,
      sym__newline,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(456), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3892] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_or,
    ACTIONS(464), 1,
      sym__newline,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(456), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3989] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(183), 1,
      sym_identifier,
    ACTIONS(11), 2,
      anon_sym_and,
      anon_sym_not,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(134), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [4008] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_or,
    ACTIONS(466), 1,
      sym__newline,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(456), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_or,
    ACTIONS(468), 1,
      sym__newline,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(456), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      sym__newline,
      anon_sym_or,
    ACTIONS(458), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(456), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(472), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(134), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [4079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_DASH,
    ACTIONS(475), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [4092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_DASH,
    ACTIONS(479), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [4105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_end_anchor,
    ACTIONS(483), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    STATE(141), 1,
      aux_sym_choice_repeat1,
    ACTIONS(487), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_end_anchor,
    ACTIONS(491), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_PIPE,
    STATE(138), 1,
      aux_sym_choice_repeat1,
    ACTIONS(495), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_PIPE,
    STATE(141), 1,
      aux_sym_choice_repeat1,
    ACTIONS(497), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [4186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_DASH,
    ACTIONS(508), 1,
      sym__newline,
    STATE(151), 1,
      aux_sym_matches_repeat2,
  [4229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(188), 1,
      sym_identifier,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_DASH,
    ACTIONS(510), 1,
      sym__newline,
    STATE(151), 1,
      aux_sym_matches_repeat2,
  [4253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_argument_list_repeat1,
  [4266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(192), 1,
      sym_identifier,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_DASH,
    ACTIONS(518), 1,
      sym__newline,
    STATE(151), 1,
      aux_sym_matches_repeat2,
  [4290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_argument_list_repeat1,
  [4303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(190), 1,
      sym_identifier,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_argument_list_repeat1,
  [4327] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(189), 1,
      sym__implicit_string_argument,
  [4337] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(194), 1,
      sym__implicit_string_argument,
  [4347] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(203), 1,
      sym__implicit_string_argument,
  [4357] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(530), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(169), 1,
      sym__implicit_string_argument,
  [4367] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(207), 1,
      sym__implicit_string_argument,
  [4377] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(206), 1,
      sym__implicit_string_argument,
  [4387] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(536), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(205), 1,
      sym__implicit_string_argument,
  [4397] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(202), 1,
      sym__implicit_string_argument,
  [4407] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(179), 1,
      sym__implicit_string_argument,
  [4417] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(201), 1,
      sym__implicit_string_argument,
  [4427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COLON,
  [4434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON,
  [4441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COLON,
  [4448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COLON,
  [4455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
  [4462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COLON,
  [4469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COLON,
  [4476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_COLON,
  [4483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COLON,
  [4490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_COLON,
  [4497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COLON,
  [4504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_COLON,
  [4511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_COLON,
  [4518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [4525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [4532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym__newline,
  [4539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COLON,
  [4546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [4553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_COLON,
  [4560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
  [4567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym__newline,
  [4574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_COLON,
  [4581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [4588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym__newline,
  [4595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
  [4602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
  [4609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
  [4616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_GT,
  [4623] = 2,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym_implicit_string,
  [4630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
  [4637] = 2,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_implicit_string,
  [4644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_COLON,
  [4651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
  [4658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
  [4665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
  [4672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COLON,
  [4679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
  [4686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
  [4693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
  [4700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
  [4707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
  [4714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
  [4721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 117,
  [SMALL_STATE(4)] = 231,
  [SMALL_STATE(5)] = 345,
  [SMALL_STATE(6)] = 400,
  [SMALL_STATE(7)] = 459,
  [SMALL_STATE(8)] = 517,
  [SMALL_STATE(9)] = 575,
  [SMALL_STATE(10)] = 633,
  [SMALL_STATE(11)] = 691,
  [SMALL_STATE(12)] = 749,
  [SMALL_STATE(13)] = 807,
  [SMALL_STATE(14)] = 865,
  [SMALL_STATE(15)] = 921,
  [SMALL_STATE(16)] = 977,
  [SMALL_STATE(17)] = 1035,
  [SMALL_STATE(18)] = 1093,
  [SMALL_STATE(19)] = 1139,
  [SMALL_STATE(20)] = 1190,
  [SMALL_STATE(21)] = 1241,
  [SMALL_STATE(22)] = 1285,
  [SMALL_STATE(23)] = 1329,
  [SMALL_STATE(24)] = 1369,
  [SMALL_STATE(25)] = 1417,
  [SMALL_STATE(26)] = 1465,
  [SMALL_STATE(27)] = 1505,
  [SMALL_STATE(28)] = 1553,
  [SMALL_STATE(29)] = 1601,
  [SMALL_STATE(30)] = 1646,
  [SMALL_STATE(31)] = 1691,
  [SMALL_STATE(32)] = 1736,
  [SMALL_STATE(33)] = 1781,
  [SMALL_STATE(34)] = 1826,
  [SMALL_STATE(35)] = 1871,
  [SMALL_STATE(36)] = 1916,
  [SMALL_STATE(37)] = 1961,
  [SMALL_STATE(38)] = 2006,
  [SMALL_STATE(39)] = 2051,
  [SMALL_STATE(40)] = 2096,
  [SMALL_STATE(41)] = 2141,
  [SMALL_STATE(42)] = 2186,
  [SMALL_STATE(43)] = 2226,
  [SMALL_STATE(44)] = 2251,
  [SMALL_STATE(45)] = 2276,
  [SMALL_STATE(46)] = 2301,
  [SMALL_STATE(47)] = 2326,
  [SMALL_STATE(48)] = 2351,
  [SMALL_STATE(49)] = 2376,
  [SMALL_STATE(50)] = 2401,
  [SMALL_STATE(51)] = 2426,
  [SMALL_STATE(52)] = 2451,
  [SMALL_STATE(53)] = 2476,
  [SMALL_STATE(54)] = 2501,
  [SMALL_STATE(55)] = 2526,
  [SMALL_STATE(56)] = 2551,
  [SMALL_STATE(57)] = 2576,
  [SMALL_STATE(58)] = 2601,
  [SMALL_STATE(59)] = 2626,
  [SMALL_STATE(60)] = 2651,
  [SMALL_STATE(61)] = 2676,
  [SMALL_STATE(62)] = 2701,
  [SMALL_STATE(63)] = 2726,
  [SMALL_STATE(64)] = 2760,
  [SMALL_STATE(65)] = 2793,
  [SMALL_STATE(66)] = 2826,
  [SMALL_STATE(67)] = 2851,
  [SMALL_STATE(68)] = 2872,
  [SMALL_STATE(69)] = 2893,
  [SMALL_STATE(70)] = 2926,
  [SMALL_STATE(71)] = 2947,
  [SMALL_STATE(72)] = 2968,
  [SMALL_STATE(73)] = 3001,
  [SMALL_STATE(74)] = 3034,
  [SMALL_STATE(75)] = 3055,
  [SMALL_STATE(76)] = 3076,
  [SMALL_STATE(77)] = 3097,
  [SMALL_STATE(78)] = 3115,
  [SMALL_STATE(79)] = 3136,
  [SMALL_STATE(80)] = 3165,
  [SMALL_STATE(81)] = 3186,
  [SMALL_STATE(82)] = 3204,
  [SMALL_STATE(83)] = 3230,
  [SMALL_STATE(84)] = 3248,
  [SMALL_STATE(85)] = 3270,
  [SMALL_STATE(86)] = 3286,
  [SMALL_STATE(87)] = 3304,
  [SMALL_STATE(88)] = 3326,
  [SMALL_STATE(89)] = 3341,
  [SMALL_STATE(90)] = 3356,
  [SMALL_STATE(91)] = 3371,
  [SMALL_STATE(92)] = 3396,
  [SMALL_STATE(93)] = 3413,
  [SMALL_STATE(94)] = 3428,
  [SMALL_STATE(95)] = 3443,
  [SMALL_STATE(96)] = 3458,
  [SMALL_STATE(97)] = 3473,
  [SMALL_STATE(98)] = 3492,
  [SMALL_STATE(99)] = 3507,
  [SMALL_STATE(100)] = 3522,
  [SMALL_STATE(101)] = 3547,
  [SMALL_STATE(102)] = 3562,
  [SMALL_STATE(103)] = 3577,
  [SMALL_STATE(104)] = 3596,
  [SMALL_STATE(105)] = 3611,
  [SMALL_STATE(106)] = 3626,
  [SMALL_STATE(107)] = 3642,
  [SMALL_STATE(108)] = 3658,
  [SMALL_STATE(109)] = 3674,
  [SMALL_STATE(110)] = 3694,
  [SMALL_STATE(111)] = 3710,
  [SMALL_STATE(112)] = 3729,
  [SMALL_STATE(113)] = 3742,
  [SMALL_STATE(114)] = 3755,
  [SMALL_STATE(115)] = 3774,
  [SMALL_STATE(116)] = 3787,
  [SMALL_STATE(117)] = 3806,
  [SMALL_STATE(118)] = 3819,
  [SMALL_STATE(119)] = 3832,
  [SMALL_STATE(120)] = 3845,
  [SMALL_STATE(121)] = 3860,
  [SMALL_STATE(122)] = 3873,
  [SMALL_STATE(123)] = 3892,
  [SMALL_STATE(124)] = 3911,
  [SMALL_STATE(125)] = 3924,
  [SMALL_STATE(126)] = 3937,
  [SMALL_STATE(127)] = 3950,
  [SMALL_STATE(128)] = 3963,
  [SMALL_STATE(129)] = 3976,
  [SMALL_STATE(130)] = 3989,
  [SMALL_STATE(131)] = 4008,
  [SMALL_STATE(132)] = 4027,
  [SMALL_STATE(133)] = 4046,
  [SMALL_STATE(134)] = 4063,
  [SMALL_STATE(135)] = 4079,
  [SMALL_STATE(136)] = 4092,
  [SMALL_STATE(137)] = 4105,
  [SMALL_STATE(138)] = 4118,
  [SMALL_STATE(139)] = 4133,
  [SMALL_STATE(140)] = 4146,
  [SMALL_STATE(141)] = 4161,
  [SMALL_STATE(142)] = 4176,
  [SMALL_STATE(143)] = 4186,
  [SMALL_STATE(144)] = 4196,
  [SMALL_STATE(145)] = 4206,
  [SMALL_STATE(146)] = 4216,
  [SMALL_STATE(147)] = 4229,
  [SMALL_STATE(148)] = 4240,
  [SMALL_STATE(149)] = 4253,
  [SMALL_STATE(150)] = 4266,
  [SMALL_STATE(151)] = 4277,
  [SMALL_STATE(152)] = 4290,
  [SMALL_STATE(153)] = 4303,
  [SMALL_STATE(154)] = 4314,
  [SMALL_STATE(155)] = 4327,
  [SMALL_STATE(156)] = 4337,
  [SMALL_STATE(157)] = 4347,
  [SMALL_STATE(158)] = 4357,
  [SMALL_STATE(159)] = 4367,
  [SMALL_STATE(160)] = 4377,
  [SMALL_STATE(161)] = 4387,
  [SMALL_STATE(162)] = 4397,
  [SMALL_STATE(163)] = 4407,
  [SMALL_STATE(164)] = 4417,
  [SMALL_STATE(165)] = 4427,
  [SMALL_STATE(166)] = 4434,
  [SMALL_STATE(167)] = 4441,
  [SMALL_STATE(168)] = 4448,
  [SMALL_STATE(169)] = 4455,
  [SMALL_STATE(170)] = 4462,
  [SMALL_STATE(171)] = 4469,
  [SMALL_STATE(172)] = 4476,
  [SMALL_STATE(173)] = 4483,
  [SMALL_STATE(174)] = 4490,
  [SMALL_STATE(175)] = 4497,
  [SMALL_STATE(176)] = 4504,
  [SMALL_STATE(177)] = 4511,
  [SMALL_STATE(178)] = 4518,
  [SMALL_STATE(179)] = 4525,
  [SMALL_STATE(180)] = 4532,
  [SMALL_STATE(181)] = 4539,
  [SMALL_STATE(182)] = 4546,
  [SMALL_STATE(183)] = 4553,
  [SMALL_STATE(184)] = 4560,
  [SMALL_STATE(185)] = 4567,
  [SMALL_STATE(186)] = 4574,
  [SMALL_STATE(187)] = 4581,
  [SMALL_STATE(188)] = 4588,
  [SMALL_STATE(189)] = 4595,
  [SMALL_STATE(190)] = 4602,
  [SMALL_STATE(191)] = 4609,
  [SMALL_STATE(192)] = 4616,
  [SMALL_STATE(193)] = 4623,
  [SMALL_STATE(194)] = 4630,
  [SMALL_STATE(195)] = 4637,
  [SMALL_STATE(196)] = 4644,
  [SMALL_STATE(197)] = 4651,
  [SMALL_STATE(198)] = 4658,
  [SMALL_STATE(199)] = 4665,
  [SMALL_STATE(200)] = 4672,
  [SMALL_STATE(201)] = 4679,
  [SMALL_STATE(202)] = 4686,
  [SMALL_STATE(203)] = 4693,
  [SMALL_STATE(204)] = 4700,
  [SMALL_STATE(205)] = 4707,
  [SMALL_STATE(206)] = 4714,
  [SMALL_STATE(207)] = 4721,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deck_declaration, 3, 0, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deck_declaration, 3, 0, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_noise_declaration, 3, 0, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_noise_declaration, 3, 0, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parrot_declaration, 3, 0, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parrot_declaration, 3, 0, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding_declaration, 3, 0, 7),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_binding_declaration, 3, 0, 7),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_declaration, 3, 0, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_declaration, 3, 0, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_import_declaration, 4, 0, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_import_declaration, 4, 0, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, 0, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, 0, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1, 0, 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1, 0, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamepad_declaration, 3, 0, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gamepad_declaration, 3, 0, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 3, 0, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 3, 0, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app_declaration, 3, 0, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app_declaration, 3, 0, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_face_declaration, 3, 0, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_face_declaration, 3, 0, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 9),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 9),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_seq_repeat1, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 3, 0, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3, 0, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_rule, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat1, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_word, 1, 0, 0), REDUCE(sym_identifier, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 6),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_repeat1, 2, 0, 0),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 3, 0, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, 0, 8),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, 0, 11),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 10),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 3, 0, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_interpolation, 1, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_interpolation, 1, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_escapesequence, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_escapesequence, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2, 0, 0),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 5, 0, 12),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, 0, 12),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 4, 0, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, 0, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2, 0, 0),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_modifier, 1, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matches_repeat2, 2, 0, 0), SHIFT_REPEAT(151),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_repeat2, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app_binding, 3, 0, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_face_binding, 3, 0, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deck_binding, 3, 0, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamepad_binding, 3, 0, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_noise_binding, 3, 0, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parrot_binding, 3, 0, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [582] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__string_start = 3,
  ts_external_token_string_content = 4,
  ts_external_token__string_end = 5,
  ts_external_token_comment = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token_string_content] = sym_string_content,
  [ts_external_token__string_end] = sym__string_end,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_talon_external_scanner_create(void);
void tree_sitter_talon_external_scanner_destroy(void *);
bool tree_sitter_talon_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_talon_external_scanner_serialize(void *, char *);
void tree_sitter_talon_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_talon(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_talon_external_scanner_create,
      tree_sitter_talon_external_scanner_destroy,
      tree_sitter_talon_external_scanner_scan,
      tree_sitter_talon_external_scanner_serialize,
      tree_sitter_talon_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
