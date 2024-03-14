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
#define STATE_COUNT 380
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 10
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 18

enum ts_symbol_identifiers {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  sym_nesting_selector = 14,
  anon_sym_STAR = 15,
  anon_sym_DOT = 16,
  anon_sym_COLON_COLON = 17,
  anon_sym_POUND = 18,
  anon_sym_LBRACK = 19,
  anon_sym_EQ = 20,
  anon_sym_TILDE_EQ = 21,
  anon_sym_CARET_EQ = 22,
  anon_sym_PIPE_EQ = 23,
  anon_sym_STAR_EQ = 24,
  anon_sym_DOLLAR_EQ = 25,
  anon_sym_RBRACK = 26,
  anon_sym_GT = 27,
  anon_sym_TILDE = 28,
  anon_sym_PLUS = 29,
  anon_sym_PIPE = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_COLON = 33,
  sym_important = 34,
  anon_sym_LPAREN2 = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  anon_sym_not = 38,
  anon_sym_only = 39,
  anon_sym_selector = 40,
  aux_sym_color_value_token1 = 41,
  anon_sym_SQUOTE = 42,
  aux_sym_string_value_token1 = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_string_value_token2 = 45,
  aux_sym_integer_value_token1 = 46,
  aux_sym_float_value_token1 = 47,
  sym_unit = 48,
  anon_sym_DASH = 49,
  anon_sym_SLASH = 50,
  sym_identifier = 51,
  sym_at_keyword = 52,
  sym_js_comment = 53,
  sym_comment = 54,
  sym_plain_value = 55,
  anon_sym_DOLLAR_LBRACE = 56,
  anon_sym_RBRACE_SEMI = 57,
  sym__js_statement = 58,
  sym__descendant_operator = 59,
  sym__pseudo_class_selector_colon = 60,
  sym___error_recovery = 61,
  sym_stylesheet = 62,
  sym_import_statement = 63,
  sym_media_statement = 64,
  sym_charset_statement = 65,
  sym_namespace_statement = 66,
  sym_keyframes_statement = 67,
  sym_keyframe_block_list = 68,
  sym_keyframe_block = 69,
  sym_supports_statement = 70,
  sym_postcss_statement = 71,
  sym_at_rule = 72,
  sym_rule_set = 73,
  sym_selectors = 74,
  sym_block = 75,
  sym__selector = 76,
  sym_universal_selector = 77,
  sym_class_selector = 78,
  sym_pseudo_class_selector = 79,
  sym_pseudo_element_selector = 80,
  sym_id_selector = 81,
  sym_attribute_selector = 82,
  sym_child_selector = 83,
  sym_descendant_selector = 84,
  sym_sibling_selector = 85,
  sym_adjacent_sibling_selector = 86,
  sym_namespace_selector = 87,
  sym_pseudo_class_arguments = 88,
  sym_pseudo_element_arguments = 89,
  sym_declaration = 90,
  sym_last_declaration = 91,
  sym__query = 92,
  sym_feature_query = 93,
  sym_parenthesized_query = 94,
  sym_binary_query = 95,
  sym_unary_query = 96,
  sym_selector_query = 97,
  sym__value = 98,
  sym_parenthesized_value = 99,
  sym_color_value = 100,
  sym_string_value = 101,
  sym_integer_value = 102,
  sym_float_value = 103,
  sym_grid_value = 104,
  sym_call_expression = 105,
  sym_binary_expression = 106,
  sym_arguments = 107,
  sym_interpolation = 108,
  sym__inline_interpolation = 109,
  aux_sym__js_expressions = 110,
  sym__js_expression = 111,
  sym__js_block = 112,
  aux_sym_stylesheet_repeat1 = 113,
  aux_sym_import_statement_repeat1 = 114,
  aux_sym_keyframe_block_list_repeat1 = 115,
  aux_sym_postcss_statement_repeat1 = 116,
  aux_sym_selectors_repeat1 = 117,
  aux_sym_block_repeat1 = 118,
  aux_sym_pseudo_class_arguments_repeat1 = 119,
  aux_sym_declaration_repeat1 = 120,
  aux_sym_grid_value_repeat1 = 121,
  aux_sym_arguments_repeat1 = 122,
  aux_sym__js_block_repeat1 = 123,
  alias_sym_class_name = 124,
  alias_sym_feature_name = 125,
  alias_sym_function_name = 126,
  alias_sym_id_name = 127,
  alias_sym_js_expression = 128,
  alias_sym_keyframes_name = 129,
  alias_sym_keyword_query = 130,
  alias_sym_namespace_name = 131,
  alias_sym_property_name = 132,
  alias_sym_tag_name = 133,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_value_token1] = "string_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_value_token2] = "string_value_token2",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "attribute_name",
  [sym_at_keyword] = "at_keyword",
  [sym_js_comment] = "js_comment",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE_SEMI] = "};",
  [sym__js_statement] = "_js_statement",
  [sym__descendant_operator] = "_descendant_operator",
  [sym__pseudo_class_selector_colon] = ":",
  [sym___error_recovery] = "__error_recovery",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_postcss_statement] = "postcss_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_namespace_selector] = "namespace_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_pseudo_element_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_string_value] = "string_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_grid_value] = "grid_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_interpolation] = "interpolation",
  [sym__inline_interpolation] = "interpolation",
  [aux_sym__js_expressions] = "_js_expressions",
  [sym__js_expression] = "_js_expression",
  [sym__js_block] = "_js_block",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_postcss_statement_repeat1] = "postcss_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym__js_block_repeat1] = "_js_block_repeat1",
  [alias_sym_class_name] = "class_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_js_expression] = "js_expression",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_value_token1] = aux_sym_string_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_value_token2] = aux_sym_string_value_token2,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_js_comment] = sym_js_comment,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE_SEMI] = anon_sym_RBRACE_SEMI,
  [sym__js_statement] = sym__js_statement,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
  [sym___error_recovery] = sym___error_recovery,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_postcss_statement] = sym_postcss_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_namespace_selector] = sym_namespace_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_pseudo_element_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_string_value] = sym_string_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_grid_value] = sym_grid_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_interpolation] = sym_interpolation,
  [sym__inline_interpolation] = sym_interpolation,
  [aux_sym__js_expressions] = aux_sym__js_expressions,
  [sym__js_expression] = sym__js_expression,
  [sym__js_block] = sym__js_block,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_postcss_statement_repeat1] = aux_sym_postcss_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym__js_block_repeat1] = aux_sym__js_block_repeat1,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_js_expression] = alias_sym_js_expression,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_js_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__js_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__pseudo_class_selector_colon] = {
    .visible = true,
    .named = false,
  },
  [sym___error_recovery] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_postcss_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_grid_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__js_expressions] = {
    .visible = false,
    .named = false,
  },
  [sym__js_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__js_block] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postcss_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grid_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__js_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_js_expression] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [1] = alias_sym_class_name,
  },
  [3] = {
    [0] = sym_plain_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [1] = sym_identifier,
  },
  [10] = {
    [1] = alias_sym_js_expression,
  },
  [11] = {
    [2] = alias_sym_class_name,
  },
  [12] = {
    [2] = alias_sym_tag_name,
  },
  [13] = {
    [2] = alias_sym_id_name,
  },
  [14] = {
    [1] = alias_sym_namespace_name,
  },
  [15] = {
    [0] = alias_sym_property_name,
  },
  [16] = {
    [2] = sym_identifier,
  },
  [17] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_namespace_selector, 2,
    sym_namespace_selector,
    sym_identifier,
  aux_sym__js_expressions, 2,
    aux_sym__js_expressions,
    alias_sym_js_expression,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 4,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 23,
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
  [36] = 32,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 39,
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
  [64] = 63,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 59,
  [69] = 60,
  [70] = 59,
  [71] = 65,
  [72] = 62,
  [73] = 73,
  [74] = 67,
  [75] = 75,
  [76] = 76,
  [77] = 67,
  [78] = 78,
  [79] = 79,
  [80] = 34,
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
  [99] = 82,
  [100] = 100,
  [101] = 89,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 106,
  [107] = 100,
  [108] = 88,
  [109] = 109,
  [110] = 81,
  [111] = 106,
  [112] = 112,
  [113] = 113,
  [114] = 84,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 98,
  [119] = 95,
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
  [134] = 112,
  [135] = 96,
  [136] = 113,
  [137] = 86,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 97,
  [143] = 115,
  [144] = 144,
  [145] = 145,
  [146] = 140,
  [147] = 147,
  [148] = 91,
  [149] = 149,
  [150] = 150,
  [151] = 93,
  [152] = 129,
  [153] = 139,
  [154] = 87,
  [155] = 130,
  [156] = 156,
  [157] = 34,
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
  [179] = 178,
  [180] = 180,
  [181] = 177,
  [182] = 182,
  [183] = 182,
  [184] = 33,
  [185] = 34,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 188,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 79,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 94,
  [202] = 90,
  [203] = 165,
  [204] = 204,
  [205] = 205,
  [206] = 197,
  [207] = 196,
  [208] = 159,
  [209] = 162,
  [210] = 163,
  [211] = 158,
  [212] = 161,
  [213] = 168,
  [214] = 79,
  [215] = 167,
  [216] = 156,
  [217] = 217,
  [218] = 34,
  [219] = 164,
  [220] = 160,
  [221] = 166,
  [222] = 222,
  [223] = 90,
  [224] = 94,
  [225] = 163,
  [226] = 156,
  [227] = 160,
  [228] = 162,
  [229] = 158,
  [230] = 167,
  [231] = 166,
  [232] = 165,
  [233] = 161,
  [234] = 164,
  [235] = 168,
  [236] = 34,
  [237] = 159,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 243,
  [245] = 242,
  [246] = 246,
  [247] = 240,
  [248] = 248,
  [249] = 239,
  [250] = 240,
  [251] = 238,
  [252] = 248,
  [253] = 253,
  [254] = 254,
  [255] = 241,
  [256] = 256,
  [257] = 257,
  [258] = 254,
  [259] = 254,
  [260] = 257,
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
  [273] = 266,
  [274] = 271,
  [275] = 269,
  [276] = 276,
  [277] = 270,
  [278] = 267,
  [279] = 270,
  [280] = 280,
  [281] = 268,
  [282] = 280,
  [283] = 283,
  [284] = 271,
  [285] = 104,
  [286] = 113,
  [287] = 287,
  [288] = 288,
  [289] = 97,
  [290] = 290,
  [291] = 291,
  [292] = 291,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 294,
  [298] = 291,
  [299] = 288,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 293,
  [306] = 306,
  [307] = 303,
  [308] = 296,
  [309] = 309,
  [310] = 302,
  [311] = 311,
  [312] = 302,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 300,
  [317] = 311,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 318,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 322,
  [327] = 327,
  [328] = 94,
  [329] = 324,
  [330] = 327,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 331,
  [336] = 333,
  [337] = 333,
  [338] = 338,
  [339] = 331,
  [340] = 340,
  [341] = 341,
  [342] = 334,
  [343] = 343,
  [344] = 338,
  [345] = 345,
  [346] = 331,
  [347] = 333,
  [348] = 331,
  [349] = 333,
  [350] = 340,
  [351] = 333,
  [352] = 338,
  [353] = 334,
  [354] = 341,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 359,
  [363] = 331,
  [364] = 356,
  [365] = 358,
  [366] = 366,
  [367] = 367,
  [368] = 358,
  [369] = 359,
  [370] = 370,
  [371] = 332,
  [372] = 340,
  [373] = 358,
  [374] = 359,
  [375] = 358,
  [376] = 359,
  [377] = 358,
  [378] = 359,
  [379] = 379,
};

