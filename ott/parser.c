#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 5
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 35

enum ts_symbol_identifiers {
  anon_sym_grammar = 1,
  anon_sym_embed = 2,
  anon_sym_defns = 3,
  sym_comment = 4,
  anon_sym_COLON_COLON = 5,
  anon_sym_COLON_COLON_EQ = 6,
  anon_sym_defn = 7,
  anon_sym_by = 8,
  anon_sym_DASH_DASH_DASH_DASH = 9,
  aux_sym_dash_line_token1 = 10,
  anon_sym_PIPE = 11,
  aux_sym_production_mod_token1 = 12,
  anon_sym_LT_SLASH = 13,
  anon_sym_SLASH_SLASH = 14,
  anon_sym_SLASH_GT = 15,
  aux_sym__element_string_token1 = 16,
  anon_sym_metavar = 17,
  anon_sym_indexvar = 18,
  anon_sym_COMMA = 19,
  anon_sym_LBRACE_LBRACE = 20,
  anon_sym_RBRACE_RBRACE = 21,
  sym_hom_name = 22,
  anon_sym_LBRACK_LBRACK = 23,
  anon_sym_RBRACK_RBRACK = 24,
  anon_sym_IN = 25,
  anon_sym_SQUOTE = 26,
  sym__namespace_prefix_string = 27,
  anon_sym_DOT_DOT = 28,
  anon_sym_DOT_DOT_DOT = 29,
  anon_sym_DOT_DOT_DOT_DOT = 30,
  sym__whitespace = 31,
  aux_sym__line_end_token1 = 32,
  sym_line_cont = 33,
  sym__eof = 34,
  sym_hom_string = 35,
  sym_hom_inner_string_init = 36,
  sym_hom_inner_string_left = 37,
  sym_hom_inner_string_right = 38,
  sym_hom_inner_comp_left = 39,
  sym_error_sentinel = 40,
  sym_source_file = 41,
  sym__item = 42,
  sym_defnclass = 43,
  sym_defnclass_name = 44,
  sym_defn = 45,
  sym_defn_name = 46,
  sym_defn_rule = 47,
  sym_rule_separator = 48,
  sym_rule_name = 49,
  sym_dash_line = 50,
  sym_rule_line = 51,
  sym_grammar_rule = 52,
  sym_production = 53,
  sym_production_mod = 54,
  sym_production_name = 55,
  sym__element = 56,
  sym__element_string = 57,
  sym_metavardefn = 58,
  sym__string_desc_list1 = 59,
  sym_string_desc = 60,
  sym_embed = 61,
  sym_homomorphism = 62,
  sym__hom_element = 63,
  sym_hom_inner_block = 64,
  sym__hom_inner = 65,
  sym_comprehension_bound = 66,
  sym__comprehension_string = 67,
  sym_namespace_prefix = 68,
  sym_dots = 69,
  sym_id = 70,
  sym__line_cont = 71,
  sym__line_end = 72,
  sym__hom_string = 73,
  sym__hom_inner_string_init = 74,
  sym__hom_inner_string_left = 75,
  sym__hom_inner_string_right = 76,
  sym__hom_inner_comp_left = 77,
  aux_sym_source_file_repeat1 = 78,
  aux_sym__item_repeat1 = 79,
  aux_sym_defnclass_repeat1 = 80,
  aux_sym_defnclass_repeat2 = 81,
  aux_sym_defn_repeat1 = 82,
  aux_sym_defn_repeat2 = 83,
  aux_sym_defn_rule_repeat1 = 84,
  aux_sym_grammar_rule_repeat1 = 85,
  aux_sym_production_repeat1 = 86,
  aux_sym__string_desc_list1_repeat1 = 87,
  aux_sym_homomorphism_repeat1 = 88,
  aux_sym__hom_inner_repeat1 = 89,
  aux_sym__hom_inner_repeat2 = 90,
  aux_sym__hom_inner_repeat3 = 91,
  anon_alias_sym_defn_name = 92,
  alias_sym_hom_body = 93,
  anon_alias_sym_production_modifier = 94,
  anon_alias_sym_production_name = 95,
  anon_alias_sym_rule_name = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_grammar] = "grammar",
  [anon_sym_embed] = "embed",
  [anon_sym_defns] = "defns",
  [sym_comment] = "comment",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_defn] = "defn",
  [anon_sym_by] = "by",
  [anon_sym_DASH_DASH_DASH_DASH] = "----",
  [aux_sym_dash_line_token1] = "dash_line_token1",
  [anon_sym_PIPE] = "|",
  [aux_sym_production_mod_token1] = "production_mod_token1",
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
  [aux_sym_defnclass_repeat1] = "defnclass_repeat1",
  [aux_sym_defnclass_repeat2] = "defnclass_repeat2",
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
  [anon_sym_defns] = anon_sym_defns,
  [sym_comment] = sym_comment,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_defn] = anon_sym_defn,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_DASH_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH_DASH,
  [aux_sym_dash_line_token1] = aux_sym_dash_line_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_production_mod_token1] = aux_sym_production_mod_token1,
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
  [aux_sym_defnclass_repeat1] = aux_sym_defnclass_repeat1,
  [aux_sym_defnclass_repeat2] = aux_sym_defnclass_repeat2,
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
  [anon_sym_defns] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [aux_sym_production_mod_token1] = {
    .visible = false,
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
  [aux_sym_defnclass_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defnclass_repeat2] = {
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
  [2] = {.index = 0, .length = 3},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 6},
  [8] = {.index = 15, .length = 4},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 3},
  [11] = {.index = 25, .length = 4},
  [13] = {.index = 29, .length = 1},
  [15] = {.index = 30, .length = 2},
  [16] = {.index = 32, .length = 2},
  [17] = {.index = 34, .length = 2},
  [19] = {.index = 36, .length = 3},
  [20] = {.index = 39, .length = 3},
  [21] = {.index = 42, .length = 3},
  [22] = {.index = 45, .length = 4},
  [23] = {.index = 49, .length = 2},
  [24] = {.index = 51, .length = 3},
  [25] = {.index = 54, .length = 3},
  [26] = {.index = 57, .length = 3},
  [27] = {.index = 60, .length = 2},
  [28] = {.index = 62, .length = 4},
  [29] = {.index = 66, .length = 4},
  [30] = {.index = 70, .length = 4},
  [31] = {.index = 74, .length = 3},
  [32] = {.index = 77, .length = 5},
  [34] = {.index = 82, .length = 2},
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
  [7] = {
    [3] = alias_sym_hom_body,
  },
  [12] = {
    [0] = anon_alias_sym_production_modifier,
  },
  [14] = {
    [0] = anon_alias_sym_production_name,
  },
  [18] = {
    [0] = anon_alias_sym_defn_name,
  },
  [33] = {
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
  [21] = 18,
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
  [32] = 30,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 12,
  [41] = 41,
  [42] = 33,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 34,
  [51] = 34,
  [52] = 52,
  [53] = 44,
  [54] = 47,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 44,
  [59] = 47,
  [60] = 60,
  [61] = 24,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 20,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 79,
  [83] = 83,
  [84] = 74,
  [85] = 76,
  [86] = 86,
  [87] = 15,
  [88] = 75,
  [89] = 79,
  [90] = 75,
  [91] = 76,
  [92] = 74,
  [93] = 78,
  [94] = 94,
  [95] = 78,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 101,
  [104] = 104,
  [105] = 102,
  [106] = 101,
  [107] = 102,
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
  [141] = 136,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 136,
  [147] = 147,
  [148] = 140,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 140,
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
  [168] = 60,
  [169] = 169,
  [170] = 79,
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
  [184] = 79,
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
  [196] = 189,
  [197] = 180,
  [198] = 178,
  [199] = 171,
  [200] = 189,
  [201] = 180,
  [202] = 178,
  [203] = 185,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 171,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 173,
  [213] = 213,
  [214] = 214,
  [215] = 208,
  [216] = 190,
  [217] = 217,
  [218] = 218,
  [219] = 208,
  [220] = 190,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == ',') ADVANCE(143);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == 'I') ADVANCE(22);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '}') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '<') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == ':') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == ':') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == '{') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '<') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '<') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '<') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(152);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '>') ADVANCE(103);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(101);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 23:
      if (lookahead == '[') ADVANCE(147);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(148);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == '{') ADVANCE(144);
      END_STATE();
    case 53:
      if (lookahead == '}') ADVANCE(145);
      END_STATE();
    case 54:
      if (eof) ADVANCE(57);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == ',') ADVANCE(143);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'g') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'g') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '|') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'b') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'd') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'd') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'f') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'n') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'v') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'v') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'x') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(136);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'v') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead == 'x') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__element_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_hom_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__namespace_prefix_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(136);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__line_end_token1);
      if (lookahead == '\n') ADVANCE(159);
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
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 54},
  [36] = {.lex_state = 54},
  [37] = {.lex_state = 54},
  [38] = {.lex_state = 54},
  [39] = {.lex_state = 54},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 54},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 54},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 54},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 55},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 54},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 1, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 4},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 0, .external_lex_state = 5},
  [109] = {.lex_state = 0, .external_lex_state = 6},
  [110] = {.lex_state = 0, .external_lex_state = 5},
  [111] = {.lex_state = 0, .external_lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 6},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0, .external_lex_state = 7},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 6},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 1, .external_lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 5},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 1, .external_lex_state = 2},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 1, .external_lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 5},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 1, .external_lex_state = 2},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 1, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 8},
  [161] = {.lex_state = 1, .external_lex_state = 2},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 8},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 1, .external_lex_state = 2},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 55},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 55},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 55},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 0, .external_lex_state = 5},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 55},
  [187] = {.lex_state = 55},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 55},
  [194] = {.lex_state = 0, .external_lex_state = 8},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 55},
  [210] = {.lex_state = 55},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 70},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 55},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grammar] = ACTIONS(1),
    [anon_sym_embed] = ACTIONS(1),
    [anon_sym_defns] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [sym_source_file] = STATE(205),
    [sym__item] = STATE(70),
    [sym_metavardefn] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_grammar] = ACTIONS(7),
    [anon_sym_embed] = ACTIONS(9),
    [anon_sym_defns] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_metavar] = ACTIONS(13),
    [anon_sym_indexvar] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      aux_sym__element_string_token1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(160), 1,
      sym_dash_line,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(17), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
    STATE(21), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [49] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      aux_sym__element_string_token1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(160), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(29), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(40), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
    STATE(21), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [98] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      aux_sym__element_string_token1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(160), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(45), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
    STATE(21), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [147] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      aux_sym__element_string_token1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(160), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(49), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
    STATE(21), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [196] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      aux_sym__element_string_token1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(160), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(53), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
    STATE(21), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [245] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      aux_sym__element_string_token1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(160), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(57), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
    STATE(21), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [294] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      aux_sym__element_string_token1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(160), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(61), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
    STATE(21), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [343] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      aux_sym__element_string_token1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(160), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(65), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
    STATE(21), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [392] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      aux_sym__element_string_token1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(160), 1,
      sym_dash_line,
    STATE(8), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(69), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
    STATE(21), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [441] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      aux_sym__element_string_token1,
    STATE(43), 1,
      sym_rule_separator,
    STATE(160), 1,
      sym_dash_line,
    STATE(19), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(21), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(73), 4,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_LT_SLASH,
    ACTIONS(80), 7,
      anon_sym_defn,
      aux_sym__element_string_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_LT_SLASH,
    ACTIONS(84), 7,
      anon_sym_defn,
      aux_sym__element_string_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_LT_SLASH,
    ACTIONS(88), 7,
      anon_sym_defn,
      aux_sym__element_string_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [564] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(46), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(94), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [593] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(57), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(100), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [622] = 7,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LT_SLASH,
    ACTIONS(106), 1,
      aux_sym__element_string_token1,
    STATE(15), 1,
      sym__line_end,
    ACTIONS(108), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(34), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [650] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(112), 1,
      anon_sym_LT_SLASH,
    ACTIONS(115), 1,
      aux_sym__element_string_token1,
    STATE(19), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(118), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(21), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [698] = 7,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LT_SLASH,
    ACTIONS(106), 1,
      aux_sym__element_string_token1,
    STATE(87), 1,
      sym__line_end,
    ACTIONS(125), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(34), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [726] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_defn,
    ACTIONS(131), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(40), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(64), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [752] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_defn,
    ACTIONS(131), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(22), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(63), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [798] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(31), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(141), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [821] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_production_mod_token1,
    STATE(117), 1,
      sym_string_desc,
    STATE(172), 1,
      sym__string_desc_list1,
    ACTIONS(147), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(39), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [848] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(151), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [871] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(155), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(164), 1,
      sym_hom_string,
    STATE(28), 1,
      aux_sym_homomorphism_repeat1,
    STATE(86), 1,
      sym_hom_inner_block,
    STATE(96), 1,
      sym__hom_string,
    ACTIONS(158), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(80), 2,
      sym__hom_element,
      sym_dots,
  [904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(27), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(169), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [927] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(173), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(177), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(179), 1,
      sym_hom_string,
    STATE(28), 1,
      aux_sym_homomorphism_repeat1,
    STATE(86), 1,
      sym_hom_inner_block,
    STATE(96), 1,
      sym__hom_string,
    ACTIONS(175), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(80), 2,
      sym__hom_element,
      sym_dots,
  [960] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(183), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [983] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(177), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(179), 1,
      sym_hom_string,
    ACTIONS(185), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(28), 1,
      aux_sym_homomorphism_repeat1,
    STATE(86), 1,
      sym_hom_inner_block,
    STATE(96), 1,
      sym__hom_string,
    ACTIONS(175), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(80), 2,
      sym__hom_element,
      sym_dots,
  [1016] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(177), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(179), 1,
      sym_hom_string,
    ACTIONS(187), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(32), 1,
      aux_sym_homomorphism_repeat1,
    STATE(86), 1,
      sym_hom_inner_block,
    STATE(96), 1,
      sym__hom_string,
    ACTIONS(175), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(80), 2,
      sym__hom_element,
      sym_dots,
  [1049] = 6,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LT_SLASH,
    ACTIONS(192), 1,
      aux_sym__element_string_token1,
    ACTIONS(198), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(195), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(34), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1074] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_production_mod_token1,
    STATE(117), 1,
      sym_string_desc,
    STATE(172), 1,
      sym__string_desc_list1,
    ACTIONS(205), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(35), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(200), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1101] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(209), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(213), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(217), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1170] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_production_mod_token1,
    STATE(117), 1,
      sym_string_desc,
    STATE(172), 1,
      sym__string_desc_list1,
    ACTIONS(221), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(35), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_defn,
    ACTIONS(223), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(40), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(36), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(228), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1243] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(177), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(179), 1,
      sym_hom_string,
    ACTIONS(230), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(30), 1,
      aux_sym_homomorphism_repeat1,
    STATE(86), 1,
      sym_hom_inner_block,
    STATE(96), 1,
      sym__hom_string,
    ACTIONS(175), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(80), 2,
      sym__hom_element,
      sym_dots,
  [1276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(232), 1,
      aux_sym__element_string_token1,
    STATE(14), 1,
      sym_rule_line,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(18), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1300] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(238), 1,
      aux_sym__element_string_token1,
    ACTIONS(240), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(47), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_PIPE,
    STATE(45), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(247), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(242), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(45), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(251), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1368] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(253), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(255), 1,
      aux_sym__element_string_token1,
    ACTIONS(240), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(51), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1392] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(232), 1,
      aux_sym__element_string_token1,
    STATE(13), 1,
      sym_rule_line,
    ACTIONS(25), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(18), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1416] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COLON_COLON,
    ACTIONS(259), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      aux_sym__element_string_token1,
    ACTIONS(263), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(50), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1440] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_COLON_COLON,
    ACTIONS(267), 1,
      anon_sym_LT_SLASH,
    ACTIONS(270), 1,
      aux_sym__element_string_token1,
    ACTIONS(273), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(50), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1464] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(276), 1,
      anon_sym_LT_SLASH,
    ACTIONS(279), 1,
      aux_sym__element_string_token1,
    ACTIONS(282), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(51), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      aux_sym__element_string_token1,
    ACTIONS(285), 1,
      anon_sym_COLON_COLON,
    ACTIONS(263), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(50), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1512] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(287), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(289), 1,
      aux_sym__element_string_token1,
    ACTIONS(240), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(54), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(255), 1,
      aux_sym__element_string_token1,
    ACTIONS(291), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(240), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(51), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1560] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT_SLASH,
    ACTIONS(293), 1,
      anon_sym_COLON_COLON,
    ACTIONS(295), 1,
      aux_sym__element_string_token1,
    ACTIONS(263), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(49), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LT_SLASH,
    ACTIONS(297), 1,
      anon_sym_COLON_COLON,
    ACTIONS(299), 1,
      aux_sym__element_string_token1,
    ACTIONS(263), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(52), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1608] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(45), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(94), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1630] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(301), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(303), 1,
      aux_sym__element_string_token1,
    ACTIONS(240), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(59), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1654] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(255), 1,
      aux_sym__element_string_token1,
    ACTIONS(305), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(240), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(51), 4,
      sym__element,
      sym__element_string,
      sym_dots,
      aux_sym_defn_repeat1,
  [1678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(307), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_defn,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_LBRACE_LBRACE,
  [1713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(311), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_defn,
    STATE(65), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(315), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_defn,
    STATE(65), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(317), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_defn,
    STATE(65), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(319), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(68), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(326), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(328), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1844] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 1,
      anon_sym_grammar,
    ACTIONS(335), 1,
      anon_sym_embed,
    ACTIONS(338), 1,
      anon_sym_defns,
    ACTIONS(341), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(69), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1869] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(69), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_defn,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_LBRACE_LBRACE,
  [1911] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(350), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(352), 1,
      sym_hom_inner_string_left,
    STATE(145), 1,
      sym_dots,
    ACTIONS(348), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [1935] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(354), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(356), 1,
      sym_hom_inner_string_left,
    STATE(133), 1,
      sym_dots,
    ACTIONS(348), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(72), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [1959] = 3,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(360), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(358), 5,
      anon_sym_LT_SLASH,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1974] = 3,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(364), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(362), 5,
      anon_sym_LT_SLASH,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1989] = 3,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(368), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(366), 5,
      anon_sym_LT_SLASH,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_hom_inner_string_left,
    ACTIONS(370), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(372), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [2023] = 3,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(379), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(377), 5,
      anon_sym_LT_SLASH,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2038] = 3,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(383), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(381), 5,
      anon_sym_LT_SLASH,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(385), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(383), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LT_SLASH,
    ACTIONS(381), 5,
      anon_sym_COLON_COLON,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(389), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LT_SLASH,
    ACTIONS(358), 5,
      anon_sym_COLON_COLON,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
    ACTIONS(366), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(393), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_DASH_DASH_DASH_DASH,
      anon_sym_LT_SLASH,
    ACTIONS(88), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LT_SLASH,
    ACTIONS(362), 5,
      anon_sym_COLON_COLON,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
    ACTIONS(381), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 2,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
    ACTIONS(362), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LT_SLASH,
    ACTIONS(366), 5,
      anon_sym_COLON_COLON,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
    ACTIONS(358), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LT_SLASH,
    ACTIONS(377), 5,
      anon_sym_COLON_COLON,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
    ACTIONS(377), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(397), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2289] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(401), 1,
      anon_sym_COLON_COLON,
    ACTIONS(403), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(405), 1,
      anon_sym_COLON_COLON,
    ACTIONS(407), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(97), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(409), 3,
      anon_sym_SLASH_GT,
      anon_sym_IN,
      anon_sym_DOT_DOT_DOT_DOT,
  [2338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_SLASH_GT,
    ACTIONS(417), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(169), 1,
      sym_dots,
    ACTIONS(415), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(421), 1,
      aux_sym__element_string_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(199), 1,
      sym_comprehension_bound,
    STATE(219), 1,
      sym__element_string,
  [2374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(423), 1,
      aux_sym__element_string_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(189), 1,
      sym_comprehension_bound,
    STATE(190), 1,
      sym__element_string,
  [2393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(425), 1,
      aux_sym__element_string_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(207), 1,
      sym_comprehension_bound,
    STATE(208), 1,
      sym__element_string,
  [2412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LT_SLASH,
    ACTIONS(429), 4,
      aux_sym__element_string_token1,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [2425] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(431), 1,
      aux_sym__element_string_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(196), 1,
      sym_comprehension_bound,
    STATE(216), 1,
      sym__element_string,
  [2444] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(433), 1,
      aux_sym__element_string_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(171), 1,
      sym_comprehension_bound,
    STATE(215), 1,
      sym__element_string,
  [2463] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(435), 1,
      aux_sym__element_string_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(200), 1,
      sym_comprehension_bound,
    STATE(220), 1,
      sym__element_string,
  [2482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(439), 1,
      sym_hom_inner_string_right,
    STATE(110), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(443), 1,
      sym_hom_inner_comp_left,
    STATE(123), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(447), 1,
      sym_hom_inner_string_right,
    STATE(110), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_hom_inner_string_right,
    ACTIONS(450), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(110), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2538] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COLON_COLON,
    ACTIONS(454), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym__string_desc_list1_repeat1,
  [2554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(94), 1,
      sym_embed,
    STATE(67), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2568] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_production_mod_token1,
    STATE(94), 1,
      sym_defnclass,
    STATE(186), 1,
      sym_defnclass_name,
    STATE(218), 1,
      sym_id,
  [2584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_COLON_COLON,
    ACTIONS(463), 1,
      aux_sym_production_mod_token1,
    STATE(120), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(467), 1,
      sym_hom_inner_comp_left,
    STATE(109), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2612] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COLON_COLON,
    ACTIONS(471), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym__string_desc_list1_repeat1,
  [2628] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LT_SLASH,
    ACTIONS(477), 1,
      sym_hom_inner_string_init,
    STATE(73), 1,
      sym__hom_inner_string_init,
    STATE(176), 1,
      sym__hom_inner,
  [2644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      anon_sym_by,
    STATE(40), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 1,
      aux_sym_production_mod_token1,
    STATE(120), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2672] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_COLON_COLON,
    ACTIONS(488), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(112), 1,
      aux_sym__string_desc_list1_repeat1,
  [2688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      aux_sym_production_mod_token1,
    ACTIONS(490), 1,
      anon_sym_COLON_COLON,
    STATE(128), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(494), 1,
      sym_hom_inner_comp_left,
    STATE(123), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(497), 1,
      anon_sym_by,
    STATE(119), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(499), 1,
      anon_sym_by,
    STATE(40), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(501), 1,
      anon_sym_by,
    STATE(125), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      aux_sym_production_mod_token1,
    ACTIONS(503), 1,
      anon_sym_COLON_COLON,
    STATE(115), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      aux_sym_production_mod_token1,
    ACTIONS(505), 1,
      anon_sym_COLON_COLON,
    STATE(120), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_production_mod_token1,
    STATE(25), 1,
      sym_production_name,
    STATE(62), 1,
      sym_id,
  [2799] = 3,
    ACTIONS(102), 1,
      sym_comment,
    STATE(9), 1,
      sym__line_end,
    ACTIONS(507), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [2810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      sym__namespace_prefix_string,
    STATE(174), 1,
      sym_namespace_prefix,
  [2823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_production_mod_token1,
    STATE(29), 1,
      sym_production_name,
    STATE(62), 1,
      sym_id,
  [2836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_hom_inner_string_right,
    STATE(108), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_production_mod_token1,
    STATE(181), 1,
      sym_id,
    STATE(187), 1,
      sym_defn_name,
  [2860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(202), 1,
      sym_comprehension_bound,
  [2882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      sym__namespace_prefix_string,
    STATE(124), 1,
      sym_namespace_prefix,
  [2895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(211), 1,
      sym_comprehension_bound,
  [2908] = 3,
    ACTIONS(102), 1,
      sym_comment,
    STATE(5), 1,
      sym__line_end,
    ACTIONS(519), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [2919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(201), 1,
      sym_comprehension_bound,
  [2932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(178), 1,
      sym_comprehension_bound,
  [2945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(204), 1,
      sym_comprehension_bound,
  [2958] = 3,
    ACTIONS(102), 1,
      sym_comment,
    STATE(10), 1,
      sym__line_end,
    ACTIONS(521), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [2969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      sym__namespace_prefix_string,
    STATE(126), 1,
      sym_namespace_prefix,
  [2982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym_hom_inner_string_right,
    STATE(111), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(198), 1,
      sym_comprehension_bound,
  [3006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      sym__namespace_prefix_string,
    STATE(175), 1,
      sym_namespace_prefix,
  [3019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(197), 1,
      sym_comprehension_bound,
  [3032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_production_mod_token1,
    STATE(179), 1,
      sym_defn_name,
    STATE(181), 1,
      sym_id,
  [3045] = 3,
    ACTIONS(102), 1,
      sym_comment,
    STATE(2), 1,
      sym__line_end,
    ACTIONS(525), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [3065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_production_mod_token1,
    STATE(37), 1,
      sym_production_name,
    STATE(62), 1,
      sym_id,
  [3078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      aux_sym_production_mod_token1,
    STATE(117), 1,
      sym_string_desc,
    STATE(217), 1,
      sym__string_desc_list1,
  [3091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym_production_mod_token1,
    STATE(41), 1,
      sym_production_name,
    STATE(62), 1,
      sym_id,
  [3104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [3113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(180), 1,
      sym_comprehension_bound,
  [3126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COLON_COLON,
    ACTIONS(454), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [3137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_production_mod_token1,
    STATE(159), 1,
      sym_rule_name,
    STATE(161), 1,
      sym_id,
  [3150] = 3,
    ACTIONS(102), 1,
      sym_comment,
    STATE(104), 1,
      sym__line_end,
    ACTIONS(535), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym_line_cont,
    STATE(210), 1,
      sym__line_cont,
  [3171] = 2,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(539), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
  [3187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_SLASH_GT,
    ACTIONS(545), 1,
      anon_sym_IN,
  [3197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_production_mod_token1,
    STATE(100), 1,
      sym__comprehension_string,
  [3207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym_line_cont,
    STATE(158), 1,
      sym__line_cont,
  [3217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      aux_sym_production_mod_token1,
    STATE(157), 1,
      sym_string_desc,
  [3227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(551), 1,
      sym__namespace_prefix_string,
  [3237] = 2,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(307), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_production_mod_token1,
    STATE(177), 1,
      sym__comprehension_string,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym_production_mod_token1,
  [3262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_SLASH_GT,
  [3269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON_COLON,
  [3276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_hom_name,
  [3283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_COLON_COLON_EQ,
  [3290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COLON_COLON_EQ,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RBRACK_RBRACK,
  [3304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SLASH_GT,
  [3311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH_GT,
  [3318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COLON_COLON,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SLASH_GT,
  [3332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COLON_COLON,
  [3339] = 2,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym__whitespace,
  [3346] = 2,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__whitespace,
  [3353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_hom_inner_string_right,
  [3360] = 2,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__whitespace,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COLON_COLON,
  [3374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_COLON_COLON,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RBRACK_RBRACK,
  [3388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH_GT,
  [3395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SLASH_SLASH,
  [3402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
  [3409] = 2,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__whitespace,
  [3416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
  [3423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_line_cont,
  [3430] = 2,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym__whitespace,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SLASH_GT,
  [3444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SLASH_GT,
  [3451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_SLASH_GT,
  [3458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SLASH_GT,
  [3465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SLASH_GT,
  [3472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SLASH_GT,
  [3479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH_GT,
  [3486] = 2,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__whitespace,
  [3493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH_GT,
  [3500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      ts_builtin_sym_end,
  [3507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACK_RBRACK,
  [3514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SLASH_GT,
  [3521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_SLASH_SLASH,
  [3528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COLON_COLON,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COLON_COLON,
  [3542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_SLASH_GT,
  [3549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_hom_name,
  [3556] = 2,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(633), 1,
      aux_sym_dash_line_token1,
  [3563] = 2,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym__whitespace,
  [3570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SLASH_SLASH,
  [3577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_SLASH_SLASH,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COLON_COLON_EQ,
  [3591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COLON_COLON,
  [3598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SLASH_SLASH,
  [3605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 294,
  [SMALL_STATE(9)] = 343,
  [SMALL_STATE(10)] = 392,
  [SMALL_STATE(11)] = 441,
  [SMALL_STATE(12)] = 475,
  [SMALL_STATE(13)] = 501,
  [SMALL_STATE(14)] = 522,
  [SMALL_STATE(15)] = 543,
  [SMALL_STATE(16)] = 564,
  [SMALL_STATE(17)] = 593,
  [SMALL_STATE(18)] = 622,
  [SMALL_STATE(19)] = 650,
  [SMALL_STATE(20)] = 678,
  [SMALL_STATE(21)] = 698,
  [SMALL_STATE(22)] = 726,
  [SMALL_STATE(23)] = 752,
  [SMALL_STATE(24)] = 778,
  [SMALL_STATE(25)] = 798,
  [SMALL_STATE(26)] = 821,
  [SMALL_STATE(27)] = 848,
  [SMALL_STATE(28)] = 871,
  [SMALL_STATE(29)] = 904,
  [SMALL_STATE(30)] = 927,
  [SMALL_STATE(31)] = 960,
  [SMALL_STATE(32)] = 983,
  [SMALL_STATE(33)] = 1016,
  [SMALL_STATE(34)] = 1049,
  [SMALL_STATE(35)] = 1074,
  [SMALL_STATE(36)] = 1101,
  [SMALL_STATE(37)] = 1124,
  [SMALL_STATE(38)] = 1147,
  [SMALL_STATE(39)] = 1170,
  [SMALL_STATE(40)] = 1197,
  [SMALL_STATE(41)] = 1220,
  [SMALL_STATE(42)] = 1243,
  [SMALL_STATE(43)] = 1276,
  [SMALL_STATE(44)] = 1300,
  [SMALL_STATE(45)] = 1324,
  [SMALL_STATE(46)] = 1346,
  [SMALL_STATE(47)] = 1368,
  [SMALL_STATE(48)] = 1392,
  [SMALL_STATE(49)] = 1416,
  [SMALL_STATE(50)] = 1440,
  [SMALL_STATE(51)] = 1464,
  [SMALL_STATE(52)] = 1488,
  [SMALL_STATE(53)] = 1512,
  [SMALL_STATE(54)] = 1536,
  [SMALL_STATE(55)] = 1560,
  [SMALL_STATE(56)] = 1584,
  [SMALL_STATE(57)] = 1608,
  [SMALL_STATE(58)] = 1630,
  [SMALL_STATE(59)] = 1654,
  [SMALL_STATE(60)] = 1678,
  [SMALL_STATE(61)] = 1696,
  [SMALL_STATE(62)] = 1713,
  [SMALL_STATE(63)] = 1730,
  [SMALL_STATE(64)] = 1749,
  [SMALL_STATE(65)] = 1768,
  [SMALL_STATE(66)] = 1787,
  [SMALL_STATE(67)] = 1806,
  [SMALL_STATE(68)] = 1825,
  [SMALL_STATE(69)] = 1844,
  [SMALL_STATE(70)] = 1869,
  [SMALL_STATE(71)] = 1894,
  [SMALL_STATE(72)] = 1911,
  [SMALL_STATE(73)] = 1935,
  [SMALL_STATE(74)] = 1959,
  [SMALL_STATE(75)] = 1974,
  [SMALL_STATE(76)] = 1989,
  [SMALL_STATE(77)] = 2004,
  [SMALL_STATE(78)] = 2023,
  [SMALL_STATE(79)] = 2038,
  [SMALL_STATE(80)] = 2053,
  [SMALL_STATE(81)] = 2067,
  [SMALL_STATE(82)] = 2081,
  [SMALL_STATE(83)] = 2095,
  [SMALL_STATE(84)] = 2109,
  [SMALL_STATE(85)] = 2123,
  [SMALL_STATE(86)] = 2137,
  [SMALL_STATE(87)] = 2151,
  [SMALL_STATE(88)] = 2165,
  [SMALL_STATE(89)] = 2179,
  [SMALL_STATE(90)] = 2193,
  [SMALL_STATE(91)] = 2207,
  [SMALL_STATE(92)] = 2221,
  [SMALL_STATE(93)] = 2235,
  [SMALL_STATE(94)] = 2249,
  [SMALL_STATE(95)] = 2261,
  [SMALL_STATE(96)] = 2275,
  [SMALL_STATE(97)] = 2289,
  [SMALL_STATE(98)] = 2307,
  [SMALL_STATE(99)] = 2325,
  [SMALL_STATE(100)] = 2338,
  [SMALL_STATE(101)] = 2355,
  [SMALL_STATE(102)] = 2374,
  [SMALL_STATE(103)] = 2393,
  [SMALL_STATE(104)] = 2412,
  [SMALL_STATE(105)] = 2425,
  [SMALL_STATE(106)] = 2444,
  [SMALL_STATE(107)] = 2463,
  [SMALL_STATE(108)] = 2482,
  [SMALL_STATE(109)] = 2496,
  [SMALL_STATE(110)] = 2510,
  [SMALL_STATE(111)] = 2524,
  [SMALL_STATE(112)] = 2538,
  [SMALL_STATE(113)] = 2554,
  [SMALL_STATE(114)] = 2568,
  [SMALL_STATE(115)] = 2584,
  [SMALL_STATE(116)] = 2598,
  [SMALL_STATE(117)] = 2612,
  [SMALL_STATE(118)] = 2628,
  [SMALL_STATE(119)] = 2644,
  [SMALL_STATE(120)] = 2658,
  [SMALL_STATE(121)] = 2672,
  [SMALL_STATE(122)] = 2688,
  [SMALL_STATE(123)] = 2702,
  [SMALL_STATE(124)] = 2716,
  [SMALL_STATE(125)] = 2730,
  [SMALL_STATE(126)] = 2744,
  [SMALL_STATE(127)] = 2758,
  [SMALL_STATE(128)] = 2772,
  [SMALL_STATE(129)] = 2786,
  [SMALL_STATE(130)] = 2799,
  [SMALL_STATE(131)] = 2810,
  [SMALL_STATE(132)] = 2823,
  [SMALL_STATE(133)] = 2836,
  [SMALL_STATE(134)] = 2847,
  [SMALL_STATE(135)] = 2860,
  [SMALL_STATE(136)] = 2869,
  [SMALL_STATE(137)] = 2882,
  [SMALL_STATE(138)] = 2895,
  [SMALL_STATE(139)] = 2908,
  [SMALL_STATE(140)] = 2919,
  [SMALL_STATE(141)] = 2932,
  [SMALL_STATE(142)] = 2945,
  [SMALL_STATE(143)] = 2958,
  [SMALL_STATE(144)] = 2969,
  [SMALL_STATE(145)] = 2982,
  [SMALL_STATE(146)] = 2993,
  [SMALL_STATE(147)] = 3006,
  [SMALL_STATE(148)] = 3019,
  [SMALL_STATE(149)] = 3032,
  [SMALL_STATE(150)] = 3045,
  [SMALL_STATE(151)] = 3056,
  [SMALL_STATE(152)] = 3065,
  [SMALL_STATE(153)] = 3078,
  [SMALL_STATE(154)] = 3091,
  [SMALL_STATE(155)] = 3104,
  [SMALL_STATE(156)] = 3113,
  [SMALL_STATE(157)] = 3126,
  [SMALL_STATE(158)] = 3137,
  [SMALL_STATE(159)] = 3150,
  [SMALL_STATE(160)] = 3161,
  [SMALL_STATE(161)] = 3171,
  [SMALL_STATE(162)] = 3179,
  [SMALL_STATE(163)] = 3187,
  [SMALL_STATE(164)] = 3197,
  [SMALL_STATE(165)] = 3207,
  [SMALL_STATE(166)] = 3217,
  [SMALL_STATE(167)] = 3227,
  [SMALL_STATE(168)] = 3237,
  [SMALL_STATE(169)] = 3245,
  [SMALL_STATE(170)] = 3255,
  [SMALL_STATE(171)] = 3262,
  [SMALL_STATE(172)] = 3269,
  [SMALL_STATE(173)] = 3276,
  [SMALL_STATE(174)] = 3283,
  [SMALL_STATE(175)] = 3290,
  [SMALL_STATE(176)] = 3297,
  [SMALL_STATE(177)] = 3304,
  [SMALL_STATE(178)] = 3311,
  [SMALL_STATE(179)] = 3318,
  [SMALL_STATE(180)] = 3325,
  [SMALL_STATE(181)] = 3332,
  [SMALL_STATE(182)] = 3339,
  [SMALL_STATE(183)] = 3346,
  [SMALL_STATE(184)] = 3353,
  [SMALL_STATE(185)] = 3360,
  [SMALL_STATE(186)] = 3367,
  [SMALL_STATE(187)] = 3374,
  [SMALL_STATE(188)] = 3381,
  [SMALL_STATE(189)] = 3388,
  [SMALL_STATE(190)] = 3395,
  [SMALL_STATE(191)] = 3402,
  [SMALL_STATE(192)] = 3409,
  [SMALL_STATE(193)] = 3416,
  [SMALL_STATE(194)] = 3423,
  [SMALL_STATE(195)] = 3430,
  [SMALL_STATE(196)] = 3437,
  [SMALL_STATE(197)] = 3444,
  [SMALL_STATE(198)] = 3451,
  [SMALL_STATE(199)] = 3458,
  [SMALL_STATE(200)] = 3465,
  [SMALL_STATE(201)] = 3472,
  [SMALL_STATE(202)] = 3479,
  [SMALL_STATE(203)] = 3486,
  [SMALL_STATE(204)] = 3493,
  [SMALL_STATE(205)] = 3500,
  [SMALL_STATE(206)] = 3507,
  [SMALL_STATE(207)] = 3514,
  [SMALL_STATE(208)] = 3521,
  [SMALL_STATE(209)] = 3528,
  [SMALL_STATE(210)] = 3535,
  [SMALL_STATE(211)] = 3542,
  [SMALL_STATE(212)] = 3549,
  [SMALL_STATE(213)] = 3556,
  [SMALL_STATE(214)] = 3563,
  [SMALL_STATE(215)] = 3570,
  [SMALL_STATE(216)] = 3577,
  [SMALL_STATE(217)] = 3584,
  [SMALL_STATE(218)] = 3591,
  [SMALL_STATE(219)] = 3598,
  [SMALL_STATE(220)] = 3605,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, .production_id = 30),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, .production_id = 30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2), SHIFT_REPEAT(213),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2), SHIFT_REPEAT(58),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2), SHIFT_REPEAT(21),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2), SHIFT_REPEAT(79),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 12, .production_id = 32),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 12, .production_id = 32),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, .production_id = 23),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, .production_id = 23),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, .production_id = 24),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, .production_id = 24),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, .production_id = 29),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, .production_id = 29),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, .production_id = 28),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, .production_id = 28),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, .production_id = 26),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, .production_id = 26),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, .production_id = 25),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, .production_id = 25),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2), SHIFT_REPEAT(173),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, .production_id = 27),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, .production_id = 27),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, .production_id = 31),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, .production_id = 31),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2), SHIFT_REPEAT(58),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2), SHIFT_REPEAT(21),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2), SHIFT_REPEAT(79),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, .production_id = 9),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, .production_id = 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 5, .production_id = 7),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 5, .production_id = 7),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, .production_id = 16),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, .production_id = 16),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, .production_id = 15),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, .production_id = 15),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, .production_id = 8),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, .production_id = 8), SHIFT_REPEAT(118),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, .production_id = 8), SHIFT_REPEAT(81),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, .production_id = 8), SHIFT_REPEAT(81),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, .production_id = 8), SHIFT_REPEAT(96),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, .production_id = 13),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, .production_id = 13),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, .production_id = 19),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, .production_id = 19),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2), SHIFT_REPEAT(58),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2), SHIFT_REPEAT(34),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2), SHIFT_REPEAT(79),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2), SHIFT_REPEAT(98),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, .production_id = 20),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, .production_id = 20),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, .production_id = 21),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, .production_id = 21),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, .production_id = 22),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, .production_id = 22),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 3),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2), SHIFT_REPEAT(212),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, .production_id = 17),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, .production_id = 17),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(56),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat1, 2), SHIFT_REPEAT(44),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2), SHIFT_REPEAT(50),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2), SHIFT_REPEAT(82),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat1, 2), SHIFT_REPEAT(53),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2), SHIFT_REPEAT(51),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2), SHIFT_REPEAT(89),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, .production_id = 14),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, .production_id = 14),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, .production_id = 10),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, .production_id = 11),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2), SHIFT_REPEAT(214),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 6),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hom_inner_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2), SHIFT_REPEAT(77),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 7),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, .production_id = 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, .production_id = 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_inner_block, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_inner_block, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, .production_id = 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, .production_id = 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, .production_id = 5),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, .production_id = 5),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 2, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 2, .production_id = 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 1, .production_id = 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 1, .production_id = 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comprehension_string, 1, .production_id = 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comprehension_string, 1, .production_id = 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_separator, 6, .production_id = 34),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 6, .production_id = 34),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat2, 2),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat2, 2), SHIFT_REPEAT(110),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 4),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2), SHIFT_REPEAT(166),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2), SHIFT_REPEAT(162),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat3, 2),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat3, 2), SHIFT_REPEAT(123),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, .production_id = 33),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, .production_id = 12),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, .production_id = 18),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [619] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
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

TS_PUBLIC const TSLanguage *tree_sitter_ott() {
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
