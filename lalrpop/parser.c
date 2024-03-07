#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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

enum {
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

enum {
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
  [49] = 49,
  [50] = 47,
  [51] = 51,
  [52] = 47,
  [53] = 53,
  [54] = 49,
  [55] = 15,
  [56] = 49,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 62,
  [63] = 59,
  [64] = 62,
  [65] = 62,
  [66] = 60,
  [67] = 67,
  [68] = 60,
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
  [110] = 110,
  [111] = 110,
  [112] = 109,
  [113] = 25,
  [114] = 110,
  [115] = 109,
  [116] = 45,
  [117] = 46,
  [118] = 35,
  [119] = 30,
  [120] = 34,
  [121] = 31,
  [122] = 44,
  [123] = 41,
  [124] = 39,
  [125] = 32,
  [126] = 37,
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
  [140] = 70,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 82,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 78,
  [154] = 154,
  [155] = 155,
  [156] = 73,
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
  [208] = 30,
  [209] = 130,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 30,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 45,
  [222] = 222,
  [223] = 45,
  [224] = 224,
  [225] = 25,
  [226] = 226,
  [227] = 227,
  [228] = 31,
  [229] = 205,
  [230] = 46,
  [231] = 231,
  [232] = 232,
  [233] = 44,
  [234] = 39,
  [235] = 235,
  [236] = 35,
  [237] = 34,
  [238] = 238,
  [239] = 32,
  [240] = 41,
  [241] = 37,
  [242] = 148,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 248,
  [251] = 248,
  [252] = 144,
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
  [291] = 286,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 294,
  [296] = 294,
  [297] = 297,
  [298] = 298,
  [299] = 286,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 294,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 286,
  [310] = 294,
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
  [341] = 73,
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
  [370] = 78,
  [371] = 371,
  [372] = 372,
  [373] = 320,
  [374] = 374,
  [375] = 82,
  [376] = 70,
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
  [396] = 45,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 30,
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
  [419] = 165,
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
      if (lookahead == '/') ADVANCE(13);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '?') ADVANCE(113);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(117);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '~') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(132);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(102);
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
      if (lookahead == '/') ADVANCE(13);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
      if (lookahead == '/') ADVANCE(13);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
  [19] = {.lex_state = 68, .external_lex_state = 4},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 68, .external_lex_state = 4},
  [22] = {.lex_state = 68, .external_lex_state = 4},
  [23] = {.lex_state = 68, .external_lex_state = 4},
  [24] = {.lex_state = 68, .external_lex_state = 4},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 68, .external_lex_state = 4},
  [27] = {.lex_state = 68, .external_lex_state = 4},
  [28] = {.lex_state = 68, .external_lex_state = 4},
  [29] = {.lex_state = 68, .external_lex_state = 4},
  [30] = {.lex_state = 1, .external_lex_state = 3},
  [31] = {.lex_state = 1, .external_lex_state = 3},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 1, .external_lex_state = 3},
  [35] = {.lex_state = 1, .external_lex_state = 3},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 1, .external_lex_state = 3},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 1, .external_lex_state = 3},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 2, .external_lex_state = 5},
  [44] = {.lex_state = 1, .external_lex_state = 3},
  [45] = {.lex_state = 1, .external_lex_state = 3},
  [46] = {.lex_state = 1, .external_lex_state = 3},
  [47] = {.lex_state = 2, .external_lex_state = 5},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 2, .external_lex_state = 5},
  [50] = {.lex_state = 2, .external_lex_state = 5},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2, .external_lex_state = 5},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 2, .external_lex_state = 5},
  [55] = {.lex_state = 2, .external_lex_state = 5},
  [56] = {.lex_state = 2, .external_lex_state = 5},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 2, .external_lex_state = 5},
  [60] = {.lex_state = 2, .external_lex_state = 5},
  [61] = {.lex_state = 2, .external_lex_state = 5},
  [62] = {.lex_state = 2, .external_lex_state = 5},
  [63] = {.lex_state = 2, .external_lex_state = 5},
  [64] = {.lex_state = 2, .external_lex_state = 5},
  [65] = {.lex_state = 2, .external_lex_state = 5},
  [66] = {.lex_state = 2, .external_lex_state = 5},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 2, .external_lex_state = 5},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 1, .external_lex_state = 3},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 1, .external_lex_state = 3},
  [74] = {.lex_state = 2, .external_lex_state = 5},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 1, .external_lex_state = 3},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 2, .external_lex_state = 5},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 1, .external_lex_state = 3},
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
  [127] = {.lex_state = 69, .external_lex_state = 4},
  [128] = {.lex_state = 69, .external_lex_state = 4},
  [129] = {.lex_state = 69, .external_lex_state = 4},
  [130] = {.lex_state = 2, .external_lex_state = 5},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 69, .external_lex_state = 4},
  [140] = {.lex_state = 2, .external_lex_state = 5},
  [141] = {.lex_state = 68, .external_lex_state = 4},
  [142] = {.lex_state = 69, .external_lex_state = 4},
  [143] = {.lex_state = 69, .external_lex_state = 4},
  [144] = {.lex_state = 2, .external_lex_state = 5},
  [145] = {.lex_state = 68, .external_lex_state = 4},
  [146] = {.lex_state = 69, .external_lex_state = 4},
  [147] = {.lex_state = 2, .external_lex_state = 5},
  [148] = {.lex_state = 2, .external_lex_state = 5},
  [149] = {.lex_state = 69, .external_lex_state = 4},
  [150] = {.lex_state = 68, .external_lex_state = 4},
  [151] = {.lex_state = 69, .external_lex_state = 4},
  [152] = {.lex_state = 69, .external_lex_state = 4},
  [153] = {.lex_state = 2, .external_lex_state = 5},
  [154] = {.lex_state = 69, .external_lex_state = 4},
  [155] = {.lex_state = 68, .external_lex_state = 4},
  [156] = {.lex_state = 2, .external_lex_state = 5},
  [157] = {.lex_state = 68},
  [158] = {.lex_state = 68, .external_lex_state = 4},
  [159] = {.lex_state = 68, .external_lex_state = 4},
  [160] = {.lex_state = 68, .external_lex_state = 4},
  [161] = {.lex_state = 68},
  [162] = {.lex_state = 68},
  [163] = {.lex_state = 68, .external_lex_state = 4},
  [164] = {.lex_state = 68, .external_lex_state = 4},
  [165] = {.lex_state = 68, .external_lex_state = 4},
  [166] = {.lex_state = 68, .external_lex_state = 4},
  [167] = {.lex_state = 68, .external_lex_state = 4},
  [168] = {.lex_state = 68, .external_lex_state = 4},
  [169] = {.lex_state = 68, .external_lex_state = 4},
  [170] = {.lex_state = 10, .external_lex_state = 6},
  [171] = {.lex_state = 68},
  [172] = {.lex_state = 68},
  [173] = {.lex_state = 68, .external_lex_state = 4},
  [174] = {.lex_state = 68, .external_lex_state = 4},
  [175] = {.lex_state = 68, .external_lex_state = 4},
  [176] = {.lex_state = 68},
  [177] = {.lex_state = 68},
  [178] = {.lex_state = 68, .external_lex_state = 4},
  [179] = {.lex_state = 68, .external_lex_state = 4},
  [180] = {.lex_state = 68, .external_lex_state = 4},
  [181] = {.lex_state = 68},
  [182] = {.lex_state = 68},
  [183] = {.lex_state = 68},
  [184] = {.lex_state = 68},
  [185] = {.lex_state = 68},
  [186] = {.lex_state = 68},
  [187] = {.lex_state = 68},
  [188] = {.lex_state = 68},
  [189] = {.lex_state = 68},
  [190] = {.lex_state = 68},
  [191] = {.lex_state = 68},
  [192] = {.lex_state = 68},
  [193] = {.lex_state = 68},
  [194] = {.lex_state = 68},
  [195] = {.lex_state = 68},
  [196] = {.lex_state = 68},
  [197] = {.lex_state = 68},
  [198] = {.lex_state = 68},
  [199] = {.lex_state = 68},
  [200] = {.lex_state = 68},
  [201] = {.lex_state = 2, .external_lex_state = 7},
  [202] = {.lex_state = 1, .external_lex_state = 8},
  [203] = {.lex_state = 2, .external_lex_state = 7},
  [204] = {.lex_state = 1, .external_lex_state = 8},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 2, .external_lex_state = 7},
  [207] = {.lex_state = 1, .external_lex_state = 8},
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
  [270] = {.lex_state = 15},
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
  [285] = {.lex_state = 5, .external_lex_state = 9},
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
  [296] = {.lex_state = 5, .external_lex_state = 9},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 5, .external_lex_state = 9},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 5, .external_lex_state = 9},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 11},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 5, .external_lex_state = 9},
  [310] = {.lex_state = 5, .external_lex_state = 9},
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

