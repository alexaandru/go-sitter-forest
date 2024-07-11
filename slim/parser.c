#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 302
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
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
  sym__html_comment_conditional_marker = 50,
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
  sym_html_comment_condition = 115,
  sym__html_comment_conditional_incomplete = 116,
  sym_html_comment = 117,
  sym_code_comment = 118,
  aux_sym__block_repeat1 = 119,
  aux_sym_attr_shortcuts_repeat1 = 120,
  aux_sym__attrs_plain_repeat1 = 121,
  aux_sym__attrs_delimited_p_repeat1 = 122,
  aux_sym__attrs_delimited_s_repeat1 = 123,
  aux_sym__attrs_delimited_b_repeat1 = 124,
  aux_sym_element_text_repeat1 = 125,
  aux_sym__text_nested_repeat1 = 126,
  alias_sym_attr_value_ruby = 127,
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
  [sym__html_comment_conditional_marker] = "_html_comment_conditional_marker",
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
  [sym__html_comment_conditional_marker] = sym__html_comment_conditional_marker,
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
  [sym__html_comment_conditional_marker] = {
    .visible = false,
    .named = true,
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 6,
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
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 63,
  [72] = 70,
  [73] = 73,
  [74] = 68,
  [75] = 75,
  [76] = 76,
  [77] = 73,
  [78] = 78,
  [79] = 78,
  [80] = 80,
  [81] = 81,
  [82] = 76,
  [83] = 83,
  [84] = 75,
  [85] = 69,
  [86] = 86,
  [87] = 80,
  [88] = 66,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 95,
  [99] = 97,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 93,
  [104] = 104,
  [105] = 105,
  [106] = 36,
  [107] = 104,
  [108] = 96,
  [109] = 37,
  [110] = 105,
  [111] = 100,
  [112] = 94,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 30,
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
  [141] = 135,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 145,
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
  [172] = 167,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 41,
  [182] = 42,
  [183] = 183,
  [184] = 39,
  [185] = 40,
  [186] = 186,
  [187] = 187,
  [188] = 35,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 196,
  [198] = 198,
  [199] = 199,
  [200] = 195,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 201,
  [205] = 205,
  [206] = 206,
  [207] = 191,
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
  [218] = 215,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 193,
  [225] = 225,
  [226] = 225,
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
  [237] = 194,
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
  [252] = 234,
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
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 59,
  [272] = 52,
  [273] = 242,
  [274] = 55,
  [275] = 51,
  [276] = 276,
  [277] = 277,
  [278] = 248,
  [279] = 279,
  [280] = 49,
  [281] = 281,
  [282] = 53,
  [283] = 44,
  [284] = 284,
  [285] = 56,
  [286] = 286,
  [287] = 54,
  [288] = 46,
  [289] = 50,
  [290] = 60,
  [291] = 47,
  [292] = 292,
  [293] = 293,
  [294] = 256,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 276,
  [301] = 279,
};

