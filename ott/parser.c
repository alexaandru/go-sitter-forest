#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 229
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 5
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 36

enum ts_symbol_identifiers {
  anon_sym_grammar = 1,
  anon_sym_embed = 2,
  anon_sym_subrules = 3,
  anon_sym_defns = 4,
  sym_comment = 5,
  aux_sym_subrules_token1 = 6,
  anon_sym_LT_COLON_COLON = 7,
  anon_sym_COLON_COLON = 8,
  anon_sym_COLON_COLON_EQ = 9,
  anon_sym_defn = 10,
  anon_sym_by = 11,
  anon_sym_DASH_DASH_DASH_DASH = 12,
  aux_sym_dash_line_token1 = 13,
  anon_sym_PIPE = 14,
  anon_sym_LT_SLASH = 15,
  anon_sym_SLASH_SLASH = 16,
  anon_sym_SLASH_GT = 17,
  aux_sym__element_string_token1 = 18,
  anon_sym_metavar = 19,
  anon_sym_indexvar = 20,
  anon_sym_COMMA = 21,
  anon_sym_LBRACE_LBRACE = 22,
  anon_sym_RBRACE_RBRACE = 23,
  sym_hom_name = 24,
  anon_sym_LBRACK_LBRACK = 25,
  anon_sym_RBRACK_RBRACK = 26,
  anon_sym_IN = 27,
  anon_sym_SQUOTE = 28,
  sym__namespace_prefix_string = 29,
  anon_sym_DOT_DOT = 30,
  anon_sym_DOT_DOT_DOT = 31,
  anon_sym_DOT_DOT_DOT_DOT = 32,
  sym__whitespace = 33,
  aux_sym__line_end_token1 = 34,
  sym_line_cont = 35,
  sym__eof = 36,
  sym_hom_string = 37,
  sym_hom_inner_string_init = 38,
  sym_hom_inner_string_left = 39,
  sym_hom_inner_string_right = 40,
  sym_hom_inner_comp_left = 41,
  sym_error_sentinel = 42,
  sym_source_file = 43,
  sym__item = 44,
  sym_subrules = 45,
  sym_defnclass = 46,
  sym_defnclass_name = 47,
  sym_defn = 48,
  sym_defn_name = 49,
  sym_defn_rule = 50,
  sym_rule_separator = 51,
  sym_rule_name = 52,
  sym_dash_line = 53,
  sym_rule_line = 54,
  sym_grammar_rule = 55,
  sym_production = 56,
  sym_production_mod = 57,
  sym_production_name = 58,
  sym__element = 59,
  sym__element_string = 60,
  sym_metavardefn = 61,
  sym__string_desc_list1 = 62,
  sym_string_desc = 63,
  sym_embed = 64,
  sym_homomorphism = 65,
  sym__hom_element = 66,
  sym_hom_inner_block = 67,
  sym__hom_inner = 68,
  sym_comprehension_bound = 69,
  sym__comprehension_string = 70,
  sym_namespace_prefix = 71,
  sym_dots = 72,
  sym_id = 73,
  sym__line_cont = 74,
  sym__line_end = 75,
  sym__hom_string = 76,
  sym__hom_inner_string_init = 77,
  sym__hom_inner_string_left = 78,
  sym__hom_inner_string_right = 79,
  sym__hom_inner_comp_left = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym__item_repeat1 = 82,
  aux_sym_subrules_repeat1 = 83,
  aux_sym_subrules_repeat2 = 84,
  aux_sym_defnclass_repeat1 = 85,
  aux_sym_defn_repeat1 = 86,
  aux_sym_defn_repeat2 = 87,
  aux_sym_defn_rule_repeat1 = 88,
  aux_sym_grammar_rule_repeat1 = 89,
  aux_sym_production_repeat1 = 90,
  aux_sym__string_desc_list1_repeat1 = 91,
  aux_sym_homomorphism_repeat1 = 92,
  aux_sym__hom_inner_repeat1 = 93,
  aux_sym__hom_inner_repeat2 = 94,
  aux_sym__hom_inner_repeat3 = 95,
  anon_alias_sym_defn_name = 96,
  alias_sym_hom_body = 97,
  anon_alias_sym_production_modifier = 98,
  anon_alias_sym_production_name = 99,
  anon_alias_sym_rule_name = 100,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_grammar] = "grammar",
  [anon_sym_embed] = "embed",
  [anon_sym_subrules] = "subrules",
  [anon_sym_defns] = "defns",
  [sym_comment] = "comment",
  [aux_sym_subrules_token1] = "subrules_token1",
  [anon_sym_LT_COLON_COLON] = "<::",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_defn] = "defn",
  [anon_sym_by] = "by",
  [anon_sym_DASH_DASH_DASH_DASH] = "----",
  [aux_sym_dash_line_token1] = "dash_line_token1",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_SLASH_GT] = "/>",
  [aux_sym__element_string_token1] = "string",
  [anon_sym_metavar] = "metavar",
  [anon_sym_indexvar] = "indexvar",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_hom_name] = "hom_name",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_IN] = "IN",
  [anon_sym_SQUOTE] = "'",
  [sym__namespace_prefix_string] = "_namespace_prefix_string",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DOT_DOT_DOT_DOT] = "....",
  [sym__whitespace] = "_whitespace",
  [aux_sym__line_end_token1] = "_line_end_token1",
  [sym_line_cont] = "line_cont",
  [sym__eof] = "_eof",
  [sym_hom_string] = "hom_string",
  [sym_hom_inner_string_init] = "string",
  [sym_hom_inner_string_left] = "string",
  [sym_hom_inner_string_right] = "string",
  [sym_hom_inner_comp_left] = "string",
  [sym_error_sentinel] = "error_sentinel",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym_subrules] = "subrules",
  [sym_defnclass] = "defnclass",
  [sym_defnclass_name] = "defnclass_name",
  [sym_defn] = "defn",
  [sym_defn_name] = "defn_name",
  [sym_defn_rule] = "defn_rule",
  [sym_rule_separator] = "rule_separator",
  [sym_rule_name] = "rule_name",
  [sym_dash_line] = "dash_line",
  [sym_rule_line] = "rule_line",
  [sym_grammar_rule] = "grammar_rule",
  [sym_production] = "production",
  [sym_production_mod] = "production_mod",
  [sym_production_name] = "production_name",
  [sym__element] = "_element",
  [sym__element_string] = "_element_string",
  [sym_metavardefn] = "metavardefn",
  [sym__string_desc_list1] = "_string_desc_list1",
  [sym_string_desc] = "string_desc",
  [sym_embed] = "embed",
  [sym_homomorphism] = "homomorphism",
  [sym__hom_element] = "_hom_element",
  [sym_hom_inner_block] = "hom_inner_block",
  [sym__hom_inner] = "_hom_inner",
  [sym_comprehension_bound] = "comprehension_bound",
  [sym__comprehension_string] = "_comprehension_string",
  [sym_namespace_prefix] = "namespace_prefix",
  [sym_dots] = "dots",
  [sym_id] = "defnclass_name",
  [sym__line_cont] = "_line_cont",
  [sym__line_end] = "_line_end",
  [sym__hom_string] = "_hom_string",
  [sym__hom_inner_string_init] = "_hom_inner_string_init",
  [sym__hom_inner_string_left] = "_hom_inner_string_left",
  [sym__hom_inner_string_right] = "_hom_inner_string_right",
  [sym__hom_inner_comp_left] = "_hom_inner_comp_left",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__item_repeat1] = "_item_repeat1",
  [aux_sym_subrules_repeat1] = "subrules_repeat1",
  [aux_sym_subrules_repeat2] = "subrules_repeat2",
  [aux_sym_defnclass_repeat1] = "defnclass_repeat1",
  [aux_sym_defn_repeat1] = "defn_repeat1",
  [aux_sym_defn_repeat2] = "defn_repeat2",
  [aux_sym_defn_rule_repeat1] = "defn_rule_repeat1",
  [aux_sym_grammar_rule_repeat1] = "grammar_rule_repeat1",
  [aux_sym_production_repeat1] = "production_repeat1",
  [aux_sym__string_desc_list1_repeat1] = "_string_desc_list1_repeat1",
  [aux_sym_homomorphism_repeat1] = "homomorphism_repeat1",
  [aux_sym__hom_inner_repeat1] = "_hom_inner_repeat1",
  [aux_sym__hom_inner_repeat2] = "_hom_inner_repeat2",
  [aux_sym__hom_inner_repeat3] = "_hom_inner_repeat3",
  [anon_alias_sym_defn_name] = "defn_name",
  [alias_sym_hom_body] = "hom_body",
  [anon_alias_sym_production_modifier] = "production_modifier",
  [anon_alias_sym_production_name] = "production_name",
  [anon_alias_sym_rule_name] = "rule_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_grammar] = anon_sym_grammar,
  [anon_sym_embed] = anon_sym_embed,
  [anon_sym_subrules] = anon_sym_subrules,
  [anon_sym_defns] = anon_sym_defns,
  [sym_comment] = sym_comment,
  [aux_sym_subrules_token1] = aux_sym_subrules_token1,
  [anon_sym_LT_COLON_COLON] = anon_sym_LT_COLON_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_defn] = anon_sym_defn,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_DASH_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH_DASH,
  [aux_sym_dash_line_token1] = aux_sym_dash_line_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [aux_sym__element_string_token1] = sym_hom_inner_string_init,
  [anon_sym_metavar] = anon_sym_metavar,
  [anon_sym_indexvar] = anon_sym_indexvar,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_hom_name] = sym_hom_name,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__namespace_prefix_string] = sym__namespace_prefix_string,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT_DOT,
  [sym__whitespace] = sym__whitespace,
  [aux_sym__line_end_token1] = aux_sym__line_end_token1,
  [sym_line_cont] = sym_line_cont,
  [sym__eof] = sym__eof,
  [sym_hom_string] = sym_hom_string,
  [sym_hom_inner_string_init] = sym_hom_inner_string_init,
  [sym_hom_inner_string_left] = sym_hom_inner_string_init,
  [sym_hom_inner_string_right] = sym_hom_inner_string_init,
  [sym_hom_inner_comp_left] = sym_hom_inner_string_init,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym_subrules] = sym_subrules,
  [sym_defnclass] = sym_defnclass,
  [sym_defnclass_name] = sym_defnclass_name,
  [sym_defn] = sym_defn,
  [sym_defn_name] = sym_defn_name,
  [sym_defn_rule] = sym_defn_rule,
  [sym_rule_separator] = sym_rule_separator,
  [sym_rule_name] = sym_rule_name,
  [sym_dash_line] = sym_dash_line,
  [sym_rule_line] = sym_rule_line,
  [sym_grammar_rule] = sym_grammar_rule,
  [sym_production] = sym_production,
  [sym_production_mod] = sym_production_mod,
  [sym_production_name] = sym_production_name,
  [sym__element] = sym__element,
  [sym__element_string] = sym__element_string,
  [sym_metavardefn] = sym_metavardefn,
  [sym__string_desc_list1] = sym__string_desc_list1,
  [sym_string_desc] = sym_string_desc,
  [sym_embed] = sym_embed,
  [sym_homomorphism] = sym_homomorphism,
  [sym__hom_element] = sym__hom_element,
  [sym_hom_inner_block] = sym_hom_inner_block,
  [sym__hom_inner] = sym__hom_inner,
  [sym_comprehension_bound] = sym_comprehension_bound,
  [sym__comprehension_string] = sym__comprehension_string,
  [sym_namespace_prefix] = sym_namespace_prefix,
  [sym_dots] = sym_dots,
  [sym_id] = sym_id,
  [sym__line_cont] = sym__line_cont,
  [sym__line_end] = sym__line_end,
  [sym__hom_string] = sym__hom_string,
  [sym__hom_inner_string_init] = sym__hom_inner_string_init,
  [sym__hom_inner_string_left] = sym__hom_inner_string_left,
  [sym__hom_inner_string_right] = sym__hom_inner_string_right,
  [sym__hom_inner_comp_left] = sym__hom_inner_comp_left,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__item_repeat1] = aux_sym__item_repeat1,
  [aux_sym_subrules_repeat1] = aux_sym_subrules_repeat1,
  [aux_sym_subrules_repeat2] = aux_sym_subrules_repeat2,
  [aux_sym_defnclass_repeat1] = aux_sym_defnclass_repeat1,
  [aux_sym_defn_repeat1] = aux_sym_defn_repeat1,
  [aux_sym_defn_repeat2] = aux_sym_defn_repeat2,
  [aux_sym_defn_rule_repeat1] = aux_sym_defn_rule_repeat1,
  [aux_sym_grammar_rule_repeat1] = aux_sym_grammar_rule_repeat1,
  [aux_sym_production_repeat1] = aux_sym_production_repeat1,
  [aux_sym__string_desc_list1_repeat1] = aux_sym__string_desc_list1_repeat1,
  [aux_sym_homomorphism_repeat1] = aux_sym_homomorphism_repeat1,
  [aux_sym__hom_inner_repeat1] = aux_sym__hom_inner_repeat1,
  [aux_sym__hom_inner_repeat2] = aux_sym__hom_inner_repeat2,
  [aux_sym__hom_inner_repeat3] = aux_sym__hom_inner_repeat3,
  [anon_alias_sym_defn_name] = anon_alias_sym_defn_name,
  [alias_sym_hom_body] = alias_sym_hom_body,
  [anon_alias_sym_production_modifier] = anon_alias_sym_production_modifier,
  [anon_alias_sym_production_name] = anon_alias_sym_production_name,
  [anon_alias_sym_rule_name] = anon_alias_sym_rule_name,
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
  [anon_sym_embed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subrules] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defns] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_subrules_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dash_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__element_string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_metavar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_hom_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__namespace_prefix_string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_end_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_line_cont] = {
    .visible = true,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_hom_string] = {
    .visible = true,
    .named = false,
  },
  [sym_hom_inner_string_init] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_inner_string_left] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_inner_string_right] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_inner_comp_left] = {
    .visible = true,
    .named = true,
  },
  [sym_error_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_subrules] = {
    .visible = true,
    .named = true,
  },
  [sym_defnclass] = {
    .visible = true,
    .named = true,
  },
  [sym_defnclass_name] = {
    .visible = true,
    .named = true,
  },
  [sym_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_defn_name] = {
    .visible = true,
    .named = true,
  },
  [sym_defn_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_name] = {
    .visible = true,
    .named = true,
  },
  [sym_dash_line] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_line] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_production] = {
    .visible = true,
    .named = true,
  },
  [sym_production_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_production_name] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym__element_string] = {
    .visible = false,
    .named = true,
  },
  [sym_metavardefn] = {
    .visible = true,
    .named = true,
  },
  [sym__string_desc_list1] = {
    .visible = false,
    .named = true,
  },
  [sym_string_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_embed] = {
    .visible = true,
    .named = true,
  },
  [sym_homomorphism] = {
    .visible = true,
    .named = true,
  },
  [sym__hom_element] = {
    .visible = false,
    .named = true,
  },
  [sym_hom_inner_block] = {
    .visible = true,
    .named = true,
  },
  [sym__hom_inner] = {
    .visible = false,
    .named = true,
  },
  [sym_comprehension_bound] = {
    .visible = true,
    .named = true,
  },
  [sym__comprehension_string] = {
    .visible = false,
    .named = true,
  },
  [sym_namespace_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_dots] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = false,
  },
  [sym__line_cont] = {
    .visible = false,
    .named = true,
  },
  [sym__line_end] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_string] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_string_init] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_string_left] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_string_right] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_comp_left] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subrules_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subrules_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defnclass_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defn_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defn_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defn_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_production_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_desc_list1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_homomorphism_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hom_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hom_inner_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hom_inner_repeat3] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_defn_name] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_hom_body] = {
    .visible = true,
    .named = true,
  },
  [anon_alias_sym_production_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_production_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_rule_name] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_class_name = 2,
  field_close = 3,
  field_conclusion = 4,
  field_definition = 5,
  field_definition_name = 6,
  field_definition_rule = 7,
  field_element = 8,
  field_hom_inner_block = 9,
  field_hom_string = 10,
  field_homomorphism = 11,
  field_line = 12,
  field_modifier = 13,
  field_name = 14,
  field_namespace_prefix = 15,
  field_open = 16,
  field_premise = 17,
  field_production_name = 18,
  field_rule_name = 19,
  field_separator = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_class_name] = "class_name",
  [field_close] = "close",
  [field_conclusion] = "conclusion",
  [field_definition] = "definition",
  [field_definition_name] = "definition_name",
  [field_definition_rule] = "definition_rule",
  [field_element] = "element",
  [field_hom_inner_block] = "hom_inner_block",
  [field_hom_string] = "hom_string",
  [field_homomorphism] = "homomorphism",
  [field_line] = "line",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_namespace_prefix] = "namespace_prefix",
  [field_open] = "open",
  [field_premise] = "premise",
  [field_production_name] = "production_name",
  [field_rule_name] = "rule_name",
  [field_separator] = "separator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 3},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 6},
  [9] = {.index = 15, .length = 4},
  [10] = {.index = 19, .length = 3},
  [11] = {.index = 22, .length = 3},
  [12] = {.index = 25, .length = 4},
  [14] = {.index = 29, .length = 1},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 2},
  [18] = {.index = 34, .length = 2},
  [20] = {.index = 36, .length = 3},
  [21] = {.index = 39, .length = 3},
  [22] = {.index = 42, .length = 3},
  [23] = {.index = 45, .length = 4},
  [24] = {.index = 49, .length = 2},
  [25] = {.index = 51, .length = 3},
  [26] = {.index = 54, .length = 3},
  [27] = {.index = 57, .length = 3},
  [28] = {.index = 60, .length = 2},
  [29] = {.index = 62, .length = 4},
  [30] = {.index = 66, .length = 4},
  [31] = {.index = 70, .length = 4},
  [32] = {.index = 74, .length = 3},
  [33] = {.index = 77, .length = 5},
  [35] = {.index = 82, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 3},
    {field_name, 1},
    {field_open, 0},
  [3] =
    {field_hom_inner_block, 0, .inherited = true},
    {field_hom_string, 0, .inherited = true},
  [5] =
    {field_hom_inner_block, 0},
  [6] =
    {field_hom_string, 0},
  [7] =
    {field_class_name, 0},
    {field_namespace_prefix, 2},
  [9] =
    {field_body, 3},
    {field_close, 4},
    {field_hom_inner_block, 3, .inherited = true},
    {field_hom_string, 3, .inherited = true},
    {field_name, 1},
    {field_open, 0},
  [15] =
    {field_hom_inner_block, 0, .inherited = true},
    {field_hom_inner_block, 1, .inherited = true},
    {field_hom_string, 0, .inherited = true},
    {field_hom_string, 1, .inherited = true},
  [19] =
    {field_class_name, 0},
    {field_homomorphism, 4},
    {field_namespace_prefix, 2},
  [22] =
    {field_class_name, 0},
    {field_definition, 4},
    {field_namespace_prefix, 2},
  [25] =
    {field_class_name, 0},
    {field_definition, 5},
    {field_homomorphism, 4},
    {field_namespace_prefix, 2},
  [29] =
    {field_production_name, 3},
  [30] =
    {field_homomorphism, 4},
    {field_production_name, 3},
  [32] =
    {field_modifier, 2},
    {field_production_name, 4},
  [34] =
    {field_element, 1},
    {field_production_name, 4},
  [36] =
    {field_homomorphism, 5},
    {field_modifier, 2},
    {field_production_name, 4},
  [39] =
    {field_element, 1},
    {field_homomorphism, 5},
    {field_production_name, 4},
  [42] =
    {field_element, 1},
    {field_modifier, 3},
    {field_production_name, 5},
  [45] =
    {field_element, 1},
    {field_homomorphism, 6},
    {field_modifier, 3},
    {field_production_name, 5},
  [49] =
    {field_definition_name, 4},
    {field_namespace_prefix, 6},
  [51] =
    {field_definition_name, 4},
    {field_definition_rule, 9},
    {field_namespace_prefix, 6},
  [54] =
    {field_definition_name, 4},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [57] =
    {field_definition_name, 5},
    {field_element, 2},
    {field_namespace_prefix, 7},
  [60] =
    {field_conclusion, 1},
    {field_separator, 0},
  [62] =
    {field_definition_name, 4},
    {field_definition_rule, 10},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [66] =
    {field_definition_name, 5},
    {field_definition_rule, 10},
    {field_element, 2},
    {field_namespace_prefix, 7},
  [70] =
    {field_definition_name, 5},
    {field_element, 2},
    {field_homomorphism, 8},
    {field_namespace_prefix, 7},
  [74] =
    {field_conclusion, 2},
    {field_premise, 0},
    {field_separator, 1},
  [77] =
    {field_definition_name, 5},
    {field_definition_rule, 11},
    {field_element, 2},
    {field_homomorphism, 8},
    {field_namespace_prefix, 7},
  [82] =
    {field_line, 0},
    {field_rule_name, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_hom_inner_string_init,
  },
  [2] = {
    [0] = sym_hom_inner_string_init,
    [2] = sym_hom_inner_string_init,
  },
  [8] = {
    [3] = alias_sym_hom_body,
  },
  [13] = {
    [0] = anon_alias_sym_production_modifier,
  },
  [15] = {
    [0] = anon_alias_sym_production_name,
  },
  [19] = {
    [0] = anon_alias_sym_defn_name,
  },
  [34] = {
    [0] = anon_alias_sym_rule_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_id, 4,
    sym_id,
    anon_alias_sym_defn_name,
    anon_alias_sym_production_name,
    anon_alias_sym_rule_name,
  aux_sym_homomorphism_repeat1, 2,
    aux_sym_homomorphism_repeat1,
    alias_sym_hom_body,
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
  [33] = 31,
  [34] = 34,
  [35] = 35,
  [36] = 11,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 40,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 44,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 20,
  [56] = 19,
  [57] = 45,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 45,
  [68] = 58,
  [69] = 58,
  [70] = 62,
  [71] = 71,
  [72] = 72,
  [73] = 62,
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
  [85] = 80,
  [86] = 83,
  [87] = 79,
  [88] = 88,
  [89] = 81,
  [90] = 81,
  [91] = 81,
  [92] = 80,
  [93] = 78,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 79,
  [98] = 98,
  [99] = 78,
  [100] = 14,
  [101] = 83,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 104,
  [108] = 105,
  [109] = 105,
  [110] = 110,
  [111] = 104,
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
  [148] = 136,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 141,
  [155] = 141,
  [156] = 156,
  [157] = 157,
  [158] = 136,
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
  [174] = 46,
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
  [192] = 81,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 81,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 200,
  [204] = 189,
  [205] = 183,
  [206] = 206,
  [207] = 200,
  [208] = 189,
  [209] = 183,
  [210] = 206,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 197,
  [221] = 221,
  [222] = 206,
  [223] = 201,
  [224] = 193,
  [225] = 225,
  [226] = 211,
  [227] = 201,
  [228] = 193,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '%', 71,
        '\'', 174,
        ',', 167,
        '-', 13,
        '.', 14,
        '/', 16,
        ':', 18,
        '<', 17,
        'I', 23,
        '[', 24,
        ']', 25,
        'b', 59,
        'd', 35,
        'e', 42,
        'g', 47,
        'i', 45,
        'm', 36,
        's', 55,
        '{', 60,
        '|', 117,
        '}', 61,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 183,
        '\r', 1,
        '%', 70,
        '.', 124,
        '<', 125,
        '\t', 1,
        0x0b, 1,
        '\f', 1,
        ' ', 1,
      );
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(174);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == ':') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == '{') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '<') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          (lookahead < '-' || '/' < lookahead)) ADVANCE(160);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '<') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(70);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '<') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '/' || '9' < lookahead)) ADVANCE(160);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(176);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(119);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '>') ADVANCE(120);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(110);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(108);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(109);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(173);
      END_STATE();
    case 24:
      if (lookahead == '[') ADVANCE(171);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(172);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 58:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 60:
      if (lookahead == '{') ADVANCE(168);
      END_STATE();
    case 61:
      if (lookahead == '}') ADVANCE(169);
      END_STATE();
    case 62:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '%', 71,
        ',', 167,
        ':', 18,
        'd', 81,
        'e', 88,
        'g', 94,
        'i', 91,
        'm', 82,
        's', 102,
        '{', 60,
        '|', 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '%', 71,
        ':', 20,
        'd', 81,
        'e', 88,
        'g', 94,
        'i', 91,
        'm', 82,
        's', 102,
        '{', 60,
        '|', 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '%', 70,
        '-', 123,
        '.', 124,
        '<', 125,
        'd', 136,
        'e', 143,
        'g', 149,
        'i', 147,
        'm', 137,
        's', 156,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (lookahead != 0 &&
          (lookahead < '-' || '/' < lookahead)) ADVANCE(160);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_subrules);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'a') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'a') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'a') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'b') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'b') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'd') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'd') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'f') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'l') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'm') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'm') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'm') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 's') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 's') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'u') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'u') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'v') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'v') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (lookahead == 'x') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_subrules_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '/' || '9' < lookahead)) ADVANCE(160);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT_COLON_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'v') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'v') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'x') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_hom_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__namespace_prefix_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(160);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__line_end_token1);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 64},
  [3] = {.lex_state = 64},
  [4] = {.lex_state = 64},
  [5] = {.lex_state = 64},
  [6] = {.lex_state = 64},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 64},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 64},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 62},
  [13] = {.lex_state = 64},
  [14] = {.lex_state = 64},
  [15] = {.lex_state = 64},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 62},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 62},
  [20] = {.lex_state = 62},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 62},
  [23] = {.lex_state = 62},
  [24] = {.lex_state = 62},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 62},
  [27] = {.lex_state = 62},
  [28] = {.lex_state = 62},
  [29] = {.lex_state = 62},
  [30] = {.lex_state = 62},
  [31] = {.lex_state = 1, .external_lex_state = 2},
  [32] = {.lex_state = 62},
  [33] = {.lex_state = 1, .external_lex_state = 2},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 62},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 62},
  [38] = {.lex_state = 62},
  [39] = {.lex_state = 62},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 62},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 1, .external_lex_state = 2},
  [46] = {.lex_state = 63},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 62},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 0, .external_lex_state = 4},
  [77] = {.lex_state = 0, .external_lex_state = 4},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 1, .external_lex_state = 2},
  [81] = {.lex_state = 1, .external_lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 0, .external_lex_state = 5},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0, .external_lex_state = 5},
  [115] = {.lex_state = 0, .external_lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 6},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 6},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 0, .external_lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 0, .external_lex_state = 6},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 5},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 1, .external_lex_state = 2},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 1, .external_lex_state = 2},
  [147] = {.lex_state = 1, .external_lex_state = 2},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0, .external_lex_state = 5},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 1, .external_lex_state = 2},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 1, .external_lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 1, .external_lex_state = 2},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 0, .external_lex_state = 8},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0, .external_lex_state = 8},
  [174] = {.lex_state = 1, .external_lex_state = 2},
  [175] = {.lex_state = 63},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0, .external_lex_state = 8},
  [180] = {.lex_state = 116},
  [181] = {.lex_state = 63},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 63},
  [185] = {.lex_state = 63},
  [186] = {.lex_state = 63},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 63},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 0, .external_lex_state = 5},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 63},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 63},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 63},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grammar] = ACTIONS(1),
    [anon_sym_embed] = ACTIONS(1),
    [anon_sym_subrules] = ACTIONS(1),
    [anon_sym_defns] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(1),
    [anon_sym_defn] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_metavar] = ACTIONS(1),
    [anon_sym_indexvar] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT_DOT] = ACTIONS(1),
    [sym_line_cont] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym_hom_string] = ACTIONS(1),
    [sym_hom_inner_string_init] = ACTIONS(1),
    [sym_hom_inner_string_left] = ACTIONS(1),
    [sym_hom_inner_string_right] = ACTIONS(1),
    [sym_hom_inner_comp_left] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(202),
    [sym__item] = STATE(53),
    [sym_metavardefn] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_grammar] = ACTIONS(7),
    [anon_sym_embed] = ACTIONS(9),
    [anon_sym_subrules] = ACTIONS(11),
    [anon_sym_defns] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_metavar] = ACTIONS(15),
    [anon_sym_indexvar] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      aux_sym__element_string_token1,
    STATE(51), 1,
      sym_rule_separator,
    STATE(167), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(19), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(33), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [50] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      aux_sym__element_string_token1,
    STATE(51), 1,
      sym_rule_separator,
    STATE(167), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(31), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(33), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [100] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      aux_sym__element_string_token1,
    STATE(51), 1,
      sym_rule_separator,
    STATE(167), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(35), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(33), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [150] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      aux_sym__element_string_token1,
    STATE(51), 1,
      sym_rule_separator,
    STATE(167), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(39), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(33), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [200] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(48), 1,
      anon_sym_LT_SLASH,
    ACTIONS(51), 1,
      aux_sym__element_string_token1,
    STATE(51), 1,
      sym_rule_separator,
    STATE(167), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(43), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(54), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(33), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [250] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      aux_sym__element_string_token1,
    STATE(51), 1,
      sym_rule_separator,
    STATE(167), 1,
      sym_dash_line,
    STATE(5), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(59), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(33), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [300] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      aux_sym__element_string_token1,
    STATE(51), 1,
      sym_rule_separator,
    STATE(167), 1,
      sym_dash_line,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(63), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(33), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [350] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      aux_sym__element_string_token1,
    STATE(51), 1,
      sym_rule_separator,
    STATE(167), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(67), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(33), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [400] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      aux_sym__element_string_token1,
    STATE(51), 1,
      sym_rule_separator,
    STATE(167), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(71), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(33), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(75), 4,
      aux_sym_subrules_token1,
      anon_sym_COLON_COLON,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [477] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    STATE(42), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(82), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_LT_SLASH,
    ACTIONS(90), 7,
      anon_sym_defn,
      aux_sym__element_string_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_LT_SLASH,
    ACTIONS(94), 7,
      anon_sym_defn,
      aux_sym__element_string_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_LT_SLASH,
    ACTIONS(98), 7,
      anon_sym_defn,
      aux_sym__element_string_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [573] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      aux_sym__element_string_token1,
    STATE(50), 1,
      sym_rule_separator,
    STATE(167), 1,
      sym_dash_line,
    STATE(34), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(33), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [607] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    STATE(39), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(102), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [637] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_defn,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(36), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    STATE(63), 2,
      sym_defn,
      aux_sym_defnclass_repeat1,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 4,
      aux_sym_subrules_token1,
      anon_sym_COLON_COLON,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 4,
      aux_sym_subrules_token1,
      anon_sym_COLON_COLON,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [706] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_defn,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    STATE(71), 2,
      sym_defn,
      aux_sym_defnclass_repeat1,
    ACTIONS(118), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [733] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_subrules_token1,
    STATE(121), 1,
      sym_string_desc,
    STATE(215), 1,
      sym__string_desc_list1,
    ACTIONS(124), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(32), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [761] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(128), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_PIPE,
  [785] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(132), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_PIPE,
  [809] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(23), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(136), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_PIPE,
  [833] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(24), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(140), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_PIPE,
  [857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(144), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(142), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_PIPE,
  [881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(27), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(148), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(146), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_PIPE,
  [905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(152), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(150), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_PIPE,
  [929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(29), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(156), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_PIPE,
  [953] = 7,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LT_SLASH,
    ACTIONS(162), 1,
      aux_sym__element_string_token1,
    STATE(14), 1,
      sym__line_end,
    ACTIONS(164), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(45), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [981] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      aux_sym_subrules_token1,
    STATE(121), 1,
      sym_string_desc,
    STATE(215), 1,
      sym__string_desc_list1,
    ACTIONS(171), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(32), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [1009] = 7,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LT_SLASH,
    ACTIONS(162), 1,
      aux_sym__element_string_token1,
    STATE(100), 1,
      sym__line_end,
    ACTIONS(173), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(45), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1037] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(177), 1,
      anon_sym_LT_SLASH,
    ACTIONS(180), 1,
      aux_sym__element_string_token1,
    STATE(34), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(183), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(33), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1065] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_subrules_token1,
    STATE(121), 1,
      sym_string_desc,
    STATE(215), 1,
      sym__string_desc_list1,
    ACTIONS(188), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(22), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [1093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_defn,
    ACTIONS(190), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(36), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(195), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [1140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(37), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(199), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [1163] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    STATE(47), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(203), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [1186] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(207), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(211), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(213), 1,
      sym_hom_string,
    STATE(41), 1,
      aux_sym_homomorphism_repeat1,
    STATE(96), 1,
      sym_hom_inner_block,
    STATE(102), 1,
      sym__hom_string,
    ACTIONS(209), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(95), 2,
      sym__hom_element,
      sym_dots,
  [1219] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(217), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(223), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(226), 1,
      sym_hom_string,
    STATE(41), 1,
      aux_sym_homomorphism_repeat1,
    STATE(96), 1,
      sym_hom_inner_block,
    STATE(102), 1,
      sym__hom_string,
    ACTIONS(220), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(95), 2,
      sym__hom_element,
      sym_dots,
  [1252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    STATE(47), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(102), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [1275] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(211), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(213), 1,
      sym_hom_string,
    ACTIONS(229), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(41), 1,
      aux_sym_homomorphism_repeat1,
    STATE(96), 1,
      sym_hom_inner_block,
    STATE(102), 1,
      sym__hom_string,
    ACTIONS(209), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(95), 2,
      sym__hom_element,
      sym_dots,
  [1308] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(211), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(213), 1,
      sym_hom_string,
    ACTIONS(231), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(40), 1,
      aux_sym_homomorphism_repeat1,
    STATE(96), 1,
      sym_hom_inner_block,
    STATE(102), 1,
      sym__hom_string,
    ACTIONS(209), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(95), 2,
      sym__hom_element,
      sym_dots,
  [1341] = 6,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LT_SLASH,
    ACTIONS(236), 1,
      aux_sym__element_string_token1,
    ACTIONS(242), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(239), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(45), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(244), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_PIPE,
    STATE(47), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(250), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(248), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [1408] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(211), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(213), 1,
      sym_hom_string,
    ACTIONS(255), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(43), 1,
      aux_sym_homomorphism_repeat1,
    STATE(96), 1,
      sym_hom_inner_block,
    STATE(102), 1,
      sym__hom_string,
    ACTIONS(209), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(95), 2,
      sym__hom_element,
      sym_dots,
  [1441] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 1,
      anon_sym_grammar,
    ACTIONS(262), 1,
      anon_sym_embed,
    ACTIONS(265), 1,
      anon_sym_subrules,
    ACTIONS(268), 1,
      anon_sym_defns,
    ACTIONS(271), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(49), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1469] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(274), 1,
      aux_sym__element_string_token1,
    STATE(13), 1,
      sym_rule_line,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(31), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1493] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(274), 1,
      aux_sym__element_string_token1,
    STATE(15), 1,
      sym_rule_line,
    ACTIONS(27), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(31), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(276), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1537] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_subrules,
    ACTIONS(13), 1,
      anon_sym_defns,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(49), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(280), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_defn,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_LBRACE_LBRACE,
  [1603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_defn,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_LBRACE_LBRACE,
  [1621] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(282), 1,
      anon_sym_LT_SLASH,
    ACTIONS(285), 1,
      aux_sym__element_string_token1,
    ACTIONS(288), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1645] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LT_SLASH,
    ACTIONS(293), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      aux_sym__element_string_token1,
    ACTIONS(297), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      aux_sym_subrules_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(54), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
    ACTIONS(303), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1707] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COLON_COLON,
    ACTIONS(307), 1,
      anon_sym_LT_SLASH,
    ACTIONS(309), 1,
      aux_sym__element_string_token1,
    ACTIONS(311), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(67), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1731] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LT_SLASH,
    ACTIONS(313), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(315), 1,
      aux_sym__element_string_token1,
    ACTIONS(297), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(69), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_defn,
    STATE(66), 2,
      sym_defn,
      aux_sym_defnclass_repeat1,
    ACTIONS(317), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1775] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LT_SLASH,
    ACTIONS(319), 1,
      anon_sym_COLON_COLON,
    ACTIONS(321), 1,
      aux_sym__element_string_token1,
    ACTIONS(311), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(65), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1799] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LT_SLASH,
    ACTIONS(309), 1,
      aux_sym__element_string_token1,
    ACTIONS(323), 1,
      anon_sym_COLON_COLON,
    ACTIONS(311), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(67), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_defn,
    STATE(66), 2,
      sym_defn,
      aux_sym_defnclass_repeat1,
    ACTIONS(325), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1843] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COLON_COLON,
    ACTIONS(332), 1,
      anon_sym_LT_SLASH,
    ACTIONS(335), 1,
      aux_sym__element_string_token1,
    ACTIONS(338), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(67), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1867] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LT_SLASH,
    ACTIONS(295), 1,
      aux_sym__element_string_token1,
    ACTIONS(341), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1891] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LT_SLASH,
    ACTIONS(295), 1,
      aux_sym__element_string_token1,
    ACTIONS(343), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LT_SLASH,
    ACTIONS(345), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(347), 1,
      aux_sym__element_string_token1,
    ACTIONS(297), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(58), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_defn,
    STATE(66), 2,
      sym_defn,
      aux_sym_defnclass_repeat1,
    ACTIONS(349), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1959] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LT_SLASH,
    ACTIONS(351), 1,
      anon_sym_COLON_COLON,
    ACTIONS(353), 1,
      aux_sym__element_string_token1,
    ACTIONS(311), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(61), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1983] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LT_SLASH,
    ACTIONS(355), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(357), 1,
      aux_sym__element_string_token1,
    ACTIONS(297), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(68), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [2007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym_subrules_token1,
    STATE(74), 1,
      aux_sym_subrules_repeat2,
    ACTIONS(364), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(359), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [2028] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym_subrules_token1,
    STATE(74), 1,
      aux_sym_subrules_repeat2,
    ACTIONS(370), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
  [2049] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(376), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(378), 1,
      sym_hom_inner_string_left,
    STATE(138), 1,
      sym_dots,
    ACTIONS(374), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [2073] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(380), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(382), 1,
      sym_hom_inner_string_left,
    STATE(151), 1,
      sym_dots,
    ACTIONS(374), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(84), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [2097] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(386), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(384), 5,
      anon_sym_LT_SLASH,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2112] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(390), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(388), 5,
      anon_sym_LT_SLASH,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2127] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(394), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(392), 5,
      anon_sym_LT_SLASH,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2142] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(398), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(396), 5,
      anon_sym_LT_SLASH,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_subrules,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2170] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(402), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(400), 5,
      anon_sym_LT_SLASH,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_hom_inner_string_left,
    ACTIONS(404), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(406), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(84), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [2204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_LT_SLASH,
    ACTIONS(392), 5,
      anon_sym_COLON_COLON,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
    ACTIONS(400), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_LT_SLASH,
    ACTIONS(388), 5,
      anon_sym_COLON_COLON,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2246] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(411), 1,
      anon_sym_COLON_COLON,
    ACTIONS(413), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(94), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
  [2264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LT_SLASH,
    ACTIONS(396), 5,
      anon_sym_COLON_COLON,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(398), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
    ACTIONS(396), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
    ACTIONS(392), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LT_SLASH,
    ACTIONS(384), 5,
      anon_sym_COLON_COLON,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2334] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(415), 1,
      anon_sym_COLON_COLON,
    ACTIONS(417), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
  [2352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(419), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(423), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
    ACTIONS(388), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(427), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_LT_SLASH,
    ACTIONS(94), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_LT_SLASH,
    ACTIONS(400), 5,
      anon_sym_COLON_COLON,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(431), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SLASH_GT,
    ACTIONS(439), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(168), 1,
      sym_dots,
    ACTIONS(437), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2481] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_subrules_token1,
    ACTIONS(443), 1,
      aux_sym__element_string_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(203), 1,
      sym_comprehension_bound,
    STATE(223), 1,
      sym__element_string,
  [2500] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_subrules_token1,
    ACTIONS(445), 1,
      aux_sym__element_string_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(204), 1,
      sym_comprehension_bound,
    STATE(224), 1,
      sym__element_string,
  [2519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(447), 3,
      anon_sym_SLASH_GT,
      anon_sym_IN,
      anon_sym_DOT_DOT_DOT_DOT,
  [2532] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_subrules_token1,
    ACTIONS(451), 1,
      aux_sym__element_string_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(200), 1,
      sym_comprehension_bound,
    STATE(201), 1,
      sym__element_string,
  [2551] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_subrules_token1,
    ACTIONS(453), 1,
      aux_sym__element_string_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(189), 1,
      sym_comprehension_bound,
    STATE(193), 1,
      sym__element_string,
  [2570] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_subrules_token1,
    ACTIONS(455), 1,
      aux_sym__element_string_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(208), 1,
      sym_comprehension_bound,
    STATE(228), 1,
      sym__element_string,
  [2589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LT_SLASH,
    ACTIONS(459), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2602] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_subrules_token1,
    ACTIONS(461), 1,
      aux_sym__element_string_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(207), 1,
      sym_comprehension_bound,
    STATE(227), 1,
      sym__element_string,
  [2621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(465), 1,
      sym_hom_inner_string_right,
    STATE(114), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(467), 1,
      anon_sym_by,
    STATE(130), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
  [2649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(471), 1,
      sym_hom_inner_string_right,
    STATE(114), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_hom_inner_string_right,
    ACTIONS(474), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(114), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(82), 1,
      sym_embed,
    STATE(52), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
  [2691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(478), 1,
      sym_hom_inner_comp_left,
    STATE(132), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2705] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_subrules_token1,
    STATE(82), 1,
      sym_defnclass,
    STATE(184), 1,
      sym_defnclass_name,
    STATE(188), 1,
      sym_id,
  [2721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_subrules_token1,
    ACTIONS(485), 1,
      anon_sym_COLON_COLON,
    STATE(119), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      aux_sym_subrules_token1,
    ACTIONS(489), 1,
      anon_sym_COLON_COLON,
    STATE(131), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_COLON_COLON,
    ACTIONS(493), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym__string_desc_list1_repeat1,
  [2765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_COLON_COLON,
    ACTIONS(499), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(124), 1,
      aux_sym__string_desc_list1_repeat1,
  [2781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(501), 1,
      anon_sym_by,
    STATE(36), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
  [2795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_COLON_COLON,
    ACTIONS(505), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym__string_desc_list1_repeat1,
  [2811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      aux_sym_subrules_token1,
    ACTIONS(510), 1,
      anon_sym_COLON_COLON,
    STATE(119), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(514), 1,
      sym_hom_inner_comp_left,
    STATE(126), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(517), 1,
      anon_sym_by,
    STATE(123), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
  [2853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      aux_sym_subrules_token1,
    ACTIONS(519), 1,
      anon_sym_COLON_COLON,
    STATE(125), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2867] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LT_SLASH,
    ACTIONS(523), 1,
      sym_hom_inner_string_init,
    STATE(76), 1,
      sym__hom_inner_string_init,
    STATE(217), 1,
      sym__hom_inner,
  [2883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(525), 1,
      anon_sym_by,
    STATE(36), 2,
      sym_homomorphism,
      aux_sym_subrules_repeat1,
  [2897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      aux_sym_subrules_token1,
    ACTIONS(527), 1,
      anon_sym_COLON_COLON,
    STATE(119), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(531), 1,
      sym_hom_inner_comp_left,
    STATE(126), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_subrules_token1,
    STATE(30), 1,
      sym_production_name,
    STATE(59), 1,
      sym_id,
  [2938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_subrules_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(209), 1,
      sym_comprehension_bound,
  [2969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      sym__namespace_prefix_string,
    STATE(113), 1,
      sym_namespace_prefix,
  [2982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_hom_inner_string_right,
    STATE(112), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_subrules_token1,
    STATE(185), 1,
      sym_id,
    STATE(186), 1,
      sym_defn_name,
  [3006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      sym__namespace_prefix_string,
    STATE(127), 1,
      sym_namespace_prefix,
  [3019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_subrules_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(222), 1,
      sym_comprehension_bound,
  [3032] = 3,
    ACTIONS(158), 1,
      sym_comment,
    STATE(10), 1,
      sym__line_end,
    ACTIONS(545), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_subrules_token1,
    STATE(28), 1,
      sym_production_name,
    STATE(59), 1,
      sym_id,
  [3056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_subrules_token1,
    STATE(185), 1,
      sym_id,
    STATE(195), 1,
      sym_defn_name,
  [3069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_subrules_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(196), 1,
      sym_comprehension_bound,
  [3082] = 3,
    ACTIONS(158), 1,
      sym_comment,
    STATE(8), 1,
      sym__line_end,
    ACTIONS(547), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3093] = 3,
    ACTIONS(158), 1,
      sym_comment,
    STATE(7), 1,
      sym__line_end,
    ACTIONS(549), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_subrules_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(205), 1,
      sym_comprehension_bound,
  [3117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_COLON_COLON,
    ACTIONS(505), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [3128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_subrules_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(214), 1,
      sym_comprehension_bound,
  [3141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_hom_inner_string_right,
    STATE(115), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [3152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_subrules_token1,
    STATE(26), 1,
      sym_production_name,
    STATE(59), 1,
      sym_id,
  [3165] = 3,
    ACTIONS(158), 1,
      sym_comment,
    STATE(4), 1,
      sym__line_end,
    ACTIONS(553), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_subrules_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(210), 1,
      sym_comprehension_bound,
  [3189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_subrules_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(206), 1,
      sym_comprehension_bound,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      aux_sym_subrules_token1,
    STATE(121), 1,
      sym_string_desc,
    STATE(194), 1,
      sym__string_desc_list1,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [3224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_subrules_token1,
    STATE(171), 1,
      sym__comprehension_string,
    STATE(183), 1,
      sym_comprehension_bound,
  [3237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_subrules_token1,
    STATE(75), 1,
      aux_sym_subrules_repeat2,
    STATE(82), 1,
      sym_subrules,
  [3250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      aux_sym_subrules_token1,
    STATE(25), 1,
      sym_production_name,
    STATE(59), 1,
      sym_id,
  [3263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      sym__namespace_prefix_string,
    STATE(219), 1,
      sym_namespace_prefix,
  [3276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      aux_sym_subrules_token1,
    STATE(163), 1,
      sym_rule_name,
    STATE(165), 1,
      sym_id,
  [3289] = 3,
    ACTIONS(158), 1,
      sym_comment,
    STATE(110), 1,
      sym__line_end,
    ACTIONS(563), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      sym__namespace_prefix_string,
    STATE(221), 1,
      sym_namespace_prefix,
  [3313] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(565), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      aux_sym_subrules_token1,
    STATE(149), 1,
      sym_string_desc,
  [3331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_line_cont,
    STATE(181), 1,
      sym__line_cont,
  [3341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_subrules_token1,
    STATE(178), 1,
      sym__comprehension_string,
  [3351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_SQUOTE,
    ACTIONS(571), 1,
      sym__namespace_prefix_string,
  [3361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 2,
      aux_sym_subrules_token1,
      anon_sym_COLON_COLON,
  [3369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SLASH_GT,
    ACTIONS(577), 1,
      anon_sym_IN,
  [3379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_subrules_token1,
    STATE(103), 1,
      sym__comprehension_string,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_line_cont,
    STATE(162), 1,
      sym__line_cont,
  [3399] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(244), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COLON_COLON,
  [3414] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym__whitespace,
  [3421] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym__whitespace,
  [3428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH_GT,
  [3435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym_line_cont,
  [3442] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(591), 1,
      aux_sym_dash_line_token1,
  [3449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_COLON_COLON,
  [3456] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym__whitespace,
  [3463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SLASH_GT,
  [3470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_COLON_COLON,
  [3477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COLON_COLON,
  [3484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COLON_COLON,
  [3491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACK_RBRACK,
  [3498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_COLON_COLON,
  [3505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SLASH_GT,
  [3512] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym__whitespace,
  [3519] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym__whitespace,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_hom_inner_string_right,
  [3533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_SLASH_SLASH,
  [3540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COLON_COLON_EQ,
  [3547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COLON_COLON,
  [3554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SLASH_GT,
  [3561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_hom_name,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RBRACK_RBRACK,
  [3575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      aux_sym_subrules_token1,
  [3582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH_GT,
  [3589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_SLASH_SLASH,
  [3596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
  [3603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_SLASH_GT,
  [3610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_SLASH_GT,
  [3617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_SLASH_GT,
  [3624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SLASH_GT,
  [3631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_SLASH_GT,
  [3638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_SLASH_GT,
  [3645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_SLASH_GT,
  [3652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SLASH_GT,
  [3659] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__whitespace,
  [3666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_COLON_COLON,
  [3673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_LT_COLON_COLON,
  [3680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SLASH_GT,
  [3687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COLON_COLON,
  [3694] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__whitespace,
  [3701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RBRACK_RBRACK,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_SQUOTE,
  [3715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_COLON_COLON_EQ,
  [3722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_hom_name,
  [3729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_COLON_COLON_EQ,
  [3736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SLASH_GT,
  [3743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_SLASH_SLASH,
  [3750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_SLASH_SLASH,
  [3757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      aux_sym_subrules_token1,
  [3764] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__whitespace,
  [3771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
  [3778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 250,
  [SMALL_STATE(8)] = 300,
  [SMALL_STATE(9)] = 350,
  [SMALL_STATE(10)] = 400,
  [SMALL_STATE(11)] = 450,
  [SMALL_STATE(12)] = 477,
  [SMALL_STATE(13)] = 507,
  [SMALL_STATE(14)] = 529,
  [SMALL_STATE(15)] = 551,
  [SMALL_STATE(16)] = 573,
  [SMALL_STATE(17)] = 607,
  [SMALL_STATE(18)] = 637,
  [SMALL_STATE(19)] = 664,
  [SMALL_STATE(20)] = 685,
  [SMALL_STATE(21)] = 706,
  [SMALL_STATE(22)] = 733,
  [SMALL_STATE(23)] = 761,
  [SMALL_STATE(24)] = 785,
  [SMALL_STATE(25)] = 809,
  [SMALL_STATE(26)] = 833,
  [SMALL_STATE(27)] = 857,
  [SMALL_STATE(28)] = 881,
  [SMALL_STATE(29)] = 905,
  [SMALL_STATE(30)] = 929,
  [SMALL_STATE(31)] = 953,
  [SMALL_STATE(32)] = 981,
  [SMALL_STATE(33)] = 1009,
  [SMALL_STATE(34)] = 1037,
  [SMALL_STATE(35)] = 1065,
  [SMALL_STATE(36)] = 1093,
  [SMALL_STATE(37)] = 1117,
  [SMALL_STATE(38)] = 1140,
  [SMALL_STATE(39)] = 1163,
  [SMALL_STATE(40)] = 1186,
  [SMALL_STATE(41)] = 1219,
  [SMALL_STATE(42)] = 1252,
  [SMALL_STATE(43)] = 1275,
  [SMALL_STATE(44)] = 1308,
  [SMALL_STATE(45)] = 1341,
  [SMALL_STATE(46)] = 1366,
  [SMALL_STATE(47)] = 1385,
  [SMALL_STATE(48)] = 1408,
  [SMALL_STATE(49)] = 1441,
  [SMALL_STATE(50)] = 1469,
  [SMALL_STATE(51)] = 1493,
  [SMALL_STATE(52)] = 1517,
  [SMALL_STATE(53)] = 1537,
  [SMALL_STATE(54)] = 1565,
  [SMALL_STATE(55)] = 1585,
  [SMALL_STATE(56)] = 1603,
  [SMALL_STATE(57)] = 1621,
  [SMALL_STATE(58)] = 1645,
  [SMALL_STATE(59)] = 1669,
  [SMALL_STATE(60)] = 1687,
  [SMALL_STATE(61)] = 1707,
  [SMALL_STATE(62)] = 1731,
  [SMALL_STATE(63)] = 1755,
  [SMALL_STATE(64)] = 1775,
  [SMALL_STATE(65)] = 1799,
  [SMALL_STATE(66)] = 1823,
  [SMALL_STATE(67)] = 1843,
  [SMALL_STATE(68)] = 1867,
  [SMALL_STATE(69)] = 1891,
  [SMALL_STATE(70)] = 1915,
  [SMALL_STATE(71)] = 1939,
  [SMALL_STATE(72)] = 1959,
  [SMALL_STATE(73)] = 1983,
  [SMALL_STATE(74)] = 2007,
  [SMALL_STATE(75)] = 2028,
  [SMALL_STATE(76)] = 2049,
  [SMALL_STATE(77)] = 2073,
  [SMALL_STATE(78)] = 2097,
  [SMALL_STATE(79)] = 2112,
  [SMALL_STATE(80)] = 2127,
  [SMALL_STATE(81)] = 2142,
  [SMALL_STATE(82)] = 2157,
  [SMALL_STATE(83)] = 2170,
  [SMALL_STATE(84)] = 2185,
  [SMALL_STATE(85)] = 2204,
  [SMALL_STATE(86)] = 2218,
  [SMALL_STATE(87)] = 2232,
  [SMALL_STATE(88)] = 2246,
  [SMALL_STATE(89)] = 2264,
  [SMALL_STATE(90)] = 2278,
  [SMALL_STATE(91)] = 2292,
  [SMALL_STATE(92)] = 2306,
  [SMALL_STATE(93)] = 2320,
  [SMALL_STATE(94)] = 2334,
  [SMALL_STATE(95)] = 2352,
  [SMALL_STATE(96)] = 2366,
  [SMALL_STATE(97)] = 2380,
  [SMALL_STATE(98)] = 2394,
  [SMALL_STATE(99)] = 2408,
  [SMALL_STATE(100)] = 2422,
  [SMALL_STATE(101)] = 2436,
  [SMALL_STATE(102)] = 2450,
  [SMALL_STATE(103)] = 2464,
  [SMALL_STATE(104)] = 2481,
  [SMALL_STATE(105)] = 2500,
  [SMALL_STATE(106)] = 2519,
  [SMALL_STATE(107)] = 2532,
  [SMALL_STATE(108)] = 2551,
  [SMALL_STATE(109)] = 2570,
  [SMALL_STATE(110)] = 2589,
  [SMALL_STATE(111)] = 2602,
  [SMALL_STATE(112)] = 2621,
  [SMALL_STATE(113)] = 2635,
  [SMALL_STATE(114)] = 2649,
  [SMALL_STATE(115)] = 2663,
  [SMALL_STATE(116)] = 2677,
  [SMALL_STATE(117)] = 2691,
  [SMALL_STATE(118)] = 2705,
  [SMALL_STATE(119)] = 2721,
  [SMALL_STATE(120)] = 2735,
  [SMALL_STATE(121)] = 2749,
  [SMALL_STATE(122)] = 2765,
  [SMALL_STATE(123)] = 2781,
  [SMALL_STATE(124)] = 2795,
  [SMALL_STATE(125)] = 2811,
  [SMALL_STATE(126)] = 2825,
  [SMALL_STATE(127)] = 2839,
  [SMALL_STATE(128)] = 2853,
  [SMALL_STATE(129)] = 2867,
  [SMALL_STATE(130)] = 2883,
  [SMALL_STATE(131)] = 2897,
  [SMALL_STATE(132)] = 2911,
  [SMALL_STATE(133)] = 2925,
  [SMALL_STATE(134)] = 2938,
  [SMALL_STATE(135)] = 2947,
  [SMALL_STATE(136)] = 2956,
  [SMALL_STATE(137)] = 2969,
  [SMALL_STATE(138)] = 2982,
  [SMALL_STATE(139)] = 2993,
  [SMALL_STATE(140)] = 3006,
  [SMALL_STATE(141)] = 3019,
  [SMALL_STATE(142)] = 3032,
  [SMALL_STATE(143)] = 3043,
  [SMALL_STATE(144)] = 3056,
  [SMALL_STATE(145)] = 3069,
  [SMALL_STATE(146)] = 3082,
  [SMALL_STATE(147)] = 3093,
  [SMALL_STATE(148)] = 3104,
  [SMALL_STATE(149)] = 3117,
  [SMALL_STATE(150)] = 3128,
  [SMALL_STATE(151)] = 3141,
  [SMALL_STATE(152)] = 3152,
  [SMALL_STATE(153)] = 3165,
  [SMALL_STATE(154)] = 3176,
  [SMALL_STATE(155)] = 3189,
  [SMALL_STATE(156)] = 3202,
  [SMALL_STATE(157)] = 3215,
  [SMALL_STATE(158)] = 3224,
  [SMALL_STATE(159)] = 3237,
  [SMALL_STATE(160)] = 3250,
  [SMALL_STATE(161)] = 3263,
  [SMALL_STATE(162)] = 3276,
  [SMALL_STATE(163)] = 3289,
  [SMALL_STATE(164)] = 3300,
  [SMALL_STATE(165)] = 3313,
  [SMALL_STATE(166)] = 3321,
  [SMALL_STATE(167)] = 3331,
  [SMALL_STATE(168)] = 3341,
  [SMALL_STATE(169)] = 3351,
  [SMALL_STATE(170)] = 3361,
  [SMALL_STATE(171)] = 3369,
  [SMALL_STATE(172)] = 3379,
  [SMALL_STATE(173)] = 3389,
  [SMALL_STATE(174)] = 3399,
  [SMALL_STATE(175)] = 3407,
  [SMALL_STATE(176)] = 3414,
  [SMALL_STATE(177)] = 3421,
  [SMALL_STATE(178)] = 3428,
  [SMALL_STATE(179)] = 3435,
  [SMALL_STATE(180)] = 3442,
  [SMALL_STATE(181)] = 3449,
  [SMALL_STATE(182)] = 3456,
  [SMALL_STATE(183)] = 3463,
  [SMALL_STATE(184)] = 3470,
  [SMALL_STATE(185)] = 3477,
  [SMALL_STATE(186)] = 3484,
  [SMALL_STATE(187)] = 3491,
  [SMALL_STATE(188)] = 3498,
  [SMALL_STATE(189)] = 3505,
  [SMALL_STATE(190)] = 3512,
  [SMALL_STATE(191)] = 3519,
  [SMALL_STATE(192)] = 3526,
  [SMALL_STATE(193)] = 3533,
  [SMALL_STATE(194)] = 3540,
  [SMALL_STATE(195)] = 3547,
  [SMALL_STATE(196)] = 3554,
  [SMALL_STATE(197)] = 3561,
  [SMALL_STATE(198)] = 3568,
  [SMALL_STATE(199)] = 3575,
  [SMALL_STATE(200)] = 3582,
  [SMALL_STATE(201)] = 3589,
  [SMALL_STATE(202)] = 3596,
  [SMALL_STATE(203)] = 3603,
  [SMALL_STATE(204)] = 3610,
  [SMALL_STATE(205)] = 3617,
  [SMALL_STATE(206)] = 3624,
  [SMALL_STATE(207)] = 3631,
  [SMALL_STATE(208)] = 3638,
  [SMALL_STATE(209)] = 3645,
  [SMALL_STATE(210)] = 3652,
  [SMALL_STATE(211)] = 3659,
  [SMALL_STATE(212)] = 3666,
  [SMALL_STATE(213)] = 3673,
  [SMALL_STATE(214)] = 3680,
  [SMALL_STATE(215)] = 3687,
  [SMALL_STATE(216)] = 3694,
  [SMALL_STATE(217)] = 3701,
  [SMALL_STATE(218)] = 3708,
  [SMALL_STATE(219)] = 3715,
  [SMALL_STATE(220)] = 3722,
  [SMALL_STATE(221)] = 3729,
  [SMALL_STATE(222)] = 3736,
  [SMALL_STATE(223)] = 3743,
  [SMALL_STATE(224)] = 3750,
  [SMALL_STATE(225)] = 3757,
  [SMALL_STATE(226)] = 3764,
  [SMALL_STATE(227)] = 3771,
  [SMALL_STATE(228)] = 3778,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 29),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 12, 0, 33),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 12, 0, 33),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 31),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 31),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 30),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 30),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(180),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(70),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(81),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 27),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 27),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 26),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 26),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 25),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 25),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 24),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 24),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subrules_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subrules_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subrules_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 32),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 32),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 28),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 28),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 10),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 5, 0, 8),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 5, 0, 8),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 21),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 21),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 20),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 20),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 18),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 18),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 17),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 17),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 16),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 16),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 14),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 14),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 23),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 22),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 22),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subrules_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subrules_repeat2, 4, 0, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subrules_repeat2, 4, 0, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subrules_repeat2, 3, 0, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subrules_repeat2, 3, 0, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 9),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 9), SHIFT_REPEAT(129),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 9), SHIFT_REPEAT(90),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 9), SHIFT_REPEAT(90),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 9), SHIFT_REPEAT(102),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 5, 0, 0),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 15),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 15),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 12),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 11),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subrules_repeat2, 2, 0, 0),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subrules_repeat2, 2, 0, 0), SHIFT_REPEAT(213),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subrules_repeat2, 2, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subrules, 1, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subrules, 1, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 2, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 7, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 7, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 5, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 5, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 4, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 4, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 6, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 6, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 1, 0, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 1, 0, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 2, 0, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 2, 0, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 6),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 6),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comprehension_string, 1, 0, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comprehension_string, 1, 0, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_separator, 6, 0, 35),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 6, 0, 35),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 3, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat2, 2, 0, 0),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat2, 2, 0, 0), SHIFT_REPEAT(114),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 4, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 2, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 2, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat3, 2, 0, 0),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat3, 2, 0, 0), SHIFT_REPEAT(126),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 34),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 13),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 19),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 5, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [629] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_line_cont = 0,
  ts_external_token__eof = 1,
  ts_external_token_hom_string = 2,
  ts_external_token_hom_inner_string_init = 3,
  ts_external_token_hom_inner_string_left = 4,
  ts_external_token_hom_inner_string_right = 5,
  ts_external_token_hom_inner_comp_left = 6,
  ts_external_token_error_sentinel = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_line_cont] = sym_line_cont,
  [ts_external_token__eof] = sym__eof,
  [ts_external_token_hom_string] = sym_hom_string,
  [ts_external_token_hom_inner_string_init] = sym_hom_inner_string_init,
  [ts_external_token_hom_inner_string_left] = sym_hom_inner_string_left,
  [ts_external_token_hom_inner_string_right] = sym_hom_inner_string_right,
  [ts_external_token_hom_inner_comp_left] = sym_hom_inner_comp_left,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_line_cont] = true,
    [ts_external_token__eof] = true,
    [ts_external_token_hom_string] = true,
    [ts_external_token_hom_inner_string_init] = true,
    [ts_external_token_hom_inner_string_left] = true,
    [ts_external_token_hom_inner_string_right] = true,
    [ts_external_token_hom_inner_comp_left] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__eof] = true,
  },
  [3] = {
    [ts_external_token_hom_string] = true,
  },
  [4] = {
    [ts_external_token_hom_inner_string_left] = true,
  },
  [5] = {
    [ts_external_token_hom_inner_string_right] = true,
  },
  [6] = {
    [ts_external_token_hom_inner_comp_left] = true,
  },
  [7] = {
    [ts_external_token_hom_inner_string_init] = true,
  },
  [8] = {
    [ts_external_token_line_cont] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_ott_external_scanner_create(void);
void tree_sitter_ott_external_scanner_destroy(void *);
bool tree_sitter_ott_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ott_external_scanner_serialize(void *, char *);
void tree_sitter_ott_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ott(void) {
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
      tree_sitter_ott_external_scanner_create,
      tree_sitter_ott_external_scanner_destroy,
      tree_sitter_ott_external_scanner_scan,
      tree_sitter_ott_external_scanner_serialize,
      tree_sitter_ott_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
