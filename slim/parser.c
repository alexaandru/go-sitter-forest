#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 302
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 1
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  aux_sym__nested_inline_expansion_token1 = 1,
  sym__closed_tag = 2,
  sym_tag_name = 3,
  anon_sym_DOT = 4,
  anon_sym_POUND = 5,
  sym_attr_shortcut_custom = 6,
  anon_sym_STAR = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  sym__attr_name = 14,
  sym_attr_assignment = 15,
  sym_attr_assignment_noescape = 16,
  sym__element_rest_text = 17,
  sym_css_identifier = 18,
  anon_sym_doctype = 19,
  anon_sym_html = 20,
  anon_sym_5 = 21,
  anon_sym_1_DOT1 = 22,
  anon_sym_strict = 23,
  anon_sym_frameset = 24,
  anon_sym_mobile = 25,
  anon_sym_basic = 26,
  anon_sym_transitional = 27,
  anon_sym_xml = 28,
  sym_doctype_xml_encoding = 29,
  anon_sym_DASH = 30,
  anon_sym_EQ = 31,
  anon_sym_EQ_EQ = 32,
  sym_output_modifier_leading_whitespace = 33,
  sym_output_modifier_trailing_whitespace = 34,
  sym_output_modifier_legacy_trailing_whitespace = 35,
  anon_sym_COLON = 36,
  anon_sym_markdown = 37,
  anon_sym_textile = 38,
  anon_sym_rdoc = 39,
  anon_sym_coffee = 40,
  anon_sym_less = 41,
  anon_sym_sass = 42,
  anon_sym_scss = 43,
  anon_sym_javascript = 44,
  anon_sym_css = 45,
  anon_sym_ruby = 46,
  anon_sym_PIPE = 47,
  sym_verbatim_text_modifier_trailing_whitespace = 48,
  sym__text_line = 49,
  anon_sym_SLASH_LBRACK = 50,
  sym__html_comment_condition = 51,
  aux_sym_html_comment_token1 = 52,
  aux_sym_code_comment_token1 = 53,
  sym__space_or_newline = 54,
  sym__space = 55,
  sym__block_start = 56,
  sym__block_end = 57,
  sym__line_separator = 58,
  sym_attr_value_quoted = 59,
  sym__attr_value_ruby = 60,
  sym__attr_value_ruby_p = 61,
  sym__attr_value_ruby_s = 62,
  sym__attr_value_ruby_b = 63,
  sym_ruby = 64,
  sym__error_sentinel = 65,
  sym_source_file = 66,
  sym__block = 67,
  sym__line = 68,
  sym_element = 69,
  sym__inline = 70,
  sym_nested_inline = 71,
  sym__nested_inline_expansion = 72,
  sym_attr_shortcuts = 73,
  sym__attr_shortcut = 74,
  sym_attr_shortcut_class = 75,
  sym_attr_shortcut_id = 76,
  sym_nested = 77,
  sym_attrs = 78,
  sym__attrs_plain = 79,
  sym__attrs_delimited = 80,
  sym__attr_delimited_value_p = 81,
  sym__attr_delimited_splat_p = 82,
  sym__attr_delimited_p = 83,
  sym__attrs_delimited_p = 84,
  sym__attr_delimited_value_s = 85,
  sym__attr_delimited_splat_s = 86,
  sym__attr_delimited_s = 87,
  sym__attrs_delimited_s = 88,
  sym__attr_delimited_value_b = 89,
  sym__attr_delimited_splat_b = 90,
  sym__attr_delimited_b = 91,
  sym__attrs_delimited_b = 92,
  sym_attr = 93,
  sym_attr_name = 94,
  sym__attr_value = 95,
  sym_attr_boolean = 96,
  sym_element_text = 97,
  sym_doctype = 98,
  sym__doctype_html = 99,
  sym_doctype_html5 = 100,
  sym_doctype_xhtml = 101,
  sym__doctype_xml = 102,
  sym__ruby_block = 103,
  sym_ruby_block_control = 104,
  sym_ruby_block_output = 105,
  sym_ruby_block_output_noescape = 106,
  aux_sym__output_modifiers = 107,
  sym__output_modifier = 108,
  sym_embedded_engine = 109,
  sym_embedded_engine_name = 110,
  sym_verbatim_text = 111,
  sym__text = 112,
  sym__text_nested = 113,
  sym_html_comment_conditional = 114,
  sym__html_comment_conditional_marker = 115,
  sym_html_comment_condition = 116,
  sym__html_comment_conditional_incomplete = 117,
  sym_html_comment = 118,
  sym_code_comment = 119,
  aux_sym__block_repeat1 = 120,
  aux_sym_attr_shortcuts_repeat1 = 121,
  aux_sym__attrs_plain_repeat1 = 122,
  aux_sym__attrs_delimited_p_repeat1 = 123,
  aux_sym__attrs_delimited_s_repeat1 = 124,
  aux_sym__attrs_delimited_b_repeat1 = 125,
  aux_sym_element_text_repeat1 = 126,
  aux_sym__text_nested_repeat1 = 127,
  alias_sym_attr_value_ruby = 128,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__nested_inline_expansion_token1] = "_nested_inline_expansion_token1",
  [sym__closed_tag] = "_closed_tag",
  [sym_tag_name] = "tag_name",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [sym_attr_shortcut_custom] = "attr_shortcut_custom",
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__attr_name] = "_attr_name",
  [sym_attr_assignment] = "attr_assignment",
  [sym_attr_assignment_noescape] = "attr_assignment_noescape",
  [sym__element_rest_text] = "_element_rest_text",
  [sym_css_identifier] = "css_identifier",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "html",
  [anon_sym_5] = "5",
  [anon_sym_1_DOT1] = "1.1",
  [anon_sym_strict] = "strict",
  [anon_sym_frameset] = "frameset",
  [anon_sym_mobile] = "mobile",
  [anon_sym_basic] = "basic",
  [anon_sym_transitional] = "transitional",
  [anon_sym_xml] = "xml",
  [sym_doctype_xml_encoding] = "doctype_xml_encoding",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [sym_output_modifier_leading_whitespace] = "output_modifier_leading_whitespace",
  [sym_output_modifier_trailing_whitespace] = "output_modifier_trailing_whitespace",
  [sym_output_modifier_legacy_trailing_whitespace] = "output_modifier_legacy_trailing_whitespace",
  [anon_sym_COLON] = ":",
  [anon_sym_markdown] = "markdown",
  [anon_sym_textile] = "textile",
  [anon_sym_rdoc] = "rdoc",
  [anon_sym_coffee] = "coffee",
  [anon_sym_less] = "less",
  [anon_sym_sass] = "sass",
  [anon_sym_scss] = "scss",
  [anon_sym_javascript] = "javascript",
  [anon_sym_css] = "css",
  [anon_sym_ruby] = "ruby",
  [anon_sym_PIPE] = "|",
  [sym_verbatim_text_modifier_trailing_whitespace] = "verbatim_text_modifier_trailing_whitespace",
  [sym__text_line] = "_text_line",
  [anon_sym_SLASH_LBRACK] = "/[",
  [sym__html_comment_condition] = "_html_comment_condition",
  [aux_sym_html_comment_token1] = "html_comment_token1",
  [aux_sym_code_comment_token1] = "code_comment_token1",
  [sym__space_or_newline] = "_space_or_newline",
  [sym__space] = "_space",
  [sym__block_start] = "_block_start",
  [sym__block_end] = "_block_end",
  [sym__line_separator] = "_line_separator",
  [sym_attr_value_quoted] = "attr_value_quoted",
  [sym__attr_value_ruby] = "attr_splat",
  [sym__attr_value_ruby_p] = "_attr_value_ruby_p",
  [sym__attr_value_ruby_s] = "_attr_value_ruby_s",
  [sym__attr_value_ruby_b] = "_attr_value_ruby_b",
  [sym_ruby] = "ruby",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym__line] = "_line",
  [sym_element] = "element",
  [sym__inline] = "_inline",
  [sym_nested_inline] = "nested_inline",
  [sym__nested_inline_expansion] = "_nested_inline_expansion",
  [sym_attr_shortcuts] = "attr_shortcuts",
  [sym__attr_shortcut] = "_attr_shortcut",
  [sym_attr_shortcut_class] = "attr_shortcut_class",
  [sym_attr_shortcut_id] = "attr_shortcut_id",
  [sym_nested] = "nested",
  [sym_attrs] = "attrs",
  [sym__attrs_plain] = "_attrs_plain",
  [sym__attrs_delimited] = "_attrs_delimited",
  [sym__attr_delimited_value_p] = "_attr_delimited_value_p",
  [sym__attr_delimited_splat_p] = "attr_splat",
  [sym__attr_delimited_p] = "attr",
  [sym__attrs_delimited_p] = "_attrs_delimited_p",
  [sym__attr_delimited_value_s] = "_attr_delimited_value_s",
  [sym__attr_delimited_splat_s] = "attr_splat",
  [sym__attr_delimited_s] = "attr",
  [sym__attrs_delimited_s] = "_attrs_delimited_s",
  [sym__attr_delimited_value_b] = "_attr_delimited_value_b",
  [sym__attr_delimited_splat_b] = "attr_splat",
  [sym__attr_delimited_b] = "attr",
  [sym__attrs_delimited_b] = "_attrs_delimited_b",
  [sym_attr] = "attr",
  [sym_attr_name] = "attr_name",
  [sym__attr_value] = "_attr_value",
  [sym_attr_boolean] = "attr_boolean",
  [sym_element_text] = "element_text",
  [sym_doctype] = "doctype",
  [sym__doctype_html] = "_doctype_html",
  [sym_doctype_html5] = "doctype_html5",
  [sym_doctype_xhtml] = "doctype_xhtml",
  [sym__doctype_xml] = "_doctype_xml",
  [sym__ruby_block] = "_ruby_block",
  [sym_ruby_block_control] = "ruby_block_control",
  [sym_ruby_block_output] = "ruby_block_output",
  [sym_ruby_block_output_noescape] = "ruby_block_output_noescape",
  [aux_sym__output_modifiers] = "_output_modifiers",
  [sym__output_modifier] = "_output_modifier",
  [sym_embedded_engine] = "embedded_engine",
  [sym_embedded_engine_name] = "embedded_engine_name",
  [sym_verbatim_text] = "verbatim_text",
  [sym__text] = "_text",
  [sym__text_nested] = "_text_nested",
  [sym_html_comment_conditional] = "html_comment_conditional",
  [sym__html_comment_conditional_marker] = "_html_comment_conditional_marker",
  [sym_html_comment_condition] = "html_comment_condition",
  [sym__html_comment_conditional_incomplete] = "_html_comment_conditional_incomplete",
  [sym_html_comment] = "html_comment",
  [sym_code_comment] = "code_comment",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym_attr_shortcuts_repeat1] = "attr_shortcuts_repeat1",
  [aux_sym__attrs_plain_repeat1] = "_attrs_plain_repeat1",
  [aux_sym__attrs_delimited_p_repeat1] = "_attrs_delimited_p_repeat1",
  [aux_sym__attrs_delimited_s_repeat1] = "_attrs_delimited_s_repeat1",
  [aux_sym__attrs_delimited_b_repeat1] = "_attrs_delimited_b_repeat1",
  [aux_sym_element_text_repeat1] = "element_text_repeat1",
  [aux_sym__text_nested_repeat1] = "_text_nested_repeat1",
  [alias_sym_attr_value_ruby] = "attr_value_ruby",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__nested_inline_expansion_token1] = aux_sym__nested_inline_expansion_token1,
  [sym__closed_tag] = sym__closed_tag,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_attr_shortcut_custom] = sym_attr_shortcut_custom,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__attr_name] = sym__attr_name,
  [sym_attr_assignment] = sym_attr_assignment,
  [sym_attr_assignment_noescape] = sym_attr_assignment_noescape,
  [sym__element_rest_text] = sym__element_rest_text,
  [sym_css_identifier] = sym_css_identifier,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_1_DOT1] = anon_sym_1_DOT1,
  [anon_sym_strict] = anon_sym_strict,
  [anon_sym_frameset] = anon_sym_frameset,
  [anon_sym_mobile] = anon_sym_mobile,
  [anon_sym_basic] = anon_sym_basic,
  [anon_sym_transitional] = anon_sym_transitional,
  [anon_sym_xml] = anon_sym_xml,
  [sym_doctype_xml_encoding] = sym_doctype_xml_encoding,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [sym_output_modifier_leading_whitespace] = sym_output_modifier_leading_whitespace,
  [sym_output_modifier_trailing_whitespace] = sym_output_modifier_trailing_whitespace,
  [sym_output_modifier_legacy_trailing_whitespace] = sym_output_modifier_legacy_trailing_whitespace,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_markdown] = anon_sym_markdown,
  [anon_sym_textile] = anon_sym_textile,
  [anon_sym_rdoc] = anon_sym_rdoc,
  [anon_sym_coffee] = anon_sym_coffee,
  [anon_sym_less] = anon_sym_less,
  [anon_sym_sass] = anon_sym_sass,
  [anon_sym_scss] = anon_sym_scss,
  [anon_sym_javascript] = anon_sym_javascript,
  [anon_sym_css] = anon_sym_css,
  [anon_sym_ruby] = anon_sym_ruby,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_verbatim_text_modifier_trailing_whitespace] = sym_verbatim_text_modifier_trailing_whitespace,
  [sym__text_line] = sym__text_line,
  [anon_sym_SLASH_LBRACK] = anon_sym_SLASH_LBRACK,
  [sym__html_comment_condition] = sym__html_comment_condition,
  [aux_sym_html_comment_token1] = aux_sym_html_comment_token1,
  [aux_sym_code_comment_token1] = aux_sym_code_comment_token1,
  [sym__space_or_newline] = sym__space_or_newline,
  [sym__space] = sym__space,
  [sym__block_start] = sym__block_start,
  [sym__block_end] = sym__block_end,
  [sym__line_separator] = sym__line_separator,
  [sym_attr_value_quoted] = sym_attr_value_quoted,
  [sym__attr_value_ruby] = sym__attr_value_ruby,
  [sym__attr_value_ruby_p] = sym__attr_value_ruby_p,
  [sym__attr_value_ruby_s] = sym__attr_value_ruby_s,
  [sym__attr_value_ruby_b] = sym__attr_value_ruby_b,
  [sym_ruby] = sym_ruby,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym__line] = sym__line,
  [sym_element] = sym_element,
  [sym__inline] = sym__inline,
  [sym_nested_inline] = sym_nested_inline,
  [sym__nested_inline_expansion] = sym__nested_inline_expansion,
  [sym_attr_shortcuts] = sym_attr_shortcuts,
  [sym__attr_shortcut] = sym__attr_shortcut,
  [sym_attr_shortcut_class] = sym_attr_shortcut_class,
  [sym_attr_shortcut_id] = sym_attr_shortcut_id,
  [sym_nested] = sym_nested,
  [sym_attrs] = sym_attrs,
  [sym__attrs_plain] = sym__attrs_plain,
  [sym__attrs_delimited] = sym__attrs_delimited,
  [sym__attr_delimited_value_p] = sym__attr_delimited_value_p,
  [sym__attr_delimited_splat_p] = sym__attr_value_ruby,
  [sym__attr_delimited_p] = sym_attr,
  [sym__attrs_delimited_p] = sym__attrs_delimited_p,
  [sym__attr_delimited_value_s] = sym__attr_delimited_value_s,
  [sym__attr_delimited_splat_s] = sym__attr_value_ruby,
  [sym__attr_delimited_s] = sym_attr,
  [sym__attrs_delimited_s] = sym__attrs_delimited_s,
  [sym__attr_delimited_value_b] = sym__attr_delimited_value_b,
  [sym__attr_delimited_splat_b] = sym__attr_value_ruby,
  [sym__attr_delimited_b] = sym_attr,
  [sym__attrs_delimited_b] = sym__attrs_delimited_b,
  [sym_attr] = sym_attr,
  [sym_attr_name] = sym_attr_name,
  [sym__attr_value] = sym__attr_value,
  [sym_attr_boolean] = sym_attr_boolean,
  [sym_element_text] = sym_element_text,
  [sym_doctype] = sym_doctype,
  [sym__doctype_html] = sym__doctype_html,
  [sym_doctype_html5] = sym_doctype_html5,
  [sym_doctype_xhtml] = sym_doctype_xhtml,
  [sym__doctype_xml] = sym__doctype_xml,
  [sym__ruby_block] = sym__ruby_block,
  [sym_ruby_block_control] = sym_ruby_block_control,
  [sym_ruby_block_output] = sym_ruby_block_output,
  [sym_ruby_block_output_noescape] = sym_ruby_block_output_noescape,
  [aux_sym__output_modifiers] = aux_sym__output_modifiers,
  [sym__output_modifier] = sym__output_modifier,
  [sym_embedded_engine] = sym_embedded_engine,
  [sym_embedded_engine_name] = sym_embedded_engine_name,
  [sym_verbatim_text] = sym_verbatim_text,
  [sym__text] = sym__text,
  [sym__text_nested] = sym__text_nested,
  [sym_html_comment_conditional] = sym_html_comment_conditional,
  [sym__html_comment_conditional_marker] = sym__html_comment_conditional_marker,
  [sym_html_comment_condition] = sym_html_comment_condition,
  [sym__html_comment_conditional_incomplete] = sym__html_comment_conditional_incomplete,
  [sym_html_comment] = sym_html_comment,
  [sym_code_comment] = sym_code_comment,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym_attr_shortcuts_repeat1] = aux_sym_attr_shortcuts_repeat1,
  [aux_sym__attrs_plain_repeat1] = aux_sym__attrs_plain_repeat1,
  [aux_sym__attrs_delimited_p_repeat1] = aux_sym__attrs_delimited_p_repeat1,
  [aux_sym__attrs_delimited_s_repeat1] = aux_sym__attrs_delimited_s_repeat1,
  [aux_sym__attrs_delimited_b_repeat1] = aux_sym__attrs_delimited_b_repeat1,
  [aux_sym_element_text_repeat1] = aux_sym_element_text_repeat1,
  [aux_sym__text_nested_repeat1] = aux_sym__text_nested_repeat1,
  [alias_sym_attr_value_ruby] = alias_sym_attr_value_ruby,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__nested_inline_expansion_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__closed_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_attr_shortcut_custom] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym__attr_name] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_assignment_noescape] = {
    .visible = true,
    .named = true,
  },
  [sym__element_rest_text] = {
    .visible = false,
    .named = true,
  },
  [sym_css_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frameset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mobile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_basic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transitional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [sym_doctype_xml_encoding] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_output_modifier_leading_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_output_modifier_trailing_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_output_modifier_legacy_trailing_whitespace] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_markdown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdoc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coffee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_less] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_javascript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_css] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_verbatim_text_modifier_trailing_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym__text_line] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__html_comment_condition] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_html_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__space_or_newline] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__block_end] = {
    .visible = false,
    .named = true,
  },
  [sym__line_separator] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_value_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_value_ruby] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_value_ruby_p] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_value_ruby_s] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_value_ruby_b] = {
    .visible = false,
    .named = true,
  },
  [sym_ruby] = {
    .visible = true,
    .named = true,
  },
  [sym__error_sentinel] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym__inline] = {
    .visible = false,
    .named = true,
  },
  [sym_nested_inline] = {
    .visible = true,
    .named = true,
  },
  [sym__nested_inline_expansion] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_shortcuts] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_shortcut] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_attr_shortcut_class] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_shortcut_id] = {
    .visible = true,
    .named = true,
  },
  [sym_nested] = {
    .visible = true,
    .named = true,
  },
  [sym_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_plain] = {
    .visible = false,
    .named = true,
  },
  [sym__attrs_delimited] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_value_p] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_splat_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_delimited_p] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_value_s] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_splat_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_delimited_s] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_value_b] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_splat_b] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_b] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_delimited_b] = {
    .visible = false,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_name] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_value] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_element_text] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__doctype_html] = {
    .visible = false,
    .named = true,
  },
  [sym_doctype_html5] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype_xhtml] = {
    .visible = true,
    .named = true,
  },
  [sym__doctype_xml] = {
    .visible = false,
    .named = true,
  },
  [sym__ruby_block] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_ruby_block_control] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_block_output] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_block_output_noescape] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__output_modifiers] = {
    .visible = false,
    .named = false,
  },
  [sym__output_modifier] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_embedded_engine] = {
    .visible = true,
    .named = true,
  },
  [sym_embedded_engine_name] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_text] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__text_nested] = {
    .visible = false,
    .named = true,
  },
  [sym_html_comment_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym__html_comment_conditional_marker] = {
    .visible = false,
    .named = true,
  },
  [sym_html_comment_condition] = {
    .visible = true,
    .named = true,
  },
  [sym__html_comment_conditional_incomplete] = {
    .visible = false,
    .named = true,
  },
  [sym_html_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_code_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_shortcuts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_plain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_delimited_p_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_delimited_s_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_delimited_b_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_nested_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attr_value_ruby] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_assignment = 1,
  field_attr_shortcuts = 2,
  field_attrs = 3,
  field_name = 4,
  field_nested = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assignment] = "assignment",
  [field_attr_shortcuts] = "attr_shortcuts",
  [field_attrs] = "attrs",
  [field_name] = "name",
  [field_nested] = "nested",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 3},
  [13] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_attr_shortcuts, 0},
  [2] =
    {field_attr_shortcuts, 1},
    {field_name, 0},
  [4] =
    {field_attrs, 1},
    {field_name, 0},
  [6] =
    {field_attr_shortcuts, 0},
    {field_attrs, 1},
  [8] =
    {field_assignment, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [11] =
    {field_attr_shortcuts, 1},
    {field_attrs, 2},
    {field_name, 0},
  [14] =
    {field_attrs, 2},
    {field_name, 0},
  [16] =
    {field_nested, 2},
  [17] =
    {field_attr_shortcuts, 0},
    {field_attrs, 2},
  [19] =
    {field_assignment, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [22] =
    {field_attr_shortcuts, 1},
    {field_attrs, 3},
    {field_name, 0},
  [25] =
    {field_nested, 3},
  [26] =
    {field_assignment, 1},
    {field_name, 0},
    {field_value, 2},
  [29] =
    {field_nested, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [14] = {
    [0] = alias_sym_attr_value_ruby,
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
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 7,
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
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 67,
  [80] = 63,
  [81] = 65,
  [82] = 66,
  [83] = 68,
  [84] = 69,
  [85] = 70,
  [86] = 71,
  [87] = 75,
  [88] = 76,
  [89] = 77,
  [90] = 78,
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
  [101] = 93,
  [102] = 36,
  [103] = 37,
  [104] = 104,
  [105] = 98,
  [106] = 95,
  [107] = 94,
  [108] = 96,
  [109] = 97,
  [110] = 104,
  [111] = 99,
  [112] = 100,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 30,
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
  [149] = 146,
  [150] = 150,
  [151] = 151,
  [152] = 137,
  [153] = 153,
  [154] = 154,
  [155] = 41,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 35,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 40,
  [165] = 42,
  [166] = 39,
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
  [185] = 178,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 192,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 198,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 200,
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
  [217] = 195,
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
  [228] = 196,
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
  [250] = 203,
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
  [263] = 251,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 218,
  [268] = 268,
  [269] = 210,
  [270] = 270,
  [271] = 53,
  [272] = 45,
  [273] = 44,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 231,
  [278] = 278,
  [279] = 274,
  [280] = 238,
  [281] = 281,
  [282] = 55,
  [283] = 283,
  [284] = 284,
  [285] = 54,
  [286] = 61,
  [287] = 287,
  [288] = 288,
  [289] = 46,
  [290] = 58,
  [291] = 291,
  [292] = 59,
  [293] = 60,
  [294] = 48,
  [295] = 49,
  [296] = 296,
  [297] = 297,
  [298] = 234,
  [299] = 299,
  [300] = 281,
  [301] = 62,
};

static TSCharacterRange sym__attr_name_character_set_1[] = {
  {0, 0x08}, {0x0b, 0x1f}, {'!', '!'}, {'#', '&'}, {'*', '.'}, {'1', ';'}, {'?', 'Z'}, {'^', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '\n', 257,
        '#', 111,
        '\'', 231,
        '(', 117,
        ')', 118,
        '*', 116,
        '-', 224,
        '.', 110,
        '/', 60,
        '0', 209,
        '5', 215,
        ':', 232,
        '<', 229,
        '=', 225,
        '>', 230,
        '[', 119,
        ']', 120,
        'b', 123,
        'c', 170,
        'd', 171,
        'f', 178,
        'h', 197,
        'j', 124,
        'l', 146,
        'm', 126,
        'r', 139,
        's', 130,
        't', 140,
        'x', 164,
        '{', 121,
        '|', 243,
        '}', 122,
        '\t', 255,
        ' ', 255,
        '"', 115,
        '\\', 115,
      );
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 258,
        ')', 118,
        '*', 116,
        '=', 206,
        ']', 120,
        '}', 122,
        '\t', 256,
        ' ', 256,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '/' &&
          lookahead != '0' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(205);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 111,
        '\'', 231,
        '(', 117,
        '-', 204,
        '.', 110,
        '/', 61,
        ':', 59,
        '<', 229,
        '=', 226,
        '>', 230,
        '[', 119,
        '{', 121,
        '\t', 259,
        ' ', 259,
        '\n', 209,
        '0', 209,
        '"', 115,
        ')', 115,
        '\\', 115,
        ']', 115,
        '}', 115,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '#', 111,
        '\'', 231,
        '(', 117,
        '.', 110,
        '/', 61,
        ':', 59,
        '<', 229,
        '=', 226,
        '>', 230,
        '[', 119,
        '{', 121,
        '\t', 259,
        ' ', 259,
        '\n', 209,
        '0', 209,
        '"', 115,
        ')', 115,
        '\\', 115,
        ']', 115,
        '}', 115,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '#', 111,
        '\'', 244,
        '-', 224,
        '.', 110,
        '/', 251,
        '=', 226,
        'c', 85,
        'd', 86,
        'j', 62,
        'l', 76,
        'm', 63,
        'r', 71,
        's', 65,
        't', 74,
        '|', 243,
        '\t', 261,
        ' ', 261,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 111,
        '.', 110,
        'c', 85,
        'j', 62,
        'l', 76,
        'm', 63,
        'r', 71,
        's', 65,
        't', 74,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(115);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\'', 231,
        '(', 117,
        '/', 61,
        ':', 59,
        '<', 229,
        '=', 226,
        '>', 230,
        '[', 119,
        '{', 121,
        '\t', 259,
        ' ', 259,
        '\n', 209,
        '"', 209,
        ')', 209,
        '0', 209,
        '\\', 209,
        ']', 209,
        '}', 209,
      );
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '(', 117,
        '*', 116,
        '=', 226,
        '[', 119,
        '{', 121,
        '\t', 261,
        ' ', 261,
        '\n', 209,
        '"', 209,
        '\'', 209,
        ')', 209,
        '/', 209,
        '0', 209,
        '<', 209,
        '>', 209,
        '\\', 209,
        ']', 209,
        '}', 209,
      );
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '(', 117,
        '1', 11,
        '5', 215,
        ':', 232,
        '[', 119,
        ']', 120,
        'b', 17,
        'f', 43,
        'h', 53,
        'm', 41,
        's', 51,
        't', 44,
        'x', 36,
        '{', 121,
        '\t', 261,
        ' ', 261,
      );
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '=') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '=') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(216);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(226);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '/' ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(205);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(209);
      END_STATE();
    case 55:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__nested_inline_expansion_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__closed_tag);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__closed_tag);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(115);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(181);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(199);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(169);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(132);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(166);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(161);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(187);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 't') ADVANCE(179);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(202);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(154);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(235);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(220);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(195);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(192);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(180);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(172);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(131);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(125);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(236);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(219);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(212);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(234);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(141);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(186);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(193);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(190);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(145);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(149);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(176);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(174);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(134);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(162);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(196);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(136);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(163);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'k') ADVANCE(138);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(222);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(214);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(221);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(142);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(144);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(159);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(160);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(148);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(233);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(128);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(188);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 's') ADVANCE(182);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(135);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(200);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(133);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(168);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(143);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(194);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(158);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(127);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(156);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(151);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(153);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(241);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(237);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(238);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(239);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(183);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(137);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(155);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(184);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(147);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(185);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(217);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(218);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(240);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(203);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(152);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(165);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(157);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'v') ADVANCE(129);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'w') ADVANCE(167);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'x') ADVANCE(198);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(242);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(175);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__attr_name);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_attr_assignment);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_attr_assignment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_attr_assignment_noescape);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__element_rest_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_css_identifier);
      if (lookahead == '/' ||
          lookahead == '0') ADVANCE(211);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_css_identifier);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_1_DOT1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_frameset);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_mobile);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_basic);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_transitional);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_doctype_xml_encoding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_output_modifier_leading_whitespace);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_output_modifier_trailing_whitespace);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_output_modifier_legacy_trailing_whitespace);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_markdown);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_textile);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_rdoc);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_coffee);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_less);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_sass);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_scss);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_javascript);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_css);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_ruby);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_verbatim_text_modifier_trailing_whitespace);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SLASH_LBRACK);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__html_comment_condition);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '!') ADVANCE(248);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 4, .external_lex_state = 3},
  [3] = {.lex_state = 4, .external_lex_state = 3},
  [4] = {.lex_state = 4, .external_lex_state = 3},
  [5] = {.lex_state = 4, .external_lex_state = 3},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 3, .external_lex_state = 4},
  [10] = {.lex_state = 6, .external_lex_state = 4},
  [11] = {.lex_state = 6, .external_lex_state = 4},
  [12] = {.lex_state = 6, .external_lex_state = 4},
  [13] = {.lex_state = 6, .external_lex_state = 4},
  [14] = {.lex_state = 6, .external_lex_state = 4},
  [15] = {.lex_state = 3, .external_lex_state = 4},
  [16] = {.lex_state = 3, .external_lex_state = 4},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 2, .external_lex_state = 4},
  [19] = {.lex_state = 3, .external_lex_state = 4},
  [20] = {.lex_state = 12, .external_lex_state = 4},
  [21] = {.lex_state = 12, .external_lex_state = 4},
  [22] = {.lex_state = 12, .external_lex_state = 4},
  [23] = {.lex_state = 12, .external_lex_state = 4},
  [24] = {.lex_state = 3, .external_lex_state = 4},
  [25] = {.lex_state = 12, .external_lex_state = 4},
  [26] = {.lex_state = 12, .external_lex_state = 4},
  [27] = {.lex_state = 3, .external_lex_state = 4},
  [28] = {.lex_state = 7, .external_lex_state = 4},
  [29] = {.lex_state = 7, .external_lex_state = 4},
  [30] = {.lex_state = 6, .external_lex_state = 4},
  [31] = {.lex_state = 7, .external_lex_state = 4},
  [32] = {.lex_state = 7, .external_lex_state = 4},
  [33] = {.lex_state = 7, .external_lex_state = 4},
  [34] = {.lex_state = 7, .external_lex_state = 4},
  [35] = {.lex_state = 6, .external_lex_state = 4},
  [36] = {.lex_state = 9, .external_lex_state = 4},
  [37] = {.lex_state = 9, .external_lex_state = 4},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 9, .external_lex_state = 4},
  [40] = {.lex_state = 9, .external_lex_state = 4},
  [41] = {.lex_state = 9, .external_lex_state = 4},
  [42] = {.lex_state = 9, .external_lex_state = 4},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 12, .external_lex_state = 4},
  [45] = {.lex_state = 12, .external_lex_state = 4},
  [46] = {.lex_state = 12, .external_lex_state = 4},
  [47] = {.lex_state = 15, .external_lex_state = 4},
  [48] = {.lex_state = 12, .external_lex_state = 4},
  [49] = {.lex_state = 12, .external_lex_state = 4},
  [50] = {.lex_state = 15, .external_lex_state = 4},
  [51] = {.lex_state = 15, .external_lex_state = 4},
  [52] = {.lex_state = 15, .external_lex_state = 4},
  [53] = {.lex_state = 12, .external_lex_state = 4},
  [54] = {.lex_state = 12, .external_lex_state = 4},
  [55] = {.lex_state = 12, .external_lex_state = 4},
  [56] = {.lex_state = 15, .external_lex_state = 4},
  [57] = {.lex_state = 15, .external_lex_state = 4},
  [58] = {.lex_state = 12, .external_lex_state = 4},
  [59] = {.lex_state = 12, .external_lex_state = 4},
  [60] = {.lex_state = 12, .external_lex_state = 4},
  [61] = {.lex_state = 12, .external_lex_state = 4},
  [62] = {.lex_state = 12, .external_lex_state = 4},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 14, .external_lex_state = 4},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 3, .external_lex_state = 5},
  [115] = {.lex_state = 14, .external_lex_state = 4},
  [116] = {.lex_state = 3, .external_lex_state = 5},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 54, .external_lex_state = 4},
  [119] = {.lex_state = 16, .external_lex_state = 4},
  [120] = {.lex_state = 3, .external_lex_state = 5},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 3, .external_lex_state = 5},
  [123] = {.lex_state = 54, .external_lex_state = 4},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 54, .external_lex_state = 4},
  [127] = {.lex_state = 3, .external_lex_state = 5},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 3, .external_lex_state = 5},
  [130] = {.lex_state = 54, .external_lex_state = 4},
  [131] = {.lex_state = 3, .external_lex_state = 5},
  [132] = {.lex_state = 3, .external_lex_state = 5},
  [133] = {.lex_state = 3, .external_lex_state = 5},
  [134] = {.lex_state = 14, .external_lex_state = 4},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 0, .external_lex_state = 4},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 14, .external_lex_state = 4},
  [141] = {.lex_state = 14, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 14, .external_lex_state = 4},
  [148] = {.lex_state = 14, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 14, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 3, .external_lex_state = 5},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 4},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 8, .external_lex_state = 4},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 0, .external_lex_state = 4},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 4},
  [182] = {.lex_state = 0, .external_lex_state = 4},
  [183] = {.lex_state = 57, .external_lex_state = 6},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0, .external_lex_state = 4},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 0, .external_lex_state = 6},
  [192] = {.lex_state = 0, .external_lex_state = 6},
  [193] = {.lex_state = 0, .external_lex_state = 6},
  [194] = {.lex_state = 0, .external_lex_state = 4},
  [195] = {.lex_state = 0, .external_lex_state = 4},
  [196] = {.lex_state = 0, .external_lex_state = 4},
  [197] = {.lex_state = 56, .external_lex_state = 6},
  [198] = {.lex_state = 0, .external_lex_state = 6},
  [199] = {.lex_state = 0, .external_lex_state = 7},
  [200] = {.lex_state = 0, .external_lex_state = 8},
  [201] = {.lex_state = 0, .external_lex_state = 6},
  [202] = {.lex_state = 0, .external_lex_state = 9},
  [203] = {.lex_state = 0, .external_lex_state = 4},
  [204] = {.lex_state = 0, .external_lex_state = 10},
  [205] = {.lex_state = 0, .external_lex_state = 8},
  [206] = {.lex_state = 0, .external_lex_state = 6},
  [207] = {.lex_state = 0, .external_lex_state = 6},
  [208] = {.lex_state = 0, .external_lex_state = 6},
  [209] = {.lex_state = 0, .external_lex_state = 6},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 0, .external_lex_state = 6},
  [212] = {.lex_state = 0, .external_lex_state = 6},
  [213] = {.lex_state = 0, .external_lex_state = 6},
  [214] = {.lex_state = 0, .external_lex_state = 6},
  [215] = {.lex_state = 0, .external_lex_state = 6},
  [216] = {.lex_state = 0, .external_lex_state = 6},
  [217] = {.lex_state = 0, .external_lex_state = 6},
  [218] = {.lex_state = 57, .external_lex_state = 3},
  [219] = {.lex_state = 0, .external_lex_state = 6},
  [220] = {.lex_state = 0, .external_lex_state = 6},
  [221] = {.lex_state = 0, .external_lex_state = 6},
  [222] = {.lex_state = 0, .external_lex_state = 6},
  [223] = {.lex_state = 0, .external_lex_state = 6},
  [224] = {.lex_state = 0, .external_lex_state = 6},
  [225] = {.lex_state = 0, .external_lex_state = 6},
  [226] = {.lex_state = 0, .external_lex_state = 6},
  [227] = {.lex_state = 0, .external_lex_state = 6},
  [228] = {.lex_state = 0, .external_lex_state = 6},
  [229] = {.lex_state = 0, .external_lex_state = 6},
  [230] = {.lex_state = 0, .external_lex_state = 6},
  [231] = {.lex_state = 0, .external_lex_state = 6},
  [232] = {.lex_state = 0, .external_lex_state = 6},
  [233] = {.lex_state = 0, .external_lex_state = 6},
  [234] = {.lex_state = 0, .external_lex_state = 6},
  [235] = {.lex_state = 0, .external_lex_state = 6},
  [236] = {.lex_state = 0, .external_lex_state = 6},
  [237] = {.lex_state = 0, .external_lex_state = 6},
  [238] = {.lex_state = 0, .external_lex_state = 6},
  [239] = {.lex_state = 0, .external_lex_state = 6},
  [240] = {.lex_state = 0, .external_lex_state = 6},
  [241] = {.lex_state = 0, .external_lex_state = 6},
  [242] = {.lex_state = 0, .external_lex_state = 6},
  [243] = {.lex_state = 0, .external_lex_state = 6},
  [244] = {.lex_state = 0, .external_lex_state = 6},
  [245] = {.lex_state = 0, .external_lex_state = 6},
  [246] = {.lex_state = 0, .external_lex_state = 6},
  [247] = {.lex_state = 0, .external_lex_state = 6},
  [248] = {.lex_state = 0, .external_lex_state = 6},
  [249] = {.lex_state = 0, .external_lex_state = 6},
  [250] = {.lex_state = 0, .external_lex_state = 6},
  [251] = {.lex_state = 57, .external_lex_state = 3},
  [252] = {.lex_state = 0, .external_lex_state = 6},
  [253] = {.lex_state = 0, .external_lex_state = 6},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 0, .external_lex_state = 6},
  [256] = {.lex_state = 0, .external_lex_state = 6},
  [257] = {.lex_state = 0, .external_lex_state = 6},
  [258] = {.lex_state = 0, .external_lex_state = 6},
  [259] = {.lex_state = 0, .external_lex_state = 6},
  [260] = {.lex_state = 0, .external_lex_state = 6},
  [261] = {.lex_state = 0, .external_lex_state = 6},
  [262] = {.lex_state = 0, .external_lex_state = 6},
  [263] = {.lex_state = 57, .external_lex_state = 3},
  [264] = {.lex_state = 0, .external_lex_state = 6},
  [265] = {.lex_state = 0, .external_lex_state = 6},
  [266] = {.lex_state = 0, .external_lex_state = 6},
  [267] = {.lex_state = 57, .external_lex_state = 3},
  [268] = {.lex_state = 0, .external_lex_state = 6},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 0, .external_lex_state = 6},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 0, .external_lex_state = 11},
  [275] = {.lex_state = 0, .external_lex_state = 12},
  [276] = {.lex_state = 57},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0, .external_lex_state = 11},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 57},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 0, .external_lex_state = 13},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 0, .external_lex_state = 14},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 8},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 8},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0, .external_lex_state = 5},
  [300] = {.lex_state = 57},
  [301] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__closed_tag] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_attr_shortcut_custom] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__attr_name] = ACTIONS(1),
    [sym_attr_assignment] = ACTIONS(1),
    [sym_attr_assignment_noescape] = ACTIONS(1),
    [sym__element_rest_text] = ACTIONS(1),
    [anon_sym_doctype] = ACTIONS(1),
    [anon_sym_html] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_strict] = ACTIONS(1),
    [anon_sym_frameset] = ACTIONS(1),
    [anon_sym_mobile] = ACTIONS(1),
    [anon_sym_basic] = ACTIONS(1),
    [anon_sym_transitional] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [sym_output_modifier_leading_whitespace] = ACTIONS(1),
    [sym_output_modifier_trailing_whitespace] = ACTIONS(1),
    [sym_output_modifier_legacy_trailing_whitespace] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_markdown] = ACTIONS(1),
    [anon_sym_textile] = ACTIONS(1),
    [anon_sym_rdoc] = ACTIONS(1),
    [anon_sym_coffee] = ACTIONS(1),
    [anon_sym_less] = ACTIONS(1),
    [anon_sym_sass] = ACTIONS(1),
    [anon_sym_scss] = ACTIONS(1),
    [anon_sym_javascript] = ACTIONS(1),
    [anon_sym_css] = ACTIONS(1),
    [anon_sym_ruby] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_verbatim_text_modifier_trailing_whitespace] = ACTIONS(1),
    [anon_sym_SLASH_LBRACK] = ACTIONS(1),
    [sym__space_or_newline] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__block_start] = ACTIONS(1),
    [sym__block_end] = ACTIONS(1),
    [sym__line_separator] = ACTIONS(1),
    [sym_attr_value_quoted] = ACTIONS(1),
    [sym__attr_value_ruby] = ACTIONS(1),
    [sym__attr_value_ruby_p] = ACTIONS(1),
    [sym__attr_value_ruby_s] = ACTIONS(1),
    [sym__attr_value_ruby_b] = ACTIONS(1),
    [sym_ruby] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(278),
    [sym__block] = STATE(288),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__block_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      anon_sym_SLASH_LBRACK,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(35), 1,
      sym__block_end,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(119), 1,
      sym__html_comment_conditional_marker,
    STATE(156), 1,
      sym__html_comment_conditional_incomplete,
    STATE(214), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(19), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(224), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(207), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [94] = 24,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      anon_sym_SLASH_LBRACK,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(37), 1,
      sym__block_end,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(119), 1,
      sym__html_comment_conditional_marker,
    STATE(156), 1,
      sym__html_comment_conditional_incomplete,
    STATE(214), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(19), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(224), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(207), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [188] = 24,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      anon_sym_SLASH_LBRACK,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(39), 1,
      sym__block_end,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(119), 1,
      sym__html_comment_conditional_marker,
    STATE(156), 1,
      sym__html_comment_conditional_incomplete,
    STATE(214), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(19), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(224), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(207), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [282] = 24,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      anon_sym_SLASH_LBRACK,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(41), 1,
      sym__block_end,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(119), 1,
      sym__html_comment_conditional_marker,
    STATE(156), 1,
      sym__html_comment_conditional_incomplete,
    STATE(214), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(19), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(224), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(207), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [376] = 23,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      anon_sym_SLASH_LBRACK,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(119), 1,
      sym__html_comment_conditional_marker,
    STATE(156), 1,
      sym__html_comment_conditional_incomplete,
    STATE(214), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(19), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(224), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(207), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [467] = 23,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      anon_sym_SLASH_LBRACK,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(119), 1,
      sym__html_comment_conditional_marker,
    STATE(156), 1,
      sym__html_comment_conditional_incomplete,
    STATE(201), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(19), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(224), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(207), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [558] = 23,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      anon_sym_SLASH_LBRACK,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(119), 1,
      sym__html_comment_conditional_marker,
    STATE(156), 1,
      sym__html_comment_conditional_incomplete,
    STATE(198), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(19), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(224), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(207), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [649] = 26,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(45), 1,
      sym__closed_tag,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__space,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(12), 1,
      sym_attr_shortcuts,
    STATE(21), 1,
      sym_attrs,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(63), 2,
      sym__block_end,
      sym__line_separator,
    STATE(10), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(19), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(241), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(61), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [743] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(65), 1,
      sym__closed_tag,
    ACTIONS(67), 1,
      sym__space,
    STATE(23), 1,
      sym_attrs,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(69), 2,
      sym__block_end,
      sym__line_separator,
    STATE(30), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(208), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(61), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [817] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(71), 1,
      sym__closed_tag,
    ACTIONS(73), 1,
      sym__space,
    STATE(26), 1,
      sym_attrs,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(75), 2,
      sym__block_end,
      sym__line_separator,
    STATE(30), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(223), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(61), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [891] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(77), 1,
      sym__closed_tag,
    ACTIONS(79), 1,
      sym__space,
    STATE(22), 1,
      sym_attrs,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(81), 2,
      sym__block_end,
      sym__line_separator,
    STATE(13), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(230), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(61), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [965] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(83), 1,
      sym__closed_tag,
    ACTIONS(85), 1,
      sym__space,
    STATE(25), 1,
      sym_attrs,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(87), 2,
      sym__block_end,
      sym__line_separator,
    STATE(30), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(236), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(61), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1039] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(89), 1,
      sym__closed_tag,
    ACTIONS(91), 1,
      sym__space,
    STATE(20), 1,
      sym_attrs,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(93), 2,
      sym__block_end,
      sym__line_separator,
    STATE(11), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(225), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(61), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1113] = 7,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      sym_attr_shortcut_custom,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(19), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    ACTIONS(106), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(95), 12,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1151] = 7,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(19), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    ACTIONS(110), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(108), 12,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1189] = 10,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(19), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(253), 2,
      sym_element,
      sym_embedded_engine,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [1232] = 3,
    ACTIONS(116), 1,
      sym_css_identifier,
    ACTIONS(114), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(112), 14,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1259] = 2,
    ACTIONS(120), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(118), 14,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1283] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(122), 1,
      sym__closed_tag,
    ACTIONS(124), 1,
      sym__space,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(126), 2,
      sym__block_end,
      sym__line_separator,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(232), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1329] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(128), 1,
      sym__closed_tag,
    ACTIONS(130), 1,
      sym__space,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(132), 2,
      sym__block_end,
      sym__line_separator,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(237), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1375] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(134), 1,
      sym__closed_tag,
    ACTIONS(136), 1,
      sym__space,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(138), 2,
      sym__block_end,
      sym__line_separator,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(239), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1421] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(140), 1,
      sym__closed_tag,
    ACTIONS(142), 1,
      sym__space,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(144), 2,
      sym__block_end,
      sym__line_separator,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(246), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1467] = 2,
    ACTIONS(148), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(146), 14,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1491] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(150), 1,
      sym__closed_tag,
    ACTIONS(152), 1,
      sym__space,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(154), 2,
      sym__block_end,
      sym__line_separator,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(215), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1537] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(156), 1,
      sym__closed_tag,
    ACTIONS(158), 1,
      sym__space,
    STATE(115), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    ACTIONS(160), 2,
      sym__block_end,
      sym__line_separator,
    STATE(252), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(257), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1583] = 2,
    ACTIONS(164), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(162), 14,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1607] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      sym__attr_name,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(182), 1,
      sym__space,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(208), 1,
      sym_nested,
    STATE(210), 1,
      sym_attr_name,
    STATE(235), 1,
      sym__block,
    ACTIONS(69), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1658] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      sym__attr_name,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(182), 1,
      sym__space,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(210), 1,
      sym_attr_name,
    STATE(235), 1,
      sym__block,
    STATE(236), 1,
      sym_nested,
    ACTIONS(87), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1709] = 4,
    STATE(30), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(188), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    ACTIONS(186), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(184), 9,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
  [1736] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      sym__attr_name,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(182), 1,
      sym__space,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(210), 1,
      sym_attr_name,
    STATE(235), 1,
      sym__block,
    STATE(244), 1,
      sym_nested,
    ACTIONS(191), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1787] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      sym__attr_name,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(182), 1,
      sym__space,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(206), 1,
      sym_nested,
    STATE(210), 1,
      sym_attr_name,
    STATE(235), 1,
      sym__block,
    ACTIONS(193), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1838] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      sym__attr_name,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(182), 1,
      sym__space,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(210), 1,
      sym_attr_name,
    STATE(213), 1,
      sym_nested,
    STATE(235), 1,
      sym__block,
    ACTIONS(195), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1889] = 16,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      sym__attr_name,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(182), 1,
      sym__space,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(210), 1,
      sym_attr_name,
    STATE(223), 1,
      sym_nested,
    STATE(235), 1,
      sym__block,
    ACTIONS(75), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1940] = 2,
    ACTIONS(199), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(197), 12,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1961] = 7,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym__attr_name,
    ACTIONS(208), 1,
      sym__space,
    STATE(210), 1,
      sym_attr_name,
    ACTIONS(206), 2,
      sym__element_rest_text,
      anon_sym_EQ,
    STATE(37), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(201), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [1990] = 7,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      sym__attr_name,
    ACTIONS(221), 1,
      sym__space,
    STATE(210), 1,
      sym_attr_name,
    ACTIONS(219), 2,
      sym__element_rest_text,
      anon_sym_EQ,
    STATE(37), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(211), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2019] = 4,
    ACTIONS(228), 1,
      anon_sym_xml,
    ACTIONS(224), 2,
      anon_sym_html,
      anon_sym_5,
    STATE(264), 4,
      sym__doctype_html,
      sym_doctype_html5,
      sym_doctype_xhtml,
      sym__doctype_xml,
    ACTIONS(226), 6,
      anon_sym_1_DOT1,
      anon_sym_strict,
      anon_sym_frameset,
      anon_sym_mobile,
      anon_sym_basic,
      anon_sym_transitional,
  [2041] = 2,
    ACTIONS(232), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(230), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [2057] = 2,
    ACTIONS(219), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(211), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [2073] = 2,
    ACTIONS(236), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(234), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [2089] = 2,
    ACTIONS(240), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(238), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [2105] = 7,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      sym__space,
    STATE(283), 1,
      sym_attrs,
    STATE(286), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [2131] = 2,
    ACTIONS(254), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(252), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2146] = 2,
    ACTIONS(258), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(256), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2161] = 2,
    ACTIONS(262), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(260), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2176] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(264), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym_nested,
    STATE(235), 1,
      sym__block,
    ACTIONS(266), 2,
      sym__block_end,
      sym__line_separator,
  [2205] = 2,
    ACTIONS(270), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(268), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2220] = 2,
    ACTIONS(274), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(272), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2235] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(264), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(216), 1,
      sym_nested,
    STATE(235), 1,
      sym__block,
    ACTIONS(276), 2,
      sym__block_end,
      sym__line_separator,
  [2264] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(264), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    STATE(255), 1,
      sym_nested,
    ACTIONS(278), 2,
      sym__block_end,
      sym__line_separator,
  [2293] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(264), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(221), 1,
      sym_nested,
    STATE(235), 1,
      sym__block,
    ACTIONS(280), 2,
      sym__block_end,
      sym__line_separator,
  [2322] = 2,
    ACTIONS(284), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(282), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2337] = 2,
    ACTIONS(288), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(286), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2352] = 2,
    ACTIONS(292), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(290), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2367] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(264), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(235), 1,
      sym__block,
    STATE(243), 1,
      sym_nested,
    ACTIONS(294), 2,
      sym__block_end,
      sym__line_separator,
  [2396] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(264), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(227), 1,
      sym_nested,
    STATE(235), 1,
      sym__block,
    ACTIONS(296), 2,
      sym__block_end,
      sym__line_separator,
  [2425] = 2,
    ACTIONS(300), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(298), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2440] = 2,
    ACTIONS(304), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(302), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2455] = 2,
    ACTIONS(308), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(306), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2470] = 2,
    ACTIONS(312), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(310), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2485] = 2,
    ACTIONS(316), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(314), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2500] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(324), 1,
      sym__space_or_newline,
    STATE(68), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(121), 1,
      sym_attr_name,
    STATE(169), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2526] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      sym__space,
    STATE(269), 1,
      sym_attr_name,
    STATE(102), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [2552] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      sym__space_or_newline,
    STATE(72), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(173), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2578] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    ACTIONS(346), 1,
      sym__space_or_newline,
    STATE(73), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(117), 1,
      sym_attr_name,
    STATE(180), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2604] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    ACTIONS(350), 1,
      sym__space_or_newline,
    STATE(66), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(117), 1,
      sym_attr_name,
    STATE(180), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2630] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 1,
      sym__space_or_newline,
    STATE(74), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(121), 1,
      sym_attr_name,
    STATE(169), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2656] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      sym__space_or_newline,
    STATE(75), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(173), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2682] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    ACTIONS(346), 1,
      sym__space_or_newline,
    STATE(76), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(117), 1,
      sym_attr_name,
    STATE(180), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2708] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 1,
      sym__space_or_newline,
    STATE(77), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(121), 1,
      sym_attr_name,
    STATE(169), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2734] = 8,
    ACTIONS(356), 1,
      anon_sym_STAR,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    ACTIONS(361), 1,
      sym__attr_name,
    ACTIONS(364), 1,
      sym__space_or_newline,
    STATE(72), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(173), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2760] = 8,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    ACTIONS(372), 1,
      sym__attr_name,
    ACTIONS(375), 1,
      sym__space_or_newline,
    STATE(73), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(117), 1,
      sym_attr_name,
    STATE(180), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2786] = 8,
    ACTIONS(378), 1,
      anon_sym_STAR,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 1,
      sym__attr_name,
    ACTIONS(386), 1,
      sym__space_or_newline,
    STATE(74), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(121), 1,
      sym_attr_name,
    STATE(169), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2812] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    ACTIONS(391), 1,
      sym__space_or_newline,
    STATE(72), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(173), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2838] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    ACTIONS(395), 1,
      sym__space_or_newline,
    STATE(73), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(117), 1,
      sym_attr_name,
    STATE(180), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2864] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    ACTIONS(399), 1,
      sym__space_or_newline,
    STATE(74), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(121), 1,
      sym_attr_name,
    STATE(169), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2890] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 1,
      sym__space_or_newline,
    STATE(81), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(173), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2916] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    ACTIONS(407), 1,
      sym__space_or_newline,
    STATE(82), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(117), 1,
      sym_attr_name,
    STATE(180), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2942] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    ACTIONS(411), 1,
      sym__space_or_newline,
    STATE(83), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(121), 1,
      sym_attr_name,
    STATE(169), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2968] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    ACTIONS(415), 1,
      sym__space_or_newline,
    STATE(72), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(173), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2994] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    ACTIONS(419), 1,
      sym__space_or_newline,
    STATE(73), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(117), 1,
      sym_attr_name,
    STATE(180), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3020] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    ACTIONS(423), 1,
      sym__space_or_newline,
    STATE(74), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(121), 1,
      sym_attr_name,
    STATE(169), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3046] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    ACTIONS(415), 1,
      sym__space_or_newline,
    STATE(87), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(173), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3072] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    ACTIONS(419), 1,
      sym__space_or_newline,
    STATE(88), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(117), 1,
      sym_attr_name,
    STATE(180), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3098] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    ACTIONS(423), 1,
      sym__space_or_newline,
    STATE(89), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(121), 1,
      sym_attr_name,
    STATE(169), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3124] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(427), 1,
      sym__space_or_newline,
    STATE(72), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(173), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3150] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
    ACTIONS(431), 1,
      sym__space_or_newline,
    STATE(73), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(117), 1,
      sym_attr_name,
    STATE(180), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3176] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    ACTIONS(435), 1,
      sym__space_or_newline,
    STATE(74), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(121), 1,
      sym_attr_name,
    STATE(169), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3202] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    ACTIONS(439), 1,
      sym__space_or_newline,
    STATE(65), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(173), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3228] = 2,
    ACTIONS(443), 3,
      sym__attr_name,
      sym_attr_assignment,
      sym__space_or_newline,
    ACTIONS(441), 5,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_attr_assignment_noescape,
  [3241] = 7,
    ACTIONS(441), 1,
      sym_attr_assignment_noescape,
    ACTIONS(443), 1,
      sym_attr_assignment,
    ACTIONS(445), 1,
      sym__element_rest_text,
    ACTIONS(447), 1,
      sym__space,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(211), 1,
      sym__text_nested,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [3264] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_attr_name,
    STATE(174), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3284] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3304] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3324] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3344] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_attr_name,
    STATE(174), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3364] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3384] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3404] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3424] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_attr_name,
    STATE(174), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3444] = 6,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(334), 1,
      sym__space,
    STATE(269), 1,
      sym_attr_name,
    STATE(103), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [3464] = 6,
    ACTIONS(211), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      sym__attr_name,
    ACTIONS(461), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      sym__space,
    STATE(269), 1,
      sym_attr_name,
    STATE(103), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [3484] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_attr_name,
    STATE(174), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3504] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3524] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3544] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3564] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3584] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_attr_name,
    STATE(174), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3604] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_attr_name,
    STATE(174), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3624] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3644] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3664] = 5,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    STATE(121), 1,
      sym_attr_name,
    STATE(174), 1,
      sym__attr_delimited_b,
    STATE(168), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3681] = 3,
    ACTIONS(473), 1,
      sym_ruby,
    STATE(120), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3694] = 5,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(475), 1,
      sym__element_rest_text,
    STATE(148), 1,
      aux_sym_element_text_repeat1,
    STATE(233), 1,
      sym__text_nested,
    ACTIONS(477), 2,
      sym__block_end,
      sym__line_separator,
  [3711] = 3,
    ACTIONS(184), 1,
      sym_ruby,
    STATE(116), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(479), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3724] = 4,
    ACTIONS(486), 1,
      sym_attr_assignment,
    ACTIONS(488), 1,
      sym_attr_assignment_noescape,
    ACTIONS(482), 2,
      anon_sym_STAR,
      anon_sym_RBRACK,
    ACTIONS(484), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3739] = 5,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(490), 1,
      sym__element_rest_text,
    ACTIONS(492), 1,
      sym__space,
    STATE(258), 1,
      sym__text_nested,
    ACTIONS(494), 2,
      sym__block_end,
      sym__line_separator,
  [3756] = 4,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    ACTIONS(498), 1,
      sym__html_comment_condition,
    STATE(297), 1,
      sym_html_comment_condition,
    ACTIONS(500), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3771] = 3,
    ACTIONS(502), 1,
      sym_ruby,
    STATE(116), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3784] = 4,
    ACTIONS(504), 1,
      sym_attr_assignment,
    ACTIONS(506), 1,
      sym_attr_assignment_noescape,
    ACTIONS(482), 2,
      anon_sym_STAR,
      anon_sym_RBRACE,
    ACTIONS(484), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3799] = 3,
    ACTIONS(508), 1,
      sym_ruby,
    STATE(116), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3812] = 5,
    ACTIONS(445), 1,
      sym__element_rest_text,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(510), 1,
      sym__space,
    STATE(211), 1,
      sym__text_nested,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [3829] = 4,
    ACTIONS(512), 1,
      sym_attr_assignment,
    ACTIONS(514), 1,
      sym_attr_assignment_noescape,
    ACTIONS(482), 2,
      anon_sym_STAR,
      anon_sym_RPAREN,
    ACTIONS(484), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3844] = 5,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(336), 1,
      anon_sym_STAR,
    STATE(124), 1,
      sym_attr_name,
    STATE(171), 1,
      sym__attr_delimited_p,
    STATE(187), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3861] = 5,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(516), 1,
      sym__element_rest_text,
    ACTIONS(518), 1,
      sym__space,
    STATE(240), 1,
      sym__text_nested,
    ACTIONS(520), 2,
      sym__block_end,
      sym__line_separator,
  [3878] = 3,
    ACTIONS(502), 1,
      sym_ruby,
    STATE(132), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3891] = 5,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_STAR,
    STATE(117), 1,
      sym_attr_name,
    STATE(167), 1,
      sym__attr_delimited_s,
    STATE(190), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3908] = 3,
    ACTIONS(508), 1,
      sym_ruby,
    STATE(133), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3921] = 5,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(522), 1,
      sym__element_rest_text,
    ACTIONS(524), 1,
      sym__space,
    STATE(233), 1,
      sym__text_nested,
    ACTIONS(477), 2,
      sym__block_end,
      sym__line_separator,
  [3938] = 3,
    ACTIONS(526), 1,
      sym_ruby,
    STATE(122), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3951] = 3,
    ACTIONS(528), 1,
      sym_ruby,
    STATE(116), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3964] = 3,
    ACTIONS(530), 1,
      sym_ruby,
    STATE(116), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3977] = 5,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(475), 1,
      sym__element_rest_text,
    STATE(148), 1,
      aux_sym_element_text_repeat1,
    STATE(211), 1,
      sym__text_nested,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [3994] = 1,
    ACTIONS(532), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__space,
  [4002] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(235), 1,
      sym__block,
    STATE(268), 1,
      sym_nested,
    ACTIONS(534), 2,
      sym__block_end,
      sym__line_separator,
  [4016] = 4,
    ACTIONS(536), 1,
      sym__block_start,
    ACTIONS(538), 1,
      sym__block_end,
    ACTIONS(540), 1,
      sym__line_separator,
    STATE(145), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4030] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(219), 1,
      sym_nested,
    STATE(235), 1,
      sym__block,
    ACTIONS(542), 2,
      sym__block_end,
      sym__line_separator,
  [4044] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(220), 1,
      sym_nested,
    STATE(235), 1,
      sym__block,
    ACTIONS(544), 2,
      sym__block_end,
      sym__line_separator,
  [4058] = 4,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(546), 1,
      sym__element_rest_text,
    STATE(222), 1,
      sym__text_nested,
    ACTIONS(548), 2,
      sym__block_end,
      sym__line_separator,
  [4072] = 4,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(490), 1,
      sym__element_rest_text,
    STATE(258), 1,
      sym__text_nested,
    ACTIONS(494), 2,
      sym__block_end,
      sym__line_separator,
  [4086] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(235), 1,
      sym__block,
    STATE(248), 1,
      sym_nested,
    ACTIONS(550), 2,
      sym__block_end,
      sym__line_separator,
  [4100] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(235), 1,
      sym__block,
    STATE(260), 1,
      sym_nested,
    ACTIONS(552), 2,
      sym__block_end,
      sym__line_separator,
  [4114] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(235), 1,
      sym__block,
    STATE(249), 1,
      sym_nested,
    ACTIONS(554), 2,
      sym__block_end,
      sym__line_separator,
  [4128] = 4,
    ACTIONS(556), 1,
      sym__block_start,
    ACTIONS(559), 1,
      sym__block_end,
    ACTIONS(561), 1,
      sym__line_separator,
    STATE(145), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4142] = 4,
    ACTIONS(536), 1,
      sym__block_start,
    ACTIONS(564), 1,
      sym__block_end,
    ACTIONS(566), 1,
      sym__line_separator,
    STATE(137), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4156] = 4,
    ACTIONS(445), 1,
      sym__element_rest_text,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(211), 1,
      sym__text_nested,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [4170] = 3,
    ACTIONS(568), 1,
      sym__element_rest_text,
    STATE(148), 1,
      aux_sym_element_text_repeat1,
    ACTIONS(571), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4182] = 4,
    ACTIONS(536), 1,
      sym__block_start,
    ACTIONS(573), 1,
      sym__block_end,
    ACTIONS(575), 1,
      sym__line_separator,
    STATE(152), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4196] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(235), 1,
      sym__block,
    STATE(265), 1,
      sym_nested,
    ACTIONS(577), 2,
      sym__block_end,
      sym__line_separator,
  [4210] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(235), 1,
      sym__block,
    STATE(270), 1,
      sym_nested,
    ACTIONS(579), 2,
      sym__block_end,
      sym__line_separator,
  [4224] = 4,
    ACTIONS(536), 1,
      sym__block_start,
    ACTIONS(581), 1,
      sym__block_end,
    ACTIONS(583), 1,
      sym__line_separator,
    STATE(145), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4238] = 4,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(585), 1,
      sym__element_rest_text,
    STATE(209), 1,
      sym__text_nested,
    ACTIONS(587), 2,
      sym__block_end,
      sym__line_separator,
  [4252] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(235), 1,
      sym__block,
    STATE(266), 1,
      sym_nested,
    ACTIONS(589), 2,
      sym__block_end,
      sym__line_separator,
  [4266] = 2,
    ACTIONS(236), 1,
      sym__attr_name,
    ACTIONS(234), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4275] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(262), 1,
      sym__text_nested,
    ACTIONS(591), 2,
      sym__block_end,
      sym__line_separator,
  [4286] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(226), 1,
      sym__text_nested,
    ACTIONS(593), 2,
      sym__block_end,
      sym__line_separator,
  [4297] = 2,
    ACTIONS(597), 1,
      sym__attr_name,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4306] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(229), 1,
      sym__text_nested,
    ACTIONS(599), 2,
      sym__block_end,
      sym__line_separator,
  [4317] = 1,
    ACTIONS(197), 4,
      sym_ruby,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [4324] = 2,
    ACTIONS(603), 1,
      sym__attr_name,
    ACTIONS(601), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4333] = 2,
    ACTIONS(607), 1,
      sym__attr_name,
    ACTIONS(605), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4342] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(256), 1,
      sym__text_nested,
    ACTIONS(609), 2,
      sym__block_end,
      sym__line_separator,
  [4353] = 2,
    ACTIONS(219), 1,
      sym__attr_name,
    ACTIONS(211), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4362] = 2,
    ACTIONS(240), 1,
      sym__attr_name,
    ACTIONS(238), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4371] = 2,
    ACTIONS(232), 1,
      sym__attr_name,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4380] = 2,
    ACTIONS(613), 1,
      sym__attr_name,
    ACTIONS(611), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4389] = 2,
    ACTIONS(617), 1,
      sym__attr_name,
    ACTIONS(615), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4398] = 2,
    ACTIONS(621), 1,
      sym__attr_name,
    ACTIONS(619), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4407] = 2,
    ACTIONS(623), 1,
      anon_sym_RBRACK,
    ACTIONS(625), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4416] = 2,
    ACTIONS(629), 1,
      sym__attr_name,
    ACTIONS(627), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4425] = 2,
    ACTIONS(633), 1,
      sym__attr_name,
    ACTIONS(631), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4434] = 2,
    ACTIONS(637), 1,
      sym__attr_name,
    ACTIONS(635), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4443] = 2,
    ACTIONS(641), 1,
      sym__attr_name,
    ACTIONS(639), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4452] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(211), 1,
      sym__text_nested,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [4463] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(258), 1,
      sym__text_nested,
    ACTIONS(494), 2,
      sym__block_end,
      sym__line_separator,
  [4474] = 2,
    ACTIONS(645), 1,
      sym__attr_name,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4483] = 4,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    STATE(164), 1,
      sym_attr,
    STATE(269), 1,
      sym_attr_name,
  [4496] = 2,
    ACTIONS(649), 1,
      sym__attr_name,
    ACTIONS(647), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4505] = 2,
    ACTIONS(653), 1,
      sym__attr_name,
    ACTIONS(651), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4514] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(209), 1,
      sym__text_nested,
    ACTIONS(587), 2,
      sym__block_end,
      sym__line_separator,
  [4525] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(242), 1,
      sym__text_nested,
    ACTIONS(655), 2,
      sym__block_end,
      sym__line_separator,
  [4536] = 3,
    ACTIONS(657), 1,
      sym__text_line,
    STATE(245), 1,
      sym__text,
    ACTIONS(659), 2,
      sym__block_end,
      sym__line_separator,
  [4547] = 2,
    ACTIONS(663), 1,
      sym__attr_name,
    ACTIONS(661), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4556] = 4,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    STATE(40), 1,
      sym_attr,
    STATE(210), 1,
      sym_attr_name,
  [4569] = 2,
    ACTIONS(667), 1,
      sym__attr_name,
    ACTIONS(665), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4578] = 2,
    ACTIONS(671), 1,
      sym__attr_name,
    ACTIONS(669), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4587] = 2,
    ACTIONS(675), 1,
      sym__attr_name,
    ACTIONS(673), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4596] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(222), 1,
      sym__text_nested,
    ACTIONS(548), 2,
      sym__block_end,
      sym__line_separator,
  [4607] = 2,
    ACTIONS(679), 1,
      sym__attr_name,
    ACTIONS(677), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4616] = 3,
    ACTIONS(681), 1,
      sym__block_end,
    ACTIONS(683), 1,
      sym__line_separator,
    STATE(191), 1,
      aux_sym__block_repeat1,
  [4626] = 3,
    ACTIONS(41), 1,
      sym__block_end,
    ACTIONS(686), 1,
      sym__line_separator,
    STATE(191), 1,
      aux_sym__block_repeat1,
  [4636] = 3,
    ACTIONS(37), 1,
      sym__block_end,
    ACTIONS(688), 1,
      sym__line_separator,
    STATE(191), 1,
      aux_sym__block_repeat1,
  [4646] = 1,
    ACTIONS(559), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4652] = 1,
    ACTIONS(690), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4658] = 1,
    ACTIONS(692), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4664] = 2,
    ACTIONS(694), 1,
      sym_doctype_xml_encoding,
    ACTIONS(696), 2,
      sym__block_end,
      sym__line_separator,
  [4672] = 3,
    ACTIONS(698), 1,
      sym__block_end,
    ACTIONS(700), 1,
      sym__line_separator,
    STATE(192), 1,
      aux_sym__block_repeat1,
  [4682] = 3,
    ACTIONS(702), 1,
      sym_attr_value_quoted,
    ACTIONS(704), 1,
      sym__attr_value_ruby_p,
    STATE(161), 1,
      sym__attr_delimited_value_p,
  [4692] = 3,
    ACTIONS(706), 1,
      sym_attr_value_quoted,
    ACTIONS(708), 1,
      sym__attr_value_ruby,
    STATE(166), 1,
      sym__attr_value,
  [4702] = 3,
    ACTIONS(710), 1,
      sym__block_end,
    ACTIONS(712), 1,
      sym__line_separator,
    STATE(193), 1,
      aux_sym__block_repeat1,
  [4712] = 3,
    ACTIONS(714), 1,
      sym_attr_value_quoted,
    ACTIONS(716), 1,
      sym__attr_value_ruby_b,
    STATE(188), 1,
      sym__attr_delimited_value_b,
  [4722] = 1,
    ACTIONS(718), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4728] = 3,
    ACTIONS(720), 1,
      sym_attr_value_quoted,
    ACTIONS(722), 1,
      sym__attr_value_ruby_s,
    STATE(179), 1,
      sym__attr_delimited_value_s,
  [4738] = 3,
    ACTIONS(724), 1,
      sym_attr_value_quoted,
    ACTIONS(726), 1,
      sym__attr_value_ruby,
    STATE(39), 1,
      sym__attr_value,
  [4748] = 1,
    ACTIONS(728), 2,
      sym__block_end,
      sym__line_separator,
  [4753] = 1,
    ACTIONS(730), 2,
      sym__block_end,
      sym__line_separator,
  [4758] = 1,
    ACTIONS(191), 2,
      sym__block_end,
      sym__line_separator,
  [4763] = 1,
    ACTIONS(593), 2,
      sym__block_end,
      sym__line_separator,
  [4768] = 2,
    ACTIONS(732), 1,
      sym_attr_assignment,
    ACTIONS(734), 1,
      sym_attr_assignment_noescape,
  [4775] = 1,
    ACTIONS(587), 2,
      sym__block_end,
      sym__line_separator,
  [4780] = 1,
    ACTIONS(736), 2,
      sym__block_end,
      sym__line_separator,
  [4785] = 1,
    ACTIONS(738), 2,
      sym__block_end,
      sym__line_separator,
  [4790] = 1,
    ACTIONS(681), 2,
      sym__block_end,
      sym__line_separator,
  [4795] = 1,
    ACTIONS(296), 2,
      sym__block_end,
      sym__line_separator,
  [4800] = 1,
    ACTIONS(740), 2,
      sym__block_end,
      sym__line_separator,
  [4805] = 1,
    ACTIONS(690), 2,
      sym__block_end,
      sym__line_separator,
  [4810] = 2,
    ACTIONS(742), 1,
      sym__text_line,
    ACTIONS(744), 1,
      sym__block_end,
  [4817] = 1,
    ACTIONS(746), 2,
      sym__block_end,
      sym__line_separator,
  [4822] = 1,
    ACTIONS(748), 2,
      sym__block_end,
      sym__line_separator,
  [4827] = 1,
    ACTIONS(750), 2,
      sym__block_end,
      sym__line_separator,
  [4832] = 1,
    ACTIONS(599), 2,
      sym__block_end,
      sym__line_separator,
  [4837] = 1,
    ACTIONS(193), 2,
      sym__block_end,
      sym__line_separator,
  [4842] = 1,
    ACTIONS(752), 2,
      sym__block_end,
      sym__line_separator,
  [4847] = 1,
    ACTIONS(75), 2,
      sym__block_end,
      sym__line_separator,
  [4852] = 1,
    ACTIONS(754), 2,
      sym__block_end,
      sym__line_separator,
  [4857] = 1,
    ACTIONS(756), 2,
      sym__block_end,
      sym__line_separator,
  [4862] = 1,
    ACTIONS(692), 2,
      sym__block_end,
      sym__line_separator,
  [4867] = 1,
    ACTIONS(758), 2,
      sym__block_end,
      sym__line_separator,
  [4872] = 1,
    ACTIONS(87), 2,
      sym__block_end,
      sym__line_separator,
  [4877] = 1,
    ACTIONS(760), 2,
      sym__block_end,
      sym__line_separator,
  [4882] = 1,
    ACTIONS(278), 2,
      sym__block_end,
      sym__line_separator,
  [4887] = 1,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [4892] = 1,
    ACTIONS(762), 2,
      sym__block_end,
      sym__line_separator,
  [4897] = 1,
    ACTIONS(764), 2,
      sym__block_end,
      sym__line_separator,
  [4902] = 1,
    ACTIONS(195), 2,
      sym__block_end,
      sym__line_separator,
  [4907] = 1,
    ACTIONS(294), 2,
      sym__block_end,
      sym__line_separator,
  [4912] = 1,
    ACTIONS(766), 2,
      sym__block_end,
      sym__line_separator,
  [4917] = 1,
    ACTIONS(266), 2,
      sym__block_end,
      sym__line_separator,
  [4922] = 1,
    ACTIONS(494), 2,
      sym__block_end,
      sym__line_separator,
  [4927] = 1,
    ACTIONS(69), 2,
      sym__block_end,
      sym__line_separator,
  [4932] = 1,
    ACTIONS(768), 2,
      sym__block_end,
      sym__line_separator,
  [4937] = 1,
    ACTIONS(770), 2,
      sym__block_end,
      sym__line_separator,
  [4942] = 1,
    ACTIONS(772), 2,
      sym__block_end,
      sym__line_separator,
  [4947] = 1,
    ACTIONS(774), 2,
      sym__block_end,
      sym__line_separator,
  [4952] = 1,
    ACTIONS(276), 2,
      sym__block_end,
      sym__line_separator,
  [4957] = 1,
    ACTIONS(776), 2,
      sym__block_end,
      sym__line_separator,
  [4962] = 1,
    ACTIONS(778), 2,
      sym__block_end,
      sym__line_separator,
  [4967] = 1,
    ACTIONS(780), 2,
      sym__block_end,
      sym__line_separator,
  [4972] = 1,
    ACTIONS(718), 2,
      sym__block_end,
      sym__line_separator,
  [4977] = 2,
    ACTIONS(538), 1,
      sym__block_end,
    ACTIONS(742), 1,
      sym__text_line,
  [4984] = 1,
    ACTIONS(782), 2,
      sym__block_end,
      sym__line_separator,
  [4989] = 1,
    ACTIONS(784), 2,
      sym__block_end,
      sym__line_separator,
  [4994] = 2,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
  [5001] = 1,
    ACTIONS(786), 2,
      sym__block_end,
      sym__line_separator,
  [5006] = 1,
    ACTIONS(788), 2,
      sym__block_end,
      sym__line_separator,
  [5011] = 1,
    ACTIONS(280), 2,
      sym__block_end,
      sym__line_separator,
  [5016] = 1,
    ACTIONS(548), 2,
      sym__block_end,
      sym__line_separator,
  [5021] = 1,
    ACTIONS(790), 2,
      sym__block_end,
      sym__line_separator,
  [5026] = 1,
    ACTIONS(792), 2,
      sym__block_end,
      sym__line_separator,
  [5031] = 1,
    ACTIONS(794), 2,
      sym__block_end,
      sym__line_separator,
  [5036] = 1,
    ACTIONS(796), 2,
      sym__block_end,
      sym__line_separator,
  [5041] = 2,
    ACTIONS(581), 1,
      sym__block_end,
    ACTIONS(742), 1,
      sym__text_line,
  [5048] = 1,
    ACTIONS(798), 2,
      sym__block_end,
      sym__line_separator,
  [5053] = 1,
    ACTIONS(800), 2,
      sym__block_end,
      sym__line_separator,
  [5058] = 1,
    ACTIONS(802), 2,
      sym__block_end,
      sym__line_separator,
  [5063] = 2,
    ACTIONS(742), 1,
      sym__text_line,
    ACTIONS(804), 1,
      sym__block_end,
  [5070] = 1,
    ACTIONS(806), 2,
      sym__block_end,
      sym__line_separator,
  [5075] = 2,
    ACTIONS(808), 1,
      sym_attr_assignment,
    ACTIONS(810), 1,
      sym_attr_assignment_noescape,
  [5082] = 1,
    ACTIONS(812), 2,
      sym__block_end,
      sym__line_separator,
  [5087] = 1,
    ACTIONS(282), 1,
      anon_sym_COLON,
  [5091] = 1,
    ACTIONS(256), 1,
      anon_sym_COLON,
  [5095] = 1,
    ACTIONS(252), 1,
      anon_sym_COLON,
  [5099] = 1,
    ACTIONS(814), 1,
      sym__attr_value_ruby,
  [5103] = 1,
    ACTIONS(816), 1,
      sym__attr_value_ruby_b,
  [5107] = 1,
    ACTIONS(742), 1,
      sym__text_line,
  [5111] = 1,
    ACTIONS(760), 1,
      ts_builtin_sym_end,
  [5115] = 1,
    ACTIONS(818), 1,
      ts_builtin_sym_end,
  [5119] = 1,
    ACTIONS(820), 1,
      sym__attr_value_ruby,
  [5123] = 1,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
  [5127] = 1,
    ACTIONS(822), 1,
      sym__text_line,
  [5131] = 1,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [5135] = 1,
    ACTIONS(824), 1,
      anon_sym_COLON,
  [5139] = 1,
    ACTIONS(826), 1,
      sym__attr_value_ruby_s,
  [5143] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [5147] = 1,
    ACTIONS(310), 1,
      anon_sym_COLON,
  [5151] = 1,
    ACTIONS(828), 1,
      sym__attr_value_ruby_p,
  [5155] = 1,
    ACTIONS(830), 1,
      ts_builtin_sym_end,
  [5159] = 1,
    ACTIONS(260), 1,
      anon_sym_COLON,
  [5163] = 1,
    ACTIONS(298), 1,
      anon_sym_COLON,
  [5167] = 1,
    ACTIONS(832), 1,
      sym__space,
  [5171] = 1,
    ACTIONS(302), 1,
      anon_sym_COLON,
  [5175] = 1,
    ACTIONS(306), 1,
      anon_sym_COLON,
  [5179] = 1,
    ACTIONS(268), 1,
      anon_sym_COLON,
  [5183] = 1,
    ACTIONS(272), 1,
      anon_sym_COLON,
  [5187] = 1,
    ACTIONS(834), 1,
      sym_css_identifier,
  [5191] = 1,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
  [5195] = 1,
    ACTIONS(762), 1,
      ts_builtin_sym_end,
  [5199] = 1,
    ACTIONS(838), 1,
      sym_ruby,
  [5203] = 1,
    ACTIONS(840), 1,
      sym__text_line,
  [5207] = 1,
    ACTIONS(314), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 188,
  [SMALL_STATE(5)] = 282,
  [SMALL_STATE(6)] = 376,
  [SMALL_STATE(7)] = 467,
  [SMALL_STATE(8)] = 558,
  [SMALL_STATE(9)] = 649,
  [SMALL_STATE(10)] = 743,
  [SMALL_STATE(11)] = 817,
  [SMALL_STATE(12)] = 891,
  [SMALL_STATE(13)] = 965,
  [SMALL_STATE(14)] = 1039,
  [SMALL_STATE(15)] = 1113,
  [SMALL_STATE(16)] = 1151,
  [SMALL_STATE(17)] = 1189,
  [SMALL_STATE(18)] = 1232,
  [SMALL_STATE(19)] = 1259,
  [SMALL_STATE(20)] = 1283,
  [SMALL_STATE(21)] = 1329,
  [SMALL_STATE(22)] = 1375,
  [SMALL_STATE(23)] = 1421,
  [SMALL_STATE(24)] = 1467,
  [SMALL_STATE(25)] = 1491,
  [SMALL_STATE(26)] = 1537,
  [SMALL_STATE(27)] = 1583,
  [SMALL_STATE(28)] = 1607,
  [SMALL_STATE(29)] = 1658,
  [SMALL_STATE(30)] = 1709,
  [SMALL_STATE(31)] = 1736,
  [SMALL_STATE(32)] = 1787,
  [SMALL_STATE(33)] = 1838,
  [SMALL_STATE(34)] = 1889,
  [SMALL_STATE(35)] = 1940,
  [SMALL_STATE(36)] = 1961,
  [SMALL_STATE(37)] = 1990,
  [SMALL_STATE(38)] = 2019,
  [SMALL_STATE(39)] = 2041,
  [SMALL_STATE(40)] = 2057,
  [SMALL_STATE(41)] = 2073,
  [SMALL_STATE(42)] = 2089,
  [SMALL_STATE(43)] = 2105,
  [SMALL_STATE(44)] = 2131,
  [SMALL_STATE(45)] = 2146,
  [SMALL_STATE(46)] = 2161,
  [SMALL_STATE(47)] = 2176,
  [SMALL_STATE(48)] = 2205,
  [SMALL_STATE(49)] = 2220,
  [SMALL_STATE(50)] = 2235,
  [SMALL_STATE(51)] = 2264,
  [SMALL_STATE(52)] = 2293,
  [SMALL_STATE(53)] = 2322,
  [SMALL_STATE(54)] = 2337,
  [SMALL_STATE(55)] = 2352,
  [SMALL_STATE(56)] = 2367,
  [SMALL_STATE(57)] = 2396,
  [SMALL_STATE(58)] = 2425,
  [SMALL_STATE(59)] = 2440,
  [SMALL_STATE(60)] = 2455,
  [SMALL_STATE(61)] = 2470,
  [SMALL_STATE(62)] = 2485,
  [SMALL_STATE(63)] = 2500,
  [SMALL_STATE(64)] = 2526,
  [SMALL_STATE(65)] = 2552,
  [SMALL_STATE(66)] = 2578,
  [SMALL_STATE(67)] = 2604,
  [SMALL_STATE(68)] = 2630,
  [SMALL_STATE(69)] = 2656,
  [SMALL_STATE(70)] = 2682,
  [SMALL_STATE(71)] = 2708,
  [SMALL_STATE(72)] = 2734,
  [SMALL_STATE(73)] = 2760,
  [SMALL_STATE(74)] = 2786,
  [SMALL_STATE(75)] = 2812,
  [SMALL_STATE(76)] = 2838,
  [SMALL_STATE(77)] = 2864,
  [SMALL_STATE(78)] = 2890,
  [SMALL_STATE(79)] = 2916,
  [SMALL_STATE(80)] = 2942,
  [SMALL_STATE(81)] = 2968,
  [SMALL_STATE(82)] = 2994,
  [SMALL_STATE(83)] = 3020,
  [SMALL_STATE(84)] = 3046,
  [SMALL_STATE(85)] = 3072,
  [SMALL_STATE(86)] = 3098,
  [SMALL_STATE(87)] = 3124,
  [SMALL_STATE(88)] = 3150,
  [SMALL_STATE(89)] = 3176,
  [SMALL_STATE(90)] = 3202,
  [SMALL_STATE(91)] = 3228,
  [SMALL_STATE(92)] = 3241,
  [SMALL_STATE(93)] = 3264,
  [SMALL_STATE(94)] = 3284,
  [SMALL_STATE(95)] = 3304,
  [SMALL_STATE(96)] = 3324,
  [SMALL_STATE(97)] = 3344,
  [SMALL_STATE(98)] = 3364,
  [SMALL_STATE(99)] = 3384,
  [SMALL_STATE(100)] = 3404,
  [SMALL_STATE(101)] = 3424,
  [SMALL_STATE(102)] = 3444,
  [SMALL_STATE(103)] = 3464,
  [SMALL_STATE(104)] = 3484,
  [SMALL_STATE(105)] = 3504,
  [SMALL_STATE(106)] = 3524,
  [SMALL_STATE(107)] = 3544,
  [SMALL_STATE(108)] = 3564,
  [SMALL_STATE(109)] = 3584,
  [SMALL_STATE(110)] = 3604,
  [SMALL_STATE(111)] = 3624,
  [SMALL_STATE(112)] = 3644,
  [SMALL_STATE(113)] = 3664,
  [SMALL_STATE(114)] = 3681,
  [SMALL_STATE(115)] = 3694,
  [SMALL_STATE(116)] = 3711,
  [SMALL_STATE(117)] = 3724,
  [SMALL_STATE(118)] = 3739,
  [SMALL_STATE(119)] = 3756,
  [SMALL_STATE(120)] = 3771,
  [SMALL_STATE(121)] = 3784,
  [SMALL_STATE(122)] = 3799,
  [SMALL_STATE(123)] = 3812,
  [SMALL_STATE(124)] = 3829,
  [SMALL_STATE(125)] = 3844,
  [SMALL_STATE(126)] = 3861,
  [SMALL_STATE(127)] = 3878,
  [SMALL_STATE(128)] = 3891,
  [SMALL_STATE(129)] = 3908,
  [SMALL_STATE(130)] = 3921,
  [SMALL_STATE(131)] = 3938,
  [SMALL_STATE(132)] = 3951,
  [SMALL_STATE(133)] = 3964,
  [SMALL_STATE(134)] = 3977,
  [SMALL_STATE(135)] = 3994,
  [SMALL_STATE(136)] = 4002,
  [SMALL_STATE(137)] = 4016,
  [SMALL_STATE(138)] = 4030,
  [SMALL_STATE(139)] = 4044,
  [SMALL_STATE(140)] = 4058,
  [SMALL_STATE(141)] = 4072,
  [SMALL_STATE(142)] = 4086,
  [SMALL_STATE(143)] = 4100,
  [SMALL_STATE(144)] = 4114,
  [SMALL_STATE(145)] = 4128,
  [SMALL_STATE(146)] = 4142,
  [SMALL_STATE(147)] = 4156,
  [SMALL_STATE(148)] = 4170,
  [SMALL_STATE(149)] = 4182,
  [SMALL_STATE(150)] = 4196,
  [SMALL_STATE(151)] = 4210,
  [SMALL_STATE(152)] = 4224,
  [SMALL_STATE(153)] = 4238,
  [SMALL_STATE(154)] = 4252,
  [SMALL_STATE(155)] = 4266,
  [SMALL_STATE(156)] = 4275,
  [SMALL_STATE(157)] = 4286,
  [SMALL_STATE(158)] = 4297,
  [SMALL_STATE(159)] = 4306,
  [SMALL_STATE(160)] = 4317,
  [SMALL_STATE(161)] = 4324,
  [SMALL_STATE(162)] = 4333,
  [SMALL_STATE(163)] = 4342,
  [SMALL_STATE(164)] = 4353,
  [SMALL_STATE(165)] = 4362,
  [SMALL_STATE(166)] = 4371,
  [SMALL_STATE(167)] = 4380,
  [SMALL_STATE(168)] = 4389,
  [SMALL_STATE(169)] = 4398,
  [SMALL_STATE(170)] = 4407,
  [SMALL_STATE(171)] = 4416,
  [SMALL_STATE(172)] = 4425,
  [SMALL_STATE(173)] = 4434,
  [SMALL_STATE(174)] = 4443,
  [SMALL_STATE(175)] = 4452,
  [SMALL_STATE(176)] = 4463,
  [SMALL_STATE(177)] = 4474,
  [SMALL_STATE(178)] = 4483,
  [SMALL_STATE(179)] = 4496,
  [SMALL_STATE(180)] = 4505,
  [SMALL_STATE(181)] = 4514,
  [SMALL_STATE(182)] = 4525,
  [SMALL_STATE(183)] = 4536,
  [SMALL_STATE(184)] = 4547,
  [SMALL_STATE(185)] = 4556,
  [SMALL_STATE(186)] = 4569,
  [SMALL_STATE(187)] = 4578,
  [SMALL_STATE(188)] = 4587,
  [SMALL_STATE(189)] = 4596,
  [SMALL_STATE(190)] = 4607,
  [SMALL_STATE(191)] = 4616,
  [SMALL_STATE(192)] = 4626,
  [SMALL_STATE(193)] = 4636,
  [SMALL_STATE(194)] = 4646,
  [SMALL_STATE(195)] = 4652,
  [SMALL_STATE(196)] = 4658,
  [SMALL_STATE(197)] = 4664,
  [SMALL_STATE(198)] = 4672,
  [SMALL_STATE(199)] = 4682,
  [SMALL_STATE(200)] = 4692,
  [SMALL_STATE(201)] = 4702,
  [SMALL_STATE(202)] = 4712,
  [SMALL_STATE(203)] = 4722,
  [SMALL_STATE(204)] = 4728,
  [SMALL_STATE(205)] = 4738,
  [SMALL_STATE(206)] = 4748,
  [SMALL_STATE(207)] = 4753,
  [SMALL_STATE(208)] = 4758,
  [SMALL_STATE(209)] = 4763,
  [SMALL_STATE(210)] = 4768,
  [SMALL_STATE(211)] = 4775,
  [SMALL_STATE(212)] = 4780,
  [SMALL_STATE(213)] = 4785,
  [SMALL_STATE(214)] = 4790,
  [SMALL_STATE(215)] = 4795,
  [SMALL_STATE(216)] = 4800,
  [SMALL_STATE(217)] = 4805,
  [SMALL_STATE(218)] = 4810,
  [SMALL_STATE(219)] = 4817,
  [SMALL_STATE(220)] = 4822,
  [SMALL_STATE(221)] = 4827,
  [SMALL_STATE(222)] = 4832,
  [SMALL_STATE(223)] = 4837,
  [SMALL_STATE(224)] = 4842,
  [SMALL_STATE(225)] = 4847,
  [SMALL_STATE(226)] = 4852,
  [SMALL_STATE(227)] = 4857,
  [SMALL_STATE(228)] = 4862,
  [SMALL_STATE(229)] = 4867,
  [SMALL_STATE(230)] = 4872,
  [SMALL_STATE(231)] = 4877,
  [SMALL_STATE(232)] = 4882,
  [SMALL_STATE(233)] = 4887,
  [SMALL_STATE(234)] = 4892,
  [SMALL_STATE(235)] = 4897,
  [SMALL_STATE(236)] = 4902,
  [SMALL_STATE(237)] = 4907,
  [SMALL_STATE(238)] = 4912,
  [SMALL_STATE(239)] = 4917,
  [SMALL_STATE(240)] = 4922,
  [SMALL_STATE(241)] = 4927,
  [SMALL_STATE(242)] = 4932,
  [SMALL_STATE(243)] = 4937,
  [SMALL_STATE(244)] = 4942,
  [SMALL_STATE(245)] = 4947,
  [SMALL_STATE(246)] = 4952,
  [SMALL_STATE(247)] = 4957,
  [SMALL_STATE(248)] = 4962,
  [SMALL_STATE(249)] = 4967,
  [SMALL_STATE(250)] = 4972,
  [SMALL_STATE(251)] = 4977,
  [SMALL_STATE(252)] = 4984,
  [SMALL_STATE(253)] = 4989,
  [SMALL_STATE(254)] = 4994,
  [SMALL_STATE(255)] = 5001,
  [SMALL_STATE(256)] = 5006,
  [SMALL_STATE(257)] = 5011,
  [SMALL_STATE(258)] = 5016,
  [SMALL_STATE(259)] = 5021,
  [SMALL_STATE(260)] = 5026,
  [SMALL_STATE(261)] = 5031,
  [SMALL_STATE(262)] = 5036,
  [SMALL_STATE(263)] = 5041,
  [SMALL_STATE(264)] = 5048,
  [SMALL_STATE(265)] = 5053,
  [SMALL_STATE(266)] = 5058,
  [SMALL_STATE(267)] = 5063,
  [SMALL_STATE(268)] = 5070,
  [SMALL_STATE(269)] = 5075,
  [SMALL_STATE(270)] = 5082,
  [SMALL_STATE(271)] = 5087,
  [SMALL_STATE(272)] = 5091,
  [SMALL_STATE(273)] = 5095,
  [SMALL_STATE(274)] = 5099,
  [SMALL_STATE(275)] = 5103,
  [SMALL_STATE(276)] = 5107,
  [SMALL_STATE(277)] = 5111,
  [SMALL_STATE(278)] = 5115,
  [SMALL_STATE(279)] = 5119,
  [SMALL_STATE(280)] = 5123,
  [SMALL_STATE(281)] = 5127,
  [SMALL_STATE(282)] = 5131,
  [SMALL_STATE(283)] = 5135,
  [SMALL_STATE(284)] = 5139,
  [SMALL_STATE(285)] = 5143,
  [SMALL_STATE(286)] = 5147,
  [SMALL_STATE(287)] = 5151,
  [SMALL_STATE(288)] = 5155,
  [SMALL_STATE(289)] = 5159,
  [SMALL_STATE(290)] = 5163,
  [SMALL_STATE(291)] = 5167,
  [SMALL_STATE(292)] = 5171,
  [SMALL_STATE(293)] = 5175,
  [SMALL_STATE(294)] = 5179,
  [SMALL_STATE(295)] = 5183,
  [SMALL_STATE(296)] = 5187,
  [SMALL_STATE(297)] = 5191,
  [SMALL_STATE(298)] = 5195,
  [SMALL_STATE(299)] = 5199,
  [SMALL_STATE(300)] = 5203,
  [SMALL_STATE(301)] = 5207,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcuts, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcuts, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_class, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_class, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_shortcut, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_shortcut, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 7),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 8),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_class, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_class, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 12),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 10),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_id, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_id, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0), SHIFT_REPEAT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_modifier, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_modifier, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_plain, 2, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2, 0, 0), SHIFT(91),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_plain, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2, 0, 0), SHIFT(185),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, 0, 15),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 3, 0, 15),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 1, 0, 14),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_value, 1, 0, 14),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 8),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 10),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 4, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 4, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 4, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 12),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 5, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 5, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 5, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 5, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 5, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 5, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrs, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attrs, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_name, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_name, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 2, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 1, 0, 0),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0), SHIFT_REPEAT(160),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_boolean, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_boolean, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 1, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 2, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine_name, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 2, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 4, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 4, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 4, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3, 0, 0),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2, 0, 0),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 2, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 3, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 2, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 1, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 4, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_p, 1, 0, 14),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_p, 1, 0, 14),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 5, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 3, 0, 15),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 3, 0, 15),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_s, 2, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_s, 2, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 1, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 11),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 11),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 1, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 1, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, 0, 6),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, 0, 6),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_condition, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 2, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 11),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 11),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_b, 2, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_b, 2, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, 0, 6),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, 0, 6),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 11),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 11),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_s, 1, 0, 14),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_s, 1, 0, 14),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 3, 0, 15),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 3, 0, 15),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, 0, 6),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, 0, 6),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 1, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_p, 2, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_p, 2, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_b, 1, 0, 14),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_b, 1, 0, 14),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 1, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 3, 0, 15),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 3, 0, 15),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 1, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 1, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 4, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 5, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 1, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 3, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 7),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 8),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 5, 0, 16),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 5, 0, 16),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 10),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ruby_block, 1, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 5, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 12),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 6, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 4, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 1, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 5, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 2, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 4),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 2, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 2, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 4, 0, 13),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 4, 0, 13),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_inline, 1, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_inline_expansion, 2, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 5),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 2, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_html5, 1, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 4, 0, 13),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_xhtml, 1, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 2, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 3, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 3, 0, 9),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3, 0, 9),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3, 0, 9),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3, 0, 9),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [818] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__block_start = 0,
  ts_external_token__block_end = 1,
  ts_external_token__line_separator = 2,
  ts_external_token_attr_value_quoted = 3,
  ts_external_token__attr_value_ruby = 4,
  ts_external_token__attr_value_ruby_p = 5,
  ts_external_token__attr_value_ruby_s = 6,
  ts_external_token__attr_value_ruby_b = 7,
  ts_external_token_ruby = 8,
  ts_external_token__error_sentinel = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__block_start] = sym__block_start,
  [ts_external_token__block_end] = sym__block_end,
  [ts_external_token__line_separator] = sym__line_separator,
  [ts_external_token_attr_value_quoted] = sym_attr_value_quoted,
  [ts_external_token__attr_value_ruby] = sym__attr_value_ruby,
  [ts_external_token__attr_value_ruby_p] = sym__attr_value_ruby_p,
  [ts_external_token__attr_value_ruby_s] = sym__attr_value_ruby_s,
  [ts_external_token__attr_value_ruby_b] = sym__attr_value_ruby_b,
  [ts_external_token_ruby] = sym_ruby,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[15][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token_attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby] = true,
    [ts_external_token__attr_value_ruby_p] = true,
    [ts_external_token__attr_value_ruby_s] = true,
    [ts_external_token__attr_value_ruby_b] = true,
    [ts_external_token_ruby] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__block_start] = true,
  },
  [3] = {
    [ts_external_token__block_end] = true,
  },
  [4] = {
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
    [ts_external_token__line_separator] = true,
  },
  [5] = {
    [ts_external_token_ruby] = true,
  },
  [6] = {
    [ts_external_token__block_end] = true,
    [ts_external_token__line_separator] = true,
  },
  [7] = {
    [ts_external_token_attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_p] = true,
  },
  [8] = {
    [ts_external_token_attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby] = true,
  },
  [9] = {
    [ts_external_token_attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_b] = true,
  },
  [10] = {
    [ts_external_token_attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [11] = {
    [ts_external_token__attr_value_ruby] = true,
  },
  [12] = {
    [ts_external_token__attr_value_ruby_b] = true,
  },
  [13] = {
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [14] = {
    [ts_external_token__attr_value_ruby_p] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_slim_external_scanner_create(void);
void tree_sitter_slim_external_scanner_destroy(void *);
bool tree_sitter_slim_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_slim_external_scanner_serialize(void *, char *);
void tree_sitter_slim_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_slim(void) {
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
      tree_sitter_slim_external_scanner_create,
      tree_sitter_slim_external_scanner_destroy,
      tree_sitter_slim_external_scanner_scan,
      tree_sitter_slim_external_scanner_serialize,
      tree_sitter_slim_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
