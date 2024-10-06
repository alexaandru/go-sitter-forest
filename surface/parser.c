#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 160
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 2
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LT = 1,
  anon_sym_POUNDMarkdown = 2,
  anon_sym_GT = 3,
  anon_sym_LT_SLASH = 4,
  anon_sym_SLASH_GT = 5,
  anon_sym_LBRACE = 6,
  anon_sym_EQ = 7,
  anon_sym_DOT_DOT_DOT = 8,
  anon_sym_CARET = 9,
  anon_sym_RBRACE = 10,
  aux_sym_expression_value_token1 = 11,
  anon_sym_LBRACE_RBRACE = 12,
  anon_sym_LT_BANG_DASH_DASH = 13,
  aux_sym__public_comment_token1 = 14,
  anon_sym_DASH_DASH_GT = 15,
  anon_sym_LBRACE_BANG_DASH_DASH = 16,
  anon_sym_DASH_DASH_RBRACE = 17,
  anon_sym_LBRACE_POUND = 18,
  anon_sym_if = 19,
  anon_sym_unless = 20,
  anon_sym_for = 21,
  anon_sym_case = 22,
  anon_sym_LBRACE_SLASH = 23,
  anon_sym_else = 24,
  anon_sym_elseif = 25,
  anon_sym_match = 26,
  anon_sym_COLON = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_quoted_attribute_value_token1 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_quoted_attribute_value_token2 = 31,
  sym_attribute_value = 32,
  sym_tag_name = 33,
  sym_component_name = 34,
  sym_attribute_name = 35,
  anon_sym_show = 36,
  anon_sym_let = 37,
  anon_sym_args = 38,
  anon_sym_values = 39,
  anon_sym_hook = 40,
  anon_sym_on_DASHclick = 41,
  anon_sym_on_DASHcapture_DASHclick = 42,
  anon_sym_on_DASHblur = 43,
  anon_sym_on_DASHfocus = 44,
  anon_sym_on_DASHchange = 45,
  anon_sym_on_DASHsubmit = 46,
  anon_sym_on_DASHkeydown = 47,
  anon_sym_on_DASHkeyup = 48,
  anon_sym_on_DASHwindow_DASHfocus = 49,
  anon_sym_on_DASHwindow_DASHblur = 50,
  anon_sym_on_DASHwindow_DASHkeydown = 51,
  anon_sym_on_DASHwindow_DASHkeyup = 52,
  sym_text = 53,
  sym_fragment = 54,
  sym__node = 55,
  sym_tag = 56,
  sym_component = 57,
  sym_block = 58,
  sym_start_markdown = 59,
  sym_end_markdown = 60,
  sym_start_tag = 61,
  sym_end_tag = 62,
  sym_self_closing_tag = 63,
  sym_start_component = 64,
  sym_end_component = 65,
  sym_self_closing_component = 66,
  sym_expression = 67,
  sym_expression_value = 68,
  sym_comment = 69,
  sym__public_comment = 70,
  sym__private_comment = 71,
  sym_start_block = 72,
  sym_block_name = 73,
  sym_end_block = 74,
  sym_subblock = 75,
  sym_subblock_name = 76,
  sym_attribute = 77,
  sym_directive = 78,
  sym_quoted_attribute_value = 79,
  sym_directive_name = 80,
  aux_sym_fragment_repeat1 = 81,
  aux_sym_block_repeat1 = 82,
  aux_sym_start_markdown_repeat1 = 83,
  aux_sym__public_comment_repeat1 = 84,
  anon_alias_sym_comment = 85,
  anon_alias_sym_expression_value = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_POUNDMarkdown] = "component_name",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_CARET] = "^",
  [anon_sym_RBRACE] = "}",
  [aux_sym_expression_value_token1] = "expression_value_token1",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym__public_comment_token1] = "_public_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LBRACE_BANG_DASH_DASH] = "{!--",
  [anon_sym_DASH_DASH_RBRACE] = "--}",
  [anon_sym_LBRACE_POUND] = "{#",
  [anon_sym_if] = "if",
  [anon_sym_unless] = "unless",
  [anon_sym_for] = "for",
  [anon_sym_case] = "case",
  [anon_sym_LBRACE_SLASH] = "{/",
  [anon_sym_else] = "else",
  [anon_sym_elseif] = "elseif",
  [anon_sym_match] = "match",
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_attribute_value] = "attribute_value",
  [sym_tag_name] = "tag_name",
  [sym_component_name] = "component_name",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_show] = "show",
  [anon_sym_let] = "let",
  [anon_sym_args] = "args",
  [anon_sym_values] = "values",
  [anon_sym_hook] = "hook",
  [anon_sym_on_DASHclick] = "on-click",
  [anon_sym_on_DASHcapture_DASHclick] = "on-capture-click",
  [anon_sym_on_DASHblur] = "on-blur",
  [anon_sym_on_DASHfocus] = "on-focus",
  [anon_sym_on_DASHchange] = "on-change",
  [anon_sym_on_DASHsubmit] = "on-submit",
  [anon_sym_on_DASHkeydown] = "on-keydown",
  [anon_sym_on_DASHkeyup] = "on-keyup",
  [anon_sym_on_DASHwindow_DASHfocus] = "on-window-focus",
  [anon_sym_on_DASHwindow_DASHblur] = "on-window-blur",
  [anon_sym_on_DASHwindow_DASHkeydown] = "on-window-keydown",
  [anon_sym_on_DASHwindow_DASHkeyup] = "on-window-keyup",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym_component] = "component",
  [sym_block] = "block",
  [sym_start_markdown] = "start_markdown",
  [sym_end_markdown] = "end_markdown",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_start_component] = "start_component",
  [sym_end_component] = "end_component",
  [sym_self_closing_component] = "self_closing_component",
  [sym_expression] = "expression",
  [sym_expression_value] = "expression_value",
  [sym_comment] = "comment",
  [sym__public_comment] = "_public_comment",
  [sym__private_comment] = "_private_comment",
  [sym_start_block] = "start_block",
  [sym_block_name] = "block_name",
  [sym_end_block] = "end_block",
  [sym_subblock] = "subblock",
  [sym_subblock_name] = "subblock_name",
  [sym_attribute] = "attribute",
  [sym_directive] = "directive",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_directive_name] = "directive_name",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_start_markdown_repeat1] = "start_markdown_repeat1",
  [aux_sym__public_comment_repeat1] = "_public_comment_repeat1",
  [anon_alias_sym_comment] = "comment",
  [anon_alias_sym_expression_value] = "expression_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_POUNDMarkdown] = sym_component_name,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_expression_value_token1] = aux_sym_expression_value_token1,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym__public_comment_token1] = aux_sym__public_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LBRACE_BANG_DASH_DASH] = anon_sym_LBRACE_BANG_DASH_DASH,
  [anon_sym_DASH_DASH_RBRACE] = anon_sym_DASH_DASH_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_LBRACE_SLASH] = anon_sym_LBRACE_SLASH,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_attribute_value] = sym_attribute_value,
  [sym_tag_name] = sym_tag_name,
  [sym_component_name] = sym_component_name,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_show] = anon_sym_show,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_args] = anon_sym_args,
  [anon_sym_values] = anon_sym_values,
  [anon_sym_hook] = anon_sym_hook,
  [anon_sym_on_DASHclick] = anon_sym_on_DASHclick,
  [anon_sym_on_DASHcapture_DASHclick] = anon_sym_on_DASHcapture_DASHclick,
  [anon_sym_on_DASHblur] = anon_sym_on_DASHblur,
  [anon_sym_on_DASHfocus] = anon_sym_on_DASHfocus,
  [anon_sym_on_DASHchange] = anon_sym_on_DASHchange,
  [anon_sym_on_DASHsubmit] = anon_sym_on_DASHsubmit,
  [anon_sym_on_DASHkeydown] = anon_sym_on_DASHkeydown,
  [anon_sym_on_DASHkeyup] = anon_sym_on_DASHkeyup,
  [anon_sym_on_DASHwindow_DASHfocus] = anon_sym_on_DASHwindow_DASHfocus,
  [anon_sym_on_DASHwindow_DASHblur] = anon_sym_on_DASHwindow_DASHblur,
  [anon_sym_on_DASHwindow_DASHkeydown] = anon_sym_on_DASHwindow_DASHkeydown,
  [anon_sym_on_DASHwindow_DASHkeyup] = anon_sym_on_DASHwindow_DASHkeyup,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym_component] = sym_component,
  [sym_block] = sym_block,
  [sym_start_markdown] = sym_start_markdown,
  [sym_end_markdown] = sym_end_markdown,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_start_component] = sym_start_component,
  [sym_end_component] = sym_end_component,
  [sym_self_closing_component] = sym_self_closing_component,
  [sym_expression] = sym_expression,
  [sym_expression_value] = sym_expression_value,
  [sym_comment] = sym_comment,
  [sym__public_comment] = sym__public_comment,
  [sym__private_comment] = sym__private_comment,
  [sym_start_block] = sym_start_block,
  [sym_block_name] = sym_block_name,
  [sym_end_block] = sym_end_block,
  [sym_subblock] = sym_subblock,
  [sym_subblock_name] = sym_subblock_name,
  [sym_attribute] = sym_attribute,
  [sym_directive] = sym_directive,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_directive_name] = sym_directive_name,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_start_markdown_repeat1] = aux_sym_start_markdown_repeat1,
  [aux_sym__public_comment_repeat1] = aux_sym__public_comment_repeat1,
  [anon_alias_sym_comment] = anon_alias_sym_comment,
  [anon_alias_sym_expression_value] = anon_alias_sym_expression_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDMarkdown] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expression_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__public_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_component_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_show] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_args] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_values] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHclick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHcapture_DASHclick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHblur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHfocus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHchange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHsubmit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHkeydown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHkeyup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHwindow_DASHfocus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHwindow_DASHblur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHwindow_DASHkeydown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHwindow_DASHkeyup] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_start_markdown] = {
    .visible = true,
    .named = true,
  },
  [sym_end_markdown] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_start_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_component] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_component] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__public_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__private_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_start_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_name] = {
    .visible = true,
    .named = true,
  },
  [sym_end_block] = {
    .visible = true,
    .named = true,
  },
  [sym_subblock] = {
    .visible = true,
    .named = true,
  },
  [sym_subblock_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_markdown_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__public_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_expression_value] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_alias_sym_comment,
  },
  [2] = {
    [1] = anon_alias_sym_expression_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_expression_value, 2,
    sym_expression_value,
    anon_alias_sym_expression_value,
  sym__public_comment, 2,
    sym__public_comment,
    anon_alias_sym_comment,
  sym__private_comment, 2,
    sym__private_comment,
    anon_alias_sym_comment,
  aux_sym__public_comment_repeat1, 2,
    aux_sym__public_comment_repeat1,
    anon_alias_sym_comment,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 6,
  [14] = 9,
  [15] = 8,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 24,
  [28] = 20,
  [29] = 21,
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
  [51] = 47,
  [52] = 43,
  [53] = 41,
  [54] = 44,
  [55] = 55,
  [56] = 30,
  [57] = 34,
  [58] = 46,
  [59] = 22,
  [60] = 23,
  [61] = 31,
  [62] = 32,
  [63] = 33,
  [64] = 35,
  [65] = 36,
  [66] = 37,
  [67] = 38,
  [68] = 39,
  [69] = 40,
  [70] = 42,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 45,
  [79] = 79,
  [80] = 48,
  [81] = 79,
  [82] = 79,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 46,
  [93] = 37,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 99,
  [104] = 100,
  [105] = 101,
  [106] = 99,
  [107] = 107,
  [108] = 108,
  [109] = 108,
  [110] = 110,
  [111] = 111,
  [112] = 107,
  [113] = 110,
  [114] = 111,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 116,
  [120] = 115,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 122,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 130,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 121,
  [141] = 131,
  [142] = 142,
  [143] = 126,
  [144] = 144,
  [145] = 122,
  [146] = 121,
  [147] = 142,
  [148] = 144,
  [149] = 97,
  [150] = 150,
  [151] = 127,
  [152] = 152,
  [153] = 153,
  [154] = 133,
  [155] = 132,
  [156] = 137,
  [157] = 153,
  [158] = 158,
  [159] = 159,
};

