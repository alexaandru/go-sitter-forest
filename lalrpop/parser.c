#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 518
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_grammar = 1,
  anon_sym_SEMI = 2,
  sym_comment = 3,
  anon_sym_LT = 4,
  anon_sym_COMMA = 5,
  anon_sym_GT = 6,
  anon_sym_SQUOTE = 7,
  sym_identifier = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_COLON = 11,
  anon_sym_where = 12,
  anon_sym_PLUS = 13,
  anon_sym_DASH_GT = 14,
  anon_sym_EQ = 15,
  anon_sym_STAR = 16,
  anon_sym_QMARK = 17,
  sym_escape = 18,
  sym_lookahead = 19,
  sym_lookbehind = 20,
  sym_error = 21,
  aux_sym_string_literal_token1 = 22,
  anon_sym_DQUOTE = 23,
  sym_escape_sequence = 24,
  anon_sym_POUND = 25,
  anon_sym_for = 26,
  anon_sym_dyn = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  anon_sym_AMP = 30,
  sym_mut = 31,
  anon_sym_COLON_COLON = 32,
  anon_sym_extern = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_type = 36,
  anon_sym_enum = 37,
  anon_sym_match = 38,
  anon_sym_else = 39,
  anon_sym__ = 40,
  anon_sym_if = 41,
  anon_sym_EQ_GT_ATL = 42,
  anon_sym_EQ_GT_ATR = 43,
  anon_sym_EQ_EQ = 44,
  anon_sym_BANG_EQ = 45,
  anon_sym_TILDE_TILDE = 46,
  anon_sym_BANG_TILDE = 47,
  anon_sym_pub = 48,
  anon_sym_in = 49,
  sym_macro_id = 50,
  sym_use = 51,
  sym__string_content = 52,
  sym_regex_literal = 53,
  sym_normal_action = 54,
  sym_failible_action = 55,
  sym_source_file = 56,
  sym_grammar = 57,
  sym__use = 58,
  sym_grammar_type_params = 59,
  sym_type_parameter = 60,
  sym_lifetime = 61,
  sym_id = 62,
  sym__grammar_params = 63,
  sym_grammar_parameter = 64,
  sym__where_clauses = 65,
  sym_grammar_where_clause = 66,
  sym_type_bound = 67,
  sym_type_bound_param = 68,
  sym_type_ref = 69,
  sym_symbol = 70,
  sym_binding_symbol = 71,
  sym_bare_symbol = 72,
  sym_repeat = 73,
  sym__symbol1 = 74,
  sym_macro = 75,
  sym__quoted_literal = 76,
  sym_expr_symbol = 77,
  sym_string_literal = 78,
  sym_symbol_type = 79,
  sym_forall = 80,
  sym_fn_type = 81,
  sym_parametrized_type = 82,
  sym_dyn_type = 83,
  sym_tuple_type = 84,
  sym_array_type = 85,
  sym_reference = 86,
  sym_path = 87,
  sym_grammar_item = 88,
  sym_extern_token = 89,
  sym_associated_type = 90,
  sym_enum_token = 91,
  sym_conversion = 92,
  sym_terminal = 93,
  sym_match_token = 94,
  sym_match_block = 95,
  sym_match_else = 96,
  sym_match_item = 97,
  sym_nonterminal = 98,
  sym__alternatives = 99,
  sym_alternative = 100,
  sym_action = 101,
  sym_cond = 102,
  sym__cond_op = 103,
  sym_annotation = 104,
  sym_annotation_arg = 105,
  sym__not_macro_id = 106,
  sym_nonterminal_name = 107,
  sym_visibility = 108,
  aux_sym_source_file_repeat1 = 109,
  aux_sym_grammar_repeat1 = 110,
  aux_sym_grammar_type_params_repeat1 = 111,
  aux_sym__grammar_params_repeat1 = 112,
  aux_sym__where_clauses_repeat1 = 113,
  aux_sym_grammar_where_clause_repeat1 = 114,
  aux_sym_grammar_where_clause_repeat2 = 115,
  aux_sym_type_bound_repeat1 = 116,
  aux_sym_type_bound_repeat2 = 117,
  aux_sym_macro_repeat1 = 118,
  aux_sym_expr_symbol_repeat1 = 119,
  aux_sym_string_literal_repeat1 = 120,
  aux_sym_parametrized_type_repeat1 = 121,
  aux_sym_path_repeat1 = 122,
  aux_sym_extern_token_repeat1 = 123,
  aux_sym_enum_token_repeat1 = 124,
  aux_sym_match_token_repeat1 = 125,
  aux_sym_match_block_repeat1 = 126,
  aux_sym_nonterminal_repeat1 = 127,
  aux_sym__alternatives_repeat1 = 128,
  aux_sym_nonterminal_name_repeat1 = 129,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_grammar] = "grammar",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_SQUOTE] = "'",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_where] = "where",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [sym_escape] = "escape",
  [sym_lookahead] = "lookahead",
  [sym_lookbehind] = "lookbehind",
  [sym_error] = "error",
  [aux_sym_string_literal_token1] = "\"",
  [anon_sym_DQUOTE] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_POUND] = "#",
  [anon_sym_for] = "for",
  [anon_sym_dyn] = "dyn",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AMP] = "&",
  [sym_mut] = "mut",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_extern] = "extern",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_enum] = "enum",
  [anon_sym_match] = "match",
  [anon_sym_else] = "else",
  [anon_sym__] = "_",
  [anon_sym_if] = "if",
  [anon_sym_EQ_GT_ATL] = "=>@L",
  [anon_sym_EQ_GT_ATR] = "=>@R",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_TILDE_TILDE] = "~~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_pub] = "pub",
  [anon_sym_in] = "in",
  [sym_macro_id] = "macro_id",
  [sym_use] = "use",
  [sym__string_content] = "_string_content",
  [sym_regex_literal] = "regex_literal",
  [sym_normal_action] = "normal_action",
  [sym_failible_action] = "failible_action",
  [sym_source_file] = "source_file",
  [sym_grammar] = "grammar",
  [sym__use] = "_use",
  [sym_grammar_type_params] = "grammar_type_params",
  [sym_type_parameter] = "type_parameter",
  [sym_lifetime] = "lifetime",
  [sym_id] = "id",
  [sym__grammar_params] = "_grammar_params",
  [sym_grammar_parameter] = "grammar_parameter",
  [sym__where_clauses] = "_where_clauses",
  [sym_grammar_where_clause] = "grammar_where_clause",
  [sym_type_bound] = "type_bound",
  [sym_type_bound_param] = "type_bound_param",
  [sym_type_ref] = "type_ref",
  [sym_symbol] = "symbol",
  [sym_binding_symbol] = "binding_symbol",
  [sym_bare_symbol] = "bare_symbol",
  [sym_repeat] = "repeat",
  [sym__symbol1] = "_symbol1",
  [sym_macro] = "macro",
  [sym__quoted_literal] = "_quoted_literal",
  [sym_expr_symbol] = "expr_symbol",
  [sym_string_literal] = "string_literal",
  [sym_symbol_type] = "symbol_type",
  [sym_forall] = "forall",
  [sym_fn_type] = "fn_type",
  [sym_parametrized_type] = "parametrized_type",
  [sym_dyn_type] = "dyn_type",
  [sym_tuple_type] = "tuple_type",
  [sym_array_type] = "array_type",
  [sym_reference] = "reference",
  [sym_path] = "path",
  [sym_grammar_item] = "grammar_item",
  [sym_extern_token] = "extern_token",
  [sym_associated_type] = "associated_type",
  [sym_enum_token] = "enum_token",
  [sym_conversion] = "conversion",
  [sym_terminal] = "terminal",
  [sym_match_token] = "match_token",
  [sym_match_block] = "match_block",
  [sym_match_else] = "match_else",
  [sym_match_item] = "match_item",
  [sym_nonterminal] = "nonterminal",
  [sym__alternatives] = "_alternatives",
  [sym_alternative] = "alternative",
  [sym_action] = "action",
  [sym_cond] = "cond",
  [sym__cond_op] = "_cond_op",
  [sym_annotation] = "annotation",
  [sym_annotation_arg] = "annotation_arg",
  [sym__not_macro_id] = "_not_macro_id",
  [sym_nonterminal_name] = "nonterminal_name",
  [sym_visibility] = "visibility",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_grammar_repeat1] = "grammar_repeat1",
  [aux_sym_grammar_type_params_repeat1] = "grammar_type_params_repeat1",
  [aux_sym__grammar_params_repeat1] = "_grammar_params_repeat1",
  [aux_sym__where_clauses_repeat1] = "_where_clauses_repeat1",
  [aux_sym_grammar_where_clause_repeat1] = "grammar_where_clause_repeat1",
  [aux_sym_grammar_where_clause_repeat2] = "grammar_where_clause_repeat2",
  [aux_sym_type_bound_repeat1] = "type_bound_repeat1",
  [aux_sym_type_bound_repeat2] = "type_bound_repeat2",
  [aux_sym_macro_repeat1] = "macro_repeat1",
  [aux_sym_expr_symbol_repeat1] = "expr_symbol_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_parametrized_type_repeat1] = "parametrized_type_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_extern_token_repeat1] = "extern_token_repeat1",
  [aux_sym_enum_token_repeat1] = "enum_token_repeat1",
  [aux_sym_match_token_repeat1] = "match_token_repeat1",
  [aux_sym_match_block_repeat1] = "match_block_repeat1",
  [aux_sym_nonterminal_repeat1] = "nonterminal_repeat1",
  [aux_sym__alternatives_repeat1] = "_alternatives_repeat1",
  [aux_sym_nonterminal_name_repeat1] = "nonterminal_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_grammar] = anon_sym_grammar,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_escape] = sym_escape,
  [sym_lookahead] = sym_lookahead,
  [sym_lookbehind] = sym_lookbehind,
  [sym_error] = sym_error,
  [aux_sym_string_literal_token1] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_dyn] = anon_sym_dyn,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_mut] = sym_mut,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_else] = anon_sym_else,
  [anon_sym__] = anon_sym__,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_EQ_GT_ATL] = anon_sym_EQ_GT_ATL,
  [anon_sym_EQ_GT_ATR] = anon_sym_EQ_GT_ATR,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_TILDE_TILDE] = anon_sym_TILDE_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_in] = anon_sym_in,
  [sym_macro_id] = sym_macro_id,
  [sym_use] = sym_use,
  [sym__string_content] = sym__string_content,
  [sym_regex_literal] = sym_regex_literal,
  [sym_normal_action] = sym_normal_action,
  [sym_failible_action] = sym_failible_action,
  [sym_source_file] = sym_source_file,
  [sym_grammar] = sym_grammar,
  [sym__use] = sym__use,
  [sym_grammar_type_params] = sym_grammar_type_params,
  [sym_type_parameter] = sym_type_parameter,
  [sym_lifetime] = sym_lifetime,
  [sym_id] = sym_id,
  [sym__grammar_params] = sym__grammar_params,
  [sym_grammar_parameter] = sym_grammar_parameter,
  [sym__where_clauses] = sym__where_clauses,
  [sym_grammar_where_clause] = sym_grammar_where_clause,
  [sym_type_bound] = sym_type_bound,
  [sym_type_bound_param] = sym_type_bound_param,
  [sym_type_ref] = sym_type_ref,
  [sym_symbol] = sym_symbol,
  [sym_binding_symbol] = sym_binding_symbol,
  [sym_bare_symbol] = sym_bare_symbol,
  [sym_repeat] = sym_repeat,
  [sym__symbol1] = sym__symbol1,
  [sym_macro] = sym_macro,
  [sym__quoted_literal] = sym__quoted_literal,
  [sym_expr_symbol] = sym_expr_symbol,
  [sym_string_literal] = sym_string_literal,
  [sym_symbol_type] = sym_symbol_type,
  [sym_forall] = sym_forall,
  [sym_fn_type] = sym_fn_type,
  [sym_parametrized_type] = sym_parametrized_type,
  [sym_dyn_type] = sym_dyn_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_array_type] = sym_array_type,
  [sym_reference] = sym_reference,
  [sym_path] = sym_path,
  [sym_grammar_item] = sym_grammar_item,
  [sym_extern_token] = sym_extern_token,
  [sym_associated_type] = sym_associated_type,
  [sym_enum_token] = sym_enum_token,
  [sym_conversion] = sym_conversion,
  [sym_terminal] = sym_terminal,
  [sym_match_token] = sym_match_token,
  [sym_match_block] = sym_match_block,
  [sym_match_else] = sym_match_else,
  [sym_match_item] = sym_match_item,
  [sym_nonterminal] = sym_nonterminal,
  [sym__alternatives] = sym__alternatives,
  [sym_alternative] = sym_alternative,
  [sym_action] = sym_action,
  [sym_cond] = sym_cond,
  [sym__cond_op] = sym__cond_op,
  [sym_annotation] = sym_annotation,
  [sym_annotation_arg] = sym_annotation_arg,
  [sym__not_macro_id] = sym__not_macro_id,
  [sym_nonterminal_name] = sym_nonterminal_name,
  [sym_visibility] = sym_visibility,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_grammar_repeat1] = aux_sym_grammar_repeat1,
  [aux_sym_grammar_type_params_repeat1] = aux_sym_grammar_type_params_repeat1,
  [aux_sym__grammar_params_repeat1] = aux_sym__grammar_params_repeat1,
  [aux_sym__where_clauses_repeat1] = aux_sym__where_clauses_repeat1,
  [aux_sym_grammar_where_clause_repeat1] = aux_sym_grammar_where_clause_repeat1,
  [aux_sym_grammar_where_clause_repeat2] = aux_sym_grammar_where_clause_repeat2,
  [aux_sym_type_bound_repeat1] = aux_sym_type_bound_repeat1,
  [aux_sym_type_bound_repeat2] = aux_sym_type_bound_repeat2,
  [aux_sym_macro_repeat1] = aux_sym_macro_repeat1,
  [aux_sym_expr_symbol_repeat1] = aux_sym_expr_symbol_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_parametrized_type_repeat1] = aux_sym_parametrized_type_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_extern_token_repeat1] = aux_sym_extern_token_repeat1,
  [aux_sym_enum_token_repeat1] = aux_sym_enum_token_repeat1,
  [aux_sym_match_token_repeat1] = aux_sym_match_token_repeat1,
  [aux_sym_match_block_repeat1] = aux_sym_match_block_repeat1,
  [aux_sym_nonterminal_repeat1] = aux_sym_nonterminal_repeat1,
  [aux_sym__alternatives_repeat1] = aux_sym__alternatives_repeat1,
  [aux_sym_nonterminal_name_repeat1] = aux_sym_nonterminal_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_grammar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_lookahead] = {
    .visible = true,
    .named = true,
  },
  [sym_lookbehind] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dyn] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_mut] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
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
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT_ATL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT_ATR] = {
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
  [anon_sym_TILDE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_id] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_regex_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_action] = {
    .visible = true,
    .named = true,
  },
  [sym_failible_action] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar] = {
    .visible = true,
    .named = true,
  },
  [sym__use] = {
    .visible = false,
    .named = true,
  },
  [sym_grammar_type_params] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_lifetime] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym__grammar_params] = {
    .visible = false,
    .named = true,
  },
  [sym_grammar_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__where_clauses] = {
    .visible = false,
    .named = true,
  },
  [sym_grammar_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_type_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_type_bound_param] = {
    .visible = true,
    .named = true,
  },
  [sym_type_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_bare_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym__symbol1] = {
    .visible = false,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_expr_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_type] = {
    .visible = true,
    .named = true,
  },
  [sym_forall] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parametrized_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dyn_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_item] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_token] = {
    .visible = true,
    .named = true,
  },
  [sym_associated_type] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_token] = {
    .visible = true,
    .named = true,
  },
  [sym_conversion] = {
    .visible = true,
    .named = true,
  },
  [sym_terminal] = {
    .visible = true,
    .named = true,
  },
  [sym_match_token] = {
    .visible = true,
    .named = true,
  },
  [sym_match_block] = {
    .visible = true,
    .named = true,
  },
  [sym_match_else] = {
    .visible = true,
    .named = true,
  },
  [sym_match_item] = {
    .visible = true,
    .named = true,
  },
  [sym_nonterminal] = {
    .visible = true,
    .named = true,
  },
  [sym__alternatives] = {
    .visible = false,
    .named = true,
  },
  [sym_alternative] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_cond] = {
    .visible = true,
    .named = true,
  },
  [sym__cond_op] = {
    .visible = false,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_arg] = {
    .visible = true,
    .named = true,
  },
  [sym__not_macro_id] = {
    .visible = false,
    .named = true,
  },
  [sym_nonterminal_name] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_type_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__grammar_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__where_clauses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_where_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_where_clause_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_bound_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_bound_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_symbol_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parametrized_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extern_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nonterminal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__alternatives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nonterminal_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_item = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_item] = "item",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_item, 3},
    {field_name, 1},
  [2] =
    {field_item, 4},
    {field_name, 2},
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
  [49] = 15,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 53,
  [57] = 52,
  [58] = 52,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 60,
  [63] = 63,
  [64] = 64,
  [65] = 63,
  [66] = 63,
  [67] = 60,
  [68] = 59,
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
  [107] = 106,
  [108] = 106,
  [109] = 109,
  [110] = 19,
  [111] = 109,
  [112] = 112,
  [113] = 112,
  [114] = 112,
  [115] = 109,
  [116] = 26,
  [117] = 24,
  [118] = 43,
  [119] = 28,
  [120] = 36,
  [121] = 45,
  [122] = 39,
  [123] = 46,
  [124] = 35,
  [125] = 34,
  [126] = 42,
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
  [142] = 75,
  [143] = 71,
  [144] = 74,
  [145] = 70,
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
  [208] = 26,
  [209] = 127,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 26,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 24,
  [222] = 222,
  [223] = 24,
  [224] = 224,
  [225] = 19,
  [226] = 226,
  [227] = 227,
  [228] = 36,
  [229] = 207,
  [230] = 43,
  [231] = 231,
  [232] = 232,
  [233] = 28,
  [234] = 35,
  [235] = 235,
  [236] = 45,
  [237] = 46,
  [238] = 238,
  [239] = 42,
  [240] = 39,
  [241] = 34,
  [242] = 140,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 248,
  [251] = 248,
  [252] = 139,
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
  [263] = 253,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 256,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 246,
  [274] = 246,
  [275] = 261,
  [276] = 267,
  [277] = 277,
  [278] = 278,
  [279] = 267,
  [280] = 253,
  [281] = 281,
  [282] = 277,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 286,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 294,
  [296] = 296,
  [297] = 294,
  [298] = 294,
  [299] = 286,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 294,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 286,
  [309] = 286,
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
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 317,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 317,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 70,
  [342] = 342,
  [343] = 320,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 315,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 338,
  [370] = 74,
  [371] = 371,
  [372] = 372,
  [373] = 320,
  [374] = 374,
  [375] = 75,
  [376] = 71,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 356,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 24,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 26,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 346,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 166,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 219,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 220,
  [436] = 436,
  [437] = 437,
  [438] = 218,
  [439] = 439,
  [440] = 440,
  [441] = 211,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 465,
  [495] = 495,
  [496] = 490,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 486,
  [502] = 502,
  [503] = 470,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 470,
  [508] = 475,
  [509] = 509,
  [510] = 510,
  [511] = 499,
  [512] = 512,
  [513] = 469,
  [514] = 514,
  [515] = 469,
  [516] = 509,
  [517] = 509,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
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