enum {
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

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grammar] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [anon_sym_grammar] = ACTIONS(3),
    [sym_use] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(13), 1,
      sym_symbol,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(167), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [67] = 18,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(13), 1,
      sym_symbol,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(159), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [134] = 18,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(13), 1,
      sym_symbol,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(174), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [201] = 18,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(13), 1,
      sym_symbol,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(166), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [268] = 18,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(13), 1,
      sym_symbol,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(180), 1,
      sym__alternatives,
    STATE(394), 1,
      sym_action,
    STATE(488), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [335] = 17,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_symbol,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(385), 1,
      sym_alternative,
    STATE(394), 1,
      sym_action,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [399] = 17,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_symbol,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(394), 1,
      sym_action,
    STATE(436), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [463] = 17,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_symbol,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(394), 1,
      sym_action,
    STATE(436), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [527] = 14,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(35), 1,
      anon_sym_if,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(329), 1,
      sym_action,
    STATE(14), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(33), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [584] = 14,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(35), 1,
      anon_sym_if,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(329), 1,
      sym_action,
    STATE(15), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(33), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [641] = 16,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(13), 1,
      sym_symbol,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(394), 1,
      sym_action,
    STATE(436), 1,
      sym_alternative,
    STATE(43), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [702] = 14,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(39), 1,
      anon_sym_if,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(381), 1,
      sym_action,
    STATE(11), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(37), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [759] = 14,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(25), 1,
      sym_macro_id,
    ACTIONS(43), 1,
      anon_sym_if,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(332), 1,
      sym_action,
    STATE(15), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [816] = 12,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(62), 1,
      anon_sym_if,
    ACTIONS(64), 1,
      sym_macro_id,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(15), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(56), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
    ACTIONS(45), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [868] = 17,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_for,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(98), 1,
      sym_forall,
    STATE(177), 1,
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
  [926] = 17,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_for,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_forall,
    STATE(177), 1,
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
  [984] = 17,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_for,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_forall,
    STATE(177), 1,
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
  [1042] = 17,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_escape,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_extern,
    ACTIONS(103), 1,
      anon_sym_match,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      sym_macro_id,
    ACTIONS(109), 1,
      sym_use,
    STATE(129), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(26), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(170), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(160), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1099] = 16,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_for,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(98), 1,
      sym_forall,
    STATE(177), 1,
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
  [1154] = 17,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_escape,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_extern,
    ACTIONS(103), 1,
      anon_sym_match,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      sym_macro_id,
    ACTIONS(109), 1,
      sym_use,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(24), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(170), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(160), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1211] = 17,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_escape,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_extern,
    ACTIONS(103), 1,
      anon_sym_match,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      sym_macro_id,
    ACTIONS(109), 1,
      sym_use,
    STATE(129), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(24), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(170), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(160), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1268] = 17,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_escape,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_extern,
    ACTIONS(103), 1,
      anon_sym_match,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      sym_macro_id,
    ACTIONS(109), 1,
      sym_use,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(29), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(170), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(160), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1325] = 17,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym_escape,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_extern,
    ACTIONS(132), 1,
      anon_sym_match,
    ACTIONS(135), 1,
      anon_sym_pub,
    ACTIONS(138), 1,
      sym_macro_id,
    ACTIONS(141), 1,
      sym_use,
    STATE(129), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(24), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(170), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(160), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1382] = 4,
    STATE(35), 1,
      sym_repeat,
    ACTIONS(146), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(148), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(144), 16,
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
  [1413] = 17,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_escape,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_extern,
    ACTIONS(103), 1,
      anon_sym_match,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      sym_macro_id,
    ACTIONS(109), 1,
      sym_use,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(24), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(170), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(160), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1470] = 17,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_escape,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_extern,
    ACTIONS(103), 1,
      anon_sym_match,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      sym_macro_id,
    ACTIONS(109), 1,
      sym_use,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(21), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(170), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(160), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1527] = 17,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_escape,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_extern,
    ACTIONS(103), 1,
      anon_sym_match,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      sym_macro_id,
    ACTIONS(109), 1,
      sym_use,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
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
    STATE(170), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(160), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1584] = 17,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_escape,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_extern,
    ACTIONS(103), 1,
      anon_sym_match,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
      sym_macro_id,
    ACTIONS(109), 1,
      sym_use,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_match_block,
    STATE(264), 1,
      sym_visibility,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(430), 1,
      sym_nonterminal_name,
    STATE(24), 2,
      sym_grammar_item,
      aux_sym_grammar_repeat1,
    STATE(170), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    STATE(160), 4,
      sym__use,
      sym_extern_token,
      sym_match_token,
      sym_nonterminal,
  [1641] = 2,
    ACTIONS(156), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(154), 19,
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
  [1667] = 2,
    ACTIONS(160), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(158), 19,
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
  [1693] = 2,
    ACTIONS(164), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(162), 19,
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
  [1719] = 14,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(166), 1,
      anon_sym_GT,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(177), 1,
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
  [1769] = 2,
    ACTIONS(172), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(170), 19,
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
  [1795] = 2,
    ACTIONS(176), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(174), 19,
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
  [1821] = 14,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_GT,
    STATE(177), 1,
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
  [1871] = 2,
    ACTIONS(182), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(180), 19,
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
  [1897] = 14,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_GT,
    STATE(177), 1,
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
  [1947] = 2,
    ACTIONS(188), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(186), 19,
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
  [1973] = 14,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_GT,
    STATE(177), 1,
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
  [2023] = 2,
    ACTIONS(194), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(192), 19,
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
  [2049] = 14,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_GT,
    STATE(177), 1,
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
  [2099] = 12,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym_macro_id,
    STATE(10), 1,
      sym_symbol,
    STATE(25), 1,
      sym_bare_symbol,
    STATE(82), 1,
      sym_binding_symbol,
    STATE(130), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(13), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(41), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2145] = 2,
    ACTIONS(200), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(198), 19,
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
  [2171] = 2,
    ACTIONS(204), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(202), 19,
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
  [2197] = 2,
    ACTIONS(208), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(206), 19,
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
  [2223] = 11,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    ACTIONS(220), 1,
      aux_sym_string_literal_token1,
    ACTIONS(222), 1,
      sym_macro_id,
    STATE(113), 1,
      sym_bare_symbol,
    STATE(147), 1,
      sym_binding_symbol,
    STATE(54), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(218), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(123), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2266] = 14,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_mut,
    STATE(79), 1,
      sym_lifetime,
    STATE(177), 1,
      sym_path,
    STATE(182), 1,
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
  [2315] = 11,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_string_literal_token1,
    ACTIONS(222), 1,
      sym_macro_id,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_bare_symbol,
    STATE(147), 1,
      sym_binding_symbol,
    STATE(55), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(218), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(123), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2358] = 11,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_string_literal_token1,
    ACTIONS(222), 1,
      sym_macro_id,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_bare_symbol,
    STATE(147), 1,
      sym_binding_symbol,
    STATE(56), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(218), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(123), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2401] = 13,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(232), 1,
      anon_sym_GT,
    STATE(177), 1,
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
  [2448] = 11,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_string_literal_token1,
    ACTIONS(222), 1,
      sym_macro_id,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_bare_symbol,
    STATE(147), 1,
      sym_binding_symbol,
    STATE(49), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(218), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(123), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2491] = 13,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(236), 1,
      anon_sym_GT,
    STATE(177), 1,
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
  [2538] = 11,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_string_literal_token1,
    ACTIONS(222), 1,
      sym_macro_id,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_bare_symbol,
    STATE(147), 1,
      sym_binding_symbol,
    STATE(55), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(218), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(123), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2581] = 11,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(240), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      aux_sym_string_literal_token1,
    ACTIONS(255), 1,
      sym_macro_id,
    STATE(113), 1,
      sym_bare_symbol,
    STATE(147), 1,
      sym_binding_symbol,
    STATE(55), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(249), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(123), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2624] = 11,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_string_literal_token1,
    ACTIONS(222), 1,
      sym_macro_id,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_bare_symbol,
    STATE(147), 1,
      sym_binding_symbol,
    STATE(55), 2,
      sym_symbol,
      aux_sym_expr_symbol_repeat1,
    ACTIONS(218), 5,
      sym_regex_literal,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
    STATE(123), 5,
      sym__symbol1,
      sym_macro,
      sym__quoted_literal,
      sym_expr_symbol,
      sym_string_literal,
  [2667] = 13,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(177), 1,
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
  [2714] = 13,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(260), 1,
      anon_sym_GT,
    STATE(177), 1,
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
  [2761] = 11,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(264), 1,
      anon_sym_GT,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(320), 1,
      sym_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    ACTIONS(270), 5,
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
  [2803] = 11,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    ACTIONS(276), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(270), 5,
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
  [2845] = 11,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    ACTIONS(278), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(343), 1,
      sym_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    ACTIONS(270), 5,
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
  [2887] = 11,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    ACTIONS(280), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(270), 5,
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
  [2929] = 11,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    ACTIONS(282), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(373), 1,
      sym_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    ACTIONS(270), 5,
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
  [2971] = 11,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    ACTIONS(284), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(270), 5,
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
  [3013] = 11,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    ACTIONS(286), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(270), 5,
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
  [3055] = 11,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    ACTIONS(288), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(270), 5,
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
  [3097] = 12,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [3141] = 11,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    ACTIONS(290), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(270), 5,
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
  [3183] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
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
  [3226] = 2,
    ACTIONS(296), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(294), 16,
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
  [3249] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
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
  [3292] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
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
  [3335] = 2,
    ACTIONS(304), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(302), 16,
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
  [3358] = 10,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(451), 1,
      sym_symbol,
    ACTIONS(270), 5,
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
  [3397] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
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
  [3440] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
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
  [3483] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
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
  [3526] = 2,
    ACTIONS(314), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(312), 16,
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
  [3549] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(316), 1,
      sym_mut,
    STATE(177), 1,
      sym_path,
    STATE(192), 1,
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
  [3592] = 10,
    ACTIONS(262), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    STATE(225), 1,
      sym_bare_symbol,
    STATE(375), 1,
      sym_binding_symbol,
    STATE(473), 1,
      sym_symbol,
    ACTIONS(270), 5,
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
  [3631] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
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
  [3674] = 2,
    ACTIONS(146), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(144), 16,
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
  [3697] = 12,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
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
  [3740] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [3780] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
      sym_path,
    STATE(200), 1,
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
  [3820] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [3860] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [3900] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
      sym_path,
    STATE(188), 1,
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
  [3940] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [3980] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4020] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
      sym_path,
    STATE(185), 1,
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
  [4060] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
      sym_path,
    STATE(192), 1,
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
  [4100] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4140] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4180] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4220] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4260] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
      sym_path,
    STATE(199), 1,
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
  [4300] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4340] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4380] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4420] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4460] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4500] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4540] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4580] = 11,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_dyn,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    STATE(177), 1,
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
  [4620] = 8,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(324), 1,
      sym_mut,
    STATE(274), 1,
      sym_bare_symbol,
    ACTIONS(270), 5,
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
  [4653] = 8,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(328), 1,
      sym_mut,
    STATE(273), 1,
      sym_bare_symbol,
    ACTIONS(270), 5,
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
  [4686] = 8,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 1,
      sym_mut,
    STATE(246), 1,
      sym_bare_symbol,
    ACTIONS(270), 5,
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
  [4719] = 7,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    STATE(279), 1,
      sym_bare_symbol,
    ACTIONS(270), 5,
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
  [4749] = 7,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    STATE(263), 1,
      sym_bare_symbol,
    ACTIONS(270), 5,
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
  [4779] = 7,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    STATE(253), 1,
      sym_bare_symbol,
    ACTIONS(270), 5,
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
  [4809] = 7,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    STATE(276), 1,
      sym_bare_symbol,
    ACTIONS(270), 5,
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
  [4839] = 4,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(118), 1,
      sym_repeat,
    ACTIONS(334), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(144), 10,
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
  [4863] = 7,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    STATE(280), 1,
      sym_bare_symbol,
    ACTIONS(270), 5,
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
  [4893] = 7,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    ACTIONS(274), 1,
      sym_macro_id,
    STATE(267), 1,
      sym_bare_symbol,
    ACTIONS(270), 5,
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
  [4923] = 2,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(202), 13,
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
  [4942] = 2,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(206), 13,
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
  [4961] = 2,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(174), 13,
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
  [4980] = 2,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(154), 13,
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
  [4999] = 2,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(170), 13,
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
  [5018] = 2,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(158), 13,
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
  [5037] = 2,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(198), 13,
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
  [5056] = 2,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(192), 13,
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
  [5075] = 2,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(186), 13,
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
  [5094] = 2,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(162), 13,
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
  [5113] = 2,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(180), 13,
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
  [5132] = 4,
    ACTIONS(340), 1,
      anon_sym_else,
    STATE(127), 2,
      sym_match_else,
      aux_sym_match_token_repeat1,
    ACTIONS(338), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(336), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5154] = 4,
    ACTIONS(347), 1,
      anon_sym_else,
    STATE(127), 2,
      sym_match_else,
      aux_sym_match_token_repeat1,
    ACTIONS(345), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(343), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5176] = 4,
    ACTIONS(347), 1,
      anon_sym_else,
    STATE(128), 2,
      sym_match_else,
      aux_sym_match_token_repeat1,
    ACTIONS(351), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(349), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5198] = 4,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_POUND,
    STATE(130), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
    ACTIONS(353), 9,
      sym_macro_id,
      sym_regex_literal,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_escape,
      sym_lookahead,
      sym_lookbehind,
      sym_error,
      aux_sym_string_literal_token1,
  [5220] = 11,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(362), 1,
      anon_sym_for,
    STATE(138), 1,
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
    ACTIONS(360), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5255] = 3,
    ACTIONS(366), 1,
      anon_sym_COLON,
    ACTIONS(368), 1,
      anon_sym_COLON_COLON,
    ACTIONS(364), 10,
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
  [5274] = 3,
    ACTIONS(368), 1,
      anon_sym_COLON_COLON,
    ACTIONS(372), 1,
      anon_sym_COLON,
    ACTIONS(370), 10,
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
  [5293] = 3,
    ACTIONS(368), 1,
      anon_sym_COLON_COLON,
    ACTIONS(376), 1,
      anon_sym_COLON,
    ACTIONS(374), 10,
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
  [5312] = 11,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(386), 1,
      anon_sym_for,
    ACTIONS(389), 1,
      anon_sym_COLON_COLON,
    STATE(135), 1,
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
    ACTIONS(378), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5347] = 11,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(362), 1,
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
    ACTIONS(392), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5382] = 11,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(362), 1,
      anon_sym_for,
    STATE(135), 1,
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
    ACTIONS(394), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5417] = 11,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(362), 1,
      anon_sym_for,
    STATE(135), 1,
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
    ACTIONS(392), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5452] = 2,
    ACTIONS(398), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
    ACTIONS(396), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5468] = 2,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(294), 10,
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
  [5484] = 3,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    ACTIONS(404), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(400), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5502] = 2,
    ACTIONS(408), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
    ACTIONS(406), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5518] = 2,
    ACTIONS(412), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
    ACTIONS(410), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5534] = 2,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(414), 10,
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
  [5550] = 3,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(422), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(418), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5568] = 2,
    ACTIONS(426), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
    ACTIONS(424), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5584] = 2,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(144), 10,
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
  [5600] = 2,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(428), 10,
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
  [5616] = 2,
    ACTIONS(434), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
    ACTIONS(432), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5632] = 3,
    ACTIONS(438), 1,
      anon_sym_SEMI,
    ACTIONS(440), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(436), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5650] = 2,
    ACTIONS(444), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
    ACTIONS(442), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5666] = 2,
    ACTIONS(448), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
    ACTIONS(446), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5682] = 2,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(312), 10,
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
  [5698] = 2,
    ACTIONS(452), 5,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_else,
      anon_sym_pub,
    ACTIONS(450), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5714] = 3,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(454), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5732] = 2,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(302), 10,
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
  [5748] = 3,
    ACTIONS(462), 1,
      anon_sym_LT,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5766] = 2,
    ACTIONS(468), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(466), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5781] = 2,
    ACTIONS(472), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(470), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5796] = 2,
    ACTIONS(476), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(474), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5811] = 2,
    ACTIONS(480), 1,
      anon_sym_DASH_GT,
    ACTIONS(478), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5826] = 2,
    ACTIONS(484), 1,
      anon_sym_DASH_GT,
    ACTIONS(482), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5841] = 2,
    ACTIONS(458), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(454), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5856] = 2,
    ACTIONS(488), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(486), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5871] = 2,
    ACTIONS(492), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(490), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5886] = 2,
    ACTIONS(496), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(494), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5901] = 2,
    ACTIONS(500), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(498), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5916] = 2,
    ACTIONS(422), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(418), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5931] = 2,
    ACTIONS(504), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(502), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [5946] = 9,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_escape,
    ACTIONS(99), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_pub,
    ACTIONS(107), 1,
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
  [5975] = 2,
    ACTIONS(508), 1,
      anon_sym_DASH_GT,
    ACTIONS(506), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [5990] = 2,
    ACTIONS(512), 1,
      anon_sym_DASH_GT,
    ACTIONS(510), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6005] = 2,
    ACTIONS(404), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(400), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [6020] = 2,
    ACTIONS(516), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(514), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [6035] = 2,
    ACTIONS(520), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(518), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [6050] = 2,
    ACTIONS(524), 1,
      anon_sym_DASH_GT,
    ACTIONS(522), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6065] = 2,
    ACTIONS(462), 1,
      anon_sym_LT,
    ACTIONS(460), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6080] = 2,
    ACTIONS(440), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(436), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [6095] = 2,
    ACTIONS(528), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(526), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [6110] = 2,
    ACTIONS(532), 4,
      sym_identifier,
      anon_sym_extern,
      anon_sym_match,
      anon_sym_pub,
    ACTIONS(530), 6,
      sym_macro_id,
      sym_use,
      ts_builtin_sym_end,
      sym_comment,
      sym_escape,
      anon_sym_POUND,
  [6125] = 1,
    ACTIONS(534), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6137] = 1,
    ACTIONS(536), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6149] = 1,
    ACTIONS(538), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6161] = 1,
    ACTIONS(540), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6173] = 1,
    ACTIONS(510), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6185] = 1,
    ACTIONS(542), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6197] = 1,
    ACTIONS(522), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6209] = 1,
    ACTIONS(478), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6221] = 1,
    ACTIONS(544), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6233] = 1,
    ACTIONS(546), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6245] = 1,
    ACTIONS(548), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6257] = 1,
    ACTIONS(550), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6269] = 1,
    ACTIONS(552), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6281] = 1,
    ACTIONS(554), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6293] = 1,
    ACTIONS(556), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6305] = 1,
    ACTIONS(558), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6317] = 1,
    ACTIONS(560), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6329] = 1,
    ACTIONS(562), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6341] = 1,
    ACTIONS(564), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6353] = 1,
    ACTIONS(566), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [6365] = 7,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    ACTIONS(574), 1,
      sym_regex_literal,
    STATE(437), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6388] = 3,
    STATE(397), 1,
      sym_action,
    ACTIONS(576), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6403] = 7,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(574), 1,
      sym_regex_literal,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    STATE(437), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6426] = 3,
    STATE(371), 1,
      sym_action,
    ACTIONS(580), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6441] = 2,
    ACTIONS(582), 3,
      sym_identifier,
      anon_sym_dyn,
      sym_mut,
    ACTIONS(584), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [6454] = 7,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(574), 1,
      sym_regex_literal,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6477] = 3,
    STATE(332), 1,
      sym_action,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6492] = 1,
    ACTIONS(154), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6502] = 4,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(353), 2,
      sym_macro_id,
      sym_escape,
    ACTIONS(355), 2,
      sym_identifier,
      anon_sym_pub,
    STATE(209), 2,
      sym_annotation,
      aux_sym_nonterminal_repeat1,
  [6518] = 7,
    ACTIONS(591), 1,
      anon_sym_SEMI,
    ACTIONS(593), 1,
      anon_sym_LT,
    ACTIONS(595), 1,
      anon_sym_LPAREN,
    ACTIONS(597), 1,
      anon_sym_where,
    STATE(258), 1,
      sym_grammar_type_params,
    STATE(314), 1,
      sym__grammar_params,
    STATE(506), 1,
      sym__where_clauses,
  [6540] = 2,
    ACTIONS(599), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(601), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [6552] = 6,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    ACTIONS(605), 1,
      anon_sym__,
    ACTIONS(607), 1,
      sym_regex_literal,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6572] = 6,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(605), 1,
      anon_sym__,
    ACTIONS(607), 1,
      sym_regex_literal,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6592] = 1,
    ACTIONS(611), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6602] = 6,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(605), 1,
      anon_sym__,
    ACTIONS(607), 1,
      sym_regex_literal,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6622] = 1,
    ACTIONS(154), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6632] = 7,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(362), 1,
      anon_sym_for,
    STATE(157), 1,
      sym_path,
    STATE(181), 1,
      sym_parametrized_type,
    STATE(305), 1,
      sym_forall,
    STATE(443), 1,
      aux_sym_path_repeat1,
  [6654] = 2,
    ACTIONS(615), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(617), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [6666] = 2,
    ACTIONS(619), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(621), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [6678] = 2,
    ACTIONS(623), 2,
      sym_identifier,
      anon_sym_dyn,
    ACTIONS(625), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_AMP,
      anon_sym_COLON_COLON,
  [6690] = 1,
    ACTIONS(202), 7,
      sym_normal_action,
      sym_failible_action,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [6700] = 6,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(574), 1,
      sym_regex_literal,
    STATE(437), 1,
      sym_conversion,
    STATE(491), 1,
      sym_terminal,
    STATE(493), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6720] = 1,
    ACTIONS(202), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6730] = 6,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(605), 1,
      anon_sym__,
    ACTIONS(607), 1,
      sym_regex_literal,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    STATE(391), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6750] = 3,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(144), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
    ACTIONS(629), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [6764] = 6,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(605), 1,
      anon_sym__,
    ACTIONS(607), 1,
      sym_regex_literal,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6784] = 6,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(605), 1,
      anon_sym__,
    ACTIONS(607), 1,
      sym_regex_literal,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6804] = 1,
    ACTIONS(158), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6813] = 1,
    ACTIONS(584), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
  [6822] = 1,
    ACTIONS(206), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6831] = 5,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 1,
      anon_sym_type,
    ACTIONS(639), 1,
      anon_sym_enum,
    STATE(306), 1,
      sym_enum_token,
    STATE(235), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [6848] = 2,
    ACTIONS(641), 2,
      sym_identifier,
      anon_sym_for,
    ACTIONS(378), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_COLON_COLON,
  [6859] = 1,
    ACTIONS(198), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6868] = 1,
    ACTIONS(186), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6877] = 5,
    ACTIONS(637), 1,
      anon_sym_type,
    ACTIONS(639), 1,
      anon_sym_enum,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_enum_token,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [6894] = 1,
    ACTIONS(174), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6903] = 1,
    ACTIONS(170), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6912] = 5,
    ACTIONS(570), 1,
      aux_sym_string_literal_token1,
    ACTIONS(605), 1,
      anon_sym__,
    ACTIONS(607), 1,
      sym_regex_literal,
    STATE(456), 1,
      sym_match_item,
    STATE(389), 2,
      sym__quoted_literal,
      sym_string_literal,
  [6929] = 1,
    ACTIONS(162), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6938] = 1,
    ACTIONS(192), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6947] = 1,
    ACTIONS(180), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_POUND,
  [6956] = 2,
    ACTIONS(430), 2,
      sym_identifier,
      anon_sym_pub,
    ACTIONS(428), 3,
      sym_macro_id,
      sym_escape,
      anon_sym_POUND,
  [6966] = 2,
    STATE(446), 1,
      sym__cond_op,
    ACTIONS(645), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_TILDE,
      anon_sym_BANG_TILDE,
  [6976] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(323), 1,
      sym_type_parameter,
  [6992] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7008] = 3,
    ACTIONS(653), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(629), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7020] = 4,
    ACTIONS(657), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      aux_sym_grammar_where_clause_repeat1,
    STATE(483), 1,
      sym_lifetime,
    ACTIONS(655), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [7034] = 2,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(660), 4,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7044] = 3,
    ACTIONS(666), 1,
      anon_sym_LT,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
    ACTIONS(664), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7056] = 2,
    ACTIONS(670), 1,
      anon_sym_COLON,
    ACTIONS(660), 4,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7066] = 2,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(660), 4,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7076] = 2,
    ACTIONS(416), 2,
      sym_identifier,
      anon_sym_pub,
    ACTIONS(414), 3,
      sym_macro_id,
      sym_escape,
      anon_sym_POUND,
  [7086] = 3,
    ACTIONS(674), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(629), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7098] = 4,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    STATE(266), 1,
      aux_sym_grammar_where_clause_repeat1,
    STATE(416), 1,
      sym_lifetime,
    ACTIONS(360), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [7112] = 4,
    ACTIONS(3), 1,
      anon_sym_grammar,
    ACTIONS(5), 1,
      sym_use,
    STATE(505), 1,
      sym_grammar,
    STATE(301), 2,
      sym__use,
      aux_sym_source_file_repeat1,
  [7126] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(676), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(409), 1,
      sym_type_parameter,
  [7142] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(678), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(322), 1,
      sym_type_parameter,
  [7158] = 5,
    ACTIONS(595), 1,
      anon_sym_LPAREN,
    ACTIONS(597), 1,
      anon_sym_where,
    ACTIONS(680), 1,
      anon_sym_SEMI,
    STATE(336), 1,
      sym__grammar_params,
    STATE(477), 1,
      sym__where_clauses,
  [7174] = 2,
    STATE(329), 1,
      sym_action,
    ACTIONS(23), 4,
      sym_normal_action,
      sym_failible_action,
      anon_sym_EQ_GT_ATL,
      anon_sym_EQ_GT_ATR,
  [7184] = 3,
    ACTIONS(684), 1,
      anon_sym_type,
    ACTIONS(682), 2,
      anon_sym_RBRACE,
      anon_sym_enum,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7196] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(687), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7212] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(689), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7228] = 3,
    ACTIONS(691), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(629), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7240] = 4,
    ACTIONS(107), 1,
      sym_macro_id,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(458), 1,
      sym_nonterminal_name,
    ACTIONS(97), 2,
      sym_identifier,
      sym_escape,
  [7254] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(368), 1,
      sym_type_parameter,
  [7270] = 4,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      aux_sym_grammar_where_clause_repeat1,
    STATE(363), 1,
      sym_lifetime,
    ACTIONS(392), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [7284] = 3,
    ACTIONS(695), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(629), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7296] = 4,
    ACTIONS(107), 1,
      sym_macro_id,
    STATE(425), 1,
      sym__not_macro_id,
    STATE(432), 1,
      sym_nonterminal_name,
    ACTIONS(97), 2,
      sym_identifier,
      sym_escape,
  [7310] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(697), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(346), 1,
      sym_type_parameter,
  [7326] = 5,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(699), 1,
      anon_sym_in,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(463), 1,
      sym_path,
  [7342] = 3,
    ACTIONS(368), 1,
      anon_sym_COLON_COLON,
    ACTIONS(701), 1,
      anon_sym_EQ,
    ACTIONS(370), 3,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
  [7354] = 3,
    ACTIONS(705), 1,
      anon_sym_LT,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    ACTIONS(703), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7366] = 3,
    ACTIONS(709), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(629), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7378] = 3,
    ACTIONS(711), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(629), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7390] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7406] = 3,
    ACTIONS(715), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(629), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7418] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7434] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(719), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7450] = 3,
    ACTIONS(721), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(629), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7462] = 3,
    ACTIONS(723), 1,
      anon_sym_GT,
    STATE(236), 1,
      sym_repeat,
    ACTIONS(629), 3,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
  [7474] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7490] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(727), 1,
      anon_sym_GT,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7506] = 5,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7522] = 4,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      sym_identifier,
    STATE(318), 1,
      sym_lifetime,
    STATE(400), 1,
      sym_type_parameter,
  [7535] = 3,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(733), 2,
      sym__string_content,
      sym_escape_sequence,
  [7546] = 3,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(738), 2,
      sym__string_content,
      sym_escape_sequence,
  [7557] = 3,
    ACTIONS(740), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(738), 2,
      sym__string_content,
      sym_escape_sequence,
  [7568] = 4,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(742), 1,
      sym_identifier,
    STATE(249), 1,
      sym_path,
    STATE(443), 1,
      aux_sym_path_repeat1,
  [7581] = 2,
    ACTIONS(746), 1,
      anon_sym_DASH_GT,
    ACTIONS(744), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7590] = 2,
    ACTIONS(750), 1,
      anon_sym_DASH_GT,
    ACTIONS(748), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7599] = 3,
    ACTIONS(752), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(738), 2,
      sym__string_content,
      sym_escape_sequence,
  [7610] = 2,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
    ACTIONS(754), 3,
      sym_macro_id,
      sym_identifier,
      sym_escape,
  [7619] = 3,
    ACTIONS(637), 1,
      anon_sym_type,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7630] = 3,
    ACTIONS(760), 1,
      anon_sym_DQUOTE,
    STATE(286), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(762), 2,
      sym__string_content,
      sym_escape_sequence,
  [7641] = 3,
    ACTIONS(764), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(766), 2,
      sym__string_content,
      sym_escape_sequence,
  [7652] = 3,
    ACTIONS(768), 1,
      anon_sym_DQUOTE,
    STATE(299), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(770), 2,
      sym__string_content,
      sym_escape_sequence,
  [7663] = 3,
    ACTIONS(637), 1,
      anon_sym_type,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    STATE(293), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7674] = 2,
    ACTIONS(776), 1,
      anon_sym_DASH_GT,
    ACTIONS(774), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7683] = 3,
    ACTIONS(778), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(738), 2,
      sym__string_content,
      sym_escape_sequence,
  [7694] = 2,
    ACTIONS(782), 1,
      anon_sym_DASH_GT,
    ACTIONS(780), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7703] = 3,
    ACTIONS(784), 1,
      anon_sym_grammar,
    ACTIONS(786), 1,
      sym_use,
    STATE(301), 2,
      sym__use,
      aux_sym_source_file_repeat1,
  [7714] = 2,
    ACTIONS(791), 1,
      anon_sym_DASH_GT,
    ACTIONS(789), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [7723] = 3,
    ACTIONS(793), 1,
      anon_sym_DQUOTE,
    STATE(309), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(795), 2,
      sym__string_content,
      sym_escape_sequence,
  [7734] = 3,
    ACTIONS(637), 1,
      anon_sym_type,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    STATE(260), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7745] = 4,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(742), 1,
      sym_identifier,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(466), 1,
      sym_path,
  [7758] = 3,
    ACTIONS(637), 1,
      anon_sym_type,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    STATE(304), 2,
      sym_associated_type,
      aux_sym_extern_token_repeat1,
  [7769] = 4,
    ACTIONS(85), 1,
      anon_sym_COLON_COLON,
    ACTIONS(742), 1,
      sym_identifier,
    STATE(443), 1,
      aux_sym_path_repeat1,
    STATE(492), 1,
      sym_path,
  [7782] = 3,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
    ACTIONS(800), 2,
      anon_sym_GT,
      anon_sym_RPAREN,
  [7793] = 3,
    ACTIONS(802), 1,
      anon_sym_DQUOTE,
    STATE(285), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(738), 2,
      sym__string_content,
      sym_escape_sequence,
  [7804] = 3,
    ACTIONS(804), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(806), 2,
      sym__string_content,
      sym_escape_sequence,
  [7815] = 3,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_GT,
    STATE(311), 1,
      aux_sym_nonterminal_name_repeat1,
  [7825] = 3,
    ACTIONS(813), 1,
      anon_sym_SEMI,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym__where_clauses_repeat1,
  [7835] = 3,
    ACTIONS(818), 1,
      sym_identifier,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      sym_grammar_parameter,
  [7845] = 3,
    ACTIONS(597), 1,
      anon_sym_where,
    ACTIONS(680), 1,
      anon_sym_SEMI,
    STATE(477), 1,
      sym__where_clauses,
  [7855] = 2,
    STATE(356), 1,
      sym_id,
    ACTIONS(822), 2,
      sym_macro_id,
      sym_identifier,
  [7863] = 1,
    ACTIONS(824), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [7869] = 3,
    ACTIONS(290), 1,
      anon_sym_GT,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [7879] = 1,
    ACTIONS(828), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [7885] = 3,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      aux_sym_enum_token_repeat1,
  [7895] = 3,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_GT,
    STATE(317), 1,
      aux_sym_macro_repeat1,
  [7905] = 3,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_match_block_repeat1,
  [7915] = 3,
    ACTIONS(843), 1,
      anon_sym_COMMA,
    ACTIONS(845), 1,
      anon_sym_GT,
    STATE(361), 1,
      aux_sym_grammar_type_params_repeat1,
  [7925] = 3,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_grammar_type_params_repeat1,
  [7935] = 3,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_match_block_repeat1,
  [7945] = 3,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym__alternatives_repeat1,
  [7955] = 3,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(847), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
  [7965] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym__grammar_params_repeat1,
  [7975] = 3,
    ACTIONS(857), 1,
      anon_sym_SEMI,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym__where_clauses_repeat1,
  [7985] = 1,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7991] = 3,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      aux_sym__alternatives_repeat1,
  [8001] = 3,
    ACTIONS(276), 1,
      anon_sym_GT,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [8011] = 1,
    ACTIONS(580), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8017] = 1,
    ACTIONS(744), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8023] = 3,
    ACTIONS(868), 1,
      sym_identifier,
    STATE(202), 1,
      sym_cond,
    STATE(243), 1,
      sym__not_macro_id,
  [8033] = 3,
    ACTIONS(288), 1,
      anon_sym_GT,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [8043] = 3,
    ACTIONS(597), 1,
      anon_sym_where,
    ACTIONS(872), 1,
      anon_sym_SEMI,
    STATE(479), 1,
      sym__where_clauses,
  [8053] = 3,
    ACTIONS(184), 1,
      anon_sym_GT,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_type_bound_repeat2,
  [8063] = 3,
    ACTIONS(713), 1,
      anon_sym_GT,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
  [8073] = 1,
    ACTIONS(878), 3,
      sym_macro_id,
      sym_identifier,
      sym_escape,
  [8079] = 3,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_GT,
    STATE(340), 1,
      aux_sym_macro_repeat1,
  [8089] = 1,
    ACTIONS(302), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [8095] = 3,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_type_bound_repeat1,
  [8105] = 3,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    ACTIONS(889), 1,
      anon_sym_GT,
    STATE(331), 1,
      aux_sym_macro_repeat1,
  [8115] = 2,
    ACTIONS(893), 1,
      anon_sym_PLUS,
    ACTIONS(891), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8123] = 3,
    ACTIONS(868), 1,
      sym_identifier,
    STATE(204), 1,
      sym_cond,
    STATE(243), 1,
      sym__not_macro_id,
  [8133] = 3,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      anon_sym_GT,
    STATE(338), 1,
      aux_sym_grammar_type_params_repeat1,
  [8143] = 3,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    ACTIONS(899), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
  [8153] = 3,
    ACTIONS(901), 1,
      anon_sym_GT,
    ACTIONS(903), 1,
      sym_identifier,
    STATE(378), 1,
      sym__not_macro_id,
  [8163] = 1,
    ACTIONS(789), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8169] = 3,
    ACTIONS(178), 1,
      anon_sym_GT,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_type_bound_repeat2,
  [8179] = 2,
    STATE(388), 1,
      sym_id,
    ACTIONS(822), 2,
      sym_macro_id,
      sym_identifier,
  [8187] = 3,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_type_bound_repeat1,
  [8197] = 1,
    ACTIONS(909), 3,
      sym_macro_id,
      sym_identifier,
      sym_escape,
  [8203] = 3,
    ACTIONS(911), 1,
      anon_sym_GT,
    ACTIONS(913), 1,
      sym_identifier,
    STATE(459), 1,
      sym__not_macro_id,
  [8213] = 3,
    ACTIONS(178), 1,
      anon_sym_GT,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_type_bound_repeat2,
  [8223] = 3,
    ACTIONS(915), 1,
      anon_sym_LPAREN,
    ACTIONS(917), 1,
      anon_sym_RBRACK,
    STATE(475), 1,
      sym_annotation_arg,
  [8233] = 1,
    ACTIONS(919), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [8239] = 3,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [8249] = 3,
    ACTIONS(236), 1,
      anon_sym_GT,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(414), 1,
      aux_sym_parametrized_type_repeat1,
  [8259] = 2,
    ACTIONS(893), 1,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8267] = 3,
    ACTIONS(689), 1,
      anon_sym_GT,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
  [8277] = 1,
    ACTIONS(925), 3,
      anon_sym_RBRACE,
      anon_sym_type,
      anon_sym_enum,
  [8283] = 2,
    ACTIONS(927), 1,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8291] = 3,
    ACTIONS(818), 1,
      sym_identifier,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_grammar_parameter,
  [8301] = 3,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    ACTIONS(931), 1,
      anon_sym_COMMA,
    STATE(395), 1,
      aux_sym_enum_token_repeat1,
  [8311] = 3,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    ACTIONS(933), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      aux_sym__grammar_params_repeat1,
  [8321] = 1,
    ACTIONS(655), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
  [8327] = 3,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    STATE(326), 1,
      aux_sym_grammar_type_params_repeat1,
  [8337] = 3,
    ACTIONS(687), 1,
      anon_sym_GT,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_grammar_type_params_repeat1,
  [8347] = 1,
    ACTIONS(312), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [8353] = 1,
    ACTIONS(576), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8359] = 3,
    ACTIONS(939), 1,
      anon_sym_COMMA,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      aux_sym_type_bound_repeat1,
  [8369] = 3,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      anon_sym_GT,
    STATE(335), 1,
      aux_sym_macro_repeat1,
  [8379] = 3,
    ACTIONS(947), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [8389] = 1,
    ACTIONS(144), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [8395] = 1,
    ACTIONS(294), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_POUND,
  [8401] = 3,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym__where_clauses_repeat1,
  [8411] = 3,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(956), 1,
      anon_sym_GT,
    STATE(405), 1,
      aux_sym_nonterminal_name_repeat1,
  [8421] = 1,
    ACTIONS(958), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [8427] = 1,
    ACTIONS(960), 3,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [8433] = 1,
    ACTIONS(33), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8439] = 1,
    ACTIONS(780), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8445] = 3,
    ACTIONS(166), 1,
      anon_sym_GT,
    ACTIONS(962), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_type_bound_repeat2,
  [8455] = 3,
    ACTIONS(868), 1,
      sym_identifier,
    STATE(207), 1,
      sym_cond,
    STATE(243), 1,
      sym__not_macro_id,
  [8465] = 3,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    ACTIONS(966), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym__alternatives_repeat1,
  [8475] = 3,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    ACTIONS(970), 1,
      anon_sym_RBRACE,
    STATE(324), 1,
      aux_sym_match_block_repeat1,
  [8485] = 3,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [8495] = 3,
    ACTIONS(915), 1,
      anon_sym_LPAREN,
    ACTIONS(974), 1,
      anon_sym_RBRACK,
    STATE(508), 1,
      sym_annotation_arg,
  [8505] = 2,
    ACTIONS(978), 1,
      sym_normal_action,
    ACTIONS(976), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8513] = 3,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(983), 1,
      anon_sym_GT,
    STATE(390), 1,
      aux_sym_type_bound_repeat2,
  [8523] = 3,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
    STATE(398), 1,
      aux_sym_match_block_repeat1,
  [8533] = 1,
    ACTIONS(989), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8539] = 3,
    ACTIONS(868), 1,
      sym_identifier,
    STATE(243), 1,
      sym__not_macro_id,
    STATE(259), 1,
      sym_cond,
  [8549] = 1,
    ACTIONS(37), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8555] = 3,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    STATE(395), 1,
      aux_sym_enum_token_repeat1,
  [8565] = 1,
    ACTIONS(202), 3,
      sym_normal_action,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8571] = 1,
    ACTIONS(996), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8577] = 3,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    ACTIONS(998), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_match_block_repeat1,
  [8587] = 1,
    ACTIONS(1000), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_where,
  [8593] = 1,
    ACTIONS(800), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [8599] = 1,
    ACTIONS(774), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8605] = 1,
    ACTIONS(154), 3,
      sym_normal_action,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8611] = 3,
    ACTIONS(818), 1,
      sym_identifier,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_grammar_parameter,
  [8621] = 2,
    STATE(472), 1,
      sym_id,
    ACTIONS(822), 2,
      sym_macro_id,
      sym_identifier,
  [8629] = 3,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_GT,
    STATE(311), 1,
      aux_sym_nonterminal_name_repeat1,
  [8639] = 3,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym__grammar_params_repeat1,
  [8649] = 3,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_type_bound_repeat1,
  [8659] = 3,
    ACTIONS(913), 1,
      sym_identifier,
    ACTIONS(1006), 1,
      anon_sym_GT,
    STATE(459), 1,
      sym__not_macro_id,
  [8669] = 3,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
    ACTIONS(1017), 1,
      anon_sym_GT,
    STATE(369), 1,
      aux_sym_grammar_type_params_repeat1,
  [8679] = 3,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_GT,
    STATE(359), 1,
      aux_sym_parametrized_type_repeat1,
  [8689] = 1,
    ACTIONS(748), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8695] = 2,
    ACTIONS(893), 1,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8703] = 1,
    ACTIONS(703), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8709] = 3,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_GT,
    STATE(414), 1,
      aux_sym_parametrized_type_repeat1,
  [8719] = 1,
    ACTIONS(1028), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8725] = 2,
    ACTIONS(927), 1,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8733] = 1,
    ACTIONS(1030), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [8739] = 1,
    ACTIONS(1032), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [8744] = 1,
    ACTIONS(490), 2,
      sym_use,
      anon_sym_grammar,
  [8749] = 1,
    ACTIONS(1034), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [8754] = 2,
    ACTIONS(913), 1,
      sym_identifier,
    STATE(459), 1,
      sym__not_macro_id,
  [8761] = 1,
    ACTIONS(1036), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [8766] = 1,
    ACTIONS(1038), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [8771] = 2,
    ACTIONS(272), 1,
      aux_sym_string_literal_token1,
    STATE(467), 1,
      sym_string_literal,
  [8778] = 1,
    ACTIONS(1040), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [8783] = 1,
    ACTIONS(1011), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8788] = 1,
    ACTIONS(1042), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [8793] = 1,
    ACTIONS(621), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [8798] = 1,
    ACTIONS(1044), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8803] = 2,
    ACTIONS(1046), 1,
      anon_sym_COLON,
    ACTIONS(1048), 1,
      anon_sym_EQ,
  [8810] = 1,
    ACTIONS(1050), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8815] = 2,
    ACTIONS(1052), 1,
      anon_sym_COLON,
    ACTIONS(1054), 1,
      anon_sym_EQ,
  [8822] = 1,
    ACTIONS(1056), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [8827] = 1,
    ACTIONS(1058), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [8832] = 1,
    ACTIONS(625), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [8837] = 1,
    ACTIONS(864), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8842] = 1,
    ACTIONS(994), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8847] = 1,
    ACTIONS(617), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [8852] = 1,
    ACTIONS(1060), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [8857] = 2,
    ACTIONS(1062), 1,
      sym_identifier,
    STATE(455), 1,
      aux_sym_path_repeat1,
  [8864] = 1,
    ACTIONS(601), 2,
      sym_identifier,
      anon_sym_COLON_COLON,
  [8869] = 1,
    ACTIONS(813), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [8874] = 2,
    ACTIONS(1062), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
  [8881] = 1,
    ACTIONS(983), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8886] = 1,
    ACTIONS(976), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8891] = 2,
    ACTIONS(1064), 1,
      aux_sym_string_literal_token1,
    STATE(214), 1,
      sym_string_literal,
  [8898] = 1,
    ACTIONS(1066), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8903] = 1,
    ACTIONS(1068), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8908] = 1,
    ACTIONS(1070), 2,
      anon_sym_SEMI,
      anon_sym_where,
  [8913] = 1,
    ACTIONS(1072), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [8918] = 1,
    ACTIONS(883), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8923] = 2,
    ACTIONS(1074), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
  [8930] = 1,
    ACTIONS(1026), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8935] = 2,
    ACTIONS(818), 1,
      sym_identifier,
    STATE(426), 1,
      sym_grammar_parameter,
  [8942] = 2,
    ACTIONS(1077), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
  [8949] = 1,
    ACTIONS(841), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8954] = 1,
    ACTIONS(950), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8959] = 2,
    ACTIONS(1079), 1,
      anon_sym_COLON,
    ACTIONS(1081), 1,
      anon_sym_EQ,
  [8966] = 1,
    ACTIONS(811), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [8971] = 1,
    ACTIONS(1083), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [8976] = 1,
    ACTIONS(1085), 2,
      anon_sym_RBRACE,
      anon_sym_type,
  [8981] = 1,
    ACTIONS(1087), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8986] = 1,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
  [8990] = 1,
    ACTIONS(1091), 1,
      anon_sym_EQ,
  [8994] = 1,
    ACTIONS(1093), 1,
      sym_identifier,
  [8998] = 1,
    ACTIONS(1095), 1,
      anon_sym_LPAREN,
  [9002] = 1,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
  [9006] = 1,
    ACTIONS(1099), 1,
      sym_identifier,
  [9010] = 1,
    ACTIONS(1101), 1,
      anon_sym_COLON,
  [9014] = 1,
    ACTIONS(1103), 1,
      anon_sym_LT,
  [9018] = 1,
    ACTIONS(1105), 1,
      anon_sym_LBRACE,
  [9022] = 1,
    ACTIONS(1107), 1,
      anon_sym_EQ,
  [9026] = 1,
    ACTIONS(1109), 1,
      anon_sym_POUND,
  [9030] = 1,
    ACTIONS(1111), 1,
      anon_sym_RBRACK,
  [9034] = 1,
    ACTIONS(1113), 1,
      anon_sym_RBRACK,
  [9038] = 1,
    ACTIONS(893), 1,
      anon_sym_PLUS,
  [9042] = 1,
    ACTIONS(872), 1,
      anon_sym_SEMI,
  [9046] = 1,
    ACTIONS(1115), 1,
      anon_sym_COLON,
  [9050] = 1,
    ACTIONS(1117), 1,
      anon_sym_SEMI,
  [9054] = 1,
    ACTIONS(1119), 1,
      anon_sym_EQ,
  [9058] = 1,
    ACTIONS(1121), 1,
      sym_identifier,
  [9062] = 1,
    ACTIONS(1123), 1,
      anon_sym_COLON,
  [9066] = 1,
    ACTIONS(927), 1,
      anon_sym_PLUS,
  [9070] = 1,
    ACTIONS(1125), 1,
      anon_sym_COLON,
  [9074] = 1,
    ACTIONS(1127), 1,
      anon_sym_RBRACK,
  [9078] = 1,
    ACTIONS(1129), 1,
      anon_sym_LT,
  [9082] = 1,
    ACTIONS(1054), 1,
      anon_sym_EQ,
  [9086] = 1,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
  [9090] = 1,
    ACTIONS(1133), 1,
      anon_sym_COLON,
  [9094] = 1,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
  [9098] = 1,
    ACTIONS(1137), 1,
      sym_normal_action,
  [9102] = 1,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
  [9106] = 1,
    ACTIONS(1141), 1,
      sym_normal_action,
  [9110] = 1,
    ACTIONS(1143), 1,
      sym_identifier,
  [9114] = 1,
    ACTIONS(1145), 1,
      anon_sym_SEMI,
  [9118] = 1,
    ACTIONS(1147), 1,
      anon_sym_SEMI,
  [9122] = 1,
    ACTIONS(1149), 1,
      anon_sym_LBRACE,
  [9126] = 1,
    ACTIONS(1151), 1,
      anon_sym_LBRACE,
  [9130] = 1,
    ACTIONS(1153), 1,
      anon_sym_LBRACK,
  [9134] = 1,
    ACTIONS(1155), 1,
      anon_sym_LBRACE,
  [9138] = 1,
    ACTIONS(1157), 1,
      anon_sym_LT,
  [9142] = 1,
    ACTIONS(1159), 1,
      anon_sym_EQ,
  [9146] = 1,
    ACTIONS(1161), 1,
      anon_sym_LT,
  [9150] = 1,
    ACTIONS(1163), 1,
      anon_sym_LT,
  [9154] = 1,
    ACTIONS(1165), 1,
      ts_builtin_sym_end,
  [9158] = 1,
    ACTIONS(680), 1,
      anon_sym_SEMI,
  [9162] = 1,
    ACTIONS(1167), 1,
      anon_sym_LT,
  [9166] = 1,
    ACTIONS(1169), 1,
      anon_sym_RBRACK,
  [9170] = 1,
    ACTIONS(1171), 1,
      sym_identifier,
  [9174] = 1,
    ACTIONS(368), 1,
      anon_sym_COLON_COLON,
  [9178] = 1,
    ACTIONS(1173), 1,
      anon_sym_LBRACK,
  [9182] = 1,
    ACTIONS(1175), 1,
      ts_builtin_sym_end,
  [9186] = 1,
    ACTIONS(1177), 1,
      anon_sym_COLON,
  [9190] = 1,
    ACTIONS(1179), 1,
      ts_builtin_sym_end,
  [9194] = 1,
    ACTIONS(1181), 1,
      anon_sym_COLON,
  [9198] = 1,
    ACTIONS(1183), 1,
      sym_identifier,
  [9202] = 1,
    ACTIONS(1185), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 335,
  [SMALL_STATE(8)] = 399,
  [SMALL_STATE(9)] = 463,
  [SMALL_STATE(10)] = 527,
  [SMALL_STATE(11)] = 584,
  [SMALL_STATE(12)] = 641,
  [SMALL_STATE(13)] = 702,
  [SMALL_STATE(14)] = 759,
  [SMALL_STATE(15)] = 816,
  [SMALL_STATE(16)] = 868,
  [SMALL_STATE(17)] = 926,
  [SMALL_STATE(18)] = 984,
  [SMALL_STATE(19)] = 1042,
  [SMALL_STATE(20)] = 1099,
  [SMALL_STATE(21)] = 1154,
  [SMALL_STATE(22)] = 1211,
  [SMALL_STATE(23)] = 1268,
  [SMALL_STATE(24)] = 1325,
  [SMALL_STATE(25)] = 1382,
  [SMALL_STATE(26)] = 1413,
  [SMALL_STATE(27)] = 1470,
  [SMALL_STATE(28)] = 1527,
  [SMALL_STATE(29)] = 1584,
  [SMALL_STATE(30)] = 1641,
  [SMALL_STATE(31)] = 1667,
  [SMALL_STATE(32)] = 1693,
  [SMALL_STATE(33)] = 1719,
  [SMALL_STATE(34)] = 1769,
  [SMALL_STATE(35)] = 1795,
  [SMALL_STATE(36)] = 1821,
  [SMALL_STATE(37)] = 1871,
  [SMALL_STATE(38)] = 1897,
  [SMALL_STATE(39)] = 1947,
  [SMALL_STATE(40)] = 1973,
  [SMALL_STATE(41)] = 2023,
  [SMALL_STATE(42)] = 2049,
  [SMALL_STATE(43)] = 2099,
  [SMALL_STATE(44)] = 2145,
  [SMALL_STATE(45)] = 2171,
  [SMALL_STATE(46)] = 2197,
  [SMALL_STATE(47)] = 2223,
  [SMALL_STATE(48)] = 2266,
  [SMALL_STATE(49)] = 2315,
  [SMALL_STATE(50)] = 2358,
  [SMALL_STATE(51)] = 2401,
  [SMALL_STATE(52)] = 2448,
  [SMALL_STATE(53)] = 2491,
  [SMALL_STATE(54)] = 2538,
  [SMALL_STATE(55)] = 2581,
  [SMALL_STATE(56)] = 2624,
  [SMALL_STATE(57)] = 2667,
  [SMALL_STATE(58)] = 2714,
  [SMALL_STATE(59)] = 2761,
  [SMALL_STATE(60)] = 2803,
  [SMALL_STATE(61)] = 2845,
  [SMALL_STATE(62)] = 2887,
  [SMALL_STATE(63)] = 2929,
  [SMALL_STATE(64)] = 2971,
  [SMALL_STATE(65)] = 3013,
  [SMALL_STATE(66)] = 3055,
  [SMALL_STATE(67)] = 3097,
  [SMALL_STATE(68)] = 3141,
  [SMALL_STATE(69)] = 3183,
  [SMALL_STATE(70)] = 3226,
  [SMALL_STATE(71)] = 3249,
  [SMALL_STATE(72)] = 3292,
  [SMALL_STATE(73)] = 3335,
  [SMALL_STATE(74)] = 3358,
  [SMALL_STATE(75)] = 3397,
  [SMALL_STATE(76)] = 3440,
  [SMALL_STATE(77)] = 3483,
  [SMALL_STATE(78)] = 3526,
  [SMALL_STATE(79)] = 3549,
  [SMALL_STATE(80)] = 3592,
  [SMALL_STATE(81)] = 3631,
  [SMALL_STATE(82)] = 3674,
  [SMALL_STATE(83)] = 3697,
  [SMALL_STATE(84)] = 3740,
  [SMALL_STATE(85)] = 3780,
  [SMALL_STATE(86)] = 3820,
  [SMALL_STATE(87)] = 3860,
  [SMALL_STATE(88)] = 3900,
  [SMALL_STATE(89)] = 3940,
  [SMALL_STATE(90)] = 3980,
  [SMALL_STATE(91)] = 4020,
  [SMALL_STATE(92)] = 4060,
  [SMALL_STATE(93)] = 4100,
  [SMALL_STATE(94)] = 4140,
  [SMALL_STATE(95)] = 4180,
  [SMALL_STATE(96)] = 4220,
  [SMALL_STATE(97)] = 4260,
  [SMALL_STATE(98)] = 4300,
  [SMALL_STATE(99)] = 4340,
  [SMALL_STATE(100)] = 4380,
  [SMALL_STATE(101)] = 4420,
  [SMALL_STATE(102)] = 4460,
  [SMALL_STATE(103)] = 4500,
  [SMALL_STATE(104)] = 4540,
  [SMALL_STATE(105)] = 4580,
  [SMALL_STATE(106)] = 4620,
  [SMALL_STATE(107)] = 4653,
  [SMALL_STATE(108)] = 4686,
  [SMALL_STATE(109)] = 4719,
  [SMALL_STATE(110)] = 4749,
  [SMALL_STATE(111)] = 4779,
  [SMALL_STATE(112)] = 4809,
  [SMALL_STATE(113)] = 4839,
  [SMALL_STATE(114)] = 4863,
  [SMALL_STATE(115)] = 4893,
  [SMALL_STATE(116)] = 4923,
  [SMALL_STATE(117)] = 4942,
  [SMALL_STATE(118)] = 4961,
  [SMALL_STATE(119)] = 4980,
  [SMALL_STATE(120)] = 4999,
  [SMALL_STATE(121)] = 5018,
  [SMALL_STATE(122)] = 5037,
  [SMALL_STATE(123)] = 5056,
  [SMALL_STATE(124)] = 5075,
  [SMALL_STATE(125)] = 5094,
  [SMALL_STATE(126)] = 5113,
  [SMALL_STATE(127)] = 5132,
  [SMALL_STATE(128)] = 5154,
  [SMALL_STATE(129)] = 5176,
  [SMALL_STATE(130)] = 5198,
  [SMALL_STATE(131)] = 5220,
  [SMALL_STATE(132)] = 5255,
  [SMALL_STATE(133)] = 5274,
  [SMALL_STATE(134)] = 5293,
  [SMALL_STATE(135)] = 5312,
  [SMALL_STATE(136)] = 5347,
  [SMALL_STATE(137)] = 5382,
  [SMALL_STATE(138)] = 5417,
  [SMALL_STATE(139)] = 5452,
  [SMALL_STATE(140)] = 5468,
  [SMALL_STATE(141)] = 5484,
  [SMALL_STATE(142)] = 5502,
  [SMALL_STATE(143)] = 5518,
  [SMALL_STATE(144)] = 5534,
  [SMALL_STATE(145)] = 5550,
  [SMALL_STATE(146)] = 5568,
  [SMALL_STATE(147)] = 5584,
  [SMALL_STATE(148)] = 5600,
  [SMALL_STATE(149)] = 5616,
  [SMALL_STATE(150)] = 5632,
  [SMALL_STATE(151)] = 5650,
  [SMALL_STATE(152)] = 5666,
  [SMALL_STATE(153)] = 5682,
  [SMALL_STATE(154)] = 5698,
  [SMALL_STATE(155)] = 5714,
  [SMALL_STATE(156)] = 5732,
  [SMALL_STATE(157)] = 5748,
  [SMALL_STATE(158)] = 5766,
  [SMALL_STATE(159)] = 5781,
  [SMALL_STATE(160)] = 5796,
  [SMALL_STATE(161)] = 5811,
  [SMALL_STATE(162)] = 5826,
  [SMALL_STATE(163)] = 5841,
  [SMALL_STATE(164)] = 5856,
  [SMALL_STATE(165)] = 5871,
  [SMALL_STATE(166)] = 5886,
  [SMALL_STATE(167)] = 5901,
  [SMALL_STATE(168)] = 5916,
  [SMALL_STATE(169)] = 5931,
  [SMALL_STATE(170)] = 5946,
  [SMALL_STATE(171)] = 5975,
  [SMALL_STATE(172)] = 5990,
  [SMALL_STATE(173)] = 6005,
  [SMALL_STATE(174)] = 6020,
  [SMALL_STATE(175)] = 6035,
  [SMALL_STATE(176)] = 6050,
  [SMALL_STATE(177)] = 6065,
  [SMALL_STATE(178)] = 6080,
  [SMALL_STATE(179)] = 6095,
  [SMALL_STATE(180)] = 6110,
  [SMALL_STATE(181)] = 6125,
  [SMALL_STATE(182)] = 6137,
  [SMALL_STATE(183)] = 6149,
  [SMALL_STATE(184)] = 6161,
  [SMALL_STATE(185)] = 6173,
  [SMALL_STATE(186)] = 6185,
  [SMALL_STATE(187)] = 6197,
  [SMALL_STATE(188)] = 6209,
  [SMALL_STATE(189)] = 6221,
  [SMALL_STATE(190)] = 6233,
  [SMALL_STATE(191)] = 6245,
  [SMALL_STATE(192)] = 6257,
  [SMALL_STATE(193)] = 6269,
  [SMALL_STATE(194)] = 6281,
  [SMALL_STATE(195)] = 6293,
  [SMALL_STATE(196)] = 6305,
  [SMALL_STATE(197)] = 6317,
  [SMALL_STATE(198)] = 6329,
  [SMALL_STATE(199)] = 6341,
  [SMALL_STATE(200)] = 6353,
  [SMALL_STATE(201)] = 6365,
  [SMALL_STATE(202)] = 6388,
  [SMALL_STATE(203)] = 6403,
  [SMALL_STATE(204)] = 6426,
  [SMALL_STATE(205)] = 6441,
  [SMALL_STATE(206)] = 6454,
  [SMALL_STATE(207)] = 6477,
  [SMALL_STATE(208)] = 6492,
  [SMALL_STATE(209)] = 6502,
  [SMALL_STATE(210)] = 6518,
  [SMALL_STATE(211)] = 6540,
  [SMALL_STATE(212)] = 6552,
  [SMALL_STATE(213)] = 6572,
  [SMALL_STATE(214)] = 6592,
  [SMALL_STATE(215)] = 6602,
  [SMALL_STATE(216)] = 6622,
  [SMALL_STATE(217)] = 6632,
  [SMALL_STATE(218)] = 6654,
  [SMALL_STATE(219)] = 6666,
  [SMALL_STATE(220)] = 6678,
  [SMALL_STATE(221)] = 6690,
  [SMALL_STATE(222)] = 6700,
  [SMALL_STATE(223)] = 6720,
  [SMALL_STATE(224)] = 6730,
  [SMALL_STATE(225)] = 6750,
  [SMALL_STATE(226)] = 6764,
  [SMALL_STATE(227)] = 6784,
  [SMALL_STATE(228)] = 6804,
  [SMALL_STATE(229)] = 6813,
  [SMALL_STATE(230)] = 6822,
  [SMALL_STATE(231)] = 6831,
  [SMALL_STATE(232)] = 6848,
  [SMALL_STATE(233)] = 6859,
  [SMALL_STATE(234)] = 6868,
  [SMALL_STATE(235)] = 6877,
  [SMALL_STATE(236)] = 6894,
  [SMALL_STATE(237)] = 6903,
  [SMALL_STATE(238)] = 6912,
  [SMALL_STATE(239)] = 6929,
  [SMALL_STATE(240)] = 6938,
  [SMALL_STATE(241)] = 6947,
  [SMALL_STATE(242)] = 6956,
  [SMALL_STATE(243)] = 6966,
  [SMALL_STATE(244)] = 6976,
  [SMALL_STATE(245)] = 6992,
  [SMALL_STATE(246)] = 7008,
  [SMALL_STATE(247)] = 7020,
  [SMALL_STATE(248)] = 7034,
  [SMALL_STATE(249)] = 7044,
  [SMALL_STATE(250)] = 7056,
  [SMALL_STATE(251)] = 7066,
  [SMALL_STATE(252)] = 7076,
  [SMALL_STATE(253)] = 7086,
  [SMALL_STATE(254)] = 7098,
  [SMALL_STATE(255)] = 7112,
  [SMALL_STATE(256)] = 7126,
  [SMALL_STATE(257)] = 7142,
  [SMALL_STATE(258)] = 7158,
  [SMALL_STATE(259)] = 7174,
  [SMALL_STATE(260)] = 7184,
  [SMALL_STATE(261)] = 7196,
  [SMALL_STATE(262)] = 7212,
  [SMALL_STATE(263)] = 7228,
  [SMALL_STATE(264)] = 7240,
  [SMALL_STATE(265)] = 7254,
  [SMALL_STATE(266)] = 7270,
  [SMALL_STATE(267)] = 7284,
  [SMALL_STATE(268)] = 7296,
  [SMALL_STATE(269)] = 7310,
  [SMALL_STATE(270)] = 7326,
  [SMALL_STATE(271)] = 7342,
  [SMALL_STATE(272)] = 7354,
  [SMALL_STATE(273)] = 7366,
  [SMALL_STATE(274)] = 7378,
  [SMALL_STATE(275)] = 7390,
  [SMALL_STATE(276)] = 7406,
  [SMALL_STATE(277)] = 7418,
  [SMALL_STATE(278)] = 7434,
  [SMALL_STATE(279)] = 7450,
  [SMALL_STATE(280)] = 7462,
  [SMALL_STATE(281)] = 7474,
  [SMALL_STATE(282)] = 7490,
  [SMALL_STATE(283)] = 7506,
  [SMALL_STATE(284)] = 7522,
  [SMALL_STATE(285)] = 7535,
  [SMALL_STATE(286)] = 7546,
  [SMALL_STATE(287)] = 7557,
  [SMALL_STATE(288)] = 7568,
  [SMALL_STATE(289)] = 7581,
  [SMALL_STATE(290)] = 7590,
  [SMALL_STATE(291)] = 7599,
  [SMALL_STATE(292)] = 7610,
  [SMALL_STATE(293)] = 7619,
  [SMALL_STATE(294)] = 7630,
  [SMALL_STATE(295)] = 7641,
  [SMALL_STATE(296)] = 7652,
  [SMALL_STATE(297)] = 7663,
  [SMALL_STATE(298)] = 7674,
  [SMALL_STATE(299)] = 7683,
  [SMALL_STATE(300)] = 7694,
  [SMALL_STATE(301)] = 7703,
  [SMALL_STATE(302)] = 7714,
  [SMALL_STATE(303)] = 7723,
  [SMALL_STATE(304)] = 7734,
  [SMALL_STATE(305)] = 7745,
  [SMALL_STATE(306)] = 7758,
  [SMALL_STATE(307)] = 7769,
  [SMALL_STATE(308)] = 7782,
  [SMALL_STATE(309)] = 7793,
  [SMALL_STATE(310)] = 7804,
  [SMALL_STATE(311)] = 7815,
  [SMALL_STATE(312)] = 7825,
  [SMALL_STATE(313)] = 7835,
  [SMALL_STATE(314)] = 7845,
  [SMALL_STATE(315)] = 7855,
  [SMALL_STATE(316)] = 7863,
  [SMALL_STATE(317)] = 7869,
  [SMALL_STATE(318)] = 7879,
  [SMALL_STATE(319)] = 7885,
  [SMALL_STATE(320)] = 7895,
  [SMALL_STATE(321)] = 7905,
  [SMALL_STATE(322)] = 7915,
  [SMALL_STATE(323)] = 7925,
  [SMALL_STATE(324)] = 7935,
  [SMALL_STATE(325)] = 7945,
  [SMALL_STATE(326)] = 7955,
  [SMALL_STATE(327)] = 7965,
  [SMALL_STATE(328)] = 7975,
  [SMALL_STATE(329)] = 7985,
  [SMALL_STATE(330)] = 7991,
  [SMALL_STATE(331)] = 8001,
  [SMALL_STATE(332)] = 8011,
  [SMALL_STATE(333)] = 8017,
  [SMALL_STATE(334)] = 8023,
  [SMALL_STATE(335)] = 8033,
  [SMALL_STATE(336)] = 8043,
  [SMALL_STATE(337)] = 8053,
  [SMALL_STATE(338)] = 8063,
  [SMALL_STATE(339)] = 8073,
  [SMALL_STATE(340)] = 8079,
  [SMALL_STATE(341)] = 8089,
  [SMALL_STATE(342)] = 8095,
  [SMALL_STATE(343)] = 8105,
  [SMALL_STATE(344)] = 8115,
  [SMALL_STATE(345)] = 8123,
  [SMALL_STATE(346)] = 8133,
  [SMALL_STATE(347)] = 8143,
  [SMALL_STATE(348)] = 8153,
  [SMALL_STATE(349)] = 8163,
  [SMALL_STATE(350)] = 8169,
  [SMALL_STATE(351)] = 8179,
  [SMALL_STATE(352)] = 8187,
  [SMALL_STATE(353)] = 8197,
  [SMALL_STATE(354)] = 8203,
  [SMALL_STATE(355)] = 8213,
  [SMALL_STATE(356)] = 8223,
  [SMALL_STATE(357)] = 8233,
  [SMALL_STATE(358)] = 8239,
  [SMALL_STATE(359)] = 8249,
  [SMALL_STATE(360)] = 8259,
  [SMALL_STATE(361)] = 8267,
  [SMALL_STATE(362)] = 8277,
  [SMALL_STATE(363)] = 8283,
  [SMALL_STATE(364)] = 8291,
  [SMALL_STATE(365)] = 8301,
  [SMALL_STATE(366)] = 8311,
  [SMALL_STATE(367)] = 8321,
  [SMALL_STATE(368)] = 8327,
  [SMALL_STATE(369)] = 8337,
  [SMALL_STATE(370)] = 8347,
  [SMALL_STATE(371)] = 8353,
  [SMALL_STATE(372)] = 8359,
  [SMALL_STATE(373)] = 8369,
  [SMALL_STATE(374)] = 8379,
  [SMALL_STATE(375)] = 8389,
  [SMALL_STATE(376)] = 8395,
  [SMALL_STATE(377)] = 8401,
  [SMALL_STATE(378)] = 8411,
  [SMALL_STATE(379)] = 8421,
  [SMALL_STATE(380)] = 8427,
  [SMALL_STATE(381)] = 8433,
  [SMALL_STATE(382)] = 8439,
  [SMALL_STATE(383)] = 8445,
  [SMALL_STATE(384)] = 8455,
  [SMALL_STATE(385)] = 8465,
  [SMALL_STATE(386)] = 8475,
  [SMALL_STATE(387)] = 8485,
  [SMALL_STATE(388)] = 8495,
  [SMALL_STATE(389)] = 8505,
  [SMALL_STATE(390)] = 8513,
  [SMALL_STATE(391)] = 8523,
  [SMALL_STATE(392)] = 8533,
  [SMALL_STATE(393)] = 8539,
  [SMALL_STATE(394)] = 8549,
  [SMALL_STATE(395)] = 8555,
  [SMALL_STATE(396)] = 8565,
  [SMALL_STATE(397)] = 8571,
  [SMALL_STATE(398)] = 8577,
  [SMALL_STATE(399)] = 8587,
  [SMALL_STATE(400)] = 8593,
  [SMALL_STATE(401)] = 8599,
  [SMALL_STATE(402)] = 8605,
  [SMALL_STATE(403)] = 8611,
  [SMALL_STATE(404)] = 8621,
  [SMALL_STATE(405)] = 8629,
  [SMALL_STATE(406)] = 8639,
  [SMALL_STATE(407)] = 8649,
  [SMALL_STATE(408)] = 8659,
  [SMALL_STATE(409)] = 8669,
  [SMALL_STATE(410)] = 8679,
  [SMALL_STATE(411)] = 8689,
  [SMALL_STATE(412)] = 8695,
  [SMALL_STATE(413)] = 8703,
  [SMALL_STATE(414)] = 8709,
  [SMALL_STATE(415)] = 8719,
  [SMALL_STATE(416)] = 8725,
  [SMALL_STATE(417)] = 8733,
  [SMALL_STATE(418)] = 8739,
  [SMALL_STATE(419)] = 8744,
  [SMALL_STATE(420)] = 8749,
  [SMALL_STATE(421)] = 8754,
  [SMALL_STATE(422)] = 8761,
  [SMALL_STATE(423)] = 8766,
  [SMALL_STATE(424)] = 8771,
  [SMALL_STATE(425)] = 8778,
  [SMALL_STATE(426)] = 8783,
  [SMALL_STATE(427)] = 8788,
  [SMALL_STATE(428)] = 8793,
  [SMALL_STATE(429)] = 8798,
  [SMALL_STATE(430)] = 8803,
  [SMALL_STATE(431)] = 8810,
  [SMALL_STATE(432)] = 8815,
  [SMALL_STATE(433)] = 8822,
  [SMALL_STATE(434)] = 8827,
  [SMALL_STATE(435)] = 8832,
  [SMALL_STATE(436)] = 8837,
  [SMALL_STATE(437)] = 8842,
  [SMALL_STATE(438)] = 8847,
  [SMALL_STATE(439)] = 8852,
  [SMALL_STATE(440)] = 8857,
  [SMALL_STATE(441)] = 8864,
  [SMALL_STATE(442)] = 8869,
  [SMALL_STATE(443)] = 8874,
  [SMALL_STATE(444)] = 8881,
  [SMALL_STATE(445)] = 8886,
  [SMALL_STATE(446)] = 8891,
  [SMALL_STATE(447)] = 8898,
  [SMALL_STATE(448)] = 8903,
  [SMALL_STATE(449)] = 8908,
  [SMALL_STATE(450)] = 8913,
  [SMALL_STATE(451)] = 8918,
  [SMALL_STATE(452)] = 8923,
  [SMALL_STATE(453)] = 8930,
  [SMALL_STATE(454)] = 8935,
  [SMALL_STATE(455)] = 8942,
  [SMALL_STATE(456)] = 8949,
  [SMALL_STATE(457)] = 8954,
  [SMALL_STATE(458)] = 8959,
  [SMALL_STATE(459)] = 8966,
  [SMALL_STATE(460)] = 8971,
  [SMALL_STATE(461)] = 8976,
  [SMALL_STATE(462)] = 8981,
  [SMALL_STATE(463)] = 8986,
  [SMALL_STATE(464)] = 8990,
  [SMALL_STATE(465)] = 8994,
  [SMALL_STATE(466)] = 8998,
  [SMALL_STATE(467)] = 9002,
  [SMALL_STATE(468)] = 9006,
  [SMALL_STATE(469)] = 9010,
  [SMALL_STATE(470)] = 9014,
  [SMALL_STATE(471)] = 9018,
  [SMALL_STATE(472)] = 9022,
  [SMALL_STATE(473)] = 9026,
  [SMALL_STATE(474)] = 9030,
  [SMALL_STATE(475)] = 9034,
  [SMALL_STATE(476)] = 9038,
  [SMALL_STATE(477)] = 9042,
  [SMALL_STATE(478)] = 9046,
  [SMALL_STATE(479)] = 9050,
  [SMALL_STATE(480)] = 9054,
  [SMALL_STATE(481)] = 9058,
  [SMALL_STATE(482)] = 9062,
  [SMALL_STATE(483)] = 9066,
  [SMALL_STATE(484)] = 9070,
  [SMALL_STATE(485)] = 9074,
  [SMALL_STATE(486)] = 9078,
  [SMALL_STATE(487)] = 9082,
  [SMALL_STATE(488)] = 9086,
  [SMALL_STATE(489)] = 9090,
  [SMALL_STATE(490)] = 9094,
  [SMALL_STATE(491)] = 9098,
  [SMALL_STATE(492)] = 9102,
  [SMALL_STATE(493)] = 9106,
  [SMALL_STATE(494)] = 9110,
  [SMALL_STATE(495)] = 9114,
  [SMALL_STATE(496)] = 9118,
  [SMALL_STATE(497)] = 9122,
  [SMALL_STATE(498)] = 9126,
  [SMALL_STATE(499)] = 9130,
  [SMALL_STATE(500)] = 9134,
  [SMALL_STATE(501)] = 9138,
  [SMALL_STATE(502)] = 9142,
  [SMALL_STATE(503)] = 9146,
  [SMALL_STATE(504)] = 9150,
  [SMALL_STATE(505)] = 9154,
  [SMALL_STATE(506)] = 9158,
  [SMALL_STATE(507)] = 9162,
  [SMALL_STATE(508)] = 9166,
  [SMALL_STATE(509)] = 9170,
  [SMALL_STATE(510)] = 9174,
  [SMALL_STATE(511)] = 9178,
  [SMALL_STATE(512)] = 9182,
  [SMALL_STATE(513)] = 9186,
  [SMALL_STATE(514)] = 9190,
  [SMALL_STATE(515)] = 9194,
  [SMALL_STATE(516)] = 9198,
  [SMALL_STATE(517)] = 9202,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(107),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(41),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(50),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(41),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(310),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_symbol_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(503),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(160),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(425),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(425),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(499),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(498),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(497),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(292),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(504),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(490),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_symbol, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_symbol, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_symbol, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_symbol, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bare_symbol, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bare_symbol, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bare_symbol, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bare_symbol, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 6),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 6),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(106),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(123),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(47),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(123),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(295),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_symbol_repeat1, 2), SHIFT_REPEAT(507),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_symbol, 6, .production_id = 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_symbol, 6, .production_id = 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding_symbol, 5, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding_symbol, 5, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_token_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_token_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_token_repeat1, 2), SHIFT_REPEAT(471),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_token, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_token, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_token, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_token, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nonterminal_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nonterminal_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nonterminal_repeat1, 2), SHIFT_REPEAT(511),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(494),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(133),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(501),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2), SHIFT_REPEAT(440),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 5),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 6),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 6),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 5),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 5),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 4),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 4),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 5),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_block, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_else, 6),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_else, 6),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 5),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alternatives, 6),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alternatives, 6),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 5),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 5),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_item, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_item, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 7),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__use, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 4),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 6),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 6),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 5),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 6),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 7),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 7),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 4),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 8),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_token, 5),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_token, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 6),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dyn_type, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_type, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ref, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 4),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 6),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 10),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_type, 9),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 5),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 4),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lifetime, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lifetime, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nonterminal_repeat1, 2), SHIFT_REPEAT(499),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 6),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 6),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 5),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 5),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 3),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forall, 4),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forall, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_where_clause_repeat2, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_where_clause_repeat1, 2), SHIFT_REPEAT(494),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol1, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_token_repeat1, 2),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_token_repeat1, 2), SHIFT_REPEAT(481),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(285),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 7),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 6),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 5),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(496),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 4),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_type_params_repeat1, 2), SHIFT_REPEAT(284),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_type_params_repeat1, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nonterminal_name_repeat1, 2), SHIFT_REPEAT(421),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nonterminal_name_repeat1, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__where_clauses_repeat1, 2),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__where_clauses_repeat1, 2), SHIFT_REPEAT(20),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2), SHIFT_REPEAT(238),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__where_clauses, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__alternatives_repeat1, 2), SHIFT_REPEAT(12),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__alternatives_repeat1, 2),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 5),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(74),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_where_clause, 5),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 4),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 3),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associated_type, 5),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(94),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 5),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_item, 1),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [980] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat2, 2), SHIFT_REPEAT(57),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat2, 2),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_token_repeat1, 2), SHIFT_REPEAT(222),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_token_repeat1, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 6),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_type_params, 4),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__grammar_params_repeat1, 2), SHIFT_REPEAT(454),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__grammar_params_repeat1, 2),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parametrized_type_repeat1, 2), SHIFT_REPEAT(67),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parametrized_type_repeat1, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 8),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 9),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 3),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 6),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 7),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 4),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 1),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 4),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_parameter, 3),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_item, 2),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 4),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 6),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound_param, 3),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound_param, 1),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grammar_params, 5),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 3),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(510),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal_name, 5),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_token, 5),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conversion, 2),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_arg, 5),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminal, 1),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1179] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_lalrpop_external_scanner_create(void);
void tree_sitter_lalrpop_external_scanner_destroy(void *);
bool tree_sitter_lalrpop_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_lalrpop_external_scanner_serialize(void *, char *);
void tree_sitter_lalrpop_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lalrpop(void) {
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
