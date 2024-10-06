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
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 2
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 18

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_NULL = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_int_literal = 7,
  sym_float_literal = 8,
  sym_imaginary_literal = 9,
  sym_raw_string_literal = 10,
  anon_sym_DOT = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_DQUOTE2 = 13,
  sym__interpreted_string_literal_basic_content = 14,
  sym_escape_sequence = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_COMMA = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_PERCENT = 23,
  anon_sym_LT_LT = 24,
  anon_sym_GT_GT = 25,
  anon_sym_AMP = 26,
  anon_sym_AMP_CARET = 27,
  anon_sym_PLUS = 28,
  anon_sym_DASH = 29,
  anon_sym_PIPE = 30,
  anon_sym_CARET = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_LT = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_GT = 36,
  anon_sym_GT_EQ = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE_PIPE = 39,
  anon_sym_COLON = 40,
  anon_sym_any = 41,
  anon_sym_int = 42,
  anon_sym_uint = 43,
  anon_sym_bool = 44,
  anon_sym_string = 45,
  anon_sym_double = 46,
  anon_sym_bytes = 47,
  anon_sym_duration = 48,
  anon_sym_timestampt = 49,
  sym_nil = 50,
  sym_true = 51,
  sym_false = 52,
  sym_relation_literal = 53,
  sym_permission_literal = 54,
  sym_definition_literal = 55,
  sym_caveat_literal = 56,
  sym_stabby = 57,
  sym_hash_literal = 58,
  sym_comment = 59,
  sym__whitespace = 60,
  sym_source_file = 61,
  sym__top_level_declaration = 62,
  sym_relation = 63,
  sym_permission = 64,
  sym_block = 65,
  sym_definition = 66,
  sym_caveat = 67,
  sym_block_c = 68,
  sym_expression_statement = 69,
  sym__simple_statement = 70,
  sym__expression = 71,
  sym__field_identifier = 72,
  sym__string_literal = 73,
  sym_selector_expression = 74,
  sym_interpreted_string_literal = 75,
  sym_parenthesized_expression = 76,
  sym_call_expression = 77,
  sym_argument_list = 78,
  sym_special_argument_list = 79,
  sym_type_arguments = 80,
  sym_binary_expression = 81,
  sym__statement = 82,
  sym__statement_list = 83,
  sym_empty_labeled_statement = 84,
  sym_parameters_list = 85,
  sym_parameter_declaration = 86,
  sym__type = 87,
  sym_perm_expression = 88,
  sym_parenthesized_perm_expression = 89,
  sym_rel_expression = 90,
  sym_parenthesized_type = 91,
  sym__simple_type = 92,
  sym_plus_literal = 93,
  sym_minus_literal = 94,
  sym_amp_literal = 95,
  sym_pipe_literal = 96,
  sym_slash_literal = 97,
  sym_wildcard_literal = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym_block_repeat1 = 100,
  aux_sym_definition_repeat1 = 101,
  aux_sym_interpreted_string_literal_repeat1 = 102,
  aux_sym_argument_list_repeat1 = 103,
  aux_sym_type_arguments_repeat1 = 104,
  aux_sym__statement_list_repeat1 = 105,
  aux_sym_parameters_list_repeat1 = 106,
  aux_sym_parameter_declaration_repeat1 = 107,
  aux_sym_perm_expression_repeat1 = 108,
  aux_sym_rel_expression_repeat1 = 109,
  alias_sym_field_identifier = 110,
  alias_sym_label_name = 111,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_NULL] = "\0",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_imaginary_literal] = "imaginary_literal",
  [sym_raw_string_literal] = "raw_string_literal",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_CARET] = "&^",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_COLON] = ":",
  [anon_sym_any] = "any",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_double] = "double",
  [anon_sym_bytes] = "bytes",
  [anon_sym_duration] = "duration",
  [anon_sym_timestampt] = "timestampt",
  [sym_nil] = "nil",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_relation_literal] = "relation_literal",
  [sym_permission_literal] = "permission_literal",
  [sym_definition_literal] = "definition_literal",
  [sym_caveat_literal] = "caveat_literal",
  [sym_stabby] = "stabby",
  [sym_hash_literal] = "hash_literal",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym_relation] = "relation",
  [sym_permission] = "permission",
  [sym_block] = "block",
  [sym_definition] = "definition",
  [sym_caveat] = "caveat",
  [sym_block_c] = "block_c",
  [sym_expression_statement] = "expression_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym__expression] = "_expression",
  [sym__field_identifier] = "_field_identifier",
  [sym__string_literal] = "_string_literal",
  [sym_selector_expression] = "selector_expression",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_special_argument_list] = "argument_list",
  [sym_type_arguments] = "type_arguments",
  [sym_binary_expression] = "binary_expression",
  [sym__statement] = "_statement",
  [sym__statement_list] = "_statement_list",
  [sym_empty_labeled_statement] = "labeled_statement",
  [sym_parameters_list] = "parameters_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym__type] = "_type",
  [sym_perm_expression] = "perm_expression",
  [sym_parenthesized_perm_expression] = "parenthesized_perm_expression",
  [sym_rel_expression] = "rel_expression",
  [sym_parenthesized_type] = "parenthesized_type",
  [sym__simple_type] = "_simple_type",
  [sym_plus_literal] = "plus_literal",
  [sym_minus_literal] = "minus_literal",
  [sym_amp_literal] = "amp_literal",
  [sym_pipe_literal] = "pipe_literal",
  [sym_slash_literal] = "slash_literal",
  [sym_wildcard_literal] = "wildcard_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_definition_repeat1] = "definition_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_type_arguments_repeat1] = "type_arguments_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_parameters_list_repeat1] = "parameters_list_repeat1",
  [aux_sym_parameter_declaration_repeat1] = "parameter_declaration_repeat1",
  [aux_sym_perm_expression_repeat1] = "perm_expression_repeat1",
  [aux_sym_rel_expression_repeat1] = "rel_expression_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
  [alias_sym_label_name] = "label_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_imaginary_literal] = sym_imaginary_literal,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_CARET] = anon_sym_AMP_CARET,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_timestampt] = anon_sym_timestampt,
  [sym_nil] = sym_nil,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_relation_literal] = sym_relation_literal,
  [sym_permission_literal] = sym_permission_literal,
  [sym_definition_literal] = sym_definition_literal,
  [sym_caveat_literal] = sym_caveat_literal,
  [sym_stabby] = sym_stabby,
  [sym_hash_literal] = sym_hash_literal,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym_relation] = sym_relation,
  [sym_permission] = sym_permission,
  [sym_block] = sym_block,
  [sym_definition] = sym_definition,
  [sym_caveat] = sym_caveat,
  [sym_block_c] = sym_block_c,
  [sym_expression_statement] = sym_expression_statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym__expression] = sym__expression,
  [sym__field_identifier] = sym__field_identifier,
  [sym__string_literal] = sym__string_literal,
  [sym_selector_expression] = sym_selector_expression,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_special_argument_list] = sym_argument_list,
  [sym_type_arguments] = sym_type_arguments,
  [sym_binary_expression] = sym_binary_expression,
  [sym__statement] = sym__statement,
  [sym__statement_list] = sym__statement_list,
  [sym_empty_labeled_statement] = sym_empty_labeled_statement,
  [sym_parameters_list] = sym_parameters_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym__type] = sym__type,
  [sym_perm_expression] = sym_perm_expression,
  [sym_parenthesized_perm_expression] = sym_parenthesized_perm_expression,
  [sym_rel_expression] = sym_rel_expression,
  [sym_parenthesized_type] = sym_parenthesized_type,
  [sym__simple_type] = sym__simple_type,
  [sym_plus_literal] = sym_plus_literal,
  [sym_minus_literal] = sym_minus_literal,
  [sym_amp_literal] = sym_amp_literal,
  [sym_pipe_literal] = sym_pipe_literal,
  [sym_slash_literal] = sym_slash_literal,
  [sym_wildcard_literal] = sym_wildcard_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_definition_repeat1] = aux_sym_definition_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_type_arguments_repeat1] = aux_sym_type_arguments_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_parameters_list_repeat1] = aux_sym_parameters_list_repeat1,
  [aux_sym_parameter_declaration_repeat1] = aux_sym_parameter_declaration_repeat1,
  [aux_sym_perm_expression_repeat1] = aux_sym_perm_expression_repeat1,
  [aux_sym_rel_expression_repeat1] = aux_sym_rel_expression_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
  [alias_sym_label_name] = alias_sym_label_name,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_imaginary_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
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
  [sym__interpreted_string_literal_basic_content] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_SLASH] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_CARET] = {
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestampt] = {
    .visible = true,
    .named = false,
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
  [sym_relation_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_permission_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_stabby] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_permission] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_caveat] = {
    .visible = true,
    .named = true,
  },
  [sym_block_c] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
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
  [sym_special_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_list] = {
    .visible = false,
    .named = true,
  },
  [sym_empty_labeled_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_perm_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_perm_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_rel_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_type] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_type] = {
    .visible = false,
    .named = true,
  },
  [sym_plus_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_minus_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_amp_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_slash_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_perm_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rel_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_label_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_body = 2,
  field_field = 3,
  field_function = 4,
  field_label = 5,
  field_left = 6,
  field_name = 7,
  field_operand = 8,
  field_operator = 9,
  field_param_name = 10,
  field_permission = 11,
  field_permission_expresssion = 12,
  field_relation = 13,
  field_relation_expression = 14,
  field_relation_name = 15,
  field_right = 16,
  field_type = 17,
  field_type_arguments = 18,
  field_type_parameters = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_field] = "field",
  [field_function] = "function",
  [field_label] = "label",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_param_name] = "param_name",
  [field_permission] = "permission",
  [field_permission_expresssion] = "permission_expresssion",
  [field_relation] = "relation",
  [field_relation_expression] = "relation_expression",
  [field_relation_name] = "relation_name",
  [field_right] = "right",
  [field_type] = "type",
  [field_type_arguments] = "type_arguments",
  [field_type_parameters] = "type_parameters",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 2},
  [9] = {.index = 17, .length = 1},
  [10] = {.index = 18, .length = 3},
  [11] = {.index = 21, .length = 2},
  [12] = {.index = 23, .length = 1},
  [13] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 3},
  [17] = {.index = 31, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_body, 2},
    {field_name, 1},
  [3] =
    {field_name, 1},
    {field_type_parameters, 2},
  [5] =
    {field_type, 0},
  [6] =
    {field_body, 3},
    {field_name, 1},
    {field_type_parameters, 2},
  [9] =
    {field_relation, 0},
    {field_relation_expression, 2},
    {field_relation_name, 1},
  [12] =
    {field_param_name, 1},
    {field_permission, 0},
    {field_permission_expresssion, 2},
  [15] =
    {field_name, 0},
    {field_type, 1},
  [17] =
    {field_name, 1},
  [18] =
    {field_name, 0},
    {field_name, 1, .inherited = true},
    {field_type, 2},
  [21] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [23] =
    {field_label, 0},
  [24] =
    {field_arguments, 1},
    {field_function, 0},
  [26] =
    {field_field, 2},
    {field_operand, 0},
  [28] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [31] =
    {field_arguments, 2},
    {field_function, 0},
    {field_type_arguments, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [12] = {
    [0] = alias_sym_label_name,
  },
  [14] = {
    [0] = alias_sym_field_identifier,
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
  [10] = 10,
  [11] = 10,
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
  [27] = 6,
  [28] = 7,
  [29] = 8,
  [30] = 2,
  [31] = 5,
  [32] = 32,
  [33] = 9,
  [34] = 32,
  [35] = 26,
  [36] = 21,
  [37] = 23,
  [38] = 15,
  [39] = 13,
  [40] = 17,
  [41] = 19,
  [42] = 18,
  [43] = 16,
  [44] = 20,
  [45] = 12,
  [46] = 25,
  [47] = 24,
  [48] = 14,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 57,
  [58] = 58,
  [59] = 57,
  [60] = 58,
  [61] = 53,
  [62] = 55,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 67,
  [68] = 65,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 63,
  [73] = 73,
  [74] = 69,
  [75] = 70,
  [76] = 71,
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
  [89] = 88,
  [90] = 90,
  [91] = 91,
  [92] = 82,
  [93] = 93,
  [94] = 84,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 106,
  [107] = 101,
  [108] = 100,
  [109] = 109,
  [110] = 110,
  [111] = 102,
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
  [131] = 127,
  [132] = 124,
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
  [153] = 141,
  [154] = 154,
  [155] = 149,
  [156] = 156,
  [157] = 152,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 159,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 165,
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
  [180] = 175,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
};

static TSCharacterRange sym_identifier_character_set_1[] = {
  {'/', '/'}, {':', ':'}, {'=', '='}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5},
  {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee},
  {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1},
  {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2},
  {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff},
  {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815},
  {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9},
  {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8},
  {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1},
  {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39},
  {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3},
  {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28},
  {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83},
  {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa},
  {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a},
  {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9},
  {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d},
  {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd},
  {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3},
  {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00},
  {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061},
  {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa},
  {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0},
  {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a},
  {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8},
  {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc},
  {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974},
  {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0},
  {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf},
  {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45},
  {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc},
  {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc},
  {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d},
  {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e},
  {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67},
  {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce},
  {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f},
  {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf},
  {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d},
  {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801},
  {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe},
  {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe},
  {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6},
  {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e},
  {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3},
  {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28},
  {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f},
  {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7},
  {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d},
  {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375},
  {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563},
  {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc},
  {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808},
  {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5},
  {0x10900, 0x10915},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(105);
      ADVANCE_MAP(
        0, 212,
        '\n', 106,
        '!', 137,
        '"', 124,
        '#', 212,
        '%', 212,
        '&', 125,
        '(', 212,
        ')', 212,
        '*', 212,
        '+', 212,
        ',', 212,
        '-', 139,
        '.', 207,
        '/', 127,
        '0', 130,
        ':', 211,
        ';', 212,
        '<', 135,
        '=', 138,
        '>', 136,
        '[', 212,
        '\\', 13,
        ']', 212,
        '^', 212,
        '`', 147,
        'a', 177,
        'b', 181,
        'c', 148,
        'd', 154,
        'i', 179,
        'p', 157,
        'r', 155,
        's', 195,
        't', 163,
        'u', 164,
        '{', 212,
        '|', 200,
        '}', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(212);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        0, 108,
        '\n', 106,
        '!', 11,
        '%', 224,
        '&', 228,
        '(', 216,
        '*', 221,
        '+', 230,
        '-', 231,
        '.', 122,
        '/', 222,
        ':', 244,
        ';', 107,
        '<', 238,
        '=', 12,
        '>', 240,
        '[', 219,
        '^', 235,
        '{', 109,
        '|', 234,
        '}', 110,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(330);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(330);
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 123,
        '#', 270,
        '&', 227,
        '(', 216,
        ')', 217,
        '*', 221,
        '+', 230,
        '-', 232,
        '.', 91,
        '/', 271,
        '0', 111,
        '`', 17,
        '|', 233,
        '}', 110,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '#', 270,
        '&', 227,
        '(', 216,
        '*', 221,
        '+', 230,
        '-', 232,
        '/', 271,
        'p', 279,
        'r', 280,
        '|', 233,
        '}', 110,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(330);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '(', 216,
        ')', 217,
        ',', 218,
        '/', 271,
        'a', 295,
        'b', 302,
        'd', 303,
        'i', 300,
        's', 320,
        't', 282,
        'u', 286,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(330);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '_') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '{') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(330);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(237);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(236);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '`') ADVANCE(121);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(253);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 83:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 85:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 87:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 88:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      if (eof) ADVANCE(105);
      ADVANCE_MAP(
        '!', 11,
        '%', 224,
        '&', 228,
        '(', 216,
        ')', 217,
        '*', 221,
        '+', 230,
        ',', 218,
        '-', 231,
        '.', 122,
        '/', 222,
        '<', 238,
        '=', 12,
        '>', 240,
        '[', 219,
        ']', 220,
        '^', 235,
        'a', 49,
        'b', 58,
        'c', 18,
        'd', 24,
        'i', 55,
        'p', 28,
        'r', 25,
        's', 78,
        't', 33,
        'u', 38,
        '|', 234,
        '}', 110,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(330);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_int_literal);
      ADVANCE_MAP(
        '.', 119,
        '_', 88,
        'i', 120,
        'B', 14,
        'b', 14,
        'E', 85,
        'e', 85,
        'O', 15,
        'o', 15,
        'X', 9,
        'x', 9,
        '8', 8,
        '9', 8,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '_') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '&') ADVANCE(212);
      if (lookahead == '^') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '/') ADVANCE(211);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      ADVANCE_MAP(
        '.', 162,
        '_', 204,
        'i', 212,
        'B', 142,
        'b', 142,
        'E', 201,
        'e', 201,
        'O', 144,
        'o', 144,
        'X', 133,
        'x', 133,
        '8', 132,
        '9', 132,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '_') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == '_') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '_') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '_') ADVANCE(209);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '=') ADVANCE(211);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(203);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(210);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '`') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'a') ADVANCE(198);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'a') ADVANCE(192);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'a') ADVANCE(173);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'a') ADVANCE(196);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'b') ADVANCE(172);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(211);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 'u') ADVANCE(185);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(171);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(188);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(186);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(190);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(149);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'f') ADVANCE(166);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'g') ADVANCE(211);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'i') ADVANCE(174);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'i') ADVANCE(179);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'i') ADVANCE(183);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'i') ADVANCE(180);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'i') ADVANCE(189);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'i') ADVANCE(178);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'i') ADVANCE(196);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'l') ADVANCE(211);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'l') ADVANCE(151);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'l') ADVANCE(153);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'm') ADVANCE(184);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'm') ADVANCE(158);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'm') ADVANCE(167);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'n') ADVANCE(211);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'n') ADVANCE(199);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'n') ADVANCE(161);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'n') ADVANCE(192);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'n') ADVANCE(169);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 'y') ADVANCE(194);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'o') ADVANCE(170);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'o') ADVANCE(176);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'p') ADVANCE(192);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'r') ADVANCE(151);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'r') ADVANCE(175);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'r') ADVANCE(168);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 's') ADVANCE(211);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 's') ADVANCE(191);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 's') ADVANCE(193);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 's') ADVANCE(165);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 't') ADVANCE(211);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 't') ADVANCE(150);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 't') ADVANCE(156);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 't') ADVANCE(187);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 't') ADVANCE(165);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'u') ADVANCE(152);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'v') ADVANCE(159);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'y') ADVANCE(211);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(329);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(327);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(242);
      if (lookahead == '^') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_AMP_CARET);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(269);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(243);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '>') ADVANCE(226);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_any);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_int);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_uint);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_bool);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_string);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_double);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_duration);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_timestampt);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_timestampt);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_relation_literal);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_relation_literal);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_permission_literal);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_permission_literal);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_definition_literal);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_caveat_literal);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_stabby);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_hash_literal);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(327);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(292);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(322);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(323);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(290);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(312);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(256);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(314);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(311);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(291);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(254);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(294);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(305);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(296);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(313);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(301);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(306);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(307);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(252);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(277);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(274);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(308);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(285);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(278);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(325);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(281);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(260);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(264);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(266);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(317);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(318);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == 'y') ADVANCE(316);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(309);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(289);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(297);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(298);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(299);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(319);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(273);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(284);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(293);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(258);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(315);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(321);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(288);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(276);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(248);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(250);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(262);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(310);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(272);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(283);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(287);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(275);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(246);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__whitespace);
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
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 104},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 104},
  [11] = {.lex_state = 104},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 104},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 104},
  [28] = {.lex_state = 104},
  [29] = {.lex_state = 104},
  [30] = {.lex_state = 104},
  [31] = {.lex_state = 104},
  [32] = {.lex_state = 104},
  [33] = {.lex_state = 104},
  [34] = {.lex_state = 104},
  [35] = {.lex_state = 104},
  [36] = {.lex_state = 104},
  [37] = {.lex_state = 104},
  [38] = {.lex_state = 104},
  [39] = {.lex_state = 104},
  [40] = {.lex_state = 104},
  [41] = {.lex_state = 104},
  [42] = {.lex_state = 104},
  [43] = {.lex_state = 104},
  [44] = {.lex_state = 104},
  [45] = {.lex_state = 104},
  [46] = {.lex_state = 104},
  [47] = {.lex_state = 104},
  [48] = {.lex_state = 104},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 104},
  [81] = {.lex_state = 104},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 104},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 104},
  [86] = {.lex_state = 104},
  [87] = {.lex_state = 104},
  [88] = {.lex_state = 104},
  [89] = {.lex_state = 104},
  [90] = {.lex_state = 104},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 104},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 104},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 104},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 104},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 104},
  [114] = {.lex_state = 104},
  [115] = {.lex_state = 104},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 104},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 104},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 104},
  [140] = {.lex_state = 104},
  [141] = {.lex_state = 104},
  [142] = {.lex_state = 104},
  [143] = {.lex_state = 104},
  [144] = {.lex_state = 104},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 104},
  [149] = {.lex_state = 104},
  [150] = {.lex_state = 104},
  [151] = {.lex_state = 104},
  [152] = {.lex_state = 104},
  [153] = {.lex_state = 104},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 104},
  [156] = {.lex_state = 104},
  [157] = {.lex_state = 104},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 104},
  [161] = {.lex_state = 104},
  [162] = {.lex_state = 104},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 104},
  [165] = {.lex_state = 104},
  [166] = {.lex_state = 104},
  [167] = {.lex_state = 104},
  [168] = {.lex_state = 104},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 104},
  [171] = {.lex_state = 104},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 104},
  [174] = {.lex_state = 104},
  [175] = {.lex_state = 104},
  [176] = {.lex_state = 104},
  [177] = {.lex_state = 104},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 104},
  [181] = {.lex_state = 104},
  [182] = {.lex_state = 104},
  [183] = {.lex_state = 104},
  [184] = {.lex_state = 104},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_imaginary_literal] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym__interpreted_string_literal_basic_content] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_CARET] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_timestampt] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_relation_literal] = ACTIONS(1),
    [sym_permission_literal] = ACTIONS(1),
    [sym_definition_literal] = ACTIONS(1),
    [sym_caveat_literal] = ACTIONS(1),
    [sym_stabby] = ACTIONS(1),
    [sym_hash_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(181),
    [sym__top_level_declaration] = STATE(134),
    [sym_definition] = STATE(134),
    [sym_caveat] = STATE(134),
    [aux_sym_source_file_repeat1] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_definition_literal] = ACTIONS(7),
    [sym_caveat_literal] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    STATE(15), 1,
      sym_argument_list,
    STATE(168), 1,
      sym_type_arguments,
    ACTIONS(23), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(29), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(13), 6,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [59] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_COLON,
    STATE(15), 1,
      sym_special_argument_list,
    ACTIONS(37), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 20,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [104] = 16,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_AMP_AMP,
    ACTIONS(45), 1,
      anon_sym_PIPE_PIPE,
    STATE(15), 1,
      sym_argument_list,
    STATE(168), 1,
      sym_type_arguments,
    ACTIONS(23), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(29), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(41), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [167] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_AMP_AMP,
    STATE(15), 1,
      sym_argument_list,
    STATE(168), 1,
      sym_type_arguments,
    ACTIONS(23), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(29), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(13), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [228] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_argument_list,
    STATE(168), 1,
      sym_type_arguments,
    ACTIONS(47), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 18,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [277] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_argument_list,
    STATE(168), 1,
      sym_type_arguments,
    ACTIONS(23), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(13), 13,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [330] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    STATE(15), 1,
      sym_argument_list,
    STATE(168), 1,
      sym_type_arguments,
    ACTIONS(23), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(21), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(13), 10,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [387] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_special_argument_list,
    ACTIONS(37), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 20,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [429] = 17,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_AMP_AMP,
    ACTIONS(71), 1,
      anon_sym_PIPE_PIPE,
    STATE(38), 1,
      sym_argument_list,
    STATE(152), 1,
      aux_sym_argument_list_repeat1,
    STATE(165), 1,
      sym_type_arguments,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [493] = 17,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_AMP_AMP,
    ACTIONS(71), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      sym_argument_list,
    STATE(157), 1,
      aux_sym_argument_list_repeat1,
    STATE(165), 1,
      sym_type_arguments,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [557] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [594] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(83), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [631] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(87), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [668] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(91), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [705] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(95), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [742] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(99), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [779] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(103), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [816] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(107), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [853] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(111), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [890] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(115), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [927] = 15,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_AMP_AMP,
    ACTIONS(71), 1,
      anon_sym_PIPE_PIPE,
    STATE(38), 1,
      sym_argument_list,
    STATE(165), 1,
      sym_type_arguments,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(61), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [986] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(121), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1023] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(125), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1060] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(129), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1097] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(133), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 21,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1134] = 8,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_argument_list,
    STATE(165), 1,
      sym_type_arguments,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(47), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1179] = 10,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_argument_list,
    STATE(165), 1,
      sym_type_arguments,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(47), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(13), 11,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1228] = 12,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      sym_argument_list,
    STATE(165), 1,
      sym_type_arguments,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(61), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(13), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1281] = 13,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      sym_argument_list,
    STATE(165), 1,
      sym_type_arguments,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(13), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1336] = 14,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_AMP_AMP,
    STATE(38), 1,
      sym_argument_list,
    STATE(165), 1,
      sym_type_arguments,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1393] = 15,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_AMP_AMP,
    ACTIONS(71), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_argument_list,
    STATE(165), 1,
      sym_type_arguments,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1451] = 5,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_special_argument_list,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(37), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 18,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1489] = 15,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_AMP_AMP,
    ACTIONS(71), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_argument_list,
    STATE(165), 1,
      sym_type_arguments,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(59), 2,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [1547] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(133), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1580] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(115), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1613] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(121), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1646] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(91), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1679] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(83), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1712] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(99), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1745] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(107), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1778] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(103), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1811] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(95), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1844] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(111), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1877] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(79), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1910] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(129), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1943] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(125), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1976] = 3,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(87), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 19,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2009] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    STATE(173), 2,
      sym__statement_list,
      sym_empty_labeled_statement,
    STATE(121), 3,
      sym_expression_statement,
      sym__simple_statement,
      sym__statement,
    ACTIONS(145), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(4), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2057] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_empty_labeled_statement,
    ACTIONS(147), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    STATE(123), 3,
      sym_expression_statement,
      sym__simple_statement,
      sym__statement,
    ACTIONS(145), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(4), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2104] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_empty_labeled_statement,
    ACTIONS(147), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    STATE(123), 3,
      sym_expression_statement,
      sym__simple_statement,
      sym__statement,
    ACTIONS(145), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(4), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2151] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(147), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    STATE(123), 3,
      sym_expression_statement,
      sym__simple_statement,
      sym__statement,
    ACTIONS(145), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(4), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2192] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(161), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(22), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2231] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(161), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(22), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2270] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(161), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(22), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2309] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(161), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(22), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2348] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(177), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(10), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2387] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(161), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(22), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2426] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(185), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(11), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2465] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(161), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(22), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2504] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(161), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(22), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2543] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(161), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(22), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2582] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(197), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(28), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2618] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(201), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(34), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2654] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(207), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(205), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(6), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2690] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(209), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(32), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2726] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(161), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(22), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2762] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(213), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(27), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2798] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(217), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(29), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2834] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(221), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(30), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2870] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(225), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(31), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2906] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(231), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(229), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(7), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [2942] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      sym_parameter_declaration,
    STATE(164), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(241), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [2980] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(245), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(243), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(8), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [3016] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(249), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(247), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(2), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [3052] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(253), 2,
      sym_imaginary_literal,
      sym_raw_string_literal,
    ACTIONS(251), 5,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    STATE(5), 7,
      sym__expression,
      sym__string_literal,
      sym_selector_expression,
      sym_interpreted_string_literal,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_binary_expression,
  [3088] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_parameter_declaration,
    STATE(164), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(241), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3123] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_parameter_declaration,
    STATE(164), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(241), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3158] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym_parameter_declaration,
    STATE(164), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(241), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3190] = 6,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(161), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(261), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3220] = 6,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(166), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(263), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3250] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(276), 1,
      anon_sym_PLUS,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(284), 1,
      sym_stabby,
    ACTIONS(282), 2,
      sym_relation_literal,
      sym_permission_literal,
    STATE(82), 5,
      sym_parenthesized_perm_expression,
      sym_plus_literal,
      sym_minus_literal,
      sym_amp_literal,
      aux_sym_perm_expression_repeat1,
  [3289] = 5,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(162), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(289), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3316] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_AMP,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      sym_stabby,
    ACTIONS(303), 2,
      sym_relation_literal,
      sym_permission_literal,
    STATE(82), 5,
      sym_parenthesized_perm_expression,
      sym_plus_literal,
      sym_minus_literal,
      sym_amp_literal,
      aux_sym_perm_expression_repeat1,
  [3355] = 5,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(162), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(289), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3382] = 4,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(174), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(309), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3406] = 4,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(162), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(289), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3430] = 4,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(141), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(311), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3454] = 4,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(153), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(313), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3478] = 4,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(143), 3,
      sym__type,
      sym_parenthesized_type,
      sym__simple_type,
    ACTIONS(315), 9,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3502] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_AMP,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_stabby,
    STATE(139), 1,
      sym_perm_expression,
    STATE(84), 5,
      sym_parenthesized_perm_expression,
      sym_plus_literal,
      sym_minus_literal,
      sym_amp_literal,
      aux_sym_perm_expression_repeat1,
  [3537] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_AMP,
    ACTIONS(330), 1,
      anon_sym_PLUS,
    ACTIONS(333), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      sym_stabby,
    STATE(92), 5,
      sym_parenthesized_perm_expression,
      sym_plus_literal,
      sym_minus_literal,
      sym_amp_literal,
      aux_sym_perm_expression_repeat1,
  [3572] = 4,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(339), 10,
      anon_sym_LPAREN,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3595] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_AMP,
    ACTIONS(350), 1,
      anon_sym_PLUS,
    ACTIONS(352), 1,
      anon_sym_DASH,
    ACTIONS(354), 1,
      sym_stabby,
    STATE(92), 5,
      sym_parenthesized_perm_expression,
      sym_plus_literal,
      sym_minus_literal,
      sym_amp_literal,
      aux_sym_perm_expression_repeat1,
  [3630] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_AMP,
    ACTIONS(350), 1,
      anon_sym_PLUS,
    ACTIONS(352), 1,
      anon_sym_DASH,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(358), 1,
      sym_stabby,
    STATE(180), 1,
      sym_perm_expression,
    STATE(94), 5,
      sym_parenthesized_perm_expression,
      sym_plus_literal,
      sym_minus_literal,
      sym_amp_literal,
      aux_sym_perm_expression_repeat1,
  [3665] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_AMP,
    ACTIONS(350), 1,
      anon_sym_PLUS,
    ACTIONS(352), 1,
      anon_sym_DASH,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(358), 1,
      sym_stabby,
    STATE(175), 1,
      sym_perm_expression,
    STATE(94), 5,
      sym_parenthesized_perm_expression,
      sym_plus_literal,
      sym_minus_literal,
      sym_amp_literal,
      aux_sym_perm_expression_repeat1,
  [3700] = 2,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 11,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_any,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_duration,
      anon_sym_timestampt,
  [3718] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      sym_hash_literal,
    ACTIONS(373), 2,
      sym_relation_literal,
      sym_permission_literal,
    STATE(98), 3,
      sym_pipe_literal,
      sym_wildcard_literal,
      aux_sym_rel_expression_repeat1,
  [3749] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_STAR,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(388), 1,
      sym_hash_literal,
    ACTIONS(386), 2,
      sym_relation_literal,
      sym_permission_literal,
    STATE(98), 3,
      sym_pipe_literal,
      sym_wildcard_literal,
      aux_sym_rel_expression_repeat1,
  [3780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(390), 4,
      anon_sym_DASH,
      sym_relation_literal,
      sym_permission_literal,
      sym_identifier,
    ACTIONS(392), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PLUS,
      sym_stabby,
  [3800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(394), 4,
      anon_sym_DASH,
      sym_relation_literal,
      sym_permission_literal,
      sym_identifier,
    ACTIONS(396), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PLUS,
      sym_stabby,
  [3820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(398), 4,
      anon_sym_DASH,
      sym_relation_literal,
      sym_permission_literal,
      sym_identifier,
    ACTIONS(400), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PLUS,
      sym_stabby,
  [3840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(402), 4,
      anon_sym_DASH,
      sym_relation_literal,
      sym_permission_literal,
      sym_identifier,
    ACTIONS(404), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PLUS,
      sym_stabby,
  [3860] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(382), 1,
      anon_sym_STAR,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(406), 1,
      sym_identifier,
    ACTIONS(408), 1,
      sym_hash_literal,
    STATE(150), 1,
      sym_rel_expression,
    STATE(99), 3,
      sym_pipe_literal,
      sym_wildcard_literal,
      aux_sym_rel_expression_repeat1,
  [3887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(402), 2,
      anon_sym_DASH,
      sym_identifier,
    ACTIONS(404), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PLUS,
      sym_stabby,
  [3905] = 6,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      sym_definition_literal,
    ACTIONS(415), 1,
      sym_caveat_literal,
    STATE(106), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(134), 3,
      sym__top_level_declaration,
      sym_definition,
      sym_caveat,
  [3927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(394), 2,
      anon_sym_DASH,
      sym_identifier,
    ACTIONS(396), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PLUS,
      sym_stabby,
  [3945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(390), 2,
      anon_sym_DASH,
      sym_identifier,
    ACTIONS(392), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PLUS,
      sym_stabby,
  [3963] = 6,
    ACTIONS(7), 1,
      sym_definition_literal,
    ACTIONS(9), 1,
      sym_caveat_literal,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(134), 3,
      sym__top_level_declaration,
      sym_definition,
      sym_caveat,
  [3985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(420), 3,
      sym_relation_literal,
      sym_permission_literal,
      sym_identifier,
    ACTIONS(422), 4,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_hash_literal,
  [4003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(398), 2,
      anon_sym_DASH,
      sym_identifier,
    ACTIONS(400), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PLUS,
      sym_stabby,
  [4021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(424), 3,
      sym_relation_literal,
      sym_permission_literal,
      sym_identifier,
    ACTIONS(426), 4,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      sym_hash_literal,
  [4039] = 5,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    ACTIONS(430), 1,
      sym_relation_literal,
    ACTIONS(433), 1,
      sym_permission_literal,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(113), 3,
      sym_relation,
      sym_permission,
      aux_sym_block_repeat1,
  [4058] = 5,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    ACTIONS(438), 1,
      sym_relation_literal,
    ACTIONS(440), 1,
      sym_permission_literal,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(113), 3,
      sym_relation,
      sym_permission,
      aux_sym_block_repeat1,
  [4077] = 5,
    ACTIONS(438), 1,
      sym_relation_literal,
    ACTIONS(440), 1,
      sym_permission_literal,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    STATE(114), 3,
      sym_relation,
      sym_permission,
      aux_sym_block_repeat1,
  [4096] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      anon_sym_SLASH,
    STATE(147), 1,
      sym_block,
    STATE(118), 2,
      sym_slash_literal,
      aux_sym_definition_repeat1,
  [4119] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      anon_sym_SLASH,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(158), 1,
      sym_block,
    STATE(116), 2,
      sym_slash_literal,
      aux_sym_definition_repeat1,
  [4142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      anon_sym_SLASH,
    STATE(118), 2,
      sym_slash_literal,
      aux_sym_definition_repeat1,
  [4162] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(460), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4180] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(462), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4198] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(467), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4216] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_block_c,
    ACTIONS(471), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4234] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(465), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
  [4247] = 4,
    ACTIONS(475), 1,
      anon_sym_DQUOTE2,
    STATE(128), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(477), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [4262] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(479), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LBRACE,
  [4275] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(481), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LBRACE,
  [4288] = 4,
    ACTIONS(483), 1,
      anon_sym_DQUOTE2,
    STATE(124), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(485), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [4303] = 4,
    ACTIONS(487), 1,
      anon_sym_DQUOTE2,
    STATE(128), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(489), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [4318] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(492), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LBRACE,
  [4331] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(494), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LBRACE,
  [4344] = 4,
    ACTIONS(496), 1,
      anon_sym_DQUOTE2,
    STATE(132), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(498), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [4359] = 4,
    ACTIONS(500), 1,
      anon_sym_DQUOTE2,
    STATE(128), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(477), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [4374] = 4,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4388] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(505), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4400] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(507), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4412] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(509), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4424] = 4,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_parameters_list_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4438] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(513), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4450] = 2,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(515), 3,
      anon_sym_RBRACE,
      sym_relation_literal,
      sym_permission_literal,
  [4460] = 4,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4474] = 4,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4488] = 4,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_parameters_list_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4502] = 4,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4516] = 2,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(534), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4526] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(536), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4538] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(538), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4550] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(540), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4562] = 4,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_parameters_list_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4576] = 4,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4590] = 2,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(549), 3,
      anon_sym_RBRACE,
      sym_relation_literal,
      sym_permission_literal,
  [4600] = 2,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 3,
      ts_builtin_sym_end,
      sym_definition_literal,
      sym_caveat_literal,
  [4610] = 4,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4624] = 4,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 2,
      anon_sym_SLASH,
      sym_identifier,
  [4652] = 4,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4666] = 4,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4680] = 4,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4694] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(567), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_NULL,
  [4706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(569), 1,
      sym_identifier,
    STATE(14), 1,
      sym__field_identifier,
  [4719] = 2,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(542), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4728] = 2,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(571), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4737] = 2,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(520), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(573), 1,
      sym_identifier,
    STATE(48), 1,
      sym__field_identifier,
  [4759] = 2,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(575), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4768] = 3,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_argument_list,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4779] = 2,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(577), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4788] = 3,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_parameters_list,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4799] = 3,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_argument_list,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(581), 1,
      sym_identifier,
  [4820] = 2,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4828] = 2,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(585), 1,
      sym_identifier,
  [4846] = 2,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4854] = 2,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4862] = 2,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4870] = 2,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4878] = 2,
    ACTIONS(595), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(597), 1,
      sym_identifier,
  [4896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__whitespace,
    ACTIONS(599), 1,
      sym_identifier,
  [4906] = 2,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4914] = 2,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4922] = 2,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4930] = 2,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
  [4938] = 2,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 167,
  [SMALL_STATE(6)] = 228,
  [SMALL_STATE(7)] = 277,
  [SMALL_STATE(8)] = 330,
  [SMALL_STATE(9)] = 387,
  [SMALL_STATE(10)] = 429,
  [SMALL_STATE(11)] = 493,
  [SMALL_STATE(12)] = 557,
  [SMALL_STATE(13)] = 594,
  [SMALL_STATE(14)] = 631,
  [SMALL_STATE(15)] = 668,
  [SMALL_STATE(16)] = 705,
  [SMALL_STATE(17)] = 742,
  [SMALL_STATE(18)] = 779,
  [SMALL_STATE(19)] = 816,
  [SMALL_STATE(20)] = 853,
  [SMALL_STATE(21)] = 890,
  [SMALL_STATE(22)] = 927,
  [SMALL_STATE(23)] = 986,
  [SMALL_STATE(24)] = 1023,
  [SMALL_STATE(25)] = 1060,
  [SMALL_STATE(26)] = 1097,
  [SMALL_STATE(27)] = 1134,
  [SMALL_STATE(28)] = 1179,
  [SMALL_STATE(29)] = 1228,
  [SMALL_STATE(30)] = 1281,
  [SMALL_STATE(31)] = 1336,
  [SMALL_STATE(32)] = 1393,
  [SMALL_STATE(33)] = 1451,
  [SMALL_STATE(34)] = 1489,
  [SMALL_STATE(35)] = 1547,
  [SMALL_STATE(36)] = 1580,
  [SMALL_STATE(37)] = 1613,
  [SMALL_STATE(38)] = 1646,
  [SMALL_STATE(39)] = 1679,
  [SMALL_STATE(40)] = 1712,
  [SMALL_STATE(41)] = 1745,
  [SMALL_STATE(42)] = 1778,
  [SMALL_STATE(43)] = 1811,
  [SMALL_STATE(44)] = 1844,
  [SMALL_STATE(45)] = 1877,
  [SMALL_STATE(46)] = 1910,
  [SMALL_STATE(47)] = 1943,
  [SMALL_STATE(48)] = 1976,
  [SMALL_STATE(49)] = 2009,
  [SMALL_STATE(50)] = 2057,
  [SMALL_STATE(51)] = 2104,
  [SMALL_STATE(52)] = 2151,
  [SMALL_STATE(53)] = 2192,
  [SMALL_STATE(54)] = 2231,
  [SMALL_STATE(55)] = 2270,
  [SMALL_STATE(56)] = 2309,
  [SMALL_STATE(57)] = 2348,
  [SMALL_STATE(58)] = 2387,
  [SMALL_STATE(59)] = 2426,
  [SMALL_STATE(60)] = 2465,
  [SMALL_STATE(61)] = 2504,
  [SMALL_STATE(62)] = 2543,
  [SMALL_STATE(63)] = 2582,
  [SMALL_STATE(64)] = 2618,
  [SMALL_STATE(65)] = 2654,
  [SMALL_STATE(66)] = 2690,
  [SMALL_STATE(67)] = 2726,
  [SMALL_STATE(68)] = 2762,
  [SMALL_STATE(69)] = 2798,
  [SMALL_STATE(70)] = 2834,
  [SMALL_STATE(71)] = 2870,
  [SMALL_STATE(72)] = 2906,
  [SMALL_STATE(73)] = 2942,
  [SMALL_STATE(74)] = 2980,
  [SMALL_STATE(75)] = 3016,
  [SMALL_STATE(76)] = 3052,
  [SMALL_STATE(77)] = 3088,
  [SMALL_STATE(78)] = 3123,
  [SMALL_STATE(79)] = 3158,
  [SMALL_STATE(80)] = 3190,
  [SMALL_STATE(81)] = 3220,
  [SMALL_STATE(82)] = 3250,
  [SMALL_STATE(83)] = 3289,
  [SMALL_STATE(84)] = 3316,
  [SMALL_STATE(85)] = 3355,
  [SMALL_STATE(86)] = 3382,
  [SMALL_STATE(87)] = 3406,
  [SMALL_STATE(88)] = 3430,
  [SMALL_STATE(89)] = 3454,
  [SMALL_STATE(90)] = 3478,
  [SMALL_STATE(91)] = 3502,
  [SMALL_STATE(92)] = 3537,
  [SMALL_STATE(93)] = 3572,
  [SMALL_STATE(94)] = 3595,
  [SMALL_STATE(95)] = 3630,
  [SMALL_STATE(96)] = 3665,
  [SMALL_STATE(97)] = 3700,
  [SMALL_STATE(98)] = 3718,
  [SMALL_STATE(99)] = 3749,
  [SMALL_STATE(100)] = 3780,
  [SMALL_STATE(101)] = 3800,
  [SMALL_STATE(102)] = 3820,
  [SMALL_STATE(103)] = 3840,
  [SMALL_STATE(104)] = 3860,
  [SMALL_STATE(105)] = 3887,
  [SMALL_STATE(106)] = 3905,
  [SMALL_STATE(107)] = 3927,
  [SMALL_STATE(108)] = 3945,
  [SMALL_STATE(109)] = 3963,
  [SMALL_STATE(110)] = 3985,
  [SMALL_STATE(111)] = 4003,
  [SMALL_STATE(112)] = 4021,
  [SMALL_STATE(113)] = 4039,
  [SMALL_STATE(114)] = 4058,
  [SMALL_STATE(115)] = 4077,
  [SMALL_STATE(116)] = 4096,
  [SMALL_STATE(117)] = 4119,
  [SMALL_STATE(118)] = 4142,
  [SMALL_STATE(119)] = 4162,
  [SMALL_STATE(120)] = 4180,
  [SMALL_STATE(121)] = 4198,
  [SMALL_STATE(122)] = 4216,
  [SMALL_STATE(123)] = 4234,
  [SMALL_STATE(124)] = 4247,
  [SMALL_STATE(125)] = 4262,
  [SMALL_STATE(126)] = 4275,
  [SMALL_STATE(127)] = 4288,
  [SMALL_STATE(128)] = 4303,
  [SMALL_STATE(129)] = 4318,
  [SMALL_STATE(130)] = 4331,
  [SMALL_STATE(131)] = 4344,
  [SMALL_STATE(132)] = 4359,
  [SMALL_STATE(133)] = 4374,
  [SMALL_STATE(134)] = 4388,
  [SMALL_STATE(135)] = 4400,
  [SMALL_STATE(136)] = 4412,
  [SMALL_STATE(137)] = 4424,
  [SMALL_STATE(138)] = 4438,
  [SMALL_STATE(139)] = 4450,
  [SMALL_STATE(140)] = 4460,
  [SMALL_STATE(141)] = 4474,
  [SMALL_STATE(142)] = 4488,
  [SMALL_STATE(143)] = 4502,
  [SMALL_STATE(144)] = 4516,
  [SMALL_STATE(145)] = 4526,
  [SMALL_STATE(146)] = 4538,
  [SMALL_STATE(147)] = 4550,
  [SMALL_STATE(148)] = 4562,
  [SMALL_STATE(149)] = 4576,
  [SMALL_STATE(150)] = 4590,
  [SMALL_STATE(151)] = 4600,
  [SMALL_STATE(152)] = 4610,
  [SMALL_STATE(153)] = 4624,
  [SMALL_STATE(154)] = 4638,
  [SMALL_STATE(155)] = 4652,
  [SMALL_STATE(156)] = 4666,
  [SMALL_STATE(157)] = 4680,
  [SMALL_STATE(158)] = 4694,
  [SMALL_STATE(159)] = 4706,
  [SMALL_STATE(160)] = 4719,
  [SMALL_STATE(161)] = 4728,
  [SMALL_STATE(162)] = 4737,
  [SMALL_STATE(163)] = 4746,
  [SMALL_STATE(164)] = 4759,
  [SMALL_STATE(165)] = 4768,
  [SMALL_STATE(166)] = 4779,
  [SMALL_STATE(167)] = 4788,
  [SMALL_STATE(168)] = 4799,
  [SMALL_STATE(169)] = 4810,
  [SMALL_STATE(170)] = 4820,
  [SMALL_STATE(171)] = 4828,
  [SMALL_STATE(172)] = 4836,
  [SMALL_STATE(173)] = 4846,
  [SMALL_STATE(174)] = 4854,
  [SMALL_STATE(175)] = 4862,
  [SMALL_STATE(176)] = 4870,
  [SMALL_STATE(177)] = 4878,
  [SMALL_STATE(178)] = 4886,
  [SMALL_STATE(179)] = 4896,
  [SMALL_STATE(180)] = 4906,
  [SMALL_STATE(181)] = 4914,
  [SMALL_STATE(182)] = 4922,
  [SMALL_STATE(183)] = 4930,
  [SMALL_STATE(184)] = 4938,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_argument_list, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_argument_list, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, 0, 15),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, 0, 15),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 13),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 13),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_argument_list, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_argument_list, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, 0, 17),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, 0, 17),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, 0, 14),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, 0, 14),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_argument_list, 5, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_argument_list, 5, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perm_expression, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perm_expression, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perm_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2, 0, 11),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2, 0, 11), SHIFT_REPEAT(169),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2, 0, 9),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rel_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rel_expression_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rel_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rel_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rel_expression_repeat1, 2, 0, 0),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rel_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_expression, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_expression, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_literal, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_literal, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_perm_expression, 3, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_perm_expression, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minus_literal, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minus_literal, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amp_literal, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amp_literal, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_literal, 1, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_literal, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_literal, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_literal, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2, 0, 0),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat, 3, 0, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters_list, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters_list, 5, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, 0, 0),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters_list, 2, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters_list, 4, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_c, 3, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_c, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 3, 0, 7),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caveat, 4, 0, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, 0, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_list_repeat1, 2, 0, 0),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_list_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 3, 0, 6),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slash_literal, 1, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slash_literal, 1, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 2, 0, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, 0, 8),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, 0, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3, 0, 10),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4, 2, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 5, 2, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3, 2, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [603] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 4, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_labeled_statement, 2, 0, 12),
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

TS_PUBLIC const TSLanguage *tree_sitter_authzed(void) {
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