static inline bool sym_identifier_character_set_2(int32_t c) {
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

static inline bool sym_identifier_character_set_3(int32_t c) {
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
                    ? (c >= 'b' && c <= 'z')
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '!') ADVANCE(118);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '?') ADVANCE(113);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '~') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(117);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '?') ADVANCE(113);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(117);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '?') ADVANCE(113);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '}') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(117);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '~') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '{') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == '}') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '{') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(132);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '~') ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(148);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '@') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(146);
      if (lookahead == 'R') ADVANCE(147);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(114);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == '{') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == '}') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '~') ADVANCE(150);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 66:
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
      END_STATE();
    case 67:
      if (eof) ADVANCE(70);
      if (lookahead == '!') ADVANCE(118);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '?') ADVANCE(113);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '~') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      END_STATE();
    case 68:
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '{') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(119);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(66);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(96);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(153);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(86);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(145);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(140);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(95);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(134);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(155);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(92);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(89);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(83);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(131);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(81);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(97);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(95);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(88);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_lookahead);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_lookbehind);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '~') ADVANCE(151);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_dyn);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_dyn);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_mut);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_mut);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_extern);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_match);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_EQ_GT_ATL);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_EQ_GT_ATR);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_pub);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_in);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(102);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 3},
  [3] = {.lex_state = 1, .external_lex_state = 3},
  [4] = {.lex_state = 1, .external_lex_state = 3},
  [5] = {.lex_state = 1, .external_lex_state = 3},
  [6] = {.lex_state = 1, .external_lex_state = 3},
  [7] = {.lex_state = 1, .external_lex_state = 3},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 1, .external_lex_state = 3},
  [12] = {.lex_state = 1, .external_lex_state = 3},
  [13] = {.lex_state = 1, .external_lex_state = 3},
  [14] = {.lex_state = 1, .external_lex_state = 3},
  [15] = {.lex_state = 1, .external_lex_state = 3},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 1, .external_lex_state = 3},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 68, .external_lex_state = 4},
  [22] = {.lex_state = 68, .external_lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 68, .external_lex_state = 4},
  [26] = {.lex_state = 1, .external_lex_state = 3},
  [27] = {.lex_state = 68, .external_lex_state = 4},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 68, .external_lex_state = 4},
  [31] = {.lex_state = 68, .external_lex_state = 4},
  [32] = {.lex_state = 68, .external_lex_state = 4},
  [33] = {.lex_state = 68, .external_lex_state = 4},
  [34] = {.lex_state = 1, .external_lex_state = 3},
  [35] = {.lex_state = 1, .external_lex_state = 3},
  [36] = {.lex_state = 1, .external_lex_state = 3},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 68, .external_lex_state = 4},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 2, .external_lex_state = 5},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 1, .external_lex_state = 3},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 1, .external_lex_state = 3},
  [46] = {.lex_state = 1, .external_lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 2, .external_lex_state = 5},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2, .external_lex_state = 5},
  [53] = {.lex_state = 2, .external_lex_state = 5},
  [54] = {.lex_state = 2, .external_lex_state = 5},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2, .external_lex_state = 5},
  [57] = {.lex_state = 2, .external_lex_state = 5},
  [58] = {.lex_state = 2, .external_lex_state = 5},
  [59] = {.lex_state = 2, .external_lex_state = 5},
  [60] = {.lex_state = 2, .external_lex_state = 5},
  [61] = {.lex_state = 2, .external_lex_state = 5},
  [62] = {.lex_state = 2, .external_lex_state = 5},
  [63] = {.lex_state = 2, .external_lex_state = 5},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 2, .external_lex_state = 5},
  [66] = {.lex_state = 2, .external_lex_state = 5},
  [67] = {.lex_state = 2, .external_lex_state = 5},
  [68] = {.lex_state = 2, .external_lex_state = 5},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 1, .external_lex_state = 3},
  [71] = {.lex_state = 1, .external_lex_state = 3},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 1, .external_lex_state = 3},
  [75] = {.lex_state = 1, .external_lex_state = 3},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 2, .external_lex_state = 5},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 2, .external_lex_state = 5},
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
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 3, .external_lex_state = 5},
  [107] = {.lex_state = 3, .external_lex_state = 5},
  [108] = {.lex_state = 3, .external_lex_state = 5},
  [109] = {.lex_state = 2, .external_lex_state = 5},
  [110] = {.lex_state = 2, .external_lex_state = 5},
  [111] = {.lex_state = 2, .external_lex_state = 5},
  [112] = {.lex_state = 2, .external_lex_state = 5},
  [113] = {.lex_state = 2, .external_lex_state = 5},
  [114] = {.lex_state = 2, .external_lex_state = 5},
  [115] = {.lex_state = 2, .external_lex_state = 5},
  [116] = {.lex_state = 2, .external_lex_state = 5},
  [117] = {.lex_state = 2, .external_lex_state = 5},
  [118] = {.lex_state = 2, .external_lex_state = 5},
  [119] = {.lex_state = 2, .external_lex_state = 5},
  [120] = {.lex_state = 2, .external_lex_state = 5},
  [121] = {.lex_state = 2, .external_lex_state = 5},
  [122] = {.lex_state = 2, .external_lex_state = 5},
  [123] = {.lex_state = 2, .external_lex_state = 5},
  [124] = {.lex_state = 2, .external_lex_state = 5},
  [125] = {.lex_state = 2, .external_lex_state = 5},
  [126] = {.lex_state = 2, .external_lex_state = 5},
  [127] = {.lex_state = 2, .external_lex_state = 5},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 69, .external_lex_state = 4},
  [131] = {.lex_state = 69, .external_lex_state = 4},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 69, .external_lex_state = 4},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 2, .external_lex_state = 5},
  [140] = {.lex_state = 2, .external_lex_state = 5},
  [141] = {.lex_state = 68},
  [142] = {.lex_state = 2, .external_lex_state = 5},
  [143] = {.lex_state = 2, .external_lex_state = 5},
  [144] = {.lex_state = 2, .external_lex_state = 5},
  [145] = {.lex_state = 2, .external_lex_state = 5},
  [146] = {.lex_state = 69, .external_lex_state = 4},
  [147] = {.lex_state = 68},
  [148] = {.lex_state = 68, .external_lex_state = 4},
  [149] = {.lex_state = 68},
  [150] = {.lex_state = 69, .external_lex_state = 4},
  [151] = {.lex_state = 69, .external_lex_state = 4},
  [152] = {.lex_state = 10, .external_lex_state = 6},
  [153] = {.lex_state = 68, .external_lex_state = 4},
  [154] = {.lex_state = 69, .external_lex_state = 4},
  [155] = {.lex_state = 68},
  [156] = {.lex_state = 68},
  [157] = {.lex_state = 69, .external_lex_state = 4},
  [158] = {.lex_state = 69, .external_lex_state = 4},
  [159] = {.lex_state = 68},
  [160] = {.lex_state = 68},
  [161] = {.lex_state = 68, .external_lex_state = 4},
  [162] = {.lex_state = 68, .external_lex_state = 4},
  [163] = {.lex_state = 69, .external_lex_state = 4},
  [164] = {.lex_state = 69, .external_lex_state = 4},
  [165] = {.lex_state = 68},
  [166] = {.lex_state = 68, .external_lex_state = 4},
  [167] = {.lex_state = 68, .external_lex_state = 4},
  [168] = {.lex_state = 68, .external_lex_state = 4},
  [169] = {.lex_state = 68},
  [170] = {.lex_state = 68, .external_lex_state = 4},
  [171] = {.lex_state = 68},
  [172] = {.lex_state = 68},
  [173] = {.lex_state = 68},
  [174] = {.lex_state = 68},
  [175] = {.lex_state = 68, .external_lex_state = 4},
  [176] = {.lex_state = 68},
  [177] = {.lex_state = 68},
  [178] = {.lex_state = 68},
  [179] = {.lex_state = 68},
  [180] = {.lex_state = 68, .external_lex_state = 4},
  [181] = {.lex_state = 68},
  [182] = {.lex_state = 68, .external_lex_state = 4},
  [183] = {.lex_state = 68},
  [184] = {.lex_state = 68, .external_lex_state = 4},
  [185] = {.lex_state = 68},
  [186] = {.lex_state = 68},
  [187] = {.lex_state = 68},
  [188] = {.lex_state = 68, .external_lex_state = 4},
  [189] = {.lex_state = 68},
  [190] = {.lex_state = 68, .external_lex_state = 4},
  [191] = {.lex_state = 68, .external_lex_state = 4},
  [192] = {.lex_state = 68, .external_lex_state = 4},
  [193] = {.lex_state = 68, .external_lex_state = 4},
  [194] = {.lex_state = 68},
  [195] = {.lex_state = 68, .external_lex_state = 4},
  [196] = {.lex_state = 68},
  [197] = {.lex_state = 68},
  [198] = {.lex_state = 68},
  [199] = {.lex_state = 68, .external_lex_state = 4},
  [200] = {.lex_state = 68, .external_lex_state = 4},
  [201] = {.lex_state = 2, .external_lex_state = 7},
  [202] = {.lex_state = 1, .external_lex_state = 8},
  [203] = {.lex_state = 1, .external_lex_state = 8},
  [204] = {.lex_state = 2, .external_lex_state = 7},
  [205] = {.lex_state = 2, .external_lex_state = 7},
  [206] = {.lex_state = 1, .external_lex_state = 8},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 10, .external_lex_state = 6},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 7, .external_lex_state = 7},
  [213] = {.lex_state = 7, .external_lex_state = 7},
  [214] = {.lex_state = 1, .external_lex_state = 8},
  [215] = {.lex_state = 7, .external_lex_state = 7},
  [216] = {.lex_state = 1, .external_lex_state = 8},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 1, .external_lex_state = 8},
  [222] = {.lex_state = 2, .external_lex_state = 7},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 7, .external_lex_state = 7},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 7, .external_lex_state = 7},
  [227] = {.lex_state = 7, .external_lex_state = 7},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 12},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 7, .external_lex_state = 7},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 10, .external_lex_state = 6},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 11},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 10, .external_lex_state = 6},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 11},
  [257] = {.lex_state = 11},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 1, .external_lex_state = 8},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 11},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 11, .external_lex_state = 6},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 11, .external_lex_state = 6},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 13},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 5, .external_lex_state = 9},
  [287] = {.lex_state = 5, .external_lex_state = 9},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 5, .external_lex_state = 9},
  [292] = {.lex_state = 11, .external_lex_state = 6},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 5, .external_lex_state = 9},
  [295] = {.lex_state = 5, .external_lex_state = 9},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 5, .external_lex_state = 9},
  [298] = {.lex_state = 5, .external_lex_state = 9},
  [299] = {.lex_state = 5, .external_lex_state = 9},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 5, .external_lex_state = 9},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 11},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 5, .external_lex_state = 9},
  [309] = {.lex_state = 5, .external_lex_state = 9},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 11, .external_lex_state = 6},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 11},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 11, .external_lex_state = 6},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 11},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 11},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 11, .external_lex_state = 6},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 11, .external_lex_state = 6},
  [354] = {.lex_state = 11},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 11},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 5},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 11},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0, .external_lex_state = 10},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 11},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0, .external_lex_state = 10},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0, .external_lex_state = 10},
  [403] = {.lex_state = 11},
  [404] = {.lex_state = 11, .external_lex_state = 6},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 11},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0, .external_lex_state = 2},
  [420] = {.lex_state = 68},
  [421] = {.lex_state = 11},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 68},
  [424] = {.lex_state = 1},
  [425] = {.lex_state = 68},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 11},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 68},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 68},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 11},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 11},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 11},
  [441] = {.lex_state = 11},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 11},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 68},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 11},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 11},
  [455] = {.lex_state = 11},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 68},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 68},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 5},
  [465] = {.lex_state = 11},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 11},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 5},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 1},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 5},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 1},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 5},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 1},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0, .external_lex_state = 10},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0, .external_lex_state = 10},
  [494] = {.lex_state = 11},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 5},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 11},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 1},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 1},
  [516] = {.lex_state = 11},
  [517] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grammar] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_escape] = ACTIONS(1),
    [sym_lookahead] = ACTIONS(1),
    [sym_lookbehind] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_dyn] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_mut] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_EQ_GT_ATL] = ACTIONS(1),
    [anon_sym_EQ_GT_ATR] = ACTIONS(1),
    [anon_sym_TILDE_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [sym_macro_id] = ACTIONS(1),
    [sym_use] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_regex_literal] = ACTIONS(1),
    [sym_normal_action] = ACTIONS(1),
    [sym_failible_action] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(514),
    [sym_grammar] = STATE(512),
    [sym__use] = STATE(255),
    [aux_sym_source_file_repeat1] = STATE(255),
    [anon_sym_grammar] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_use] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(193), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(40), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [70] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(182), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(40), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [140] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(175), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(40), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [210] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(184), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(40), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [280] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(190), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(40), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [350] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      sym_macro_id,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(385), 1,
      sym_alternative,
    STATE(394), 1,
      sym_action,
    STATE(40), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [417] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      sym_macro_id,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(394), 1,
      sym_action,
    STATE(436), 1,
      sym_alternative,
    STATE(40), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [484] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      sym_macro_id,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(394), 1,
      sym_action,
    STATE(436), 1,
      sym_alternative,
    STATE(40), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [551] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(27), 1,
      sym_macro_id,
    ACTIONS(37), 1,
      anon_sym_if,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(329), 1,
      sym_action,
    STATE(15), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(35), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [611] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      sym_macro_id,
    STATE(12), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(394), 1,
      sym_action,
    STATE(436), 1,
      sym_alternative,
    STATE(40), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [675] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(27), 1,
      sym_macro_id,
    ACTIONS(41), 1,
      anon_sym_if,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(381), 1,
      sym_action,
    STATE(10), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(39), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [735] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(27), 1,
      sym_macro_id,
    ACTIONS(45), 1,
      anon_sym_if,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(332), 1,
      sym_action,
    STATE(15), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(43), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [795] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(27), 1,
      sym_macro_id,
    ACTIONS(37), 1,
      anon_sym_if,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(329), 1,
      sym_action,
    STATE(13), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(35), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [855] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      aux_sym_string_literal_token1,
    ACTIONS(64), 1,
      anon_sym_if,
    ACTIONS(66), 1,
      sym_macro_id,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(15), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(58), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
    ACTIONS(47), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [910] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_for,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      sym_forall,
    STATE(160), 1,
      sym_path,
    STATE(442), 1,
      sym_grammar_where_clause,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(482), 1,
      sym_type_ref,
    STATE(484), 1,
      sym_lifetime,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [971] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_for,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_forall,
    STATE(160), 1,
      sym_path,
    STATE(328), 1,
      sym_grammar_where_clause,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(482), 1,
      sym_type_ref,
    STATE(484), 1,
      sym_lifetime,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1032] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_for,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_forall,
    STATE(160), 1,
      sym_path,
    STATE(442), 1,
      sym_grammar_where_clause,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(482), 1,
      sym_type_ref,
    STATE(484), 1,
      sym_lifetime,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 1,
      sym_repeat,
    ACTIONS(95), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(93), 16,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1127] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_for,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      sym_forall,
    STATE(160), 1,
      sym_path,
    STATE(442), 1,
      sym_grammar_where_clause,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(482), 1,
      sym_type_ref,
    STATE(484), 1,
      sym_lifetime,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1185] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_escape,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_extern,
    ACTIONS(109), 1,
      anon_sym_match,
    ACTIONS(111), 1,
      anon_sym_pub,
    ACTIONS(113), 1,
      sym_macro_id,
    ACTIONS(115), 1,
      sym_use,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(22), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1242] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_escape,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_extern,
    ACTIONS(109), 1,
      anon_sym_match,
    ACTIONS(111), 1,
      anon_sym_pub,
    ACTIONS(113), 1,
      sym_macro_id,
    ACTIONS(115), 1,
      sym_use,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(31), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1299] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(119), 1,
      anon_sym_GT,
    ACTIONS(121), 1,
      sym_identifier,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(444), 1,
      sym_type_bound_param,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(123), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1381] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_escape,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_extern,
    ACTIONS(109), 1,
      anon_sym_match,
    ACTIONS(111), 1,
      anon_sym_pub,
    ACTIONS(113), 1,
      sym_macro_id,
    ACTIONS(115), 1,
      sym_use,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(31), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(127), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1467] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_escape,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_extern,
    ACTIONS(109), 1,
      anon_sym_match,
    ACTIONS(111), 1,
      anon_sym_pub,
    ACTIONS(113), 1,
      sym_macro_id,
    ACTIONS(115), 1,
      sym_use,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(33), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(133), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1553] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(444), 1,
      sym_type_bound_param,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1606] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_escape,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_extern,
    ACTIONS(109), 1,
      anon_sym_match,
    ACTIONS(111), 1,
      anon_sym_pub,
    ACTIONS(113), 1,
      sym_macro_id,
    ACTIONS(115), 1,
      sym_use,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(31), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1663] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(146), 1,
      sym_escape,
    ACTIONS(149), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      anon_sym_extern,
    ACTIONS(155), 1,
      anon_sym_match,
    ACTIONS(158), 1,
      anon_sym_pub,
    ACTIONS(161), 1,
      sym_macro_id,
    ACTIONS(164), 1,
      sym_use,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(31), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1720] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_escape,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_extern,
    ACTIONS(109), 1,
      anon_sym_match,
    ACTIONS(111), 1,
      anon_sym_pub,
    ACTIONS(113), 1,
      sym_macro_id,
    ACTIONS(115), 1,
      sym_use,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(30), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1777] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_escape,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_extern,
    ACTIONS(109), 1,
      anon_sym_match,
    ACTIONS(111), 1,
      anon_sym_pub,
    ACTIONS(113), 1,
      sym_macro_id,
    ACTIONS(115), 1,
      sym_use,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(31), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(169), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(173), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(177), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [1921] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(350), 1,
      sym_type_bound_param,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [1974] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_escape,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_extern,
    ACTIONS(109), 1,
      anon_sym_match,
    ACTIONS(111), 1,
      anon_sym_pub,
    ACTIONS(113), 1,
      sym_macro_id,
    ACTIONS(115), 1,
      sym_use,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(25), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(152), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(199), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [2031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(183), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [2060] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_string_literal_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym_macro_id,
    STATE(14), 1,
      sym_symbol,
    STATE(19), 1,
      sym_bare_symbol,
    STATE(75), 1,
      sym_binding_symbol,
    STATE(127), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(15), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(39), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2109] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(444), 1,
      sym_type_bound_param,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(189), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [2191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(193), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [2220] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(337), 1,
      sym_type_bound_param,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(199), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [2302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(203), 19,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [2331] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(121), 1,
      sym_identifier,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(444), 1,
      sym_type_bound_param,
    STATE(448), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2381] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_mut,
    STATE(81), 1,
      sym_lifetime,
    STATE(160), 1,
      sym_path,
    STATE(172), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2433] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      anon_sym_LT,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_string_literal_token1,
    ACTIONS(226), 1,
      sym_macro_id,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(142), 1,
      sym_binding_symbol,
    STATE(49), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(220), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(122), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2479] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(229), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(453), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2529] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(231), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(410), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2579] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      aux_sym_string_literal_token1,
    ACTIONS(245), 1,
      sym_macro_id,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(142), 1,
      sym_binding_symbol,
    STATE(49), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(241), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(122), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2625] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_string_literal_token1,
    ACTIONS(245), 1,
      sym_macro_id,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(142), 1,
      sym_binding_symbol,
    STATE(52), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(241), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(122), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2671] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_string_literal_token1,
    ACTIONS(245), 1,
      sym_macro_id,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(142), 1,
      sym_binding_symbol,
    STATE(58), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(241), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(122), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2717] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(251), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(453), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [2767] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_string_literal_token1,
    ACTIONS(245), 1,
      sym_macro_id,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(142), 1,
      sym_binding_symbol,
    STATE(57), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(241), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(122), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2813] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_string_literal_token1,
    ACTIONS(245), 1,
      sym_macro_id,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(142), 1,
      sym_binding_symbol,
    STATE(49), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(241), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(122), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2859] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      aux_sym_string_literal_token1,
    ACTIONS(245), 1,
      sym_macro_id,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_bare_symbol,
    STATE(142), 1,
      sym_binding_symbol,
    STATE(49), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(241), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(122), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2905] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      anon_sym_GT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2950] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    ACTIONS(273), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(320), 1,
      sym_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2995] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    ACTIONS(275), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3040] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    ACTIONS(277), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(343), 1,
      sym_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3085] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    ACTIONS(279), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3130] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(453), 2,
      sym_lifetime,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3177] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    ACTIONS(281), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3222] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    ACTIONS(283), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3267] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    ACTIONS(285), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(373), 1,
      sym_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3312] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    ACTIONS(287), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3357] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(291), 16,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [3429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(295), 16,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [3455] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3501] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(342), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(303), 16,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [3573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(93), 16,
      sym_macro_id,
      sym_regex_literal,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [3599] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3645] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3691] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(372), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3737] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(473), 1,
      sym_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3779] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(352), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3825] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(315), 1,
      sym_mut,
    STATE(160), 1,
      sym_path,
    STATE(183), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3871] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [3913] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [3959] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(417), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4002] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(447), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4045] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(178), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4088] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(464), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4131] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(169), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4174] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(415), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4217] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(179), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4260] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(478), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4303] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(183), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4346] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(411), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4389] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(480), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4432] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(187), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4475] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(174), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4518] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(487), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4561] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(495), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4604] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(382), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4647] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(401), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4690] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(429), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4733] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(474), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4776] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(457), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4819] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(500), 1,
      sym_type_ref,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4862] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_dyn,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(160), 1,
      sym_path,
    STATE(197), 1,
      sym_type_ref,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(189), 7,
      sym_symbol_type,
      sym_fn_type,
      sym_parametrized_type,
      sym_dyn_type,
      sym_tuple_type,
      sym_array_type,
      sym_reference,
  [4905] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(321), 1,
      sym_mut,
    STATE(273), 1,
      sym_bare_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [4941] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(325), 1,
      sym_mut,
    STATE(274), 1,
      sym_bare_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [4977] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    ACTIONS(327), 1,
      sym_identifier,
    ACTIONS(329), 1,
      sym_mut,
    STATE(246), 1,
      sym_bare_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [5013] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    STATE(276), 1,
      sym_bare_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [5046] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(121), 1,
      sym_repeat,
    ACTIONS(331), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(93), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5073] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    STATE(267), 1,
      sym_bare_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [5106] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    STATE(253), 1,
      sym_bare_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [5139] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    STATE(263), 1,
      sym_bare_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [5172] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    STATE(280), 1,
      sym_bare_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [5205] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    ACTIONS(271), 1,
      sym_macro_id,
    STATE(279), 1,
      sym_bare_symbol,
    ACTIONS(267), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(240), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [5238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(127), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(123), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(193), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(133), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(177), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(199), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(183), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(203), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(173), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(169), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(189), 13,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      anon_sym_POUND,
    STATE(127), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(333), 9,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5505] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(342), 1,
      anon_sym_for,
    STATE(135), 1,
      aux_sym_grammar_where_clause_repeat2,
    STATE(272), 1,
      sym_path,
    STATE(288), 1,
      sym_forall,
    STATE(412), 1,
      sym_type_bound,
    STATE(413), 1,
      sym_lifetime,
    STATE(443), 1,
      aux_sym_path_repeat1,
    ACTIONS(340), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5543] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(342), 1,
      anon_sym_for,
    STATE(137), 1,
      aux_sym_grammar_where_clause_repeat2,
    STATE(272), 1,
      sym_path,
    STATE(288), 1,
      sym_forall,
    STATE(360), 1,
      sym_type_bound,
    STATE(413), 1,
      sym_lifetime,
    STATE(443), 1,
      aux_sym_path_repeat1,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_else,
    STATE(130), 2,
      sym_match_else,
      aux_sym_match_token_repeat1,
    ACTIONS(348), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(346), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_else,
    STATE(130), 2,
      sym_match_else,
      aux_sym_match_token_repeat1,
    ACTIONS(355), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(353), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5629] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(367), 1,
      anon_sym_for,
    ACTIONS(370), 1,
      anon_sym_COLON_COLON,
    STATE(132), 1,
      aux_sym_grammar_where_clause_repeat2,
    STATE(272), 1,
      sym_path,
    STATE(288), 1,
      sym_forall,
    STATE(413), 1,
      sym_lifetime,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(476), 1,
      sym_type_bound,
    ACTIONS(359), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      anon_sym_COLON_COLON,
    ACTIONS(373), 10,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COLON_COLON,
    ACTIONS(381), 1,
      anon_sym_COLON,
    ACTIONS(379), 10,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5711] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(342), 1,
      anon_sym_for,
    STATE(132), 1,
      aux_sym_grammar_where_clause_repeat2,
    STATE(272), 1,
      sym_path,
    STATE(288), 1,
      sym_forall,
    STATE(360), 1,
      sym_type_bound,
    STATE(413), 1,
      sym_lifetime,
    STATE(443), 1,
      aux_sym_path_repeat1,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_else,
    STATE(131), 2,
      sym_match_else,
      aux_sym_match_token_repeat1,
    ACTIONS(385), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(383), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [5773] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(342), 1,
      anon_sym_for,
    STATE(132), 1,
      aux_sym_grammar_where_clause_repeat2,
    STATE(272), 1,
      sym_path,
    STATE(288), 1,
      sym_forall,
    STATE(344), 1,
      sym_type_bound,
    STATE(413), 1,
      sym_lifetime,
    STATE(443), 1,
      aux_sym_path_repeat1,
    ACTIONS(387), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COLON_COLON,
    ACTIONS(391), 1,
      anon_sym_COLON,
    ACTIONS(389), 10,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(393), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_POUND,
  [5852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(397), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
      anon_sym_POUND,
  [5871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(93), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(295), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(303), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(291), 10,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(409), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [5986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DASH_GT,
    ACTIONS(411), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    ACTIONS(419), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(415), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_DASH_GT,
    ACTIONS(421), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(427), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [6060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(431), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [6078] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_escape,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_pub,
    ACTIONS(113), 1,
      sym_macro_id,
    STATE(268), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(458), 1,
      sym_nonterminal_name,
    STATE(209), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
  [6110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    ACTIONS(437), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(433), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(441), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [6148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_DASH_GT,
    ACTIONS(443), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_DASH_GT,
    ACTIONS(447), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(453), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [6202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(457), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [6220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_DASH_GT,
    ACTIONS(459), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(401), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    ACTIONS(467), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(463), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SEMI,
    ACTIONS(473), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(469), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(477), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [6314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
    ACTIONS(481), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
  [6332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(485), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(415), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(469), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(491), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(501), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(513), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(519), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(525), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(533), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(539), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(543), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(547), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(551), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(463), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(561), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(433), 5,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_escape,
      anon_sym_POUND,
  [6904] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(567), 1,
      aux_sym_string_literal_token1,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    ACTIONS(571), 1,
      sym_regex_literal,
    STATE(437), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(371), 1,
      sym_action,
    ACTIONS(573), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(332), 1,
      sym_action,
    ACTIONS(43), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6966] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(567), 1,
      aux_sym_string_literal_token1,
    ACTIONS(571), 1,
      sym_regex_literal,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6992] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(567), 1,
      aux_sym_string_literal_token1,
    ACTIONS(571), 1,
      sym_regex_literal,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    STATE(437), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [7018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(397), 1,
      sym_action,
    ACTIONS(579), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [7036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 3,
      sym_identifier,
      anon_sym_dyn,
      sym_mut,
    ACTIONS(583), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [7052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [7065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_POUND,
    ACTIONS(333), 2,
      sym_macro_id,
      sym_escape,
    ACTIONS(335), 2,
      sym_identifier,
      anon_sym_pub,
    STATE(209), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
  [7084] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    ACTIONS(590), 1,
      anon_sym_LT,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    ACTIONS(594), 1,
      anon_sym_where,
    STATE(258), 1,
      sym_grammar_type_params,
    STATE(314), 1,
      sym__grammar_params,
    STATE(506), 1,
      sym__where_clauses,
  [7109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(598), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [7124] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_string_literal_token1,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
    ACTIONS(602), 1,
      anon_sym__,
    ACTIONS(604), 1,
      sym_regex_literal,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [7147] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_string_literal_token1,
    ACTIONS(602), 1,
      anon_sym__,
    ACTIONS(604), 1,
      sym_regex_literal,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [7170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [7183] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_string_literal_token1,
    ACTIONS(602), 1,
      anon_sym__,
    ACTIONS(604), 1,
      sym_regex_literal,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [7206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [7219] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(342), 1,
      anon_sym_for,
    STATE(141), 1,
      sym_path,
    STATE(173), 1,
      sym_parametrized_type,
    STATE(305), 1,
      sym_forall,
    STATE(443), 1,
      aux_sym_path_repeat1,
  [7244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(614), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [7259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(618), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [7274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(622), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [7289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [7302] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(567), 1,
      aux_sym_string_literal_token1,
    ACTIONS(571), 1,
      sym_regex_literal,
    STATE(437), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [7325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [7338] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_string_literal_token1,
    ACTIONS(602), 1,
      anon_sym__,
    ACTIONS(604), 1,
      sym_regex_literal,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    STATE(391), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [7361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(93), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
    ACTIONS(626), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7378] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_string_literal_token1,
    ACTIONS(602), 1,
      anon_sym__,
    ACTIONS(604), 1,
      sym_regex_literal,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [7401] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_string_literal_token1,
    ACTIONS(602), 1,
      anon_sym__,
    ACTIONS(604), 1,
      sym_regex_literal,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [7424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [7436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
  [7448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [7460] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
    ACTIONS(634), 1,
      anon_sym_type,
    ACTIONS(636), 1,
      anon_sym_enum,
    STATE(306), 1,
      sym_enum_token,
    STATE(235), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 2,
      sym_identifier,
      anon_sym_for,
    ACTIONS(359), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_COLON_COLON,
  [7494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [7506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [7518] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_type,
    ACTIONS(636), 1,
      anon_sym_enum,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    STATE(296), 1,
      sym_enum_token,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [7550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [7562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_string_literal_token1,
    ACTIONS(602), 1,
      anon_sym__,
    ACTIONS(604), 1,
      sym_regex_literal,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [7582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [7594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [7606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [7618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      sym_identifier,
      anon_sym_pub,
    ACTIONS(397), 3,
      sym_macro_id,
      sym_escape,
      anon_sym_POUND,
  [7631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(446), 1,
      sym__cond_op,
    ACTIONS(642), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_TILDE,
      anon_sym_BANG_TILDE,
  [7644] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(323), 1,
      sym_type_parameter,
  [7663] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(626), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      aux_sym_grammar_where_clause_repeat1,
    STATE(483), 1,
      sym_lifetime,
    ACTIONS(652), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [7714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COLON,
    ACTIONS(657), 4,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_LT,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
    ACTIONS(661), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_COLON,
    ACTIONS(657), 4,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_COLON,
    ACTIONS(657), 4,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      sym_identifier,
      anon_sym_pub,
    ACTIONS(393), 3,
      sym_macro_id,
      sym_escape,
      anon_sym_POUND,
  [7781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(626), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7796] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    STATE(266), 1,
      aux_sym_grammar_where_clause_repeat1,
    STATE(416), 1,
      sym_lifetime,
    ACTIONS(340), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [7813] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_grammar,
    ACTIONS(7), 1,
      sym_use,
    STATE(505), 1,
      sym_grammar,
    STATE(301), 2,
      sym__use,
      aux_sym_source_file_repeat1,
  [7830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(673), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(409), 1,
      sym_type_parameter,
  [7849] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(675), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(322), 1,
      sym_type_parameter,
  [7868] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    ACTIONS(594), 1,
      anon_sym_where,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      sym__grammar_params,
    STATE(477), 1,
      sym__where_clauses,
  [7887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(329), 1,
      sym_action,
    ACTIONS(25), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [7900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_type,
    ACTIONS(679), 2,
      anon_sym_RBRACE,
      anon_sym_enum,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(684), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7934] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(686), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(626), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7968] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_macro_id,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(458), 1,
      sym_nonterminal_name,
    ACTIONS(103), 2,
      sym_identifier,
      sym_escape,
  [7985] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(368), 1,
      sym_type_parameter,
  [8004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      aux_sym_grammar_where_clause_repeat1,
    STATE(363), 1,
      sym_lifetime,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(626), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [8036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_macro_id,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(432), 1,
      sym_nonterminal_name,
    ACTIONS(103), 2,
      sym_identifier,
      sym_escape,
  [8053] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(346), 1,
      sym_type_parameter,
  [8072] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(696), 1,
      anon_sym_in,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(463), 1,
      sym_path,
  [8091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COLON_COLON,
    ACTIONS(698), 1,
      anon_sym_EQ,
    ACTIONS(373), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
  [8106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LT,
    ACTIONS(704), 1,
      anon_sym_LPAREN,
    ACTIONS(700), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(626), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [8136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(626), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [8151] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [8170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(626), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [8185] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(714), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [8204] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(716), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [8223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(626), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [8238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(626), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [8253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [8272] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(724), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [8291] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [8310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      sym_identifier,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [8326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_grammar_type_params_repeat1,
    ACTIONS(731), 2,
      anon_sym_GT,
      anon_sym_RPAREN,
  [8340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(735), 2,
      sym__string_content,
      sym_escape_sequence,
  [8354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(735), 2,
      sym__string_content,
      sym_escape_sequence,
  [8368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(739), 1,
      sym_identifier,
    STATE(249), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
  [8384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_DASH_GT,
    ACTIONS(741), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_DASH_GT,
    ACTIONS(745), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(751), 2,
      sym__string_content,
      sym_escape_sequence,
  [8422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
    ACTIONS(754), 3,
      sym_macro_id,
      sym_identifier,
      sym_escape,
  [8434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_type,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [8448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DQUOTE,
    STATE(286), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(762), 2,
      sym__string_content,
      sym_escape_sequence,
  [8462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_DQUOTE,
    STATE(299), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(766), 2,
      sym__string_content,
      sym_escape_sequence,
  [8476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_type,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(293), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [8490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(772), 2,
      sym__string_content,
      sym_escape_sequence,
  [8504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_DQUOTE,
    STATE(308), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(776), 2,
      sym__string_content,
      sym_escape_sequence,
  [8518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(735), 2,
      sym__string_content,
      sym_escape_sequence,
  [8532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_DASH_GT,
    ACTIONS(780), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_grammar,
    ACTIONS(786), 1,
      sym_use,
    STATE(301), 2,
      sym__use,
      aux_sym_source_file_repeat1,
  [8558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_DASH_GT,
    ACTIONS(789), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_DQUOTE,
    STATE(309), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(795), 2,
      sym__string_content,
      sym_escape_sequence,
  [8584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_type,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [8598] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(739), 1,
      sym_identifier,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(466), 1,
      sym_path,
  [8614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_type,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    STATE(304), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [8628] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    ACTIONS(739), 1,
      sym_identifier,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(492), 1,
      sym_path,
  [8644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(735), 2,
      sym__string_content,
      sym_escape_sequence,
  [8658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(735), 2,
      sym__string_content,
      sym_escape_sequence,
  [8672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_DASH_GT,
    ACTIONS(801), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_GT,
    STATE(311), 1,
      aux_sym_nonterminal_name_repeat1,
  [8697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym__where_clauses_repeat1,
  [8710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_identifier,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      sym_grammar_parameter,
  [8723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_where,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    STATE(477), 1,
      sym__where_clauses,
  [8736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(356), 1,
      sym_id,
    ACTIONS(819), 2,
      sym_macro_id,
      sym_identifier,
  [8747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [8756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_GT,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [8769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [8778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      aux_sym_enum_token_repeat1,
  [8791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      anon_sym_GT,
    STATE(317), 1,
      aux_sym_macro_repeat1,
  [8804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_match_block_repeat1,
  [8817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    ACTIONS(842), 1,
      anon_sym_GT,
    STATE(361), 1,
      aux_sym_grammar_type_params_repeat1,
  [8830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_grammar_type_params_repeat1,
  [8843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_match_block_repeat1,
  [8856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym__alternatives_repeat1,
  [8869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_grammar_type_params_repeat1,
  [8882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym__grammar_params_repeat1,
  [8895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym__where_clauses_repeat1,
  [8908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      aux_sym__alternatives_repeat1,
  [8930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_GT,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [8943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_identifier,
    STATE(206), 1,
      sym_cond,
    STATE(243), 1,
      sym__not_macro_id,
  [8974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_GT,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [8987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_where,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    STATE(479), 1,
      sym__where_clauses,
  [9000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_GT,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_type_bound_repeat2,
  [9013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_GT,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_grammar_type_params_repeat1,
  [9026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 3,
      sym_macro_id,
      sym_identifier,
      sym_escape,
  [9035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_GT,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [9048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [9057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_type_bound_repeat1,
  [9070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_GT,
    STATE(331), 1,
      aux_sym_macro_repeat1,
  [9083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_PLUS,
    ACTIONS(888), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_identifier,
    STATE(202), 1,
      sym_cond,
    STATE(243), 1,
      sym__not_macro_id,
  [9107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_GT,
    STATE(338), 1,
      aux_sym_grammar_type_params_repeat1,
  [9120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_grammar_type_params_repeat1,
  [9133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_GT,
    ACTIONS(900), 1,
      sym_identifier,
    STATE(378), 1,
      sym__not_macro_id,
  [9146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [9155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_GT,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_type_bound_repeat2,
  [9168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(388), 1,
      sym_id,
    ACTIONS(819), 2,
      sym_macro_id,
      sym_identifier,
  [9179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_type_bound_repeat1,
  [9192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 3,
      sym_macro_id,
      sym_identifier,
      sym_escape,
  [9201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_GT,
    ACTIONS(910), 1,
      sym_identifier,
    STATE(459), 1,
      sym__not_macro_id,
  [9214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_GT,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_type_bound_repeat2,
  [9227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      anon_sym_RBRACK,
    STATE(475), 1,
      sym_annotation_arg,
  [9240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [9249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [9262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_GT,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    STATE(414), 1,
      aux_sym_parametrized_type_repeat1,
  [9275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_GT,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_grammar_type_params_repeat1,
  [9299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 3,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_enum,
  [9308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_identifier,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_grammar_parameter,
  [9332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    STATE(395), 1,
      aux_sym_enum_token_repeat1,
  [9345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      aux_sym__grammar_params_repeat1,
  [9358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
  [9367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(326), 1,
      aux_sym_grammar_type_params_repeat1,
  [9380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_GT,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_grammar_type_params_repeat1,
  [9393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [9402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_type_bound_repeat1,
  [9424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_GT,
    STATE(335), 1,
      aux_sym_macro_repeat1,
  [9437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [9450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [9459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [9468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(949), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym__where_clauses_repeat1,
  [9481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(953), 1,
      anon_sym_GT,
    STATE(405), 1,
      aux_sym_nonterminal_name_repeat1,
  [9494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [9503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 3,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [9512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [9530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_GT,
    ACTIONS(959), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_type_bound_repeat2,
  [9543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_identifier,
    STATE(203), 1,
      sym_cond,
    STATE(243), 1,
      sym__not_macro_id,
  [9556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    ACTIONS(963), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym__alternatives_repeat1,
  [9569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    ACTIONS(967), 1,
      anon_sym_RBRACE,
    STATE(324), 1,
      aux_sym_match_block_repeat1,
  [9582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [9595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_LPAREN,
    ACTIONS(971), 1,
      anon_sym_RBRACK,
    STATE(508), 1,
      sym_annotation_arg,
  [9608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym_normal_action,
    ACTIONS(973), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    ACTIONS(980), 1,
      anon_sym_GT,
    STATE(390), 1,
      aux_sym_type_bound_repeat2,
  [9632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_RBRACE,
    STATE(398), 1,
      aux_sym_match_block_repeat1,
  [9645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_identifier,
    STATE(243), 1,
      sym__not_macro_id,
    STATE(259), 1,
      sym_cond,
  [9667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_COMMA,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
    STATE(395), 1,
      aux_sym_enum_token_repeat1,
  [9689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 3,
      sym_normal_action,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_match_block_repeat1,
  [9720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [9729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [9738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [9747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      sym_normal_action,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_identifier,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_grammar_parameter,
  [9769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(472), 1,
      sym_id,
    ACTIONS(819), 2,
      sym_macro_id,
      sym_identifier,
  [9780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_GT,
    STATE(311), 1,
      aux_sym_nonterminal_name_repeat1,
  [9793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym__grammar_params_repeat1,
  [9806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [9819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_identifier,
    ACTIONS(1003), 1,
      anon_sym_GT,
    STATE(459), 1,
      sym__not_macro_id,
  [9832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      anon_sym_GT,
    STATE(369), 1,
      aux_sym_grammar_type_params_repeat1,
  [9845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_GT,
    STATE(359), 1,
      aux_sym_parametrized_type_repeat1,
  [9858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [9867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_PLUS,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [9887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_GT,
    STATE(414), 1,
      aux_sym_parametrized_type_repeat1,
  [9900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [9909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_PLUS,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [9920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [9929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [9937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      sym_use,
      anon_sym_grammar,
  [9945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [9953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_identifier,
    STATE(459), 1,
      sym__not_macro_id,
  [9963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [9971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [9979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_string_literal_token1,
    STATE(467), 1,
      sym_string_literal,
  [9989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [9997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [10013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [10021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_COLON,
    ACTIONS(1045), 1,
      anon_sym_EQ,
  [10039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_COLON,
    ACTIONS(1051), 1,
      anon_sym_EQ,
  [10057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [10065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [10073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [10081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [10105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [10113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      sym_identifier,
    STATE(455), 1,
      aux_sym_path_repeat1,
  [10123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [10131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [10139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
  [10149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      aux_sym_string_literal_token1,
    STATE(214), 1,
      sym_string_literal,
  [10175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [10199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [10207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
  [10225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_identifier,
    STATE(426), 1,
      sym_grammar_parameter,
  [10243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
  [10253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_COLON,
    ACTIONS(1078), 1,
      anon_sym_EQ,
  [10279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [10287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [10295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [10303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
  [10318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_EQ,
  [10325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      sym_identifier,
  [10332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_LPAREN,
  [10339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
  [10346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym_identifier,
  [10353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COLON,
  [10360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_LT,
  [10367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_LBRACE,
  [10374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_EQ,
  [10381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_POUND,
  [10388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_RBRACK,
  [10395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_RBRACK,
  [10402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_PLUS,
  [10409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SEMI,
  [10416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_COLON,
  [10423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_SEMI,
  [10430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_EQ,
  [10437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 1,
      sym_identifier,
  [10444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 1,
      anon_sym_COLON,
  [10451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_PLUS,
  [10458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      anon_sym_COLON,
  [10465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_RBRACK,
  [10472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_LT,
  [10479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_EQ,
  [10486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_SEMI,
  [10493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_COLON,
  [10500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_SEMI,
  [10507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      sym_normal_action,
  [10514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
  [10521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      sym_normal_action,
  [10528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      sym_identifier,
  [10535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_SEMI,
  [10542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_SEMI,
  [10549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_LBRACE,
  [10556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_LBRACE,
  [10563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_LBRACK,
  [10570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LBRACE,
  [10577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_LT,
  [10584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_EQ,
  [10591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LT,
  [10598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_LT,
  [10605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      ts_builtin_sym_end,
  [10612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_SEMI,
  [10619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_LT,
  [10626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
  [10633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_identifier,
  [10640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COLON_COLON,
  [10647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_LBRACK,
  [10654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      ts_builtin_sym_end,
  [10661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_COLON,
  [10668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      ts_builtin_sym_end,
  [10675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_COLON,
  [10682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      sym_identifier,
  [10689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 350,
  [SMALL_STATE(8)] = 417,
  [SMALL_STATE(9)] = 484,
  [SMALL_STATE(10)] = 551,
  [SMALL_STATE(11)] = 611,
  [SMALL_STATE(12)] = 675,
  [SMALL_STATE(13)] = 735,
  [SMALL_STATE(14)] = 795,
  [SMALL_STATE(15)] = 855,
  [SMALL_STATE(16)] = 910,
  [SMALL_STATE(17)] = 971,
  [SMALL_STATE(18)] = 1032,
  [SMALL_STATE(19)] = 1093,
  [SMALL_STATE(20)] = 1127,
  [SMALL_STATE(21)] = 1185,
  [SMALL_STATE(22)] = 1242,
  [SMALL_STATE(23)] = 1299,
  [SMALL_STATE(24)] = 1352,
  [SMALL_STATE(25)] = 1381,
  [SMALL_STATE(26)] = 1438,
  [SMALL_STATE(27)] = 1467,
  [SMALL_STATE(28)] = 1524,
  [SMALL_STATE(29)] = 1553,
  [SMALL_STATE(30)] = 1606,
  [SMALL_STATE(31)] = 1663,
  [SMALL_STATE(32)] = 1720,
  [SMALL_STATE(33)] = 1777,
  [SMALL_STATE(34)] = 1834,
  [SMALL_STATE(35)] = 1863,
  [SMALL_STATE(36)] = 1892,
  [SMALL_STATE(37)] = 1921,
  [SMALL_STATE(38)] = 1974,
  [SMALL_STATE(39)] = 2031,
  [SMALL_STATE(40)] = 2060,
  [SMALL_STATE(41)] = 2109,
  [SMALL_STATE(42)] = 2162,
  [SMALL_STATE(43)] = 2191,
  [SMALL_STATE(44)] = 2220,
  [SMALL_STATE(45)] = 2273,
  [SMALL_STATE(46)] = 2302,
  [SMALL_STATE(47)] = 2331,
  [SMALL_STATE(48)] = 2381,
  [SMALL_STATE(49)] = 2433,
  [SMALL_STATE(50)] = 2479,
  [SMALL_STATE(51)] = 2529,
  [SMALL_STATE(52)] = 2579,
  [SMALL_STATE(53)] = 2625,
  [SMALL_STATE(54)] = 2671,
  [SMALL_STATE(55)] = 2717,
  [SMALL_STATE(56)] = 2767,
  [SMALL_STATE(57)] = 2813,
  [SMALL_STATE(58)] = 2859,
  [SMALL_STATE(59)] = 2905,
  [SMALL_STATE(60)] = 2950,
  [SMALL_STATE(61)] = 2995,
  [SMALL_STATE(62)] = 3040,
  [SMALL_STATE(63)] = 3085,
  [SMALL_STATE(64)] = 3130,
  [SMALL_STATE(65)] = 3177,
  [SMALL_STATE(66)] = 3222,
  [SMALL_STATE(67)] = 3267,
  [SMALL_STATE(68)] = 3312,
  [SMALL_STATE(69)] = 3357,
  [SMALL_STATE(70)] = 3403,
  [SMALL_STATE(71)] = 3429,
  [SMALL_STATE(72)] = 3455,
  [SMALL_STATE(73)] = 3501,
  [SMALL_STATE(74)] = 3547,
  [SMALL_STATE(75)] = 3573,
  [SMALL_STATE(76)] = 3599,
  [SMALL_STATE(77)] = 3645,
  [SMALL_STATE(78)] = 3691,
  [SMALL_STATE(79)] = 3737,
  [SMALL_STATE(80)] = 3779,
  [SMALL_STATE(81)] = 3825,
  [SMALL_STATE(82)] = 3871,
  [SMALL_STATE(83)] = 3913,
  [SMALL_STATE(84)] = 3959,
  [SMALL_STATE(85)] = 4002,
  [SMALL_STATE(86)] = 4045,
  [SMALL_STATE(87)] = 4088,
  [SMALL_STATE(88)] = 4131,
  [SMALL_STATE(89)] = 4174,
  [SMALL_STATE(90)] = 4217,
  [SMALL_STATE(91)] = 4260,
  [SMALL_STATE(92)] = 4303,
  [SMALL_STATE(93)] = 4346,
  [SMALL_STATE(94)] = 4389,
  [SMALL_STATE(95)] = 4432,
  [SMALL_STATE(96)] = 4475,
  [SMALL_STATE(97)] = 4518,
  [SMALL_STATE(98)] = 4561,
  [SMALL_STATE(99)] = 4604,
  [SMALL_STATE(100)] = 4647,
  [SMALL_STATE(101)] = 4690,
  [SMALL_STATE(102)] = 4733,
  [SMALL_STATE(103)] = 4776,
  [SMALL_STATE(104)] = 4819,
  [SMALL_STATE(105)] = 4862,
  [SMALL_STATE(106)] = 4905,
  [SMALL_STATE(107)] = 4941,
  [SMALL_STATE(108)] = 4977,
  [SMALL_STATE(109)] = 5013,
  [SMALL_STATE(110)] = 5046,
  [SMALL_STATE(111)] = 5073,
  [SMALL_STATE(112)] = 5106,
  [SMALL_STATE(113)] = 5139,
  [SMALL_STATE(114)] = 5172,
  [SMALL_STATE(115)] = 5205,
  [SMALL_STATE(116)] = 5238,
  [SMALL_STATE(117)] = 5260,
  [SMALL_STATE(118)] = 5282,
  [SMALL_STATE(119)] = 5304,
  [SMALL_STATE(120)] = 5326,
  [SMALL_STATE(121)] = 5348,
  [SMALL_STATE(122)] = 5370,
  [SMALL_STATE(123)] = 5392,
  [SMALL_STATE(124)] = 5414,
  [SMALL_STATE(125)] = 5436,
  [SMALL_STATE(126)] = 5458,
  [SMALL_STATE(127)] = 5480,
  [SMALL_STATE(128)] = 5505,
  [SMALL_STATE(129)] = 5543,
  [SMALL_STATE(130)] = 5581,
  [SMALL_STATE(131)] = 5605,
  [SMALL_STATE(132)] = 5629,
  [SMALL_STATE(133)] = 5667,
  [SMALL_STATE(134)] = 5689,
  [SMALL_STATE(135)] = 5711,
  [SMALL_STATE(136)] = 5749,
  [SMALL_STATE(137)] = 5773,
  [SMALL_STATE(138)] = 5811,
  [SMALL_STATE(139)] = 5833,
  [SMALL_STATE(140)] = 5852,
  [SMALL_STATE(141)] = 5871,
  [SMALL_STATE(142)] = 5892,
  [SMALL_STATE(143)] = 5911,
  [SMALL_STATE(144)] = 5930,
  [SMALL_STATE(145)] = 5949,
  [SMALL_STATE(146)] = 5968,
  [SMALL_STATE(147)] = 5986,
  [SMALL_STATE(148)] = 6004,
  [SMALL_STATE(149)] = 6024,
  [SMALL_STATE(150)] = 6042,
  [SMALL_STATE(151)] = 6060,
  [SMALL_STATE(152)] = 6078,
  [SMALL_STATE(153)] = 6110,
  [SMALL_STATE(154)] = 6130,
  [SMALL_STATE(155)] = 6148,
  [SMALL_STATE(156)] = 6166,
  [SMALL_STATE(157)] = 6184,
  [SMALL_STATE(158)] = 6202,
  [SMALL_STATE(159)] = 6220,
  [SMALL_STATE(160)] = 6238,
  [SMALL_STATE(161)] = 6256,
  [SMALL_STATE(162)] = 6276,
  [SMALL_STATE(163)] = 6296,
  [SMALL_STATE(164)] = 6314,
  [SMALL_STATE(165)] = 6332,
  [SMALL_STATE(166)] = 6347,
  [SMALL_STATE(167)] = 6364,
  [SMALL_STATE(168)] = 6381,
  [SMALL_STATE(169)] = 6398,
  [SMALL_STATE(170)] = 6413,
  [SMALL_STATE(171)] = 6430,
  [SMALL_STATE(172)] = 6445,
  [SMALL_STATE(173)] = 6460,
  [SMALL_STATE(174)] = 6475,
  [SMALL_STATE(175)] = 6490,
  [SMALL_STATE(176)] = 6507,
  [SMALL_STATE(177)] = 6522,
  [SMALL_STATE(178)] = 6537,
  [SMALL_STATE(179)] = 6552,
  [SMALL_STATE(180)] = 6567,
  [SMALL_STATE(181)] = 6584,
  [SMALL_STATE(182)] = 6599,
  [SMALL_STATE(183)] = 6616,
  [SMALL_STATE(184)] = 6631,
  [SMALL_STATE(185)] = 6648,
  [SMALL_STATE(186)] = 6663,
  [SMALL_STATE(187)] = 6678,
  [SMALL_STATE(188)] = 6693,
  [SMALL_STATE(189)] = 6710,
  [SMALL_STATE(190)] = 6725,
  [SMALL_STATE(191)] = 6742,
  [SMALL_STATE(192)] = 6759,
  [SMALL_STATE(193)] = 6776,
  [SMALL_STATE(194)] = 6793,
  [SMALL_STATE(195)] = 6808,
  [SMALL_STATE(196)] = 6825,
  [SMALL_STATE(197)] = 6840,
  [SMALL_STATE(198)] = 6855,
  [SMALL_STATE(199)] = 6870,
  [SMALL_STATE(200)] = 6887,
  [SMALL_STATE(201)] = 6904,
  [SMALL_STATE(202)] = 6930,
  [SMALL_STATE(203)] = 6948,
  [SMALL_STATE(204)] = 6966,
  [SMALL_STATE(205)] = 6992,
  [SMALL_STATE(206)] = 7018,
  [SMALL_STATE(207)] = 7036,
  [SMALL_STATE(208)] = 7052,
  [SMALL_STATE(209)] = 7065,
  [SMALL_STATE(210)] = 7084,
  [SMALL_STATE(211)] = 7109,
  [SMALL_STATE(212)] = 7124,
  [SMALL_STATE(213)] = 7147,
  [SMALL_STATE(214)] = 7170,
  [SMALL_STATE(215)] = 7183,
  [SMALL_STATE(216)] = 7206,
  [SMALL_STATE(217)] = 7219,
  [SMALL_STATE(218)] = 7244,
  [SMALL_STATE(219)] = 7259,
  [SMALL_STATE(220)] = 7274,
  [SMALL_STATE(221)] = 7289,
  [SMALL_STATE(222)] = 7302,
  [SMALL_STATE(223)] = 7325,
  [SMALL_STATE(224)] = 7338,
  [SMALL_STATE(225)] = 7361,
  [SMALL_STATE(226)] = 7378,
  [SMALL_STATE(227)] = 7401,
  [SMALL_STATE(228)] = 7424,
  [SMALL_STATE(229)] = 7436,
  [SMALL_STATE(230)] = 7448,
  [SMALL_STATE(231)] = 7460,
  [SMALL_STATE(232)] = 7480,
  [SMALL_STATE(233)] = 7494,
  [SMALL_STATE(234)] = 7506,
  [SMALL_STATE(235)] = 7518,
  [SMALL_STATE(236)] = 7538,
  [SMALL_STATE(237)] = 7550,
  [SMALL_STATE(238)] = 7562,
  [SMALL_STATE(239)] = 7582,
  [SMALL_STATE(240)] = 7594,
  [SMALL_STATE(241)] = 7606,
  [SMALL_STATE(242)] = 7618,
  [SMALL_STATE(243)] = 7631,
  [SMALL_STATE(244)] = 7644,
  [SMALL_STATE(245)] = 7663,
  [SMALL_STATE(246)] = 7682,
  [SMALL_STATE(247)] = 7697,
  [SMALL_STATE(248)] = 7714,
  [SMALL_STATE(249)] = 7727,
  [SMALL_STATE(250)] = 7742,
  [SMALL_STATE(251)] = 7755,
  [SMALL_STATE(252)] = 7768,
  [SMALL_STATE(253)] = 7781,
  [SMALL_STATE(254)] = 7796,
  [SMALL_STATE(255)] = 7813,
  [SMALL_STATE(256)] = 7830,
  [SMALL_STATE(257)] = 7849,
  [SMALL_STATE(258)] = 7868,
  [SMALL_STATE(259)] = 7887,
  [SMALL_STATE(260)] = 7900,
  [SMALL_STATE(261)] = 7915,
  [SMALL_STATE(262)] = 7934,
  [SMALL_STATE(263)] = 7953,
  [SMALL_STATE(264)] = 7968,
  [SMALL_STATE(265)] = 7985,
  [SMALL_STATE(266)] = 8004,
  [SMALL_STATE(267)] = 8021,
  [SMALL_STATE(268)] = 8036,
  [SMALL_STATE(269)] = 8053,
  [SMALL_STATE(270)] = 8072,
  [SMALL_STATE(271)] = 8091,
  [SMALL_STATE(272)] = 8106,
  [SMALL_STATE(273)] = 8121,
  [SMALL_STATE(274)] = 8136,
  [SMALL_STATE(275)] = 8151,
  [SMALL_STATE(276)] = 8170,
  [SMALL_STATE(277)] = 8185,
  [SMALL_STATE(278)] = 8204,
  [SMALL_STATE(279)] = 8223,
  [SMALL_STATE(280)] = 8238,
  [SMALL_STATE(281)] = 8253,
  [SMALL_STATE(282)] = 8272,
  [SMALL_STATE(283)] = 8291,
  [SMALL_STATE(284)] = 8310,
  [SMALL_STATE(285)] = 8326,
  [SMALL_STATE(286)] = 8340,
  [SMALL_STATE(287)] = 8354,
  [SMALL_STATE(288)] = 8368,
  [SMALL_STATE(289)] = 8384,
  [SMALL_STATE(290)] = 8396,
  [SMALL_STATE(291)] = 8408,
  [SMALL_STATE(292)] = 8422,
  [SMALL_STATE(293)] = 8434,
  [SMALL_STATE(294)] = 8448,
  [SMALL_STATE(295)] = 8462,
  [SMALL_STATE(296)] = 8476,
  [SMALL_STATE(297)] = 8490,
  [SMALL_STATE(298)] = 8504,
  [SMALL_STATE(299)] = 8518,
  [SMALL_STATE(300)] = 8532,
  [SMALL_STATE(301)] = 8544,
  [SMALL_STATE(302)] = 8558,
  [SMALL_STATE(303)] = 8570,
  [SMALL_STATE(304)] = 8584,
  [SMALL_STATE(305)] = 8598,
  [SMALL_STATE(306)] = 8614,
  [SMALL_STATE(307)] = 8628,
  [SMALL_STATE(308)] = 8644,
  [SMALL_STATE(309)] = 8658,
  [SMALL_STATE(310)] = 8672,
  [SMALL_STATE(311)] = 8684,
  [SMALL_STATE(312)] = 8697,
  [SMALL_STATE(313)] = 8710,
  [SMALL_STATE(314)] = 8723,
  [SMALL_STATE(315)] = 8736,
  [SMALL_STATE(316)] = 8747,
  [SMALL_STATE(317)] = 8756,
  [SMALL_STATE(318)] = 8769,
  [SMALL_STATE(319)] = 8778,
  [SMALL_STATE(320)] = 8791,
  [SMALL_STATE(321)] = 8804,
  [SMALL_STATE(322)] = 8817,
  [SMALL_STATE(323)] = 8830,
  [SMALL_STATE(324)] = 8843,
  [SMALL_STATE(325)] = 8856,
  [SMALL_STATE(326)] = 8869,
  [SMALL_STATE(327)] = 8882,
  [SMALL_STATE(328)] = 8895,
  [SMALL_STATE(329)] = 8908,
  [SMALL_STATE(330)] = 8917,
  [SMALL_STATE(331)] = 8930,
  [SMALL_STATE(332)] = 8943,
  [SMALL_STATE(333)] = 8952,
  [SMALL_STATE(334)] = 8961,
  [SMALL_STATE(335)] = 8974,
  [SMALL_STATE(336)] = 8987,
  [SMALL_STATE(337)] = 9000,
  [SMALL_STATE(338)] = 9013,
  [SMALL_STATE(339)] = 9026,
  [SMALL_STATE(340)] = 9035,
  [SMALL_STATE(341)] = 9048,
  [SMALL_STATE(342)] = 9057,
  [SMALL_STATE(343)] = 9070,
  [SMALL_STATE(344)] = 9083,
  [SMALL_STATE(345)] = 9094,
  [SMALL_STATE(346)] = 9107,
  [SMALL_STATE(347)] = 9120,
  [SMALL_STATE(348)] = 9133,
  [SMALL_STATE(349)] = 9146,
  [SMALL_STATE(350)] = 9155,
  [SMALL_STATE(351)] = 9168,
  [SMALL_STATE(352)] = 9179,
  [SMALL_STATE(353)] = 9192,
  [SMALL_STATE(354)] = 9201,
  [SMALL_STATE(355)] = 9214,
  [SMALL_STATE(356)] = 9227,
  [SMALL_STATE(357)] = 9240,
  [SMALL_STATE(358)] = 9249,
  [SMALL_STATE(359)] = 9262,
  [SMALL_STATE(360)] = 9275,
  [SMALL_STATE(361)] = 9286,
  [SMALL_STATE(362)] = 9299,
  [SMALL_STATE(363)] = 9308,
  [SMALL_STATE(364)] = 9319,
  [SMALL_STATE(365)] = 9332,
  [SMALL_STATE(366)] = 9345,
  [SMALL_STATE(367)] = 9358,
  [SMALL_STATE(368)] = 9367,
  [SMALL_STATE(369)] = 9380,
  [SMALL_STATE(370)] = 9393,
  [SMALL_STATE(371)] = 9402,
  [SMALL_STATE(372)] = 9411,
  [SMALL_STATE(373)] = 9424,
  [SMALL_STATE(374)] = 9437,
  [SMALL_STATE(375)] = 9450,
  [SMALL_STATE(376)] = 9459,
  [SMALL_STATE(377)] = 9468,
  [SMALL_STATE(378)] = 9481,
  [SMALL_STATE(379)] = 9494,
  [SMALL_STATE(380)] = 9503,
  [SMALL_STATE(381)] = 9512,
  [SMALL_STATE(382)] = 9521,
  [SMALL_STATE(383)] = 9530,
  [SMALL_STATE(384)] = 9543,
  [SMALL_STATE(385)] = 9556,
  [SMALL_STATE(386)] = 9569,
  [SMALL_STATE(387)] = 9582,
  [SMALL_STATE(388)] = 9595,
  [SMALL_STATE(389)] = 9608,
  [SMALL_STATE(390)] = 9619,
  [SMALL_STATE(391)] = 9632,
  [SMALL_STATE(392)] = 9645,
  [SMALL_STATE(393)] = 9654,
  [SMALL_STATE(394)] = 9667,
  [SMALL_STATE(395)] = 9676,
  [SMALL_STATE(396)] = 9689,
  [SMALL_STATE(397)] = 9698,
  [SMALL_STATE(398)] = 9707,
  [SMALL_STATE(399)] = 9720,
  [SMALL_STATE(400)] = 9729,
  [SMALL_STATE(401)] = 9738,
  [SMALL_STATE(402)] = 9747,
  [SMALL_STATE(403)] = 9756,
  [SMALL_STATE(404)] = 9769,
  [SMALL_STATE(405)] = 9780,
  [SMALL_STATE(406)] = 9793,
  [SMALL_STATE(407)] = 9806,
  [SMALL_STATE(408)] = 9819,
  [SMALL_STATE(409)] = 9832,
  [SMALL_STATE(410)] = 9845,
  [SMALL_STATE(411)] = 9858,
  [SMALL_STATE(412)] = 9867,
  [SMALL_STATE(413)] = 9878,
  [SMALL_STATE(414)] = 9887,
  [SMALL_STATE(415)] = 9900,
  [SMALL_STATE(416)] = 9909,
  [SMALL_STATE(417)] = 9920,
  [SMALL_STATE(418)] = 9929,
  [SMALL_STATE(419)] = 9937,
  [SMALL_STATE(420)] = 9945,
  [SMALL_STATE(421)] = 9953,
  [SMALL_STATE(422)] = 9963,
  [SMALL_STATE(423)] = 9971,
  [SMALL_STATE(424)] = 9979,
  [SMALL_STATE(425)] = 9989,
  [SMALL_STATE(426)] = 9997,
  [SMALL_STATE(427)] = 10005,
  [SMALL_STATE(428)] = 10013,
  [SMALL_STATE(429)] = 10021,
  [SMALL_STATE(430)] = 10029,
  [SMALL_STATE(431)] = 10039,
  [SMALL_STATE(432)] = 10047,
  [SMALL_STATE(433)] = 10057,
  [SMALL_STATE(434)] = 10065,
  [SMALL_STATE(435)] = 10073,
  [SMALL_STATE(436)] = 10081,
  [SMALL_STATE(437)] = 10089,
  [SMALL_STATE(438)] = 10097,
  [SMALL_STATE(439)] = 10105,
  [SMALL_STATE(440)] = 10113,
  [SMALL_STATE(441)] = 10123,
  [SMALL_STATE(442)] = 10131,
  [SMALL_STATE(443)] = 10139,
  [SMALL_STATE(444)] = 10149,
  [SMALL_STATE(445)] = 10157,
  [SMALL_STATE(446)] = 10165,
  [SMALL_STATE(447)] = 10175,
  [SMALL_STATE(448)] = 10183,
  [SMALL_STATE(449)] = 10191,
  [SMALL_STATE(450)] = 10199,
  [SMALL_STATE(451)] = 10207,
  [SMALL_STATE(452)] = 10215,
  [SMALL_STATE(453)] = 10225,
  [SMALL_STATE(454)] = 10233,
  [SMALL_STATE(455)] = 10243,
  [SMALL_STATE(456)] = 10253,
  [SMALL_STATE(457)] = 10261,
  [SMALL_STATE(458)] = 10269,
  [SMALL_STATE(459)] = 10279,
  [SMALL_STATE(460)] = 10287,
  [SMALL_STATE(461)] = 10295,
  [SMALL_STATE(462)] = 10303,
  [SMALL_STATE(463)] = 10311,
  [SMALL_STATE(464)] = 10318,
  [SMALL_STATE(465)] = 10325,
  [SMALL_STATE(466)] = 10332,
  [SMALL_STATE(467)] = 10339,
  [SMALL_STATE(468)] = 10346,
  [SMALL_STATE(469)] = 10353,
  [SMALL_STATE(470)] = 10360,
  [SMALL_STATE(471)] = 10367,
  [SMALL_STATE(472)] = 10374,
  [SMALL_STATE(473)] = 10381,
  [SMALL_STATE(474)] = 10388,
  [SMALL_STATE(475)] = 10395,
  [SMALL_STATE(476)] = 10402,
  [SMALL_STATE(477)] = 10409,
  [SMALL_STATE(478)] = 10416,
  [SMALL_STATE(479)] = 10423,
  [SMALL_STATE(480)] = 10430,
  [SMALL_STATE(481)] = 10437,
  [SMALL_STATE(482)] = 10444,
  [SMALL_STATE(483)] = 10451,
  [SMALL_STATE(484)] = 10458,
  [SMALL_STATE(485)] = 10465,
  [SMALL_STATE(486)] = 10472,
  [SMALL_STATE(487)] = 10479,
  [SMALL_STATE(488)] = 10486,
  [SMALL_STATE(489)] = 10493,
  [SMALL_STATE(490)] = 10500,
  [SMALL_STATE(491)] = 10507,
  [SMALL_STATE(492)] = 10514,
  [SMALL_STATE(493)] = 10521,
  [SMALL_STATE(494)] = 10528,
  [SMALL_STATE(495)] = 10535,
  [SMALL_STATE(496)] = 10542,
  [SMALL_STATE(497)] = 10549,
  [SMALL_STATE(498)] = 10556,
  [SMALL_STATE(499)] = 10563,
  [SMALL_STATE(500)] = 10570,
  [SMALL_STATE(501)] = 10577,
  [SMALL_STATE(502)] = 10584,
  [SMALL_STATE(503)] = 10591,
  [SMALL_STATE(504)] = 10598,
  [SMALL_STATE(505)] = 10605,
  [SMALL_STATE(506)] = 10612,
  [SMALL_STATE(507)] = 10619,
  [SMALL_STATE(508)] = 10626,
  [SMALL_STATE(509)] = 10633,
  [SMALL_STATE(510)] = 10640,
  [SMALL_STATE(511)] = 10647,
  [SMALL_STATE(512)] = 10654,
  [SMALL_STATE(513)] = 10661,
  [SMALL_STATE(514)] = 10668,
  [SMALL_STATE(515)] = 10675,
  [SMALL_STATE(516)] = 10682,
  [SMALL_STATE(517)] = 10689,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(106),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(39),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(54),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(39),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(297),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_symbol_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(503),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(425),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(425),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(499),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(498),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(497),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(292),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(504),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(490),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_symbol, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_symbol, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bare_symbol, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bare_symbol, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_symbol, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_symbol, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bare_symbol, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bare_symbol, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(107),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(122),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(56),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(122),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(298),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(507),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_symbol, 5, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_symbol, 5, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_symbol, 6, .production_id = 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_symbol, 6, .production_id = 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nonterminal_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nonterminal_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nonterminal_repeat1, 2), SHIFT_REPEAT(511),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_token_repeat1, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_token_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_token_repeat1, 2), SHIFT_REPEAT(471),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_token, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_token, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(494),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(133),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(501),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(440),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_token, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_token, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 5),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 7),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 5),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 6),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 6),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 6),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 6),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 8),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 5),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 4),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__use, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 10),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dyn_type, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 7),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 7),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 9),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 5),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 6),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 5),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 4),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 4),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ref, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 3),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 6),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 6),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 6),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 6),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 6),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 6),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_type, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 5),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_item, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_item, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 4),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 5),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lifetime, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lifetime, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nonterminal_repeat1, 2), SHIFT_REPEAT(499),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 6),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 6),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 5),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 5),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 3),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat1, 2), SHIFT_REPEAT(494),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol1, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_token_repeat1, 2),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_token_repeat1, 2), SHIFT_REPEAT(481),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_type_params_repeat1, 2), SHIFT_REPEAT(284),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_type_params_repeat1, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 7),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(291),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 5),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(496),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 4),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 6),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nonterminal_name_repeat1, 2), SHIFT_REPEAT(421),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nonterminal_name_repeat1, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__where_clauses_repeat1, 2),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__where_clauses_repeat1, 2), SHIFT_REPEAT(20),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2), SHIFT_REPEAT(238),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__alternatives_repeat1, 2), SHIFT_REPEAT(11),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__alternatives_repeat1, 2),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 5),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(82),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 5),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 4),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 3),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associated_type, 5),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(103),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 5),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_item, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat2, 2), SHIFT_REPEAT(47),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat2, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_token_repeat1, 2), SHIFT_REPEAT(222),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_token_repeat1, 2),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 6),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 4),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__grammar_params_repeat1, 2), SHIFT_REPEAT(454),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__grammar_params_repeat1, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parametrized_type_repeat1, 2), SHIFT_REPEAT(64),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parametrized_type_repeat1, 2),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 8),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 9),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 3),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 6),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 7),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 4),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 1),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 4),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_parameter, 3),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_item, 2),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 4),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 2),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 6),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound_param, 3),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound_param, 1),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 5),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 3),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(510),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 5),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 5),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conversion, 2),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arg, 5),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminal, 1),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_macro_id = 0,
  ts_external_token_use = 1,
  ts_external_token__string_content = 2,
  ts_external_token_regex_literal = 3,
  ts_external_token_normal_action = 4,
  ts_external_token_failible_action = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_macro_id] = sym_macro_id,
  [ts_external_token_use] = sym_use,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_regex_literal] = sym_regex_literal,
  [ts_external_token_normal_action] = sym_normal_action,
  [ts_external_token_failible_action] = sym_failible_action,
};

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_macro_id] = true,
    [ts_external_token_use] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token_regex_literal] = true,
    [ts_external_token_normal_action] = true,
    [ts_external_token_failible_action] = true,
  },
  [2] = {
    [ts_external_token_use] = true,
  },
  [3] = {
    [ts_external_token_macro_id] = true,
    [ts_external_token_regex_literal] = true,
    [ts_external_token_normal_action] = true,
    [ts_external_token_failible_action] = true,
  },
  [4] = {
    [ts_external_token_macro_id] = true,
    [ts_external_token_use] = true,
  },
  [5] = {
    [ts_external_token_macro_id] = true,
    [ts_external_token_regex_literal] = true,
  },
  [6] = {
    [ts_external_token_macro_id] = true,
  },
  [7] = {
    [ts_external_token_regex_literal] = true,
  },
  [8] = {
    [ts_external_token_normal_action] = true,
    [ts_external_token_failible_action] = true,
  },
  [9] = {
    [ts_external_token__string_content] = true,
  },
  [10] = {
    [ts_external_token_normal_action] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_lalrpop_external_scanner_create(void);
void tree_sitter_lalrpop_external_scanner_destroy(void *);
bool tree_sitter_lalrpop_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_lalrpop_external_scanner_serialize(void *, char *);
void tree_sitter_lalrpop_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_lalrpop() {
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
      tree_sitter_lalrpop_external_scanner_create,
      tree_sitter_lalrpop_external_scanner_destroy,
      tree_sitter_lalrpop_external_scanner_scan,
      tree_sitter_lalrpop_external_scanner_serialize,
      tree_sitter_lalrpop_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