static inline bool sym__attr_name_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '"' || (c >= '\'' && c <= ')')))
    : (c <= '0' || (c < '{'
      ? (c < '['
        ? (c >= '<' && c <= '>')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__attr_name_character_set_2(int32_t c) {
  return (c < '/'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : c <= ')')))
    : (c <= '0' || (c < '{'
      ? (c < '['
        ? (c >= '<' && c <= '>')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '0') ADVANCE(209);
      if (lookahead == '5') ADVANCE(215);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '<') ADVANCE(229);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '>') ADVANCE(230);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'h') ADVANCE(197);
      if (lookahead == 'j') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(164);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          lookahead != '/' &&
          lookahead != '0' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(205);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(229);
      if (lookahead == '=') ADVANCE(226);
      if (lookahead == '>') ADVANCE(230);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '0') ADVANCE(209);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(229);
      if (lookahead == '=') ADVANCE(226);
      if (lookahead == '>') ADVANCE(230);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '0') ADVANCE(209);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(115);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '=') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'j') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'j') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '-') ADVANCE(115);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(229);
      if (lookahead == '=') ADVANCE(226);
      if (lookahead == '>') ADVANCE(230);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '=') ADVANCE(226);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '/' ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '5') ADVANCE(215);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(36);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
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
      if (!sym__attr_name_character_set_1(lookahead)) ADVANCE(205);
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
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(199);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(169);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(132);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(166);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(161);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(187);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 't') ADVANCE(179);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(202);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(154);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(235);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(220);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(195);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(192);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(180);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(172);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(131);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(125);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(236);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(219);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(212);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(234);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(141);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(186);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(193);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(190);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(145);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(149);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(176);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(174);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(134);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(162);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(196);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(136);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(163);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'k') ADVANCE(138);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(222);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(214);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(221);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(142);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(144);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(159);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(160);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(148);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(233);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(128);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(188);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 's') ADVANCE(182);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(135);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(200);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(133);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(168);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(143);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(194);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(158);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(127);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(156);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(151);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(153);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(241);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(237);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(238);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(239);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(183);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(137);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(155);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(184);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(147);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(185);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(217);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(218);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(240);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(203);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(152);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(165);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(157);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'v') ADVANCE(129);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'w') ADVANCE(167);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'x') ADVANCE(198);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(242);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(175);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__attr_name);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
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
      ACCEPT_TOKEN(sym__html_comment_conditional_marker);
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
  [19] = {.lex_state = 12, .external_lex_state = 4},
  [20] = {.lex_state = 12, .external_lex_state = 4},
  [21] = {.lex_state = 3, .external_lex_state = 4},
  [22] = {.lex_state = 12, .external_lex_state = 4},
  [23] = {.lex_state = 12, .external_lex_state = 4},
  [24] = {.lex_state = 3, .external_lex_state = 4},
  [25] = {.lex_state = 3, .external_lex_state = 4},
  [26] = {.lex_state = 12, .external_lex_state = 4},
  [27] = {.lex_state = 12, .external_lex_state = 4},
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
  [45] = {.lex_state = 15, .external_lex_state = 4},
  [46] = {.lex_state = 12, .external_lex_state = 4},
  [47] = {.lex_state = 12, .external_lex_state = 4},
  [48] = {.lex_state = 15, .external_lex_state = 4},
  [49] = {.lex_state = 12, .external_lex_state = 4},
  [50] = {.lex_state = 12, .external_lex_state = 4},
  [51] = {.lex_state = 12, .external_lex_state = 4},
  [52] = {.lex_state = 12, .external_lex_state = 4},
  [53] = {.lex_state = 12, .external_lex_state = 4},
  [54] = {.lex_state = 12, .external_lex_state = 4},
  [55] = {.lex_state = 12, .external_lex_state = 4},
  [56] = {.lex_state = 12, .external_lex_state = 4},
  [57] = {.lex_state = 15, .external_lex_state = 4},
  [58] = {.lex_state = 15, .external_lex_state = 4},
  [59] = {.lex_state = 12, .external_lex_state = 4},
  [60] = {.lex_state = 12, .external_lex_state = 4},
  [61] = {.lex_state = 15, .external_lex_state = 4},
  [62] = {.lex_state = 15, .external_lex_state = 4},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 7},
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
  [91] = {.lex_state = 14, .external_lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 3, .external_lex_state = 5},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 3, .external_lex_state = 5},
  [118] = {.lex_state = 3, .external_lex_state = 5},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 14, .external_lex_state = 4},
  [121] = {.lex_state = 3, .external_lex_state = 5},
  [122] = {.lex_state = 3, .external_lex_state = 5},
  [123] = {.lex_state = 54, .external_lex_state = 4},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 54, .external_lex_state = 4},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 54, .external_lex_state = 4},
  [128] = {.lex_state = 3, .external_lex_state = 5},
  [129] = {.lex_state = 3, .external_lex_state = 5},
  [130] = {.lex_state = 54, .external_lex_state = 4},
  [131] = {.lex_state = 16, .external_lex_state = 4},
  [132] = {.lex_state = 3, .external_lex_state = 5},
  [133] = {.lex_state = 3, .external_lex_state = 5},
  [134] = {.lex_state = 14, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 14, .external_lex_state = 4},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 14, .external_lex_state = 4},
  [140] = {.lex_state = 14, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 14, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 14, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 57, .external_lex_state = 6},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 4},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 0, .external_lex_state = 4},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 0, .external_lex_state = 4},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 8, .external_lex_state = 4},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 0, .external_lex_state = 4},
  [178] = {.lex_state = 0, .external_lex_state = 4},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 0, .external_lex_state = 4},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 3, .external_lex_state = 5},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 0, .external_lex_state = 4},
  [192] = {.lex_state = 0, .external_lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 4},
  [194] = {.lex_state = 0, .external_lex_state = 4},
  [195] = {.lex_state = 0, .external_lex_state = 6},
  [196] = {.lex_state = 0, .external_lex_state = 6},
  [197] = {.lex_state = 0, .external_lex_state = 6},
  [198] = {.lex_state = 56, .external_lex_state = 6},
  [199] = {.lex_state = 0, .external_lex_state = 6},
  [200] = {.lex_state = 0, .external_lex_state = 6},
  [201] = {.lex_state = 0, .external_lex_state = 7},
  [202] = {.lex_state = 0, .external_lex_state = 8},
  [203] = {.lex_state = 0, .external_lex_state = 9},
  [204] = {.lex_state = 0, .external_lex_state = 7},
  [205] = {.lex_state = 0, .external_lex_state = 10},
  [206] = {.lex_state = 0, .external_lex_state = 6},
  [207] = {.lex_state = 0, .external_lex_state = 6},
  [208] = {.lex_state = 0, .external_lex_state = 6},
  [209] = {.lex_state = 0, .external_lex_state = 6},
  [210] = {.lex_state = 0, .external_lex_state = 6},
  [211] = {.lex_state = 0, .external_lex_state = 6},
  [212] = {.lex_state = 0, .external_lex_state = 6},
  [213] = {.lex_state = 0, .external_lex_state = 6},
  [214] = {.lex_state = 0, .external_lex_state = 6},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 0, .external_lex_state = 6},
  [217] = {.lex_state = 0, .external_lex_state = 6},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 0, .external_lex_state = 6},
  [220] = {.lex_state = 0, .external_lex_state = 6},
  [221] = {.lex_state = 0, .external_lex_state = 6},
  [222] = {.lex_state = 0, .external_lex_state = 6},
  [223] = {.lex_state = 0, .external_lex_state = 6},
  [224] = {.lex_state = 0, .external_lex_state = 6},
  [225] = {.lex_state = 57, .external_lex_state = 3},
  [226] = {.lex_state = 57, .external_lex_state = 3},
  [227] = {.lex_state = 0, .external_lex_state = 6},
  [228] = {.lex_state = 0, .external_lex_state = 6},
  [229] = {.lex_state = 0, .external_lex_state = 6},
  [230] = {.lex_state = 0, .external_lex_state = 6},
  [231] = {.lex_state = 0, .external_lex_state = 6},
  [232] = {.lex_state = 0, .external_lex_state = 6},
  [233] = {.lex_state = 0, .external_lex_state = 6},
  [234] = {.lex_state = 57, .external_lex_state = 3},
  [235] = {.lex_state = 0, .external_lex_state = 6},
  [236] = {.lex_state = 0, .external_lex_state = 6},
  [237] = {.lex_state = 0, .external_lex_state = 6},
  [238] = {.lex_state = 0, .external_lex_state = 6},
  [239] = {.lex_state = 0, .external_lex_state = 6},
  [240] = {.lex_state = 0, .external_lex_state = 6},
  [241] = {.lex_state = 0, .external_lex_state = 6},
  [242] = {.lex_state = 0, .external_lex_state = 6},
  [243] = {.lex_state = 0, .external_lex_state = 6},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 0, .external_lex_state = 6},
  [246] = {.lex_state = 0, .external_lex_state = 6},
  [247] = {.lex_state = 0, .external_lex_state = 6},
  [248] = {.lex_state = 0, .external_lex_state = 6},
  [249] = {.lex_state = 0, .external_lex_state = 6},
  [250] = {.lex_state = 0, .external_lex_state = 6},
  [251] = {.lex_state = 0, .external_lex_state = 6},
  [252] = {.lex_state = 57, .external_lex_state = 3},
  [253] = {.lex_state = 0, .external_lex_state = 6},
  [254] = {.lex_state = 0, .external_lex_state = 6},
  [255] = {.lex_state = 0, .external_lex_state = 6},
  [256] = {.lex_state = 0, .external_lex_state = 6},
  [257] = {.lex_state = 0, .external_lex_state = 6},
  [258] = {.lex_state = 0, .external_lex_state = 6},
  [259] = {.lex_state = 0, .external_lex_state = 6},
  [260] = {.lex_state = 0, .external_lex_state = 6},
  [261] = {.lex_state = 0, .external_lex_state = 6},
  [262] = {.lex_state = 0, .external_lex_state = 6},
  [263] = {.lex_state = 0, .external_lex_state = 6},
  [264] = {.lex_state = 0, .external_lex_state = 6},
  [265] = {.lex_state = 0, .external_lex_state = 6},
  [266] = {.lex_state = 0, .external_lex_state = 6},
  [267] = {.lex_state = 0, .external_lex_state = 6},
  [268] = {.lex_state = 0, .external_lex_state = 6},
  [269] = {.lex_state = 0, .external_lex_state = 6},
  [270] = {.lex_state = 0, .external_lex_state = 6},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 57},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0, .external_lex_state = 11},
  [280] = {.lex_state = 8},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 0, .external_lex_state = 12},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 57},
  [293] = {.lex_state = 0, .external_lex_state = 13},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0, .external_lex_state = 5},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 0, .external_lex_state = 14},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 57},
  [301] = {.lex_state = 0, .external_lex_state = 11},
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
    [sym__html_comment_conditional_marker] = ACTIONS(1),
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
    [sym_source_file] = STATE(281),
    [sym__block] = STATE(299),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__block_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
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
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(35), 1,
      sym__block_end,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(168), 1,
      sym__html_comment_conditional_incomplete,
    STATE(245), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(249), 8,
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
  [91] = 23,
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
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(37), 1,
      sym__block_end,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(168), 1,
      sym__html_comment_conditional_incomplete,
    STATE(245), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(249), 8,
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
  [182] = 23,
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
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(39), 1,
      sym__block_end,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(168), 1,
      sym__html_comment_conditional_incomplete,
    STATE(245), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(249), 8,
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
  [273] = 23,
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
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(41), 1,
      sym__block_end,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(168), 1,
      sym__html_comment_conditional_incomplete,
    STATE(245), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(249), 8,
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
  [364] = 22,
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
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(168), 1,
      sym__html_comment_conditional_incomplete,
    STATE(200), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(249), 8,
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
  [452] = 22,
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
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(168), 1,
      sym__html_comment_conditional_incomplete,
    STATE(195), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(249), 8,
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
  [540] = 22,
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
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(168), 1,
      sym__html_comment_conditional_incomplete,
    STATE(245), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(250), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(249), 8,
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
  [628] = 26,
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
    STATE(13), 1,
      sym_attr_shortcuts,
    STATE(20), 1,
      sym_attrs,
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(63), 2,
      sym__block_end,
      sym__line_separator,
    STATE(12), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(254), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [722] = 20,
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
    STATE(27), 1,
      sym_attrs,
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(69), 2,
      sym__block_end,
      sym__line_separator,
    STATE(11), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(270), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [796] = 20,
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
    STATE(19), 1,
      sym_attrs,
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
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
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(228), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [870] = 20,
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
    STATE(26), 1,
      sym_attrs,
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(81), 2,
      sym__block_end,
      sym__line_separator,
    STATE(30), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(216), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [944] = 20,
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
    STATE(23), 1,
      sym_attrs,
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(87), 2,
      sym__block_end,
      sym__line_separator,
    STATE(14), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(214), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1018] = 20,
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
    STATE(22), 1,
      sym_attrs,
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(93), 2,
      sym__block_end,
      sym__line_separator,
    STATE(30), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(243), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(47), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1092] = 7,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      sym_attr_shortcut_custom,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
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
  [1130] = 7,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
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
  [1168] = 10,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(43), 1,
      sym_embedded_engine_name,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(268), 2,
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
  [1211] = 3,
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
  [1238] = 13,
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
    ACTIONS(118), 1,
      sym__closed_tag,
    ACTIONS(120), 1,
      sym__space,
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(122), 2,
      sym__block_end,
      sym__line_separator,
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(209), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1284] = 13,
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
    ACTIONS(124), 1,
      sym__closed_tag,
    ACTIONS(126), 1,
      sym__space,
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(128), 2,
      sym__block_end,
      sym__line_separator,
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(213), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1330] = 2,
    ACTIONS(132), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(130), 14,
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
  [1354] = 13,
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
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(138), 2,
      sym__block_end,
      sym__line_separator,
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(222), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1400] = 13,
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
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(144), 2,
      sym__block_end,
      sym__line_separator,
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(257), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1446] = 2,
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
  [1470] = 2,
    ACTIONS(152), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(150), 14,
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
  [1494] = 13,
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
    ACTIONS(154), 1,
      sym__closed_tag,
    ACTIONS(156), 1,
      sym__space,
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(158), 2,
      sym__block_end,
      sym__line_separator,
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(266), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1540] = 13,
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
    ACTIONS(160), 1,
      sym__closed_tag,
    ACTIONS(162), 1,
      sym__space,
    STATE(120), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    ACTIONS(164), 2,
      sym__block_end,
      sym__line_separator,
    STATE(258), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(233), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1586] = 16,
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
    STATE(215), 1,
      sym_attr_name,
    STATE(251), 1,
      sym__block,
    STATE(269), 1,
      sym_nested,
    ACTIONS(184), 2,
      sym__block_end,
      sym__line_separator,
    STATE(37), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1637] = 16,
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
    STATE(215), 1,
      sym_attr_name,
    STATE(228), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(75), 2,
      sym__block_end,
      sym__line_separator,
    STATE(37), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1688] = 4,
    STATE(30), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(190), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    ACTIONS(188), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(186), 9,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
  [1715] = 16,
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
    STATE(215), 1,
      sym_attr_name,
    STATE(243), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(93), 2,
      sym__block_end,
      sym__line_separator,
    STATE(37), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1766] = 16,
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
    STATE(215), 1,
      sym_attr_name,
    STATE(216), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(81), 2,
      sym__block_end,
      sym__line_separator,
    STATE(37), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1817] = 16,
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
    STATE(215), 1,
      sym_attr_name,
    STATE(221), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(193), 2,
      sym__block_end,
      sym__line_separator,
    STATE(37), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1868] = 16,
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
    STATE(215), 1,
      sym_attr_name,
    STATE(251), 1,
      sym__block,
    STATE(253), 1,
      sym_nested,
    ACTIONS(195), 2,
      sym__block_end,
      sym__line_separator,
    STATE(37), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1919] = 2,
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
  [1940] = 7,
    ACTIONS(203), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      sym__attr_name,
    ACTIONS(211), 1,
      sym__space,
    STATE(215), 1,
      sym_attr_name,
    ACTIONS(209), 2,
      sym__element_rest_text,
      anon_sym_EQ,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(201), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [1969] = 7,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      sym__attr_name,
    ACTIONS(221), 1,
      sym__space,
    STATE(215), 1,
      sym_attr_name,
    ACTIONS(219), 2,
      sym__element_rest_text,
      anon_sym_EQ,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(214), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [1998] = 4,
    ACTIONS(228), 1,
      anon_sym_xml,
    ACTIONS(224), 2,
      anon_sym_html,
      anon_sym_5,
    STATE(208), 4,
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
  [2020] = 2,
    ACTIONS(209), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(201), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [2036] = 2,
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
  [2052] = 2,
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
  [2068] = 2,
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
  [2084] = 7,
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
    STATE(286), 1,
      sym_attrs,
    STATE(291), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [2110] = 2,
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
  [2125] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(256), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(223), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(258), 2,
      sym__block_end,
      sym__line_separator,
  [2154] = 2,
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
  [2169] = 2,
    ACTIONS(266), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(264), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2184] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(256), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(236), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(268), 2,
      sym__block_end,
      sym__line_separator,
  [2213] = 2,
    ACTIONS(272), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(270), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2228] = 2,
    ACTIONS(276), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(274), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2243] = 2,
    ACTIONS(280), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(278), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2258] = 2,
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
  [2273] = 2,
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
  [2288] = 2,
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
  [2303] = 2,
    ACTIONS(296), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(294), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2318] = 2,
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
  [2333] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(256), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(231), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(302), 2,
      sym__block_end,
      sym__line_separator,
  [2362] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(256), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(251), 1,
      sym__block,
    STATE(265), 1,
      sym_nested,
    ACTIONS(304), 2,
      sym__block_end,
      sym__line_separator,
  [2391] = 2,
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
  [2406] = 2,
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
  [2421] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(256), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(220), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(314), 2,
      sym__block_end,
      sym__line_separator,
  [2450] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(176), 1,
      sym__element_rest_text,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
    ACTIONS(256), 1,
      sym__attr_name,
    STATE(134), 1,
      aux_sym_element_text_repeat1,
    STATE(229), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(316), 2,
      sym__block_end,
      sym__line_separator,
  [2479] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(324), 1,
      sym__space_or_newline,
    STATE(81), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(170), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2505] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 1,
      sym__space_or_newline,
    STATE(84), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(190), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2531] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    ACTIONS(334), 1,
      sym__space_or_newline,
    STATE(75), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(190), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2557] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    ACTIONS(338), 1,
      sym__space_or_newline,
    STATE(70), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(190), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2583] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      sym__space,
    STATE(218), 1,
      sym_attr_name,
    STATE(109), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [2609] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    ACTIONS(354), 1,
      sym__space_or_newline,
    STATE(73), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(114), 1,
      sym_attr_name,
    STATE(187), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2635] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 1,
      sym__space_or_newline,
    STATE(83), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(114), 1,
      sym_attr_name,
    STATE(187), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2661] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    ACTIONS(362), 1,
      sym__space_or_newline,
    STATE(86), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(190), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2687] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 1,
      sym__space_or_newline,
    STATE(81), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(170), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2713] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    ACTIONS(370), 1,
      sym__space_or_newline,
    STATE(86), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(190), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2739] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      sym__space_or_newline,
    STATE(83), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(114), 1,
      sym_attr_name,
    STATE(187), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2765] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(378), 1,
      sym__space_or_newline,
    STATE(77), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(114), 1,
      sym_attr_name,
    STATE(187), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2791] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    ACTIONS(338), 1,
      sym__space_or_newline,
    STATE(86), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(190), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2817] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      sym__space_or_newline,
    STATE(79), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(170), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2843] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 1,
      sym__space_or_newline,
    STATE(83), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(114), 1,
      sym_attr_name,
    STATE(187), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2869] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      sym__space_or_newline,
    STATE(81), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(170), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2895] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    ACTIONS(394), 1,
      sym__space_or_newline,
    STATE(81), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(170), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2921] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      sym__space_or_newline,
    STATE(69), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(114), 1,
      sym_attr_name,
    STATE(187), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2947] = 8,
    ACTIONS(396), 1,
      anon_sym_STAR,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(401), 1,
      sym__attr_name,
    ACTIONS(404), 1,
      sym__space_or_newline,
    STATE(81), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(170), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2973] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      sym__space_or_newline,
    STATE(78), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(170), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2999] = 8,
    ACTIONS(411), 1,
      anon_sym_STAR,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 1,
      sym__attr_name,
    ACTIONS(419), 1,
      sym__space_or_newline,
    STATE(83), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(114), 1,
      sym_attr_name,
    STATE(187), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3025] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
    ACTIONS(424), 1,
      sym__space_or_newline,
    STATE(86), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(190), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3051] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(428), 1,
      sym__space_or_newline,
    STATE(83), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(114), 1,
      sym_attr_name,
    STATE(187), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3077] = 8,
    ACTIONS(430), 1,
      anon_sym_STAR,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    ACTIONS(435), 1,
      sym__attr_name,
    ACTIONS(438), 1,
      sym__space_or_newline,
    STATE(86), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(190), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3103] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 1,
      sym__space_or_newline,
    STATE(85), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(114), 1,
      sym_attr_name,
    STATE(187), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3129] = 8,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
    ACTIONS(424), 1,
      sym__space_or_newline,
    STATE(72), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(124), 1,
      sym_attr_name,
    STATE(190), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3155] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      sym__space_or_newline,
    STATE(63), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(170), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3181] = 8,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    ACTIONS(394), 1,
      sym__space_or_newline,
    STATE(71), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(116), 1,
      sym_attr_name,
    STATE(170), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3207] = 7,
    ACTIONS(441), 1,
      sym_attr_assignment,
    ACTIONS(443), 1,
      sym_attr_assignment_noescape,
    ACTIONS(445), 1,
      sym__element_rest_text,
    ACTIONS(447), 1,
      sym__space,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(241), 1,
      sym__text_nested,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [3230] = 2,
    ACTIONS(441), 3,
      sym__attr_name,
      sym_attr_assignment,
      sym__space_or_newline,
    ACTIONS(443), 5,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_attr_assignment_noescape,
  [3243] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3263] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym_attr_name,
    STATE(159), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3283] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym_attr_name,
    STATE(159), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3303] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3323] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_attr_name,
    STATE(158), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3343] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym_attr_name,
    STATE(159), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3363] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_attr_name,
    STATE(158), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3383] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_attr_name,
    STATE(158), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3403] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 1,
      sym__attr_name,
    STATE(116), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3423] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3443] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3463] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym_attr_name,
    STATE(159), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3483] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_attr_name,
    STATE(158), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3503] = 6,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(206), 1,
      sym__attr_name,
    ACTIONS(463), 1,
      anon_sym_STAR,
    ACTIONS(466), 1,
      sym__space,
    STATE(218), 1,
      sym_attr_name,
    STATE(106), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [3523] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym_attr_name,
    STATE(159), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3543] = 6,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3563] = 6,
    ACTIONS(214), 1,
      anon_sym_COLON,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(348), 1,
      sym__space,
    STATE(218), 1,
      sym_attr_name,
    STATE(106), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [3583] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_attr_name,
    STATE(158), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3603] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_attr_name,
    STATE(158), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3623] = 6,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym_attr_name,
    STATE(159), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3643] = 3,
    ACTIONS(473), 1,
      sym_ruby,
    STATE(122), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3656] = 4,
    ACTIONS(479), 1,
      sym_attr_assignment,
    ACTIONS(481), 1,
      sym_attr_assignment_noescape,
    ACTIONS(475), 2,
      anon_sym_STAR,
      anon_sym_RPAREN,
    ACTIONS(477), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3671] = 5,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(350), 1,
      anon_sym_STAR,
    STATE(114), 1,
      sym_attr_name,
    STATE(158), 1,
      sym__attr_delimited_p,
    STATE(186), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3688] = 4,
    ACTIONS(483), 1,
      sym_attr_assignment,
    ACTIONS(485), 1,
      sym_attr_assignment_noescape,
    ACTIONS(475), 2,
      anon_sym_STAR,
      anon_sym_RBRACE,
    ACTIONS(477), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3703] = 3,
    ACTIONS(487), 1,
      sym_ruby,
    STATE(118), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3716] = 3,
    ACTIONS(186), 1,
      sym_ruby,
    STATE(118), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(489), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3729] = 5,
    ACTIONS(318), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    STATE(116), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(160), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3746] = 5,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(492), 1,
      sym__element_rest_text,
    STATE(136), 1,
      aux_sym_element_text_repeat1,
    STATE(219), 1,
      sym__text_nested,
    ACTIONS(494), 2,
      sym__block_end,
      sym__line_separator,
  [3763] = 3,
    ACTIONS(496), 1,
      sym_ruby,
    STATE(117), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3776] = 3,
    ACTIONS(498), 1,
      sym_ruby,
    STATE(118), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3789] = 5,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(500), 1,
      sym__element_rest_text,
    ACTIONS(502), 1,
      sym__space,
    STATE(210), 1,
      sym__text_nested,
    ACTIONS(504), 2,
      sym__block_end,
      sym__line_separator,
  [3806] = 4,
    ACTIONS(506), 1,
      sym_attr_assignment,
    ACTIONS(508), 1,
      sym_attr_assignment_noescape,
    ACTIONS(475), 2,
      anon_sym_STAR,
      anon_sym_RBRACK,
    ACTIONS(477), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3821] = 5,
    ACTIONS(445), 1,
      sym__element_rest_text,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(510), 1,
      sym__space,
    STATE(241), 1,
      sym__text_nested,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [3838] = 5,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_STAR,
    STATE(124), 1,
      sym_attr_name,
    STATE(159), 1,
      sym__attr_delimited_s,
    STATE(189), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3855] = 5,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(512), 1,
      sym__element_rest_text,
    ACTIONS(514), 1,
      sym__space,
    STATE(219), 1,
      sym__text_nested,
    ACTIONS(494), 2,
      sym__block_end,
      sym__line_separator,
  [3872] = 3,
    ACTIONS(516), 1,
      sym_ruby,
    STATE(118), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3885] = 3,
    ACTIONS(518), 1,
      sym_ruby,
    STATE(118), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3898] = 5,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(520), 1,
      sym__element_rest_text,
    ACTIONS(522), 1,
      sym__space,
    STATE(238), 1,
      sym__text_nested,
    ACTIONS(524), 2,
      sym__block_end,
      sym__line_separator,
  [3915] = 4,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    ACTIONS(528), 1,
      sym__html_comment_condition,
    STATE(277), 1,
      sym_html_comment_condition,
    ACTIONS(530), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3930] = 3,
    ACTIONS(498), 1,
      sym_ruby,
    STATE(129), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3943] = 3,
    ACTIONS(487), 1,
      sym_ruby,
    STATE(128), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(471), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3956] = 5,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(492), 1,
      sym__element_rest_text,
    STATE(136), 1,
      aux_sym_element_text_repeat1,
    STATE(241), 1,
      sym__text_nested,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [3973] = 4,
    ACTIONS(532), 1,
      sym__block_start,
    ACTIONS(534), 1,
      sym__block_end,
    ACTIONS(536), 1,
      sym__line_separator,
    STATE(146), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3987] = 3,
    ACTIONS(538), 1,
      sym__element_rest_text,
    STATE(136), 1,
      aux_sym_element_text_repeat1,
    ACTIONS(541), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3999] = 1,
    ACTIONS(543), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__space,
  [4007] = 4,
    ACTIONS(545), 1,
      sym__block_start,
    ACTIONS(548), 1,
      sym__block_end,
    ACTIONS(550), 1,
      sym__line_separator,
    STATE(138), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4021] = 4,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(553), 1,
      sym__element_rest_text,
    STATE(217), 1,
      sym__text_nested,
    ACTIONS(555), 2,
      sym__block_end,
      sym__line_separator,
  [4035] = 4,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(500), 1,
      sym__element_rest_text,
    STATE(210), 1,
      sym__text_nested,
    ACTIONS(504), 2,
      sym__block_end,
      sym__line_separator,
  [4049] = 4,
    ACTIONS(532), 1,
      sym__block_start,
    ACTIONS(557), 1,
      sym__block_end,
    ACTIONS(559), 1,
      sym__line_separator,
    STATE(145), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4063] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(251), 1,
      sym__block,
    STATE(255), 1,
      sym_nested,
    ACTIONS(561), 2,
      sym__block_end,
      sym__line_separator,
  [4077] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(251), 1,
      sym__block,
    STATE(267), 1,
      sym_nested,
    ACTIONS(563), 2,
      sym__block_end,
      sym__line_separator,
  [4091] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(251), 1,
      sym__block,
    STATE(260), 1,
      sym_nested,
    ACTIONS(565), 2,
      sym__block_end,
      sym__line_separator,
  [4105] = 4,
    ACTIONS(532), 1,
      sym__block_start,
    ACTIONS(567), 1,
      sym__block_end,
    ACTIONS(569), 1,
      sym__line_separator,
    STATE(138), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4119] = 4,
    ACTIONS(532), 1,
      sym__block_start,
    ACTIONS(571), 1,
      sym__block_end,
    ACTIONS(573), 1,
      sym__line_separator,
    STATE(138), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [4133] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(251), 1,
      sym__block,
    STATE(261), 1,
      sym_nested,
    ACTIONS(575), 2,
      sym__block_end,
      sym__line_separator,
  [4147] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(246), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(577), 2,
      sym__block_end,
      sym__line_separator,
  [4161] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(227), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(579), 2,
      sym__block_end,
      sym__line_separator,
  [4175] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(206), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(581), 2,
      sym__block_end,
      sym__line_separator,
  [4189] = 4,
    ACTIONS(445), 1,
      sym__element_rest_text,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(241), 1,
      sym__text_nested,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [4203] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(240), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(583), 2,
      sym__block_end,
      sym__line_separator,
  [4217] = 4,
    ACTIONS(449), 1,
      sym__block_start,
    ACTIONS(585), 1,
      sym__element_rest_text,
    STATE(230), 1,
      sym__text_nested,
    ACTIONS(587), 2,
      sym__block_end,
      sym__line_separator,
  [4231] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(232), 1,
      sym_nested,
    STATE(251), 1,
      sym__block,
    ACTIONS(589), 2,
      sym__block_end,
      sym__line_separator,
  [4245] = 2,
    ACTIONS(593), 1,
      sym__attr_name,
    ACTIONS(591), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4254] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(210), 1,
      sym__text_nested,
    ACTIONS(504), 2,
      sym__block_end,
      sym__line_separator,
  [4265] = 2,
    ACTIONS(597), 1,
      sym__attr_name,
    ACTIONS(595), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4274] = 2,
    ACTIONS(601), 1,
      sym__attr_name,
    ACTIONS(599), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4283] = 2,
    ACTIONS(605), 1,
      sym__attr_name,
    ACTIONS(603), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4292] = 2,
    ACTIONS(609), 1,
      sym__attr_name,
    ACTIONS(607), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4301] = 3,
    ACTIONS(611), 1,
      sym__text_line,
    STATE(259), 1,
      sym__text,
    ACTIONS(613), 2,
      sym__block_end,
      sym__line_separator,
  [4312] = 2,
    ACTIONS(617), 1,
      sym__attr_name,
    ACTIONS(615), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4321] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(263), 1,
      sym__text_nested,
    ACTIONS(619), 2,
      sym__block_end,
      sym__line_separator,
  [4332] = 2,
    ACTIONS(623), 1,
      sym__attr_name,
    ACTIONS(621), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4341] = 2,
    ACTIONS(627), 1,
      sym__attr_name,
    ACTIONS(625), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4350] = 2,
    ACTIONS(631), 1,
      sym__attr_name,
    ACTIONS(629), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4359] = 4,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym__attr_name,
    STATE(39), 1,
      sym_attr,
    STATE(215), 1,
      sym_attr_name,
  [4372] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(264), 1,
      sym__text_nested,
    ACTIONS(633), 2,
      sym__block_end,
      sym__line_separator,
  [4383] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(217), 1,
      sym__text_nested,
    ACTIONS(555), 2,
      sym__block_end,
      sym__line_separator,
  [4394] = 2,
    ACTIONS(637), 1,
      sym__attr_name,
    ACTIONS(635), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4403] = 2,
    ACTIONS(641), 1,
      sym__attr_name,
    ACTIONS(639), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4412] = 4,
    ACTIONS(322), 1,
      sym__attr_name,
    ACTIONS(340), 1,
      anon_sym_STAR,
    STATE(184), 1,
      sym_attr,
    STATE(218), 1,
      sym_attr_name,
  [4425] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(247), 1,
      sym__text_nested,
    ACTIONS(643), 2,
      sym__block_end,
      sym__line_separator,
  [4436] = 2,
    ACTIONS(647), 1,
      sym__attr_name,
    ACTIONS(645), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4445] = 2,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
    ACTIONS(651), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4454] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(230), 1,
      sym__text_nested,
    ACTIONS(587), 2,
      sym__block_end,
      sym__line_separator,
  [4465] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(241), 1,
      sym__text_nested,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [4476] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(235), 1,
      sym__text_nested,
    ACTIONS(653), 2,
      sym__block_end,
      sym__line_separator,
  [4487] = 2,
    ACTIONS(657), 1,
      sym__attr_name,
    ACTIONS(655), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4496] = 2,
    ACTIONS(661), 1,
      sym__attr_name,
    ACTIONS(659), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4505] = 2,
    ACTIONS(236), 1,
      sym__attr_name,
    ACTIONS(234), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4514] = 2,
    ACTIONS(240), 1,
      sym__attr_name,
    ACTIONS(238), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4523] = 3,
    ACTIONS(449), 1,
      sym__block_start,
    STATE(239), 1,
      sym__text_nested,
    ACTIONS(663), 2,
      sym__block_end,
      sym__line_separator,
  [4534] = 2,
    ACTIONS(209), 1,
      sym__attr_name,
    ACTIONS(201), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4543] = 2,
    ACTIONS(232), 1,
      sym__attr_name,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4552] = 2,
    ACTIONS(667), 1,
      sym__attr_name,
    ACTIONS(665), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4561] = 2,
    ACTIONS(671), 1,
      sym__attr_name,
    ACTIONS(669), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4570] = 1,
    ACTIONS(197), 4,
      sym_ruby,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [4577] = 2,
    ACTIONS(675), 1,
      sym__attr_name,
    ACTIONS(673), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4586] = 2,
    ACTIONS(679), 1,
      sym__attr_name,
    ACTIONS(677), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [4595] = 1,
    ACTIONS(681), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4601] = 1,
    ACTIONS(548), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4607] = 1,
    ACTIONS(683), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4613] = 1,
    ACTIONS(685), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4619] = 3,
    ACTIONS(687), 1,
      sym__block_end,
    ACTIONS(689), 1,
      sym__line_separator,
    STATE(197), 1,
      aux_sym__block_repeat1,
  [4629] = 3,
    ACTIONS(35), 1,
      sym__block_end,
    ACTIONS(691), 1,
      sym__line_separator,
    STATE(199), 1,
      aux_sym__block_repeat1,
  [4639] = 3,
    ACTIONS(37), 1,
      sym__block_end,
    ACTIONS(693), 1,
      sym__line_separator,
    STATE(199), 1,
      aux_sym__block_repeat1,
  [4649] = 2,
    ACTIONS(695), 1,
      sym_doctype_xml_encoding,
    ACTIONS(697), 2,
      sym__block_end,
      sym__line_separator,
  [4657] = 3,
    ACTIONS(699), 1,
      sym__block_end,
    ACTIONS(701), 1,
      sym__line_separator,
    STATE(199), 1,
      aux_sym__block_repeat1,
  [4667] = 3,
    ACTIONS(704), 1,
      sym__block_end,
    ACTIONS(706), 1,
      sym__line_separator,
    STATE(196), 1,
      aux_sym__block_repeat1,
  [4677] = 3,
    ACTIONS(708), 1,
      sym_attr_value_quoted,
    ACTIONS(710), 1,
      sym__attr_value_ruby,
    STATE(41), 1,
      sym__attr_value,
  [4687] = 3,
    ACTIONS(712), 1,
      sym_attr_value_quoted,
    ACTIONS(714), 1,
      sym__attr_value_ruby_b,
    STATE(179), 1,
      sym__attr_delimited_value_b,
  [4697] = 3,
    ACTIONS(716), 1,
      sym_attr_value_quoted,
    ACTIONS(718), 1,
      sym__attr_value_ruby_s,
    STATE(162), 1,
      sym__attr_delimited_value_s,
  [4707] = 3,
    ACTIONS(720), 1,
      sym_attr_value_quoted,
    ACTIONS(722), 1,
      sym__attr_value_ruby,
    STATE(181), 1,
      sym__attr_value,
  [4717] = 3,
    ACTIONS(724), 1,
      sym_attr_value_quoted,
    ACTIONS(726), 1,
      sym__attr_value_ruby_p,
    STATE(171), 1,
      sym__attr_delimited_value_p,
  [4727] = 1,
    ACTIONS(728), 2,
      sym__block_end,
      sym__line_separator,
  [4732] = 1,
    ACTIONS(681), 2,
      sym__block_end,
      sym__line_separator,
  [4737] = 1,
    ACTIONS(730), 2,
      sym__block_end,
      sym__line_separator,
  [4742] = 1,
    ACTIONS(316), 2,
      sym__block_end,
      sym__line_separator,
  [4747] = 1,
    ACTIONS(587), 2,
      sym__block_end,
      sym__line_separator,
  [4752] = 1,
    ACTIONS(732), 2,
      sym__block_end,
      sym__line_separator,
  [4757] = 1,
    ACTIONS(734), 2,
      sym__block_end,
      sym__line_separator,
  [4762] = 1,
    ACTIONS(304), 2,
      sym__block_end,
      sym__line_separator,
  [4767] = 1,
    ACTIONS(93), 2,
      sym__block_end,
      sym__line_separator,
  [4772] = 2,
    ACTIONS(736), 1,
      sym_attr_assignment,
    ACTIONS(738), 1,
      sym_attr_assignment_noescape,
  [4779] = 1,
    ACTIONS(184), 2,
      sym__block_end,
      sym__line_separator,
  [4784] = 1,
    ACTIONS(653), 2,
      sym__block_end,
      sym__line_separator,
  [4789] = 2,
    ACTIONS(740), 1,
      sym_attr_assignment,
    ACTIONS(742), 1,
      sym_attr_assignment_noescape,
  [4796] = 1,
    ACTIONS(451), 2,
      sym__block_end,
      sym__line_separator,
  [4801] = 1,
    ACTIONS(744), 2,
      sym__block_end,
      sym__line_separator,
  [4806] = 1,
    ACTIONS(746), 2,
      sym__block_end,
      sym__line_separator,
  [4811] = 1,
    ACTIONS(268), 2,
      sym__block_end,
      sym__line_separator,
  [4816] = 1,
    ACTIONS(748), 2,
      sym__block_end,
      sym__line_separator,
  [4821] = 1,
    ACTIONS(683), 2,
      sym__block_end,
      sym__line_separator,
  [4826] = 2,
    ACTIONS(750), 1,
      sym__text_line,
    ACTIONS(752), 1,
      sym__block_end,
  [4833] = 2,
    ACTIONS(750), 1,
      sym__text_line,
    ACTIONS(754), 1,
      sym__block_end,
  [4840] = 1,
    ACTIONS(756), 2,
      sym__block_end,
      sym__line_separator,
  [4845] = 1,
    ACTIONS(195), 2,
      sym__block_end,
      sym__line_separator,
  [4850] = 1,
    ACTIONS(758), 2,
      sym__block_end,
      sym__line_separator,
  [4855] = 1,
    ACTIONS(663), 2,
      sym__block_end,
      sym__line_separator,
  [4860] = 1,
    ACTIONS(760), 2,
      sym__block_end,
      sym__line_separator,
  [4865] = 1,
    ACTIONS(762), 2,
      sym__block_end,
      sym__line_separator,
  [4870] = 1,
    ACTIONS(302), 2,
      sym__block_end,
      sym__line_separator,
  [4875] = 2,
    ACTIONS(571), 1,
      sym__block_end,
    ACTIONS(750), 1,
      sym__text_line,
  [4882] = 1,
    ACTIONS(764), 2,
      sym__block_end,
      sym__line_separator,
  [4887] = 1,
    ACTIONS(766), 2,
      sym__block_end,
      sym__line_separator,
  [4892] = 1,
    ACTIONS(685), 2,
      sym__block_end,
      sym__line_separator,
  [4897] = 1,
    ACTIONS(504), 2,
      sym__block_end,
      sym__line_separator,
  [4902] = 1,
    ACTIONS(768), 2,
      sym__block_end,
      sym__line_separator,
  [4907] = 1,
    ACTIONS(770), 2,
      sym__block_end,
      sym__line_separator,
  [4912] = 1,
    ACTIONS(555), 2,
      sym__block_end,
      sym__line_separator,
  [4917] = 1,
    ACTIONS(772), 2,
      sym__block_end,
      sym__line_separator,
  [4922] = 1,
    ACTIONS(193), 2,
      sym__block_end,
      sym__line_separator,
  [4927] = 2,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      anon_sym_EQ_EQ,
  [4934] = 1,
    ACTIONS(699), 2,
      sym__block_end,
      sym__line_separator,
  [4939] = 1,
    ACTIONS(774), 2,
      sym__block_end,
      sym__line_separator,
  [4944] = 1,
    ACTIONS(776), 2,
      sym__block_end,
      sym__line_separator,
  [4949] = 1,
    ACTIONS(778), 2,
      sym__block_end,
      sym__line_separator,
  [4954] = 1,
    ACTIONS(780), 2,
      sym__block_end,
      sym__line_separator,
  [4959] = 1,
    ACTIONS(782), 2,
      sym__block_end,
      sym__line_separator,
  [4964] = 1,
    ACTIONS(784), 2,
      sym__block_end,
      sym__line_separator,
  [4969] = 2,
    ACTIONS(567), 1,
      sym__block_end,
    ACTIONS(750), 1,
      sym__text_line,
  [4976] = 1,
    ACTIONS(786), 2,
      sym__block_end,
      sym__line_separator,
  [4981] = 1,
    ACTIONS(81), 2,
      sym__block_end,
      sym__line_separator,
  [4986] = 1,
    ACTIONS(788), 2,
      sym__block_end,
      sym__line_separator,
  [4991] = 1,
    ACTIONS(790), 2,
      sym__block_end,
      sym__line_separator,
  [4996] = 1,
    ACTIONS(314), 2,
      sym__block_end,
      sym__line_separator,
  [5001] = 1,
    ACTIONS(792), 2,
      sym__block_end,
      sym__line_separator,
  [5006] = 1,
    ACTIONS(794), 2,
      sym__block_end,
      sym__line_separator,
  [5011] = 1,
    ACTIONS(796), 2,
      sym__block_end,
      sym__line_separator,
  [5016] = 1,
    ACTIONS(798), 2,
      sym__block_end,
      sym__line_separator,
  [5021] = 1,
    ACTIONS(800), 2,
      sym__block_end,
      sym__line_separator,
  [5026] = 1,
    ACTIONS(802), 2,
      sym__block_end,
      sym__line_separator,
  [5031] = 1,
    ACTIONS(804), 2,
      sym__block_end,
      sym__line_separator,
  [5036] = 1,
    ACTIONS(806), 2,
      sym__block_end,
      sym__line_separator,
  [5041] = 1,
    ACTIONS(258), 2,
      sym__block_end,
      sym__line_separator,
  [5046] = 1,
    ACTIONS(808), 2,
      sym__block_end,
      sym__line_separator,
  [5051] = 1,
    ACTIONS(810), 2,
      sym__block_end,
      sym__line_separator,
  [5056] = 1,
    ACTIONS(812), 2,
      sym__block_end,
      sym__line_separator,
  [5061] = 1,
    ACTIONS(75), 2,
      sym__block_end,
      sym__line_separator,
  [5066] = 1,
    ACTIONS(306), 1,
      anon_sym_COLON,
  [5070] = 1,
    ACTIONS(282), 1,
      anon_sym_COLON,
  [5074] = 1,
    ACTIONS(772), 1,
      ts_builtin_sym_end,
  [5078] = 1,
    ACTIONS(294), 1,
      anon_sym_COLON,
  [5082] = 1,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [5086] = 1,
    ACTIONS(814), 1,
      sym__text_line,
  [5090] = 1,
    ACTIONS(816), 1,
      anon_sym_RBRACK,
  [5094] = 1,
    ACTIONS(778), 1,
      ts_builtin_sym_end,
  [5098] = 1,
    ACTIONS(818), 1,
      sym__attr_value_ruby,
  [5102] = 1,
    ACTIONS(270), 1,
      anon_sym_COLON,
  [5106] = 1,
    ACTIONS(820), 1,
      ts_builtin_sym_end,
  [5110] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [5114] = 1,
    ACTIONS(252), 1,
      anon_sym_COLON,
  [5118] = 1,
    ACTIONS(822), 1,
      sym__attr_value_ruby_p,
  [5122] = 1,
    ACTIONS(298), 1,
      anon_sym_COLON,
  [5126] = 1,
    ACTIONS(824), 1,
      anon_sym_COLON,
  [5130] = 1,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [5134] = 1,
    ACTIONS(260), 1,
      anon_sym_COLON,
  [5138] = 1,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [5142] = 1,
    ACTIONS(310), 1,
      anon_sym_COLON,
  [5146] = 1,
    ACTIONS(264), 1,
      anon_sym_COLON,
  [5150] = 1,
    ACTIONS(750), 1,
      sym__text_line,
  [5154] = 1,
    ACTIONS(826), 1,
      sym__attr_value_ruby_s,
  [5158] = 1,
    ACTIONS(790), 1,
      ts_builtin_sym_end,
  [5162] = 1,
    ACTIONS(828), 1,
      sym_ruby,
  [5166] = 1,
    ACTIONS(830), 1,
      sym__space,
  [5170] = 1,
    ACTIONS(832), 1,
      sym_css_identifier,
  [5174] = 1,
    ACTIONS(834), 1,
      sym__attr_value_ruby_b,
  [5178] = 1,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
  [5182] = 1,
    ACTIONS(838), 1,
      sym__text_line,
  [5186] = 1,
    ACTIONS(840), 1,
      sym__attr_value_ruby,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 452,
  [SMALL_STATE(8)] = 540,
  [SMALL_STATE(9)] = 628,
  [SMALL_STATE(10)] = 722,
  [SMALL_STATE(11)] = 796,
  [SMALL_STATE(12)] = 870,
  [SMALL_STATE(13)] = 944,
  [SMALL_STATE(14)] = 1018,
  [SMALL_STATE(15)] = 1092,
  [SMALL_STATE(16)] = 1130,
  [SMALL_STATE(17)] = 1168,
  [SMALL_STATE(18)] = 1211,
  [SMALL_STATE(19)] = 1238,
  [SMALL_STATE(20)] = 1284,
  [SMALL_STATE(21)] = 1330,
  [SMALL_STATE(22)] = 1354,
  [SMALL_STATE(23)] = 1400,
  [SMALL_STATE(24)] = 1446,
  [SMALL_STATE(25)] = 1470,
  [SMALL_STATE(26)] = 1494,
  [SMALL_STATE(27)] = 1540,
  [SMALL_STATE(28)] = 1586,
  [SMALL_STATE(29)] = 1637,
  [SMALL_STATE(30)] = 1688,
  [SMALL_STATE(31)] = 1715,
  [SMALL_STATE(32)] = 1766,
  [SMALL_STATE(33)] = 1817,
  [SMALL_STATE(34)] = 1868,
  [SMALL_STATE(35)] = 1919,
  [SMALL_STATE(36)] = 1940,
  [SMALL_STATE(37)] = 1969,
  [SMALL_STATE(38)] = 1998,
  [SMALL_STATE(39)] = 2020,
  [SMALL_STATE(40)] = 2036,
  [SMALL_STATE(41)] = 2052,
  [SMALL_STATE(42)] = 2068,
  [SMALL_STATE(43)] = 2084,
  [SMALL_STATE(44)] = 2110,
  [SMALL_STATE(45)] = 2125,
  [SMALL_STATE(46)] = 2154,
  [SMALL_STATE(47)] = 2169,
  [SMALL_STATE(48)] = 2184,
  [SMALL_STATE(49)] = 2213,
  [SMALL_STATE(50)] = 2228,
  [SMALL_STATE(51)] = 2243,
  [SMALL_STATE(52)] = 2258,
  [SMALL_STATE(53)] = 2273,
  [SMALL_STATE(54)] = 2288,
  [SMALL_STATE(55)] = 2303,
  [SMALL_STATE(56)] = 2318,
  [SMALL_STATE(57)] = 2333,
  [SMALL_STATE(58)] = 2362,
  [SMALL_STATE(59)] = 2391,
  [SMALL_STATE(60)] = 2406,
  [SMALL_STATE(61)] = 2421,
  [SMALL_STATE(62)] = 2450,
  [SMALL_STATE(63)] = 2479,
  [SMALL_STATE(64)] = 2505,
  [SMALL_STATE(65)] = 2531,
  [SMALL_STATE(66)] = 2557,
  [SMALL_STATE(67)] = 2583,
  [SMALL_STATE(68)] = 2609,
  [SMALL_STATE(69)] = 2635,
  [SMALL_STATE(70)] = 2661,
  [SMALL_STATE(71)] = 2687,
  [SMALL_STATE(72)] = 2713,
  [SMALL_STATE(73)] = 2739,
  [SMALL_STATE(74)] = 2765,
  [SMALL_STATE(75)] = 2791,
  [SMALL_STATE(76)] = 2817,
  [SMALL_STATE(77)] = 2843,
  [SMALL_STATE(78)] = 2869,
  [SMALL_STATE(79)] = 2895,
  [SMALL_STATE(80)] = 2921,
  [SMALL_STATE(81)] = 2947,
  [SMALL_STATE(82)] = 2973,
  [SMALL_STATE(83)] = 2999,
  [SMALL_STATE(84)] = 3025,
  [SMALL_STATE(85)] = 3051,
  [SMALL_STATE(86)] = 3077,
  [SMALL_STATE(87)] = 3103,
  [SMALL_STATE(88)] = 3129,
  [SMALL_STATE(89)] = 3155,
  [SMALL_STATE(90)] = 3181,
  [SMALL_STATE(91)] = 3207,
  [SMALL_STATE(92)] = 3230,
  [SMALL_STATE(93)] = 3243,
  [SMALL_STATE(94)] = 3263,
  [SMALL_STATE(95)] = 3283,
  [SMALL_STATE(96)] = 3303,
  [SMALL_STATE(97)] = 3323,
  [SMALL_STATE(98)] = 3343,
  [SMALL_STATE(99)] = 3363,
  [SMALL_STATE(100)] = 3383,
  [SMALL_STATE(101)] = 3403,
  [SMALL_STATE(102)] = 3423,
  [SMALL_STATE(103)] = 3443,
  [SMALL_STATE(104)] = 3463,
  [SMALL_STATE(105)] = 3483,
  [SMALL_STATE(106)] = 3503,
  [SMALL_STATE(107)] = 3523,
  [SMALL_STATE(108)] = 3543,
  [SMALL_STATE(109)] = 3563,
  [SMALL_STATE(110)] = 3583,
  [SMALL_STATE(111)] = 3603,
  [SMALL_STATE(112)] = 3623,
  [SMALL_STATE(113)] = 3643,
  [SMALL_STATE(114)] = 3656,
  [SMALL_STATE(115)] = 3671,
  [SMALL_STATE(116)] = 3688,
  [SMALL_STATE(117)] = 3703,
  [SMALL_STATE(118)] = 3716,
  [SMALL_STATE(119)] = 3729,
  [SMALL_STATE(120)] = 3746,
  [SMALL_STATE(121)] = 3763,
  [SMALL_STATE(122)] = 3776,
  [SMALL_STATE(123)] = 3789,
  [SMALL_STATE(124)] = 3806,
  [SMALL_STATE(125)] = 3821,
  [SMALL_STATE(126)] = 3838,
  [SMALL_STATE(127)] = 3855,
  [SMALL_STATE(128)] = 3872,
  [SMALL_STATE(129)] = 3885,
  [SMALL_STATE(130)] = 3898,
  [SMALL_STATE(131)] = 3915,
  [SMALL_STATE(132)] = 3930,
  [SMALL_STATE(133)] = 3943,
  [SMALL_STATE(134)] = 3956,
  [SMALL_STATE(135)] = 3973,
  [SMALL_STATE(136)] = 3987,
  [SMALL_STATE(137)] = 3999,
  [SMALL_STATE(138)] = 4007,
  [SMALL_STATE(139)] = 4021,
  [SMALL_STATE(140)] = 4035,
  [SMALL_STATE(141)] = 4049,
  [SMALL_STATE(142)] = 4063,
  [SMALL_STATE(143)] = 4077,
  [SMALL_STATE(144)] = 4091,
  [SMALL_STATE(145)] = 4105,
  [SMALL_STATE(146)] = 4119,
  [SMALL_STATE(147)] = 4133,
  [SMALL_STATE(148)] = 4147,
  [SMALL_STATE(149)] = 4161,
  [SMALL_STATE(150)] = 4175,
  [SMALL_STATE(151)] = 4189,
  [SMALL_STATE(152)] = 4203,
  [SMALL_STATE(153)] = 4217,
  [SMALL_STATE(154)] = 4231,
  [SMALL_STATE(155)] = 4245,
  [SMALL_STATE(156)] = 4254,
  [SMALL_STATE(157)] = 4265,
  [SMALL_STATE(158)] = 4274,
  [SMALL_STATE(159)] = 4283,
  [SMALL_STATE(160)] = 4292,
  [SMALL_STATE(161)] = 4301,
  [SMALL_STATE(162)] = 4312,
  [SMALL_STATE(163)] = 4321,
  [SMALL_STATE(164)] = 4332,
  [SMALL_STATE(165)] = 4341,
  [SMALL_STATE(166)] = 4350,
  [SMALL_STATE(167)] = 4359,
  [SMALL_STATE(168)] = 4372,
  [SMALL_STATE(169)] = 4383,
  [SMALL_STATE(170)] = 4394,
  [SMALL_STATE(171)] = 4403,
  [SMALL_STATE(172)] = 4412,
  [SMALL_STATE(173)] = 4425,
  [SMALL_STATE(174)] = 4436,
  [SMALL_STATE(175)] = 4445,
  [SMALL_STATE(176)] = 4454,
  [SMALL_STATE(177)] = 4465,
  [SMALL_STATE(178)] = 4476,
  [SMALL_STATE(179)] = 4487,
  [SMALL_STATE(180)] = 4496,
  [SMALL_STATE(181)] = 4505,
  [SMALL_STATE(182)] = 4514,
  [SMALL_STATE(183)] = 4523,
  [SMALL_STATE(184)] = 4534,
  [SMALL_STATE(185)] = 4543,
  [SMALL_STATE(186)] = 4552,
  [SMALL_STATE(187)] = 4561,
  [SMALL_STATE(188)] = 4570,
  [SMALL_STATE(189)] = 4577,
  [SMALL_STATE(190)] = 4586,
  [SMALL_STATE(191)] = 4595,
  [SMALL_STATE(192)] = 4601,
  [SMALL_STATE(193)] = 4607,
  [SMALL_STATE(194)] = 4613,
  [SMALL_STATE(195)] = 4619,
  [SMALL_STATE(196)] = 4629,
  [SMALL_STATE(197)] = 4639,
  [SMALL_STATE(198)] = 4649,
  [SMALL_STATE(199)] = 4657,
  [SMALL_STATE(200)] = 4667,
  [SMALL_STATE(201)] = 4677,
  [SMALL_STATE(202)] = 4687,
  [SMALL_STATE(203)] = 4697,
  [SMALL_STATE(204)] = 4707,
  [SMALL_STATE(205)] = 4717,
  [SMALL_STATE(206)] = 4727,
  [SMALL_STATE(207)] = 4732,
  [SMALL_STATE(208)] = 4737,
  [SMALL_STATE(209)] = 4742,
  [SMALL_STATE(210)] = 4747,
  [SMALL_STATE(211)] = 4752,
  [SMALL_STATE(212)] = 4757,
  [SMALL_STATE(213)] = 4762,
  [SMALL_STATE(214)] = 4767,
  [SMALL_STATE(215)] = 4772,
  [SMALL_STATE(216)] = 4779,
  [SMALL_STATE(217)] = 4784,
  [SMALL_STATE(218)] = 4789,
  [SMALL_STATE(219)] = 4796,
  [SMALL_STATE(220)] = 4801,
  [SMALL_STATE(221)] = 4806,
  [SMALL_STATE(222)] = 4811,
  [SMALL_STATE(223)] = 4816,
  [SMALL_STATE(224)] = 4821,
  [SMALL_STATE(225)] = 4826,
  [SMALL_STATE(226)] = 4833,
  [SMALL_STATE(227)] = 4840,
  [SMALL_STATE(228)] = 4845,
  [SMALL_STATE(229)] = 4850,
  [SMALL_STATE(230)] = 4855,
  [SMALL_STATE(231)] = 4860,
  [SMALL_STATE(232)] = 4865,
  [SMALL_STATE(233)] = 4870,
  [SMALL_STATE(234)] = 4875,
  [SMALL_STATE(235)] = 4882,
  [SMALL_STATE(236)] = 4887,
  [SMALL_STATE(237)] = 4892,
  [SMALL_STATE(238)] = 4897,
  [SMALL_STATE(239)] = 4902,
  [SMALL_STATE(240)] = 4907,
  [SMALL_STATE(241)] = 4912,
  [SMALL_STATE(242)] = 4917,
  [SMALL_STATE(243)] = 4922,
  [SMALL_STATE(244)] = 4927,
  [SMALL_STATE(245)] = 4934,
  [SMALL_STATE(246)] = 4939,
  [SMALL_STATE(247)] = 4944,
  [SMALL_STATE(248)] = 4949,
  [SMALL_STATE(249)] = 4954,
  [SMALL_STATE(250)] = 4959,
  [SMALL_STATE(251)] = 4964,
  [SMALL_STATE(252)] = 4969,
  [SMALL_STATE(253)] = 4976,
  [SMALL_STATE(254)] = 4981,
  [SMALL_STATE(255)] = 4986,
  [SMALL_STATE(256)] = 4991,
  [SMALL_STATE(257)] = 4996,
  [SMALL_STATE(258)] = 5001,
  [SMALL_STATE(259)] = 5006,
  [SMALL_STATE(260)] = 5011,
  [SMALL_STATE(261)] = 5016,
  [SMALL_STATE(262)] = 5021,
  [SMALL_STATE(263)] = 5026,
  [SMALL_STATE(264)] = 5031,
  [SMALL_STATE(265)] = 5036,
  [SMALL_STATE(266)] = 5041,
  [SMALL_STATE(267)] = 5046,
  [SMALL_STATE(268)] = 5051,
  [SMALL_STATE(269)] = 5056,
  [SMALL_STATE(270)] = 5061,
  [SMALL_STATE(271)] = 5066,
  [SMALL_STATE(272)] = 5070,
  [SMALL_STATE(273)] = 5074,
  [SMALL_STATE(274)] = 5078,
  [SMALL_STATE(275)] = 5082,
  [SMALL_STATE(276)] = 5086,
  [SMALL_STATE(277)] = 5090,
  [SMALL_STATE(278)] = 5094,
  [SMALL_STATE(279)] = 5098,
  [SMALL_STATE(280)] = 5102,
  [SMALL_STATE(281)] = 5106,
  [SMALL_STATE(282)] = 5110,
  [SMALL_STATE(283)] = 5114,
  [SMALL_STATE(284)] = 5118,
  [SMALL_STATE(285)] = 5122,
  [SMALL_STATE(286)] = 5126,
  [SMALL_STATE(287)] = 5130,
  [SMALL_STATE(288)] = 5134,
  [SMALL_STATE(289)] = 5138,
  [SMALL_STATE(290)] = 5142,
  [SMALL_STATE(291)] = 5146,
  [SMALL_STATE(292)] = 5150,
  [SMALL_STATE(293)] = 5154,
  [SMALL_STATE(294)] = 5158,
  [SMALL_STATE(295)] = 5162,
  [SMALL_STATE(296)] = 5166,
  [SMALL_STATE(297)] = 5170,
  [SMALL_STATE(298)] = 5174,
  [SMALL_STATE(299)] = 5178,
  [SMALL_STATE(300)] = 5182,
  [SMALL_STATE(301)] = 5186,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2), SHIFT_REPEAT(18),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2), SHIFT_REPEAT(297),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2), SHIFT_REPEAT(25),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcuts, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcuts, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_class, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_class, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 10),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_id, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_id, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 12),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 7),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_class, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_class, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_shortcut, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_shortcut, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 8),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__output_modifiers, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2), SHIFT_REPEAT(35),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_modifier, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_modifier, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(301),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(92),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(167),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_plain, 2),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2), SHIFT(92),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_plain, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2), SHIFT(167),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, .production_id = 15),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 3, .production_id = 15),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 1, .production_id = 14),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_value, 1, .production_id = 14),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 8),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrs, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attrs, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 12),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 5),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 5),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 5),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 7),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 10),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2), SHIFT_REPEAT(298),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2), SHIFT_REPEAT(92),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2), SHIFT_REPEAT(119),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2), SHIFT_REPEAT(284),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2), SHIFT_REPEAT(92),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2), SHIFT_REPEAT(115),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2), SHIFT_REPEAT(293),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2), SHIFT_REPEAT(92),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2), SHIFT_REPEAT(126),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_name, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_name, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(279),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(172),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_boolean, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_boolean, 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2), SHIFT_REPEAT(188),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2), SHIFT_REPEAT(136),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine_name, 1),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2), SHIFT_REPEAT(300),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2), SHIFT_REPEAT(292),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_s, 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_s, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_p, 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_p, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, .production_id = 11),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, .production_id = 11),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, .production_id = 11),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, .production_id = 11),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 3, .production_id = 15),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 3, .production_id = 15),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_s, 1, .production_id = 14),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_s, 1, .production_id = 14),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_b, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_b, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, .production_id = 11),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, .production_id = 11),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, .production_id = 6),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, .production_id = 6),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 3, .production_id = 15),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 3, .production_id = 15),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_p, 1, .production_id = 14),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_p, 1, .production_id = 14),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_condition, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 3, .production_id = 15),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 3, .production_id = 15),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_b, 1, .production_id = 14),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_b, 1, .production_id = 14),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 5),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 1),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, .production_id = 6),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, .production_id = 6),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, .production_id = 6),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, .production_id = 6),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 5),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(8),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 5, .production_id = 16),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_xhtml, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_html5, 1),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 7),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 8),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 5, .production_id = 16),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 10),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 5),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 3, .production_id = 9),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 5),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, .production_id = 12),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 6),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3, .production_id = 9),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3, .production_id = 9),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ruby_block, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 4, .production_id = 13),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 5),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_inline, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 4, .production_id = 13),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 4, .production_id = 13),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 4),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3, .production_id = 9),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_inline_expansion, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [820] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
    [ts_external_token__attr_value_ruby] = true,
  },
  [8] = {
    [ts_external_token_attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_b] = true,
  },
  [9] = {
    [ts_external_token_attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [10] = {
    [ts_external_token_attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_p] = true,
  },
  [11] = {
    [ts_external_token__attr_value_ruby] = true,
  },
  [12] = {
    [ts_external_token__attr_value_ruby_p] = true,
  },
  [13] = {
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [14] = {
    [ts_external_token__attr_value_ruby_b] = true,
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

TS_PUBLIC const TSLanguage *tree_sitter_slim() {
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