static inline bool sym_js_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(223);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(223);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(223);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(223);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(223);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(223);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(223);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == 's') ADVANCE(227);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 's') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 's') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == '{') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 's') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == '{') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == ']') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == ']') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(317);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(314);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '{') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '{') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(95);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '{') ADVANCE(322);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'k') ADVANCE(274);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 59:
      if (lookahead == '{') ADVANCE(322);
      END_STATE();
    case 60:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '}') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(223);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 68:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(33);
      END_STATE();
    case 69:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(320);
      END_STATE();
    case 70:
      if (eof) ADVANCE(73);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ';') ADVANCE(323);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_from);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_to);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(95);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(25);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(25);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\\') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(172);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(182);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == 'y') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(212);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(212);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(223);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(314);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '/') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'y') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(266);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(277);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(280);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'p') ADVANCE(291);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(282);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(283);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(321);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(329);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(69);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(316);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead == '/') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(329);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(25);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(25);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '/') ADVANCE(325);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(329);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 71, .external_lex_state = 2},
  [2] = {.lex_state = 71, .external_lex_state = 2},
  [3] = {.lex_state = 71, .external_lex_state = 2},
  [4] = {.lex_state = 71, .external_lex_state = 2},
  [5] = {.lex_state = 71, .external_lex_state = 2},
  [6] = {.lex_state = 71, .external_lex_state = 2},
  [7] = {.lex_state = 71, .external_lex_state = 2},
  [8] = {.lex_state = 71, .external_lex_state = 2},
  [9] = {.lex_state = 71, .external_lex_state = 2},
  [10] = {.lex_state = 71, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 3, .external_lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 5, .external_lex_state = 3},
  [34] = {.lex_state = 5, .external_lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 71, .external_lex_state = 2},
  [38] = {.lex_state = 71, .external_lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 10, .external_lex_state = 3},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 71, .external_lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 71, .external_lex_state = 2},
  [45] = {.lex_state = 71, .external_lex_state = 2},
  [46] = {.lex_state = 71, .external_lex_state = 2},
  [47] = {.lex_state = 71, .external_lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 71, .external_lex_state = 2},
  [50] = {.lex_state = 71, .external_lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 9, .external_lex_state = 3},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 9, .external_lex_state = 3},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 9, .external_lex_state = 3},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 9, .external_lex_state = 3},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 9, .external_lex_state = 3},
  [81] = {.lex_state = 71, .external_lex_state = 2},
  [82] = {.lex_state = 71, .external_lex_state = 2},
  [83] = {.lex_state = 9, .external_lex_state = 3},
  [84] = {.lex_state = 71, .external_lex_state = 2},
  [85] = {.lex_state = 9, .external_lex_state = 3},
  [86] = {.lex_state = 71, .external_lex_state = 2},
  [87] = {.lex_state = 71, .external_lex_state = 2},
  [88] = {.lex_state = 71, .external_lex_state = 2},
  [89] = {.lex_state = 71, .external_lex_state = 2},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 71, .external_lex_state = 2},
  [92] = {.lex_state = 9, .external_lex_state = 3},
  [93] = {.lex_state = 71, .external_lex_state = 2},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 71, .external_lex_state = 2},
  [96] = {.lex_state = 71, .external_lex_state = 2},
  [97] = {.lex_state = 71, .external_lex_state = 2},
  [98] = {.lex_state = 71, .external_lex_state = 2},
  [99] = {.lex_state = 71, .external_lex_state = 2},
  [100] = {.lex_state = 71, .external_lex_state = 2},
  [101] = {.lex_state = 71, .external_lex_state = 2},
  [102] = {.lex_state = 9, .external_lex_state = 3},
  [103] = {.lex_state = 9, .external_lex_state = 3},
  [104] = {.lex_state = 71, .external_lex_state = 2},
  [105] = {.lex_state = 71, .external_lex_state = 2},
  [106] = {.lex_state = 71, .external_lex_state = 2},
  [107] = {.lex_state = 71, .external_lex_state = 2},
  [108] = {.lex_state = 71, .external_lex_state = 2},
  [109] = {.lex_state = 9, .external_lex_state = 3},
  [110] = {.lex_state = 71, .external_lex_state = 2},
  [111] = {.lex_state = 71, .external_lex_state = 2},
  [112] = {.lex_state = 71, .external_lex_state = 2},
  [113] = {.lex_state = 71, .external_lex_state = 2},
  [114] = {.lex_state = 71, .external_lex_state = 2},
  [115] = {.lex_state = 71, .external_lex_state = 2},
  [116] = {.lex_state = 9, .external_lex_state = 3},
  [117] = {.lex_state = 9, .external_lex_state = 3},
  [118] = {.lex_state = 71, .external_lex_state = 2},
  [119] = {.lex_state = 71, .external_lex_state = 2},
  [120] = {.lex_state = 9, .external_lex_state = 3},
  [121] = {.lex_state = 9, .external_lex_state = 3},
  [122] = {.lex_state = 9, .external_lex_state = 3},
  [123] = {.lex_state = 9, .external_lex_state = 3},
  [124] = {.lex_state = 9, .external_lex_state = 3},
  [125] = {.lex_state = 9, .external_lex_state = 3},
  [126] = {.lex_state = 9, .external_lex_state = 3},
  [127] = {.lex_state = 9, .external_lex_state = 3},
  [128] = {.lex_state = 9, .external_lex_state = 3},
  [129] = {.lex_state = 71, .external_lex_state = 2},
  [130] = {.lex_state = 71, .external_lex_state = 2},
  [131] = {.lex_state = 9, .external_lex_state = 3},
  [132] = {.lex_state = 9, .external_lex_state = 3},
  [133] = {.lex_state = 9, .external_lex_state = 3},
  [134] = {.lex_state = 71, .external_lex_state = 2},
  [135] = {.lex_state = 71, .external_lex_state = 2},
  [136] = {.lex_state = 71, .external_lex_state = 2},
  [137] = {.lex_state = 71, .external_lex_state = 2},
  [138] = {.lex_state = 71, .external_lex_state = 2},
  [139] = {.lex_state = 71, .external_lex_state = 2},
  [140] = {.lex_state = 71, .external_lex_state = 2},
  [141] = {.lex_state = 71, .external_lex_state = 2},
  [142] = {.lex_state = 71, .external_lex_state = 2},
  [143] = {.lex_state = 71, .external_lex_state = 2},
  [144] = {.lex_state = 9, .external_lex_state = 3},
  [145] = {.lex_state = 9, .external_lex_state = 3},
  [146] = {.lex_state = 71, .external_lex_state = 2},
  [147] = {.lex_state = 9, .external_lex_state = 3},
  [148] = {.lex_state = 71, .external_lex_state = 2},
  [149] = {.lex_state = 9, .external_lex_state = 3},
  [150] = {.lex_state = 9, .external_lex_state = 3},
  [151] = {.lex_state = 71, .external_lex_state = 2},
  [152] = {.lex_state = 71, .external_lex_state = 2},
  [153] = {.lex_state = 71, .external_lex_state = 2},
  [154] = {.lex_state = 71, .external_lex_state = 2},
  [155] = {.lex_state = 71, .external_lex_state = 2},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 9, .external_lex_state = 3},
  [175] = {.lex_state = 9, .external_lex_state = 3},
  [176] = {.lex_state = 9, .external_lex_state = 3},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 9, .external_lex_state = 3},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 17},
  [183] = {.lex_state = 17},
  [184] = {.lex_state = 13, .external_lex_state = 3},
  [185] = {.lex_state = 13, .external_lex_state = 3},
  [186] = {.lex_state = 19},
  [187] = {.lex_state = 71, .external_lex_state = 3},
  [188] = {.lex_state = 71, .external_lex_state = 3},
  [189] = {.lex_state = 71, .external_lex_state = 3},
  [190] = {.lex_state = 71, .external_lex_state = 3},
  [191] = {.lex_state = 71, .external_lex_state = 3},
  [192] = {.lex_state = 71, .external_lex_state = 3},
  [193] = {.lex_state = 71, .external_lex_state = 3},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 71, .external_lex_state = 3},
  [196] = {.lex_state = 19},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 71, .external_lex_state = 3},
  [199] = {.lex_state = 19},
  [200] = {.lex_state = 19},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 17},
  [204] = {.lex_state = 19},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 19},
  [208] = {.lex_state = 17},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 17},
  [211] = {.lex_state = 17},
  [212] = {.lex_state = 17},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 13},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 13},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 17},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 71, .external_lex_state = 3},
  [223] = {.lex_state = 21},
  [224] = {.lex_state = 21},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 13},
  [228] = {.lex_state = 13},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 13},
  [236] = {.lex_state = 13},
  [237] = {.lex_state = 13},
  [238] = {.lex_state = 71},
  [239] = {.lex_state = 60},
  [240] = {.lex_state = 13},
  [241] = {.lex_state = 34},
  [242] = {.lex_state = 34},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 34},
  [246] = {.lex_state = 60},
  [247] = {.lex_state = 13},
  [248] = {.lex_state = 60},
  [249] = {.lex_state = 60},
  [250] = {.lex_state = 13},
  [251] = {.lex_state = 71},
  [252] = {.lex_state = 60},
  [253] = {.lex_state = 13},
  [254] = {.lex_state = 35},
  [255] = {.lex_state = 35},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 35},
  [259] = {.lex_state = 35},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 13},
  [267] = {.lex_state = 34},
  [268] = {.lex_state = 71},
  [269] = {.lex_state = 71},
  [270] = {.lex_state = 34},
  [271] = {.lex_state = 13},
  [272] = {.lex_state = 13},
  [273] = {.lex_state = 13},
  [274] = {.lex_state = 13},
  [275] = {.lex_state = 71},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 34},
  [278] = {.lex_state = 34},
  [279] = {.lex_state = 34},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 71},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 13},
  [284] = {.lex_state = 13},
  [285] = {.lex_state = 60},
  [286] = {.lex_state = 60},
  [287] = {.lex_state = 60},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 60},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 71},
  [292] = {.lex_state = 71},
  [293] = {.lex_state = 34},
  [294] = {.lex_state = 71},
  [295] = {.lex_state = 71},
  [296] = {.lex_state = 34},
  [297] = {.lex_state = 71},
  [298] = {.lex_state = 71},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 34},
  [301] = {.lex_state = 71},
  [302] = {.lex_state = 71},
  [303] = {.lex_state = 35},
  [304] = {.lex_state = 35},
  [305] = {.lex_state = 35},
  [306] = {.lex_state = 71},
  [307] = {.lex_state = 35},
  [308] = {.lex_state = 35},
  [309] = {.lex_state = 71},
  [310] = {.lex_state = 71},
  [311] = {.lex_state = 71},
  [312] = {.lex_state = 71},
  [313] = {.lex_state = 71},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 71},
  [316] = {.lex_state = 35},
  [317] = {.lex_state = 71},
  [318] = {.lex_state = 35},
  [319] = {.lex_state = 71},
  [320] = {.lex_state = 71},
  [321] = {.lex_state = 35},
  [322] = {.lex_state = 71},
  [323] = {.lex_state = 71},
  [324] = {.lex_state = 26},
  [325] = {.lex_state = 71},
  [326] = {.lex_state = 71},
  [327] = {.lex_state = 71},
  [328] = {.lex_state = 32},
  [329] = {.lex_state = 26},
  [330] = {.lex_state = 71},
  [331] = {.lex_state = 71},
  [332] = {.lex_state = 71},
  [333] = {.lex_state = 71},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 71},
  [336] = {.lex_state = 71},
  [337] = {.lex_state = 71},
  [338] = {.lex_state = 71},
  [339] = {.lex_state = 71},
  [340] = {.lex_state = 71},
  [341] = {.lex_state = 71},
  [342] = {.lex_state = 9},
  [343] = {.lex_state = 19},
  [344] = {.lex_state = 71},
  [345] = {.lex_state = 71},
  [346] = {.lex_state = 71},
  [347] = {.lex_state = 71},
  [348] = {.lex_state = 71},
  [349] = {.lex_state = 71},
  [350] = {.lex_state = 71},
  [351] = {.lex_state = 71},
  [352] = {.lex_state = 71},
  [353] = {.lex_state = 9},
  [354] = {.lex_state = 71},
  [355] = {.lex_state = 71},
  [356] = {.lex_state = 71},
  [357] = {.lex_state = 71},
  [358] = {.lex_state = 173},
  [359] = {.lex_state = 183},
  [360] = {.lex_state = 71},
  [361] = {.lex_state = 71},
  [362] = {.lex_state = 183},
  [363] = {.lex_state = 71},
  [364] = {.lex_state = 71},
  [365] = {.lex_state = 173},
  [366] = {.lex_state = 71},
  [367] = {.lex_state = 71},
  [368] = {.lex_state = 173},
  [369] = {.lex_state = 183},
  [370] = {.lex_state = 71},
  [371] = {.lex_state = 71},
  [372] = {.lex_state = 71},
  [373] = {.lex_state = 173},
  [374] = {.lex_state = 183},
  [375] = {.lex_state = 173},
  [376] = {.lex_state = 183},
  [377] = {.lex_state = 173},
  [378] = {.lex_state = 183},
  [379] = {.lex_state = 71},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_js_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_SEMI] = ACTIONS(1),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
    [sym___error_recovery] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(357),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(326),
    [sym__selector] = STATE(187),
    [sym_universal_selector] = STATE(187),
    [sym_class_selector] = STATE(187),
    [sym_pseudo_class_selector] = STATE(187),
    [sym_pseudo_element_selector] = STATE(187),
    [sym_id_selector] = STATE(187),
    [sym_attribute_selector] = STATE(187),
    [sym_child_selector] = STATE(187),
    [sym_descendant_selector] = STATE(187),
    [sym_sibling_selector] = STATE(187),
    [sym_adjacent_sibling_selector] = STATE(187),
    [sym_namespace_selector] = STATE(187),
    [sym_declaration] = STATE(9),
    [sym_string_value] = STATE(187),
    [sym_interpolation] = STATE(9),
    [aux_sym_stylesheet_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATmedia] = ACTIONS(11),
    [anon_sym_ATcharset] = ACTIONS(13),
    [anon_sym_ATnamespace] = ACTIONS(15),
    [anon_sym_ATkeyframes] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_at_keyword] = ACTIONS(39),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym__pseudo_class_selector_colon] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(322), 1,
      sym_selectors,
    STATE(372), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(5), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(187), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [98] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym_selectors,
    STATE(340), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(4), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(187), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [196] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym_selectors,
    STATE(344), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(187), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [294] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym_selectors,
    STATE(338), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(187), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [392] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym_selectors,
    STATE(352), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(187), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [490] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym_selectors,
    STATE(350), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(6), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(187), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [588] = 23,
    ACTIONS(75), 1,
      anon_sym_ATimport,
    ACTIONS(78), 1,
      anon_sym_ATmedia,
    ACTIONS(81), 1,
      anon_sym_ATcharset,
    ACTIONS(84), 1,
      anon_sym_ATnamespace,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      anon_sym_ATsupports,
    ACTIONS(95), 1,
      sym_nesting_selector,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_COLON_COLON,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(122), 1,
      sym_at_keyword,
    ACTIONS(125), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(128), 1,
      sym__pseudo_class_selector_colon,
    STATE(322), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(187), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [683] = 23,
    ACTIONS(9), 1,
      anon_sym_ATimport,
    ACTIONS(11), 1,
      anon_sym_ATmedia,
    ACTIONS(13), 1,
      anon_sym_ATcharset,
    ACTIONS(15), 1,
      anon_sym_ATnamespace,
    ACTIONS(19), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_at_keyword,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(326), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_stylesheet_repeat1,
    STATE(187), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [777] = 23,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      anon_sym_ATimport,
    ACTIONS(138), 1,
      anon_sym_ATmedia,
    ACTIONS(141), 1,
      anon_sym_ATcharset,
    ACTIONS(144), 1,
      anon_sym_ATnamespace,
    ACTIONS(150), 1,
      anon_sym_ATsupports,
    ACTIONS(153), 1,
      sym_nesting_selector,
    ACTIONS(156), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_COLON_COLON,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(180), 1,
      sym_at_keyword,
    ACTIONS(183), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(186), 1,
      sym__pseudo_class_selector_colon,
    STATE(326), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_stylesheet_repeat1,
    STATE(187), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [871] = 23,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(189), 1,
      sym_nesting_selector,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(27), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(33), 1,
      sym_string_value,
    STATE(169), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(191), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [960] = 23,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(217), 1,
      sym_nesting_selector,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(33), 1,
      sym_string_value,
    STATE(169), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(192), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [1049] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(221), 1,
      sym_nesting_selector,
    STATE(33), 1,
      sym_string_value,
    STATE(35), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(169), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(195), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [1135] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(223), 1,
      sym_nesting_selector,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      sym_important,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym_plain_value,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(176), 1,
      sym_namespace_selector,
    STATE(184), 1,
      sym_string_value,
    STATE(247), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(222), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1220] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(223), 1,
      sym_nesting_selector,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(247), 1,
      sym_important,
    ACTIONS(249), 1,
      sym_plain_value,
    STATE(176), 1,
      sym_namespace_selector,
    STATE(184), 1,
      sym_string_value,
    STATE(250), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(222), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1305] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      anon_sym_LPAREN2,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(51), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(91), 1,
      sym_block,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(244), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1384] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      sym_important,
    ACTIONS(277), 1,
      anon_sym_LPAREN2,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 1,
      sym_plain_value,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(314), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(274), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1451] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_LPAREN2,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(287), 1,
      sym_important,
    ACTIONS(289), 1,
      sym_plain_value,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(314), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(271), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1518] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(301), 1,
      sym_important,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    STATE(29), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(170), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1590] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(307), 1,
      sym_important,
    STATE(36), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(170), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1659] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym_important,
    STATE(32), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(170), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1728] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(317), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(315), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(321), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(313), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1773] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(298), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1838] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(291), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1903] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(292), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1968] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_important,
    ACTIONS(345), 1,
      anon_sym_LPAREN2,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      aux_sym_integer_value_token1,
    ACTIONS(357), 1,
      aux_sym_float_value_token1,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym_plain_value,
    ACTIONS(366), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(334), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(170), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2030] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(315), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2094] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_POUND,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      sym_important,
    ACTIONS(384), 1,
      anon_sym_LPAREN2,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      aux_sym_integer_value_token1,
    ACTIONS(396), 1,
      aux_sym_float_value_token1,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(402), 1,
      sym_plain_value,
    ACTIONS(405), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(28), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(373), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2154] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      sym_important,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    STATE(170), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2218] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(309), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2282] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(416), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2342] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(420), 1,
      sym_important,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    STATE(170), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2403] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(424), 6,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(428), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(422), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2442] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(432), 8,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(430), 16,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2477] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(434), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2536] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(436), 1,
      sym_important,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    STATE(170), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2597] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(223), 1,
      sym_nesting_selector,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(176), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(222), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [2649] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(440), 1,
      sym_nesting_selector,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(117), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2699] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2757] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_arguments,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(313), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [2803] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2861] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(454), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(198), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2911] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2969] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(458), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(128), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3019] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(460), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(127), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3069] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(462), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(126), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3119] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(464), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(125), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3169] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3227] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(223), 1,
      sym_nesting_selector,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(174), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(222), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [3279] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(470), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(193), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3329] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3387] = 5,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(474), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3422] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(482), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(480), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(315), 7,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(321), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [3463] = 5,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(484), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3498] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3553] = 5,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(490), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3588] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(31), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(169), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3643] = 5,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(494), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3678] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_important,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      sym_plain_value,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(247), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3730] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      sym_important,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      aux_sym_integer_value_token1,
    ACTIONS(514), 1,
      aux_sym_float_value_token1,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym_plain_value,
    ACTIONS(520), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(183), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3782] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(522), 1,
      sym_important,
    ACTIONS(524), 1,
      sym_plain_value,
    STATE(283), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3834] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(526), 1,
      sym_important,
    ACTIONS(528), 1,
      sym_plain_value,
    STATE(273), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3886] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(530), 1,
      sym_important,
    ACTIONS(532), 1,
      sym_plain_value,
    STATE(20), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3938] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(534), 1,
      sym_important,
    ACTIONS(536), 1,
      sym_plain_value,
    STATE(21), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3990] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      sym_important,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      sym_plain_value,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(274), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4042] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(538), 1,
      sym_important,
    ACTIONS(540), 1,
      sym_plain_value,
    STATE(284), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4094] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym_important,
    ACTIONS(544), 1,
      sym_plain_value,
    STATE(233), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4146] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(546), 1,
      sym_important,
    ACTIONS(548), 1,
      sym_plain_value,
    STATE(240), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4198] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      aux_sym_integer_value_token1,
    ACTIONS(514), 1,
      aux_sym_float_value_token1,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(550), 1,
      sym_important,
    ACTIONS(552), 1,
      sym_plain_value,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4250] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(247), 1,
      sym_important,
    ACTIONS(249), 1,
      sym_plain_value,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(250), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4302] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_important,
    ACTIONS(289), 1,
      sym_plain_value,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(271), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4354] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(554), 1,
      sym_important,
    ACTIONS(556), 1,
      sym_plain_value,
    STATE(266), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4406] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(558), 1,
      sym_important,
    ACTIONS(560), 1,
      sym_plain_value,
    STATE(172), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4458] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      aux_sym_integer_value_token1,
    ACTIONS(514), 1,
      aux_sym_float_value_token1,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(562), 1,
      sym_important,
    ACTIONS(564), 1,
      sym_plain_value,
    STATE(212), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4510] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(566), 1,
      sym_important,
    ACTIONS(568), 1,
      sym_plain_value,
    STATE(19), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4562] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(570), 1,
      sym_important,
    ACTIONS(572), 1,
      sym_plain_value,
    STATE(272), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4614] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(574), 1,
      sym_important,
    ACTIONS(576), 1,
      sym_plain_value,
    STATE(161), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4666] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(578), 1,
      sym_important,
    ACTIONS(580), 1,
      sym_plain_value,
    STATE(253), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4718] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(321), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(315), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4754] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(430), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4783] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(582), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(584), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4812] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(588), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(586), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4841] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(592), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(590), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4870] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(594), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(596), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4899] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(598), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4928] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(602), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(604), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4957] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(608), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(606), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4986] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(612), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(610), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5015] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(614), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(616), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5044] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym_unit,
    ACTIONS(620), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(618), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5077] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(624), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(626), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5106] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(630), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(628), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5135] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(634), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(632), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5164] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_unit,
    ACTIONS(638), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(636), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5197] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(644), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(642), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5226] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(646), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(648), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5255] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(650), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(652), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5284] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(656), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(654), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5313] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(588), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(586), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5342] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(660), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(658), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5371] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(614), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(616), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5400] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(662), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5429] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(666), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5458] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(670), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(672), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5487] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(670), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(672), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5516] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(676), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(674), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5545] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(660), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(658), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5574] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(612), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(610), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5603] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(678), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5632] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(582), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(584), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5661] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(676), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(674), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5690] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(682), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(684), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5719] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(686), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(688), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5748] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(594), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(596), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5777] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(690), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(692), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5806] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(313), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5835] = 4,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(694), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5866] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(656), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(654), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5895] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(644), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(642), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5924] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(700), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5953] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(706), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(704), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5982] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(708), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6011] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(712), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6040] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(716), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6069] = 4,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(722), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(720), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6100] = 4,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(726), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(724), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6131] = 4,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(730), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(728), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6162] = 4,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(734), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(732), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6193] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(736), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(738), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6222] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(740), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(742), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6251] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(746), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(744), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6280] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(750), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(748), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6309] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(754), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(752), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6338] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(682), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(684), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6367] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(646), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(648), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6396] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(686), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(688), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6425] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(602), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(604), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6454] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(624), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(626), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6483] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(756), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(758), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6512] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(760), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(762), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6541] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(764), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(766), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6570] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(650), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(652), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6599] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(690), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(692), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6628] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(770), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(768), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6657] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(774), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(772), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6686] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(760), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(762), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6715] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(778), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(776), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6744] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(624), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(626), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6773] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(782), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(780), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6802] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(786), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(784), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6831] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(634), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(632), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6860] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(736), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(738), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6889] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(756), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(758), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6918] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(608), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(606), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6947] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(740), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(742), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6976] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(790), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(788), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7006] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(432), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(430), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7036] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(794), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(792), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7066] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(798), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(796), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7096] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(802), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(800), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7126] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(806), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(804), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7156] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(810), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(808), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7186] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(814), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(812), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7216] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(818), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(816), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7246] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(822), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(820), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7276] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(826), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(824), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7306] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(830), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(828), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7336] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(834), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(832), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7366] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(838), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(836), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7399] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(842), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(840), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7432] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(424), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7465] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(844), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(334), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7498] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_SEMI,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(424), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7531] = 5,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(850), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(422), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7561] = 5,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(446), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(313), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7591] = 5,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(446), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(422), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7621] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_SEMI,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(424), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7651] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(424), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7681] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(424), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7711] = 5,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(850), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(313), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7741] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(424), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7771] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(858), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(862), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(282), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7810] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(866), 1,
      anon_sym_SEMI,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(858), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(862), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(280), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7849] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_SLASH,
    ACTIONS(424), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_DASH,
    ACTIONS(422), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [7877] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(430), 14,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_DASH,
  [7903] = 9,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(868), 1,
      anon_sym_SEMI,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(243), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7938] = 14,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      anon_sym_LBRACE,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(878), 1,
      anon_sym_POUND,
    ACTIONS(880), 1,
      anon_sym_LBRACK,
    ACTIONS(882), 1,
      anon_sym_GT,
    ACTIONS(884), 1,
      anon_sym_TILDE,
    ACTIONS(886), 1,
      anon_sym_PLUS,
    ACTIONS(888), 1,
      anon_sym_PIPE,
    ACTIONS(890), 1,
      sym__descendant_operator,
    ACTIONS(892), 1,
      sym__pseudo_class_selector_colon,
    STATE(313), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [7982] = 3,
    ACTIONS(894), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(313), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8004] = 3,
    ACTIONS(896), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(313), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8026] = 3,
    ACTIONS(898), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(313), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8048] = 14,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(878), 1,
      anon_sym_POUND,
    ACTIONS(880), 1,
      anon_sym_LBRACK,
    ACTIONS(882), 1,
      anon_sym_GT,
    ACTIONS(884), 1,
      anon_sym_TILDE,
    ACTIONS(886), 1,
      anon_sym_PLUS,
    ACTIONS(888), 1,
      anon_sym_PIPE,
    ACTIONS(890), 1,
      sym__descendant_operator,
    ACTIONS(892), 1,
      sym__pseudo_class_selector_colon,
    STATE(315), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8092] = 14,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(878), 1,
      anon_sym_POUND,
    ACTIONS(880), 1,
      anon_sym_LBRACK,
    ACTIONS(882), 1,
      anon_sym_GT,
    ACTIONS(884), 1,
      anon_sym_TILDE,
    ACTIONS(886), 1,
      anon_sym_PLUS,
    ACTIONS(888), 1,
      anon_sym_PIPE,
    ACTIONS(890), 1,
      sym__descendant_operator,
    ACTIONS(892), 1,
      sym__pseudo_class_selector_colon,
    STATE(309), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8136] = 12,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(878), 1,
      anon_sym_POUND,
    ACTIONS(880), 1,
      anon_sym_LBRACK,
    ACTIONS(882), 1,
      anon_sym_GT,
    ACTIONS(884), 1,
      anon_sym_TILDE,
    ACTIONS(886), 1,
      anon_sym_PLUS,
    ACTIONS(888), 1,
      anon_sym_PIPE,
    ACTIONS(890), 1,
      sym__descendant_operator,
    ACTIONS(892), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [8175] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
    STATE(215), 1,
      sym_arguments,
    ACTIONS(315), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(321), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8202] = 12,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(878), 1,
      anon_sym_POUND,
    ACTIONS(880), 1,
      anon_sym_LBRACK,
    ACTIONS(882), 1,
      anon_sym_GT,
    ACTIONS(884), 1,
      anon_sym_TILDE,
    ACTIONS(886), 1,
      anon_sym_PLUS,
    ACTIONS(888), 1,
      anon_sym_PIPE,
    ACTIONS(890), 1,
      sym__descendant_operator,
    ACTIONS(892), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8241] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(260), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8267] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(299), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8293] = 12,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(878), 1,
      anon_sym_POUND,
    ACTIONS(880), 1,
      anon_sym_LBRACK,
    ACTIONS(882), 1,
      anon_sym_GT,
    ACTIONS(884), 1,
      anon_sym_TILDE,
    ACTIONS(886), 1,
      anon_sym_PLUS,
    ACTIONS(888), 1,
      anon_sym_PIPE,
    ACTIONS(890), 1,
      sym__descendant_operator,
    ACTIONS(892), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8331] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(261), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8357] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(276), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8383] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_unit,
    ACTIONS(636), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(638), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8407] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym_unit,
    ACTIONS(618), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(620), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8431] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(820), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(822), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8453] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(910), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(314), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8479] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(262), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8505] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(288), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8531] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(860), 1,
      anon_sym_LPAREN2,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(257), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8557] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(796), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(798), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8578] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(808), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(810), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8599] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(812), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(814), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8620] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(792), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(794), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8641] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(804), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(806), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8662] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(832), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(834), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8683] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_arguments,
    ACTIONS(315), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8708] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(828), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(830), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8729] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(788), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(790), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8750] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      anon_sym_COLON,
    STATE(230), 1,
      sym_arguments,
    ACTIONS(315), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(480), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8779] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(430), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(432), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8800] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(816), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(818), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8821] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(800), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(802), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8842] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(824), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(826), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8863] = 11,
    ACTIONS(696), 1,
      anon_sym_DOT,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(878), 1,
      anon_sym_POUND,
    ACTIONS(880), 1,
      anon_sym_LBRACK,
    ACTIONS(882), 1,
      anon_sym_GT,
    ACTIONS(884), 1,
      anon_sym_TILDE,
    ACTIONS(886), 1,
      anon_sym_PLUS,
    ACTIONS(888), 1,
      anon_sym_PIPE,
    ACTIONS(890), 1,
      sym__descendant_operator,
    ACTIONS(892), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8898] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_SLASH,
    ACTIONS(914), 1,
      sym_unit,
    ACTIONS(618), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8920] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_SLASH,
    ACTIONS(916), 1,
      sym_unit,
    ACTIONS(636), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8942] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SLASH,
    ACTIONS(812), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8961] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SLASH,
    ACTIONS(788), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8980] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_SLASH,
    ACTIONS(800), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8999] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_SLASH,
    ACTIONS(808), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9018] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_SLASH,
    ACTIONS(792), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9037] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_SLASH,
    ACTIONS(828), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9056] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_SLASH,
    ACTIONS(824), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9075] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_SLASH,
    ACTIONS(820), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9094] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_SLASH,
    ACTIONS(804), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9113] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(816), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9132] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SLASH,
    ACTIONS(832), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9151] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(430), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9170] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_SLASH,
    ACTIONS(796), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9189] = 7,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      sym_identifier,
    STATE(215), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(364), 2,
      sym_string_value,
      sym_call_expression,
  [9213] = 6,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
    ACTIONS(924), 1,
      aux_sym_integer_value_token1,
    STATE(323), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(922), 2,
      sym_from,
      sym_to,
    STATE(252), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9235] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    STATE(310), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(928), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9259] = 6,
    ACTIONS(934), 1,
      anon_sym_LBRACE,
    ACTIONS(939), 1,
      sym__js_statement,
    STATE(241), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(937), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(293), 2,
      sym__js_expression,
      sym__js_block,
  [9281] = 6,
    ACTIONS(942), 1,
      anon_sym_LBRACE,
    ACTIONS(946), 1,
      sym__js_statement,
    STATE(241), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(944), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(293), 2,
      sym__js_expression,
      sym__js_block,
  [9303] = 7,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      sym_block,
    STATE(275), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_and,
      anon_sym_or,
  [9327] = 7,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(954), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym_block,
    STATE(269), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_and,
      anon_sym_or,
  [9351] = 6,
    ACTIONS(942), 1,
      anon_sym_LBRACE,
    ACTIONS(946), 1,
      sym__js_statement,
    STATE(241), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(293), 2,
      sym__js_expression,
      sym__js_block,
  [9373] = 6,
    ACTIONS(958), 1,
      anon_sym_RBRACE,
    ACTIONS(963), 1,
      aux_sym_integer_value_token1,
    STATE(323), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(960), 2,
      sym_from,
      sym_to,
    STATE(246), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9395] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    ACTIONS(966), 1,
      anon_sym_RBRACK,
    STATE(312), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(928), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9419] = 6,
    ACTIONS(924), 1,
      aux_sym_integer_value_token1,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(922), 2,
      sym_from,
      sym_to,
    STATE(246), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9441] = 6,
    ACTIONS(924), 1,
      aux_sym_integer_value_token1,
    ACTIONS(970), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(922), 2,
      sym_from,
      sym_to,
    STATE(248), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9463] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    ACTIONS(972), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(928), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9487] = 7,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
    ACTIONS(918), 1,
      sym_identifier,
    STATE(215), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(356), 2,
      sym_string_value,
      sym_call_expression,
  [9511] = 6,
    ACTIONS(924), 1,
      aux_sym_integer_value_token1,
    ACTIONS(974), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(922), 2,
      sym_from,
      sym_to,
    STATE(246), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9533] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    ACTIONS(976), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(928), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9552] = 6,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    ACTIONS(980), 1,
      anon_sym_RBRACE,
    ACTIONS(982), 1,
      sym__js_statement,
    STATE(255), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(305), 2,
      sym__js_expression,
      sym__js_block,
  [9573] = 6,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
    ACTIONS(984), 1,
      anon_sym_LBRACE,
    ACTIONS(987), 1,
      sym__js_statement,
    STATE(255), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(305), 2,
      sym__js_expression,
      sym__js_block,
  [9594] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(990), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9607] = 6,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      sym_block,
    STATE(294), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_and,
      anon_sym_or,
  [9628] = 6,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    ACTIONS(982), 1,
      sym__js_statement,
    ACTIONS(992), 1,
      anon_sym_RBRACE,
    STATE(255), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(305), 2,
      sym__js_expression,
      sym__js_block,
  [9649] = 6,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    ACTIONS(982), 1,
      sym__js_statement,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    STATE(255), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(305), 2,
      sym__js_expression,
      sym__js_block,
  [9670] = 6,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      sym_block,
    STATE(297), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_and,
      anon_sym_or,
  [9691] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(996), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9704] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(998), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9717] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(480), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9730] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1000), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9743] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1002), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9756] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    ACTIONS(1004), 1,
      anon_sym_SEMI,
    ACTIONS(928), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9774] = 5,
    ACTIONS(942), 1,
      anon_sym_LBRACE,
    ACTIONS(946), 1,
      sym__js_statement,
    STATE(245), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(293), 2,
      sym__js_expression,
      sym__js_block,
  [9792] = 5,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(1006), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(354), 2,
      sym_string_value,
      sym_call_expression,
  [9810] = 6,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_block,
    STATE(295), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9830] = 5,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    ACTIONS(982), 1,
      sym__js_statement,
    STATE(259), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(305), 2,
      sym__js_expression,
      sym__js_block,
  [9848] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9866] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    ACTIONS(1012), 1,
      anon_sym_RBRACK,
    ACTIONS(928), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9884] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    ACTIONS(1014), 1,
      anon_sym_SEMI,
    ACTIONS(928), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9902] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9920] = 6,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_SEMI,
    STATE(134), 1,
      sym_block,
    STATE(295), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9940] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1020), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [9954] = 5,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    ACTIONS(982), 1,
      sym__js_statement,
    STATE(254), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(305), 2,
      sym__js_expression,
      sym__js_block,
  [9972] = 5,
    ACTIONS(942), 1,
      anon_sym_LBRACE,
    ACTIONS(946), 1,
      sym__js_statement,
    STATE(242), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(293), 2,
      sym__js_expression,
      sym__js_block,
  [9990] = 5,
    ACTIONS(978), 1,
      anon_sym_LBRACE,
    ACTIONS(982), 1,
      sym__js_statement,
    STATE(258), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(305), 2,
      sym__js_expression,
      sym__js_block,
  [10008] = 5,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1022), 1,
      anon_sym_SEMI,
    STATE(317), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_and,
      anon_sym_or,
  [10026] = 5,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(1024), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(341), 2,
      sym_string_value,
      sym_call_expression,
  [10044] = 5,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_SEMI,
    STATE(311), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_and,
      anon_sym_or,
  [10062] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    ACTIONS(1028), 1,
      anon_sym_RBRACK,
    ACTIONS(928), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10080] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_SLASH,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    ACTIONS(928), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10098] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(672), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10109] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(688), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10120] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1032), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10131] = 4,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_and,
      anon_sym_or,
  [10146] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(652), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10157] = 3,
    ACTIONS(912), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10170] = 4,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10185] = 4,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10200] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1038), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [10211] = 5,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_block,
    STATE(295), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10228] = 4,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1020), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10243] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1043), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [10254] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      sym_block,
    STATE(295), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10271] = 4,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10286] = 4,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_and,
      anon_sym_or,
  [10301] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1047), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [10312] = 4,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1049), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10327] = 4,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(1052), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10341] = 4,
    ACTIONS(1054), 1,
      anon_sym_RBRACE,
    ACTIONS(1056), 1,
      sym__js_statement,
    STATE(318), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10355] = 4,
    ACTIONS(1058), 1,
      anon_sym_RBRACE,
    ACTIONS(1060), 1,
      sym__js_statement,
    STATE(304), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10369] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1038), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [10379] = 4,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10393] = 4,
    ACTIONS(1066), 1,
      anon_sym_RBRACE,
    ACTIONS(1068), 1,
      sym__js_statement,
    STATE(321), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10407] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1043), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [10417] = 4,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10431] = 4,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10445] = 4,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_SEMI,
    STATE(295), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10459] = 4,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(1076), 1,
      anon_sym_RBRACK,
    STATE(319), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10473] = 4,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      anon_sym_LBRACE,
    STATE(320), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10487] = 3,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_and,
      anon_sym_or,
  [10499] = 4,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10513] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1047), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [10523] = 4,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      anon_sym_SEMI,
    STATE(295), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10537] = 4,
    ACTIONS(1086), 1,
      anon_sym_RBRACE,
    ACTIONS(1088), 1,
      sym__js_statement,
    STATE(304), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10551] = 4,
    ACTIONS(976), 1,
      anon_sym_RBRACK,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10565] = 4,
    ACTIONS(900), 1,
      anon_sym_LBRACE,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10579] = 4,
    ACTIONS(1088), 1,
      sym__js_statement,
    ACTIONS(1096), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10593] = 3,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10604] = 3,
    ACTIONS(1098), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10615] = 3,
    ACTIONS(1100), 1,
      aux_sym_color_value_token1,
    ACTIONS(1102), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10626] = 3,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
    STATE(215), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10637] = 3,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10648] = 3,
    ACTIONS(1104), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10659] = 3,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    ACTIONS(1106), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10670] = 3,
    ACTIONS(1102), 1,
      sym_identifier,
    ACTIONS(1108), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10681] = 3,
    ACTIONS(1110), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10692] = 2,
    ACTIONS(1112), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10700] = 2,
    ACTIONS(1114), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10708] = 2,
    ACTIONS(1116), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10716] = 2,
    ACTIONS(1118), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10724] = 2,
    ACTIONS(1120), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10732] = 2,
    ACTIONS(1120), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10740] = 2,
    ACTIONS(1122), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10748] = 2,
    ACTIONS(1124), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10756] = 2,
    ACTIONS(1122), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10764] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10772] = 2,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10780] = 2,
    ACTIONS(1128), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10788] = 2,
    ACTIONS(1130), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10796] = 2,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10804] = 2,
    ACTIONS(1134), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10812] = 2,
    ACTIONS(1136), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10820] = 2,
    ACTIONS(1136), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10828] = 2,
    ACTIONS(1138), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10836] = 2,
    ACTIONS(1138), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10844] = 2,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10852] = 2,
    ACTIONS(1112), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10860] = 2,
    ACTIONS(1140), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10868] = 2,
    ACTIONS(1142), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10876] = 2,
    ACTIONS(1144), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10884] = 2,
    ACTIONS(1146), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10892] = 2,
    ACTIONS(1148), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10900] = 2,
    ACTIONS(1150), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10908] = 2,
    ACTIONS(1152), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10916] = 2,
    ACTIONS(1154), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10924] = 2,
    ACTIONS(1156), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10932] = 2,
    ACTIONS(1158), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10940] = 2,
    ACTIONS(1160), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10948] = 2,
    ACTIONS(1116), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10956] = 2,
    ACTIONS(1162), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10964] = 2,
    ACTIONS(1164), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10972] = 2,
    ACTIONS(1166), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10980] = 2,
    ACTIONS(1168), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10988] = 2,
    ACTIONS(1170), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10996] = 2,
    ACTIONS(1172), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11004] = 2,
    ACTIONS(1174), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11012] = 2,
    ACTIONS(1176), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11020] = 2,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11028] = 2,
    ACTIONS(1178), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11036] = 2,
    ACTIONS(1180), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11044] = 2,
    ACTIONS(1182), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11052] = 2,
    ACTIONS(1184), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11060] = 2,
    ACTIONS(1186), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11068] = 2,
    ACTIONS(1188), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11076] = 2,
    ACTIONS(1190), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 294,
  [SMALL_STATE(6)] = 392,
  [SMALL_STATE(7)] = 490,
  [SMALL_STATE(8)] = 588,
  [SMALL_STATE(9)] = 683,
  [SMALL_STATE(10)] = 777,
  [SMALL_STATE(11)] = 871,
  [SMALL_STATE(12)] = 960,
  [SMALL_STATE(13)] = 1049,
  [SMALL_STATE(14)] = 1135,
  [SMALL_STATE(15)] = 1220,
  [SMALL_STATE(16)] = 1305,
  [SMALL_STATE(17)] = 1384,
  [SMALL_STATE(18)] = 1451,
  [SMALL_STATE(19)] = 1518,
  [SMALL_STATE(20)] = 1590,
  [SMALL_STATE(21)] = 1659,
  [SMALL_STATE(22)] = 1728,
  [SMALL_STATE(23)] = 1773,
  [SMALL_STATE(24)] = 1838,
  [SMALL_STATE(25)] = 1903,
  [SMALL_STATE(26)] = 1968,
  [SMALL_STATE(27)] = 2030,
  [SMALL_STATE(28)] = 2094,
  [SMALL_STATE(29)] = 2154,
  [SMALL_STATE(30)] = 2218,
  [SMALL_STATE(31)] = 2282,
  [SMALL_STATE(32)] = 2342,
  [SMALL_STATE(33)] = 2403,
  [SMALL_STATE(34)] = 2442,
  [SMALL_STATE(35)] = 2477,
  [SMALL_STATE(36)] = 2536,
  [SMALL_STATE(37)] = 2597,
  [SMALL_STATE(38)] = 2649,
  [SMALL_STATE(39)] = 2699,
  [SMALL_STATE(40)] = 2757,
  [SMALL_STATE(41)] = 2803,
  [SMALL_STATE(42)] = 2861,
  [SMALL_STATE(43)] = 2911,
  [SMALL_STATE(44)] = 2969,
  [SMALL_STATE(45)] = 3019,
  [SMALL_STATE(46)] = 3069,
  [SMALL_STATE(47)] = 3119,
  [SMALL_STATE(48)] = 3169,
  [SMALL_STATE(49)] = 3227,
  [SMALL_STATE(50)] = 3279,
  [SMALL_STATE(51)] = 3329,
  [SMALL_STATE(52)] = 3387,
  [SMALL_STATE(53)] = 3422,
  [SMALL_STATE(54)] = 3463,
  [SMALL_STATE(55)] = 3498,
  [SMALL_STATE(56)] = 3553,
  [SMALL_STATE(57)] = 3588,
  [SMALL_STATE(58)] = 3643,
  [SMALL_STATE(59)] = 3678,
  [SMALL_STATE(60)] = 3730,
  [SMALL_STATE(61)] = 3782,
  [SMALL_STATE(62)] = 3834,
  [SMALL_STATE(63)] = 3886,
  [SMALL_STATE(64)] = 3938,
  [SMALL_STATE(65)] = 3990,
  [SMALL_STATE(66)] = 4042,
  [SMALL_STATE(67)] = 4094,
  [SMALL_STATE(68)] = 4146,
  [SMALL_STATE(69)] = 4198,
  [SMALL_STATE(70)] = 4250,
  [SMALL_STATE(71)] = 4302,
  [SMALL_STATE(72)] = 4354,
  [SMALL_STATE(73)] = 4406,
  [SMALL_STATE(74)] = 4458,
  [SMALL_STATE(75)] = 4510,
  [SMALL_STATE(76)] = 4562,
  [SMALL_STATE(77)] = 4614,
  [SMALL_STATE(78)] = 4666,
  [SMALL_STATE(79)] = 4718,
  [SMALL_STATE(80)] = 4754,
  [SMALL_STATE(81)] = 4783,
  [SMALL_STATE(82)] = 4812,
  [SMALL_STATE(83)] = 4841,
  [SMALL_STATE(84)] = 4870,
  [SMALL_STATE(85)] = 4899,
  [SMALL_STATE(86)] = 4928,
  [SMALL_STATE(87)] = 4957,
  [SMALL_STATE(88)] = 4986,
  [SMALL_STATE(89)] = 5015,
  [SMALL_STATE(90)] = 5044,
  [SMALL_STATE(91)] = 5077,
  [SMALL_STATE(92)] = 5106,
  [SMALL_STATE(93)] = 5135,
  [SMALL_STATE(94)] = 5164,
  [SMALL_STATE(95)] = 5197,
  [SMALL_STATE(96)] = 5226,
  [SMALL_STATE(97)] = 5255,
  [SMALL_STATE(98)] = 5284,
  [SMALL_STATE(99)] = 5313,
  [SMALL_STATE(100)] = 5342,
  [SMALL_STATE(101)] = 5371,
  [SMALL_STATE(102)] = 5400,
  [SMALL_STATE(103)] = 5429,
  [SMALL_STATE(104)] = 5458,
  [SMALL_STATE(105)] = 5487,
  [SMALL_STATE(106)] = 5516,
  [SMALL_STATE(107)] = 5545,
  [SMALL_STATE(108)] = 5574,
  [SMALL_STATE(109)] = 5603,
  [SMALL_STATE(110)] = 5632,
  [SMALL_STATE(111)] = 5661,
  [SMALL_STATE(112)] = 5690,
  [SMALL_STATE(113)] = 5719,
  [SMALL_STATE(114)] = 5748,
  [SMALL_STATE(115)] = 5777,
  [SMALL_STATE(116)] = 5806,
  [SMALL_STATE(117)] = 5835,
  [SMALL_STATE(118)] = 5866,
  [SMALL_STATE(119)] = 5895,
  [SMALL_STATE(120)] = 5924,
  [SMALL_STATE(121)] = 5953,
  [SMALL_STATE(122)] = 5982,
  [SMALL_STATE(123)] = 6011,
  [SMALL_STATE(124)] = 6040,
  [SMALL_STATE(125)] = 6069,
  [SMALL_STATE(126)] = 6100,
  [SMALL_STATE(127)] = 6131,
  [SMALL_STATE(128)] = 6162,
  [SMALL_STATE(129)] = 6193,
  [SMALL_STATE(130)] = 6222,
  [SMALL_STATE(131)] = 6251,
  [SMALL_STATE(132)] = 6280,
  [SMALL_STATE(133)] = 6309,
  [SMALL_STATE(134)] = 6338,
  [SMALL_STATE(135)] = 6367,
  [SMALL_STATE(136)] = 6396,
  [SMALL_STATE(137)] = 6425,
  [SMALL_STATE(138)] = 6454,
  [SMALL_STATE(139)] = 6483,
  [SMALL_STATE(140)] = 6512,
  [SMALL_STATE(141)] = 6541,
  [SMALL_STATE(142)] = 6570,
  [SMALL_STATE(143)] = 6599,
  [SMALL_STATE(144)] = 6628,
  [SMALL_STATE(145)] = 6657,
  [SMALL_STATE(146)] = 6686,
  [SMALL_STATE(147)] = 6715,
  [SMALL_STATE(148)] = 6744,
  [SMALL_STATE(149)] = 6773,
  [SMALL_STATE(150)] = 6802,
  [SMALL_STATE(151)] = 6831,
  [SMALL_STATE(152)] = 6860,
  [SMALL_STATE(153)] = 6889,
  [SMALL_STATE(154)] = 6918,
  [SMALL_STATE(155)] = 6947,
  [SMALL_STATE(156)] = 6976,
  [SMALL_STATE(157)] = 7006,
  [SMALL_STATE(158)] = 7036,
  [SMALL_STATE(159)] = 7066,
  [SMALL_STATE(160)] = 7096,
  [SMALL_STATE(161)] = 7126,
  [SMALL_STATE(162)] = 7156,
  [SMALL_STATE(163)] = 7186,
  [SMALL_STATE(164)] = 7216,
  [SMALL_STATE(165)] = 7246,
  [SMALL_STATE(166)] = 7276,
  [SMALL_STATE(167)] = 7306,
  [SMALL_STATE(168)] = 7336,
  [SMALL_STATE(169)] = 7366,
  [SMALL_STATE(170)] = 7399,
  [SMALL_STATE(171)] = 7432,
  [SMALL_STATE(172)] = 7465,
  [SMALL_STATE(173)] = 7498,
  [SMALL_STATE(174)] = 7531,
  [SMALL_STATE(175)] = 7561,
  [SMALL_STATE(176)] = 7591,
  [SMALL_STATE(177)] = 7621,
  [SMALL_STATE(178)] = 7651,
  [SMALL_STATE(179)] = 7681,
  [SMALL_STATE(180)] = 7711,
  [SMALL_STATE(181)] = 7741,
  [SMALL_STATE(182)] = 7771,
  [SMALL_STATE(183)] = 7810,
  [SMALL_STATE(184)] = 7849,
  [SMALL_STATE(185)] = 7877,
  [SMALL_STATE(186)] = 7903,
  [SMALL_STATE(187)] = 7938,
  [SMALL_STATE(188)] = 7982,
  [SMALL_STATE(189)] = 8004,
  [SMALL_STATE(190)] = 8026,
  [SMALL_STATE(191)] = 8048,
  [SMALL_STATE(192)] = 8092,
  [SMALL_STATE(193)] = 8136,
  [SMALL_STATE(194)] = 8175,
  [SMALL_STATE(195)] = 8202,
  [SMALL_STATE(196)] = 8241,
  [SMALL_STATE(197)] = 8267,
  [SMALL_STATE(198)] = 8293,
  [SMALL_STATE(199)] = 8331,
  [SMALL_STATE(200)] = 8357,
  [SMALL_STATE(201)] = 8383,
  [SMALL_STATE(202)] = 8407,
  [SMALL_STATE(203)] = 8431,
  [SMALL_STATE(204)] = 8453,
  [SMALL_STATE(205)] = 8479,
  [SMALL_STATE(206)] = 8505,
  [SMALL_STATE(207)] = 8531,
  [SMALL_STATE(208)] = 8557,
  [SMALL_STATE(209)] = 8578,
  [SMALL_STATE(210)] = 8599,
  [SMALL_STATE(211)] = 8620,
  [SMALL_STATE(212)] = 8641,
  [SMALL_STATE(213)] = 8662,
  [SMALL_STATE(214)] = 8683,
  [SMALL_STATE(215)] = 8708,
  [SMALL_STATE(216)] = 8729,
  [SMALL_STATE(217)] = 8750,
  [SMALL_STATE(218)] = 8779,
  [SMALL_STATE(219)] = 8800,
  [SMALL_STATE(220)] = 8821,
  [SMALL_STATE(221)] = 8842,
  [SMALL_STATE(222)] = 8863,
  [SMALL_STATE(223)] = 8898,
  [SMALL_STATE(224)] = 8920,
  [SMALL_STATE(225)] = 8942,
  [SMALL_STATE(226)] = 8961,
  [SMALL_STATE(227)] = 8980,
  [SMALL_STATE(228)] = 8999,
  [SMALL_STATE(229)] = 9018,
  [SMALL_STATE(230)] = 9037,
  [SMALL_STATE(231)] = 9056,
  [SMALL_STATE(232)] = 9075,
  [SMALL_STATE(233)] = 9094,
  [SMALL_STATE(234)] = 9113,
  [SMALL_STATE(235)] = 9132,
  [SMALL_STATE(236)] = 9151,
  [SMALL_STATE(237)] = 9170,
  [SMALL_STATE(238)] = 9189,
  [SMALL_STATE(239)] = 9213,
  [SMALL_STATE(240)] = 9235,
  [SMALL_STATE(241)] = 9259,
  [SMALL_STATE(242)] = 9281,
  [SMALL_STATE(243)] = 9303,
  [SMALL_STATE(244)] = 9327,
  [SMALL_STATE(245)] = 9351,
  [SMALL_STATE(246)] = 9373,
  [SMALL_STATE(247)] = 9395,
  [SMALL_STATE(248)] = 9419,
  [SMALL_STATE(249)] = 9441,
  [SMALL_STATE(250)] = 9463,
  [SMALL_STATE(251)] = 9487,
  [SMALL_STATE(252)] = 9511,
  [SMALL_STATE(253)] = 9533,
  [SMALL_STATE(254)] = 9552,
  [SMALL_STATE(255)] = 9573,
  [SMALL_STATE(256)] = 9594,
  [SMALL_STATE(257)] = 9607,
  [SMALL_STATE(258)] = 9628,
  [SMALL_STATE(259)] = 9649,
  [SMALL_STATE(260)] = 9670,
  [SMALL_STATE(261)] = 9691,
  [SMALL_STATE(262)] = 9704,
  [SMALL_STATE(263)] = 9717,
  [SMALL_STATE(264)] = 9730,
  [SMALL_STATE(265)] = 9743,
  [SMALL_STATE(266)] = 9756,
  [SMALL_STATE(267)] = 9774,
  [SMALL_STATE(268)] = 9792,
  [SMALL_STATE(269)] = 9810,
  [SMALL_STATE(270)] = 9830,
  [SMALL_STATE(271)] = 9848,
  [SMALL_STATE(272)] = 9866,
  [SMALL_STATE(273)] = 9884,
  [SMALL_STATE(274)] = 9902,
  [SMALL_STATE(275)] = 9920,
  [SMALL_STATE(276)] = 9940,
  [SMALL_STATE(277)] = 9954,
  [SMALL_STATE(278)] = 9972,
  [SMALL_STATE(279)] = 9990,
  [SMALL_STATE(280)] = 10008,
  [SMALL_STATE(281)] = 10026,
  [SMALL_STATE(282)] = 10044,
  [SMALL_STATE(283)] = 10062,
  [SMALL_STATE(284)] = 10080,
  [SMALL_STATE(285)] = 10098,
  [SMALL_STATE(286)] = 10109,
  [SMALL_STATE(287)] = 10120,
  [SMALL_STATE(288)] = 10131,
  [SMALL_STATE(289)] = 10146,
  [SMALL_STATE(290)] = 10157,
  [SMALL_STATE(291)] = 10170,
  [SMALL_STATE(292)] = 10185,
  [SMALL_STATE(293)] = 10200,
  [SMALL_STATE(294)] = 10211,
  [SMALL_STATE(295)] = 10228,
  [SMALL_STATE(296)] = 10243,
  [SMALL_STATE(297)] = 10254,
  [SMALL_STATE(298)] = 10271,
  [SMALL_STATE(299)] = 10286,
  [SMALL_STATE(300)] = 10301,
  [SMALL_STATE(301)] = 10312,
  [SMALL_STATE(302)] = 10327,
  [SMALL_STATE(303)] = 10341,
  [SMALL_STATE(304)] = 10355,
  [SMALL_STATE(305)] = 10369,
  [SMALL_STATE(306)] = 10379,
  [SMALL_STATE(307)] = 10393,
  [SMALL_STATE(308)] = 10407,
  [SMALL_STATE(309)] = 10417,
  [SMALL_STATE(310)] = 10431,
  [SMALL_STATE(311)] = 10445,
  [SMALL_STATE(312)] = 10459,
  [SMALL_STATE(313)] = 10473,
  [SMALL_STATE(314)] = 10487,
  [SMALL_STATE(315)] = 10499,
  [SMALL_STATE(316)] = 10513,
  [SMALL_STATE(317)] = 10523,
  [SMALL_STATE(318)] = 10537,
  [SMALL_STATE(319)] = 10551,
  [SMALL_STATE(320)] = 10565,
  [SMALL_STATE(321)] = 10579,
  [SMALL_STATE(322)] = 10593,
  [SMALL_STATE(323)] = 10604,
  [SMALL_STATE(324)] = 10615,
  [SMALL_STATE(325)] = 10626,
  [SMALL_STATE(326)] = 10637,
  [SMALL_STATE(327)] = 10648,
  [SMALL_STATE(328)] = 10659,
  [SMALL_STATE(329)] = 10670,
  [SMALL_STATE(330)] = 10681,
  [SMALL_STATE(331)] = 10692,
  [SMALL_STATE(332)] = 10700,
  [SMALL_STATE(333)] = 10708,
  [SMALL_STATE(334)] = 10716,
  [SMALL_STATE(335)] = 10724,
  [SMALL_STATE(336)] = 10732,
  [SMALL_STATE(337)] = 10740,
  [SMALL_STATE(338)] = 10748,
  [SMALL_STATE(339)] = 10756,
  [SMALL_STATE(340)] = 10764,
  [SMALL_STATE(341)] = 10772,
  [SMALL_STATE(342)] = 10780,
  [SMALL_STATE(343)] = 10788,
  [SMALL_STATE(344)] = 10796,
  [SMALL_STATE(345)] = 10804,
  [SMALL_STATE(346)] = 10812,
  [SMALL_STATE(347)] = 10820,
  [SMALL_STATE(348)] = 10828,
  [SMALL_STATE(349)] = 10836,
  [SMALL_STATE(350)] = 10844,
  [SMALL_STATE(351)] = 10852,
  [SMALL_STATE(352)] = 10860,
  [SMALL_STATE(353)] = 10868,
  [SMALL_STATE(354)] = 10876,
  [SMALL_STATE(355)] = 10884,
  [SMALL_STATE(356)] = 10892,
  [SMALL_STATE(357)] = 10900,
  [SMALL_STATE(358)] = 10908,
  [SMALL_STATE(359)] = 10916,
  [SMALL_STATE(360)] = 10924,
  [SMALL_STATE(361)] = 10932,
  [SMALL_STATE(362)] = 10940,
  [SMALL_STATE(363)] = 10948,
  [SMALL_STATE(364)] = 10956,
  [SMALL_STATE(365)] = 10964,
  [SMALL_STATE(366)] = 10972,
  [SMALL_STATE(367)] = 10980,
  [SMALL_STATE(368)] = 10988,
  [SMALL_STATE(369)] = 10996,
  [SMALL_STATE(370)] = 11004,
  [SMALL_STATE(371)] = 11012,
  [SMALL_STATE(372)] = 11020,
  [SMALL_STATE(373)] = 11028,
  [SMALL_STATE(374)] = 11036,
  [SMALL_STATE(375)] = 11044,
  [SMALL_STATE(376)] = 11052,
  [SMALL_STATE(377)] = 11060,
  [SMALL_STATE(378)] = 11068,
  [SMALL_STATE(379)] = 11076,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(196),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(281),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(332),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(197),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(187),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(92),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(370),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(367),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(366),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(365),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(362),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(189),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(267),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(379),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(69),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(207),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(72),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(268),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(371),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(206),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(187),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(92),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(370),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(367),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(366),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(37),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(365),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(362),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(188),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(186),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(278),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(379),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 15),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(73),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(334),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(70),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(170),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(71),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(373),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(374),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(94),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(90),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(79),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(170),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(270),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(334),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(70),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(169),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(71),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(373),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(374),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(94),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(90),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(79),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(169),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(270),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 15),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 11),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 11),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, .production_id = 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 12),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 12),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 15),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 15),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 15),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 15),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 11),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 11),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 13),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 13),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 12),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 12),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 11),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 11),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 15),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(303),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(293),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(323),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(328),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [984] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(307),
  [987] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(305),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 17),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 1),
  [1040] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(200),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 2),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 3),
  [1049] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(57),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2),
  [1060] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2), SHIFT_REPEAT(304),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(78),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(50),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
  ts_external_token___error_recovery = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
  [ts_external_token___error_recovery] = sym___error_recovery,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
    [ts_external_token___error_recovery] = true,
  },
  [2] = {
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [3] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_styled_external_scanner_create(void);
void tree_sitter_styled_external_scanner_destroy(void *);
bool tree_sitter_styled_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_styled_external_scanner_serialize(void *, char *);
void tree_sitter_styled_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_styled() {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_styled_external_scanner_create,
      tree_sitter_styled_external_scanner_destroy,
      tree_sitter_styled_external_scanner_scan,
      tree_sitter_styled_external_scanner_serialize,
      tree_sitter_styled_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