static TSCharacterRange sym_tag_name_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'#', '&'}, {'(', ','}, {'.', '.'}, {'0', ';'}, {'?', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static TSCharacterRange sym_attribute_name_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'#', '&'}, {'(', '.'}, {'0', '9'}, {';', ';'}, {'?', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(134);
      ADVANCE_MAP(
        '"', 189,
        '#', 25,
        '\'', 186,
        '-', 5,
        '.', 19,
        '/', 22,
        ':', 185,
        '<', 136,
        '=', 147,
        '>', 139,
        '^', 151,
        'a', 95,
        'c', 26,
        'e', 71,
        'f', 84,
        'h', 87,
        'i', 54,
        'l', 45,
        'm', 28,
        'o', 80,
        's', 59,
        'u', 78,
        'v', 30,
        '{', 145,
        '}', 153,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(186);
      if (lookahead == '{') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(192);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(189);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(203);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(186);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(174);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '<') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '{') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(149);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == '{') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(158);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '=') ADVANCE(147);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '{') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(205);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '{') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(141);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(173);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(173);
      if (lookahead == '}') ADVANCE(175);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'k') ADVANCE(48);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(183);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(184);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(210);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(211);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(212);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 120:
      if (lookahead == 'w') ADVANCE(206);
      END_STATE();
    case 121:
      if (lookahead == 'w') ADVANCE(75);
      END_STATE();
    case 122:
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 123:
      if (lookahead == 'w') ADVANCE(76);
      END_STATE();
    case 124:
      if (lookahead == 'w') ADVANCE(77);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(153);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 128:
      if (lookahead == '}') ADVANCE(175);
      END_STATE();
    case 129:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 130:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(130);
      if (lookahead == '#' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(203);
      END_STATE();
    case 131:
      if (eof) ADVANCE(134);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '{') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(131);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 132:
      if (eof) ADVANCE(134);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '{') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(132);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 133:
      if (eof) ADVANCE(134);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '{') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(133);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_POUNDMarkdown);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_POUNDMarkdown);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(204);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(176);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '/') ADVANCE(181);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '}') ADVANCE(159);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(159);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(158);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(158);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '^') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(158);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(172);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(172);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '<') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '{') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG_DASH_DASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_attribute_value);
      if ((!eof && set_contains(sym_attribute_name_character_set_1, 10, lookahead)) ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_tag_name);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == 'M') ADVANCE(196);
      if (lookahead == '#' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(203);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == '#' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(203);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(204);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == 'd') ADVANCE(200);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == 'k') ADVANCE(197);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == 'n') ADVANCE(138);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == 'o') ADVANCE(202);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == 'r') ADVANCE(198);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == 'w') ADVANCE(199);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == '#' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(203);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_component_name);
      if ((!eof && set_contains(sym_tag_name_character_set_1, 9, lookahead))) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_attribute_name);
      if ((!eof && set_contains(sym_attribute_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_values);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_hook);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_on_DASHclick);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_on_DASHcapture_DASHclick);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_on_DASHblur);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_on_DASHfocus);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_on_DASHchange);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_on_DASHsubmit);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_on_DASHkeydown);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_on_DASHkeyup);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_on_DASHwindow_DASHfocus);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_on_DASHwindow_DASHblur);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_on_DASHwindow_DASHkeydown);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_on_DASHwindow_DASHkeyup);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '}') ADVANCE(175);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 133},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 133},
  [7] = {.lex_state = 133},
  [8] = {.lex_state = 133},
  [9] = {.lex_state = 133},
  [10] = {.lex_state = 133},
  [11] = {.lex_state = 133},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 133},
  [14] = {.lex_state = 133},
  [15] = {.lex_state = 133},
  [16] = {.lex_state = 133},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 131},
  [23] = {.lex_state = 132},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 133},
  [31] = {.lex_state = 133},
  [32] = {.lex_state = 133},
  [33] = {.lex_state = 133},
  [34] = {.lex_state = 133},
  [35] = {.lex_state = 133},
  [36] = {.lex_state = 133},
  [37] = {.lex_state = 133},
  [38] = {.lex_state = 133},
  [39] = {.lex_state = 133},
  [40] = {.lex_state = 133},
  [41] = {.lex_state = 133},
  [42] = {.lex_state = 133},
  [43] = {.lex_state = 133},
  [44] = {.lex_state = 133},
  [45] = {.lex_state = 133},
  [46] = {.lex_state = 133},
  [47] = {.lex_state = 133},
  [48] = {.lex_state = 133},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 133},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 133},
  [74] = {.lex_state = 133},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 133},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 127},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 127},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 127},
  [98] = {.lex_state = 127},
  [99] = {.lex_state = 127},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 127},
  [103] = {.lex_state = 127},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 127},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 133},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 133},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 130},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 133},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 133},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 130},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_POUNDMarkdown] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_LBRACE_SLASH] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_show] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_args] = ACTIONS(1),
    [anon_sym_values] = ACTIONS(1),
    [anon_sym_hook] = ACTIONS(1),
    [anon_sym_on_DASHclick] = ACTIONS(1),
    [anon_sym_on_DASHcapture_DASHclick] = ACTIONS(1),
    [anon_sym_on_DASHblur] = ACTIONS(1),
    [anon_sym_on_DASHfocus] = ACTIONS(1),
    [anon_sym_on_DASHchange] = ACTIONS(1),
    [anon_sym_on_DASHsubmit] = ACTIONS(1),
    [anon_sym_on_DASHkeydown] = ACTIONS(1),
    [anon_sym_on_DASHkeyup] = ACTIONS(1),
    [anon_sym_on_DASHwindow_DASHfocus] = ACTIONS(1),
    [anon_sym_on_DASHwindow_DASHblur] = ACTIONS(1),
    [anon_sym_on_DASHwindow_DASHkeydown] = ACTIONS(1),
    [anon_sym_on_DASHwindow_DASHkeyup] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(158),
    [sym__node] = STATE(16),
    [sym_tag] = STATE(16),
    [sym_component] = STATE(16),
    [sym_block] = STATE(16),
    [sym_start_markdown] = STATE(127),
    [sym_start_tag] = STATE(10),
    [sym_self_closing_tag] = STATE(45),
    [sym_start_component] = STATE(6),
    [sym_self_closing_component] = STATE(48),
    [sym_expression] = STATE(16),
    [sym_comment] = STATE(16),
    [sym__public_comment] = STATE(43),
    [sym__private_comment] = STATE(43),
    [sym_start_block] = STATE(4),
    [aux_sym_fragment_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(9),
    [anon_sym_LBRACE_BANG_DASH_DASH] = ACTIONS(11),
    [anon_sym_LBRACE_POUND] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(29), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(11), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(63), 1,
      sym_end_block,
    STATE(78), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_self_closing_component,
    STATE(151), 1,
      sym_start_markdown,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(12), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [57] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE_SLASH,
    STATE(5), 1,
      sym_start_block,
    STATE(11), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(33), 1,
      sym_end_block,
    STATE(78), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_self_closing_component,
    STATE(151), 1,
      sym_start_markdown,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(12), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [114] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(33), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(11), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(47), 1,
      sym_end_block,
    STATE(78), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_self_closing_component,
    STATE(151), 1,
      sym_start_markdown,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(3), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [171] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(35), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(11), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(51), 1,
      sym_end_block,
    STATE(78), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_self_closing_component,
    STATE(151), 1,
      sym_start_markdown,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(2), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [228] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(44), 1,
      sym_end_component,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_self_closing_component,
    STATE(127), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(9), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [284] = 15,
    ACTIONS(43), 1,
      anon_sym_LT,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(52), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(55), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(58), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_self_closing_component,
    STATE(127), 1,
      sym_start_markdown,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(7), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [338] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(61), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(32), 1,
      sym_end_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_self_closing_component,
    STATE(127), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(7), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [394] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(31), 1,
      sym_end_component,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_self_closing_component,
    STATE(127), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(7), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [450] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(61), 1,
      anon_sym_LT_SLASH,
    ACTIONS(65), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(41), 1,
      sym_end_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_self_closing_component,
    STATE(127), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(8), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [506] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(67), 1,
      anon_sym_LT_SLASH,
    ACTIONS(69), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_self_closing_component,
    STATE(53), 1,
      sym_end_tag,
    STATE(127), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(15), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [562] = 15,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(80), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(83), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(86), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(88), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(11), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(78), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_self_closing_component,
    STATE(151), 1,
      sym_start_markdown,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(12), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [616] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(91), 1,
      anon_sym_LT_SLASH,
    ACTIONS(93), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_self_closing_component,
    STATE(54), 1,
      sym_end_component,
    STATE(127), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(14), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [672] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(91), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_self_closing_component,
    STATE(61), 1,
      sym_end_component,
    STATE(127), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(7), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [728] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(67), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_self_closing_component,
    STATE(62), 1,
      sym_end_tag,
    STATE(127), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(7), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [784] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_self_closing_component,
    STATE(127), 1,
      sym_start_markdown,
    STATE(43), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(7), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [837] = 2,
    STATE(152), 1,
      sym_directive_name,
    ACTIONS(97), 18,
      anon_sym_if,
      anon_sym_show,
      anon_sym_let,
      anon_sym_args,
      anon_sym_values,
      anon_sym_hook,
      anon_sym_on_DASHclick,
      anon_sym_on_DASHcapture_DASHclick,
      anon_sym_on_DASHblur,
      anon_sym_on_DASHfocus,
      anon_sym_on_DASHchange,
      anon_sym_on_DASHsubmit,
      anon_sym_on_DASHkeydown,
      anon_sym_on_DASHkeyup,
      anon_sym_on_DASHwindow_DASHfocus,
      anon_sym_on_DASHwindow_DASHblur,
      anon_sym_on_DASHwindow_DASHkeydown,
      anon_sym_on_DASHwindow_DASHkeyup,
  [861] = 6,
    ACTIONS(99), 1,
      anon_sym_GT,
    ACTIONS(101), 1,
      anon_sym_SLASH_GT,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_attribute_name,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_markdown_repeat1,
  [883] = 6,
    ACTIONS(99), 1,
      anon_sym_GT,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_attribute_name,
    ACTIONS(109), 1,
      anon_sym_SLASH_GT,
    STATE(20), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_markdown_repeat1,
  [905] = 6,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_attribute_name,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(113), 1,
      anon_sym_SLASH_GT,
    STATE(25), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_markdown_repeat1,
  [927] = 6,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_attribute_name,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(117), 1,
      anon_sym_SLASH_GT,
    STATE(25), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_markdown_repeat1,
  [949] = 2,
    ACTIONS(121), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
  [963] = 2,
    ACTIONS(125), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_DASH_DASH_RBRACE,
      anon_sym_LBRACE_POUND,
  [977] = 6,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_attribute_name,
    ACTIONS(127), 1,
      anon_sym_GT,
    ACTIONS(129), 1,
      anon_sym_SLASH_GT,
    STATE(21), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_markdown_repeat1,
  [999] = 5,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(139), 1,
      sym_attribute_name,
    ACTIONS(131), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(25), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_markdown_repeat1,
  [1019] = 5,
    ACTIONS(144), 1,
      anon_sym_else,
    STATE(89), 1,
      sym_subblock_name,
    STATE(91), 1,
      sym_block_name,
    ACTIONS(146), 2,
      anon_sym_elseif,
      anon_sym_match,
    ACTIONS(142), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1039] = 6,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_attribute_name,
    ACTIONS(127), 1,
      anon_sym_GT,
    ACTIONS(148), 1,
      anon_sym_SLASH_GT,
    STATE(29), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_markdown_repeat1,
  [1061] = 6,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_attribute_name,
    ACTIONS(111), 1,
      anon_sym_GT,
    ACTIONS(150), 1,
      anon_sym_SLASH_GT,
    STATE(25), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_markdown_repeat1,
  [1083] = 6,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_attribute_name,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(152), 1,
      anon_sym_SLASH_GT,
    STATE(25), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_markdown_repeat1,
  [1105] = 2,
    ACTIONS(156), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1118] = 2,
    ACTIONS(160), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1131] = 2,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1144] = 2,
    ACTIONS(168), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1157] = 2,
    ACTIONS(172), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1170] = 2,
    ACTIONS(176), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1183] = 2,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1196] = 2,
    ACTIONS(184), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1209] = 2,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1222] = 2,
    ACTIONS(192), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1235] = 2,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1248] = 2,
    ACTIONS(200), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1261] = 2,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1274] = 2,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1287] = 2,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1300] = 2,
    ACTIONS(216), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1313] = 2,
    ACTIONS(220), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1326] = 2,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1339] = 2,
    ACTIONS(228), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1352] = 5,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_attribute_name,
    ACTIONS(230), 1,
      anon_sym_GT,
    STATE(50), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_markdown_repeat1,
  [1371] = 5,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(107), 1,
      sym_attribute_name,
    ACTIONS(232), 1,
      anon_sym_GT,
    STATE(25), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_markdown_repeat1,
  [1390] = 2,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(222), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1402] = 2,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(206), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1414] = 2,
    ACTIONS(200), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(198), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1426] = 2,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(210), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1438] = 2,
    ACTIONS(234), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(236), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1450] = 2,
    ACTIONS(156), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(154), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1462] = 2,
    ACTIONS(172), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(170), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1474] = 2,
    ACTIONS(220), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(218), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1486] = 2,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(119), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1498] = 2,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(123), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1510] = 2,
    ACTIONS(160), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(158), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1522] = 2,
    ACTIONS(164), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(162), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1534] = 2,
    ACTIONS(168), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(166), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1546] = 2,
    ACTIONS(176), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(174), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1558] = 2,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(178), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1570] = 2,
    ACTIONS(184), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(182), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1582] = 2,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(186), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1594] = 2,
    ACTIONS(192), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(190), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1606] = 2,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(194), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1618] = 2,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(202), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1630] = 2,
    ACTIONS(238), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(240), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1642] = 2,
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(244), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1654] = 2,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(248), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1666] = 2,
    ACTIONS(250), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(252), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1678] = 2,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(256), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1690] = 2,
    ACTIONS(258), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(260), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1702] = 2,
    ACTIONS(262), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(264), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1714] = 2,
    ACTIONS(216), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(214), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1726] = 4,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_expression_value,
    ACTIONS(270), 2,
      aux_sym_expression_value_token1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(268), 3,
      anon_sym_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_CARET,
  [1742] = 2,
    ACTIONS(228), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(226), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1754] = 4,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_expression_value,
    ACTIONS(270), 2,
      aux_sym_expression_value_token1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(272), 3,
      anon_sym_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_CARET,
  [1770] = 4,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_expression_value,
    ACTIONS(270), 2,
      aux_sym_expression_value_token1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(274), 3,
      anon_sym_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_CARET,
  [1786] = 5,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_attribute_value,
    STATE(88), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1803] = 5,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_attribute_value,
    STATE(87), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1820] = 2,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(284), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [1831] = 1,
    ACTIONS(288), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [1839] = 1,
    ACTIONS(290), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [1847] = 1,
    ACTIONS(292), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [1855] = 5,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      aux_sym_expression_value_token1,
    STATE(150), 1,
      sym_expression_value,
  [1871] = 1,
    ACTIONS(298), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [1879] = 5,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(296), 1,
      aux_sym_expression_value_token1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_expression_value,
  [1895] = 1,
    ACTIONS(218), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [1903] = 1,
    ACTIONS(182), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [1911] = 2,
    STATE(91), 1,
      sym_block_name,
    ACTIONS(142), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1921] = 2,
    STATE(126), 1,
      sym_block_name,
    ACTIONS(302), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1931] = 2,
    STATE(143), 1,
      sym_block_name,
    ACTIONS(302), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1941] = 2,
    ACTIONS(306), 1,
      aux_sym_expression_value_token1,
    ACTIONS(304), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
  [1950] = 2,
    ACTIONS(310), 1,
      aux_sym_expression_value_token1,
    ACTIONS(308), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
  [1959] = 4,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(296), 1,
      aux_sym_expression_value_token1,
    STATE(146), 1,
      sym_expression_value,
  [1972] = 4,
    ACTIONS(312), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(314), 1,
      aux_sym__public_comment_token1,
    STATE(107), 1,
      aux_sym__public_comment_repeat1,
    STATE(134), 1,
      sym__public_comment,
  [1985] = 4,
    ACTIONS(316), 1,
      aux_sym__public_comment_token1,
    ACTIONS(318), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(110), 1,
      aux_sym__public_comment_repeat1,
    STATE(155), 1,
      sym__private_comment,
  [1998] = 4,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(296), 1,
      aux_sym_expression_value_token1,
    STATE(128), 1,
      sym_expression_value,
  [2011] = 4,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(296), 1,
      aux_sym_expression_value_token1,
    STATE(121), 1,
      sym_expression_value,
  [2024] = 4,
    ACTIONS(312), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(314), 1,
      aux_sym__public_comment_token1,
    STATE(112), 1,
      aux_sym__public_comment_repeat1,
    STATE(130), 1,
      sym__public_comment,
  [2037] = 4,
    ACTIONS(316), 1,
      aux_sym__public_comment_token1,
    ACTIONS(318), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(113), 1,
      aux_sym__public_comment_repeat1,
    STATE(132), 1,
      sym__private_comment,
  [2050] = 4,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(296), 1,
      aux_sym_expression_value_token1,
    STATE(140), 1,
      sym_expression_value,
  [2063] = 3,
    ACTIONS(314), 1,
      aux_sym__public_comment_token1,
    ACTIONS(320), 1,
      anon_sym_DASH_DASH_GT,
    STATE(108), 1,
      aux_sym__public_comment_repeat1,
  [2073] = 3,
    ACTIONS(322), 1,
      aux_sym__public_comment_token1,
    ACTIONS(325), 1,
      anon_sym_DASH_DASH_GT,
    STATE(108), 1,
      aux_sym__public_comment_repeat1,
  [2083] = 3,
    ACTIONS(325), 1,
      anon_sym_DASH_DASH_RBRACE,
    ACTIONS(327), 1,
      aux_sym__public_comment_token1,
    STATE(109), 1,
      aux_sym__public_comment_repeat1,
  [2093] = 3,
    ACTIONS(316), 1,
      aux_sym__public_comment_token1,
    ACTIONS(330), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(109), 1,
      aux_sym__public_comment_repeat1,
  [2103] = 3,
    ACTIONS(332), 1,
      anon_sym_POUNDMarkdown,
    ACTIONS(334), 1,
      sym_tag_name,
    ACTIONS(336), 1,
      sym_component_name,
  [2113] = 3,
    ACTIONS(314), 1,
      aux_sym__public_comment_token1,
    ACTIONS(338), 1,
      anon_sym_DASH_DASH_GT,
    STATE(108), 1,
      aux_sym__public_comment_repeat1,
  [2123] = 3,
    ACTIONS(316), 1,
      aux_sym__public_comment_token1,
    ACTIONS(340), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(109), 1,
      aux_sym__public_comment_repeat1,
  [2133] = 3,
    ACTIONS(332), 1,
      anon_sym_POUNDMarkdown,
    ACTIONS(342), 1,
      sym_tag_name,
    ACTIONS(344), 1,
      sym_component_name,
  [2143] = 1,
    ACTIONS(346), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_GT,
  [2148] = 2,
    ACTIONS(348), 1,
      anon_sym_LT_SLASH,
    STATE(31), 1,
      sym_end_markdown,
  [2155] = 2,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(352), 1,
      aux_sym_quoted_attribute_value_token1,
  [2162] = 2,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      aux_sym_quoted_attribute_value_token2,
  [2169] = 2,
    ACTIONS(356), 1,
      anon_sym_LT_SLASH,
    STATE(61), 1,
      sym_end_markdown,
  [2176] = 1,
    ACTIONS(346), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_RBRACE,
  [2181] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [2185] = 1,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
  [2189] = 1,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
  [2193] = 1,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
  [2197] = 1,
    ACTIONS(364), 1,
      sym_text,
  [2201] = 1,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
  [2205] = 1,
    ACTIONS(368), 1,
      sym_text,
  [2209] = 1,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
  [2213] = 1,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
  [2217] = 1,
    ACTIONS(374), 1,
      anon_sym_DASH_DASH_GT,
  [2221] = 1,
    ACTIONS(376), 1,
      anon_sym_GT,
  [2225] = 1,
    ACTIONS(378), 1,
      anon_sym_DASH_DASH_RBRACE,
  [2229] = 1,
    ACTIONS(380), 1,
      sym_component_name,
  [2233] = 1,
    ACTIONS(382), 1,
      anon_sym_DASH_DASH_GT,
  [2237] = 1,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
  [2241] = 1,
    ACTIONS(386), 1,
      anon_sym_EQ,
  [2245] = 1,
    ACTIONS(388), 1,
      anon_sym_POUNDMarkdown,
  [2249] = 1,
    ACTIONS(390), 1,
      sym_text,
  [2253] = 1,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
  [2257] = 1,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
  [2261] = 1,
    ACTIONS(396), 1,
      anon_sym_GT,
  [2265] = 1,
    ACTIONS(398), 1,
      anon_sym_GT,
  [2269] = 1,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
  [2273] = 1,
    ACTIONS(402), 1,
      anon_sym_GT,
  [2277] = 1,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
  [2281] = 1,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
  [2285] = 1,
    ACTIONS(408), 1,
      anon_sym_GT,
  [2289] = 1,
    ACTIONS(410), 1,
      anon_sym_GT,
  [2293] = 1,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
  [2297] = 1,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
  [2301] = 1,
    ACTIONS(414), 1,
      sym_text,
  [2305] = 1,
    ACTIONS(416), 1,
      anon_sym_EQ,
  [2309] = 1,
    ACTIONS(418), 1,
      sym_tag_name,
  [2313] = 1,
    ACTIONS(420), 1,
      sym_component_name,
  [2317] = 1,
    ACTIONS(422), 1,
      anon_sym_DASH_DASH_RBRACE,
  [2321] = 1,
    ACTIONS(424), 1,
      anon_sym_POUNDMarkdown,
  [2325] = 1,
    ACTIONS(426), 1,
      sym_tag_name,
  [2329] = 1,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
  [2333] = 1,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 228,
  [SMALL_STATE(7)] = 284,
  [SMALL_STATE(8)] = 338,
  [SMALL_STATE(9)] = 394,
  [SMALL_STATE(10)] = 450,
  [SMALL_STATE(11)] = 506,
  [SMALL_STATE(12)] = 562,
  [SMALL_STATE(13)] = 616,
  [SMALL_STATE(14)] = 672,
  [SMALL_STATE(15)] = 728,
  [SMALL_STATE(16)] = 784,
  [SMALL_STATE(17)] = 837,
  [SMALL_STATE(18)] = 861,
  [SMALL_STATE(19)] = 883,
  [SMALL_STATE(20)] = 905,
  [SMALL_STATE(21)] = 927,
  [SMALL_STATE(22)] = 949,
  [SMALL_STATE(23)] = 963,
  [SMALL_STATE(24)] = 977,
  [SMALL_STATE(25)] = 999,
  [SMALL_STATE(26)] = 1019,
  [SMALL_STATE(27)] = 1039,
  [SMALL_STATE(28)] = 1061,
  [SMALL_STATE(29)] = 1083,
  [SMALL_STATE(30)] = 1105,
  [SMALL_STATE(31)] = 1118,
  [SMALL_STATE(32)] = 1131,
  [SMALL_STATE(33)] = 1144,
  [SMALL_STATE(34)] = 1157,
  [SMALL_STATE(35)] = 1170,
  [SMALL_STATE(36)] = 1183,
  [SMALL_STATE(37)] = 1196,
  [SMALL_STATE(38)] = 1209,
  [SMALL_STATE(39)] = 1222,
  [SMALL_STATE(40)] = 1235,
  [SMALL_STATE(41)] = 1248,
  [SMALL_STATE(42)] = 1261,
  [SMALL_STATE(43)] = 1274,
  [SMALL_STATE(44)] = 1287,
  [SMALL_STATE(45)] = 1300,
  [SMALL_STATE(46)] = 1313,
  [SMALL_STATE(47)] = 1326,
  [SMALL_STATE(48)] = 1339,
  [SMALL_STATE(49)] = 1352,
  [SMALL_STATE(50)] = 1371,
  [SMALL_STATE(51)] = 1390,
  [SMALL_STATE(52)] = 1402,
  [SMALL_STATE(53)] = 1414,
  [SMALL_STATE(54)] = 1426,
  [SMALL_STATE(55)] = 1438,
  [SMALL_STATE(56)] = 1450,
  [SMALL_STATE(57)] = 1462,
  [SMALL_STATE(58)] = 1474,
  [SMALL_STATE(59)] = 1486,
  [SMALL_STATE(60)] = 1498,
  [SMALL_STATE(61)] = 1510,
  [SMALL_STATE(62)] = 1522,
  [SMALL_STATE(63)] = 1534,
  [SMALL_STATE(64)] = 1546,
  [SMALL_STATE(65)] = 1558,
  [SMALL_STATE(66)] = 1570,
  [SMALL_STATE(67)] = 1582,
  [SMALL_STATE(68)] = 1594,
  [SMALL_STATE(69)] = 1606,
  [SMALL_STATE(70)] = 1618,
  [SMALL_STATE(71)] = 1630,
  [SMALL_STATE(72)] = 1642,
  [SMALL_STATE(73)] = 1654,
  [SMALL_STATE(74)] = 1666,
  [SMALL_STATE(75)] = 1678,
  [SMALL_STATE(76)] = 1690,
  [SMALL_STATE(77)] = 1702,
  [SMALL_STATE(78)] = 1714,
  [SMALL_STATE(79)] = 1726,
  [SMALL_STATE(80)] = 1742,
  [SMALL_STATE(81)] = 1754,
  [SMALL_STATE(82)] = 1770,
  [SMALL_STATE(83)] = 1786,
  [SMALL_STATE(84)] = 1803,
  [SMALL_STATE(85)] = 1820,
  [SMALL_STATE(86)] = 1831,
  [SMALL_STATE(87)] = 1839,
  [SMALL_STATE(88)] = 1847,
  [SMALL_STATE(89)] = 1855,
  [SMALL_STATE(90)] = 1871,
  [SMALL_STATE(91)] = 1879,
  [SMALL_STATE(92)] = 1895,
  [SMALL_STATE(93)] = 1903,
  [SMALL_STATE(94)] = 1911,
  [SMALL_STATE(95)] = 1921,
  [SMALL_STATE(96)] = 1931,
  [SMALL_STATE(97)] = 1941,
  [SMALL_STATE(98)] = 1950,
  [SMALL_STATE(99)] = 1959,
  [SMALL_STATE(100)] = 1972,
  [SMALL_STATE(101)] = 1985,
  [SMALL_STATE(102)] = 1998,
  [SMALL_STATE(103)] = 2011,
  [SMALL_STATE(104)] = 2024,
  [SMALL_STATE(105)] = 2037,
  [SMALL_STATE(106)] = 2050,
  [SMALL_STATE(107)] = 2063,
  [SMALL_STATE(108)] = 2073,
  [SMALL_STATE(109)] = 2083,
  [SMALL_STATE(110)] = 2093,
  [SMALL_STATE(111)] = 2103,
  [SMALL_STATE(112)] = 2113,
  [SMALL_STATE(113)] = 2123,
  [SMALL_STATE(114)] = 2133,
  [SMALL_STATE(115)] = 2143,
  [SMALL_STATE(116)] = 2148,
  [SMALL_STATE(117)] = 2155,
  [SMALL_STATE(118)] = 2162,
  [SMALL_STATE(119)] = 2169,
  [SMALL_STATE(120)] = 2176,
  [SMALL_STATE(121)] = 2181,
  [SMALL_STATE(122)] = 2185,
  [SMALL_STATE(123)] = 2189,
  [SMALL_STATE(124)] = 2193,
  [SMALL_STATE(125)] = 2197,
  [SMALL_STATE(126)] = 2201,
  [SMALL_STATE(127)] = 2205,
  [SMALL_STATE(128)] = 2209,
  [SMALL_STATE(129)] = 2213,
  [SMALL_STATE(130)] = 2217,
  [SMALL_STATE(131)] = 2221,
  [SMALL_STATE(132)] = 2225,
  [SMALL_STATE(133)] = 2229,
  [SMALL_STATE(134)] = 2233,
  [SMALL_STATE(135)] = 2237,
  [SMALL_STATE(136)] = 2241,
  [SMALL_STATE(137)] = 2245,
  [SMALL_STATE(138)] = 2249,
  [SMALL_STATE(139)] = 2253,
  [SMALL_STATE(140)] = 2257,
  [SMALL_STATE(141)] = 2261,
  [SMALL_STATE(142)] = 2265,
  [SMALL_STATE(143)] = 2269,
  [SMALL_STATE(144)] = 2273,
  [SMALL_STATE(145)] = 2277,
  [SMALL_STATE(146)] = 2281,
  [SMALL_STATE(147)] = 2285,
  [SMALL_STATE(148)] = 2289,
  [SMALL_STATE(149)] = 2293,
  [SMALL_STATE(150)] = 2297,
  [SMALL_STATE(151)] = 2301,
  [SMALL_STATE(152)] = 2305,
  [SMALL_STATE(153)] = 2309,
  [SMALL_STATE(154)] = 2313,
  [SMALL_STATE(155)] = 2317,
  [SMALL_STATE(156)] = 2321,
  [SMALL_STATE(157)] = 2325,
  [SMALL_STATE(158)] = 2329,
  [SMALL_STATE(159)] = 2333,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__public_comment, 3, 0, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__public_comment, 3, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__private_comment, 3, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__private_comment, 3, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_markdown_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_markdown_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_block, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_block, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_markdown, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_markdown, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 4, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 4, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 4, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 4, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_name, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock_name, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock_name, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_markdown, 4, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_name, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_markdown, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_value, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [428] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_value, 3, 0, 2),
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

TS_PUBLIC const TSLanguage *tree_sitter_surface(void) {
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
