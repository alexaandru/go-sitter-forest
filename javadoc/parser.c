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
#define STATE_COUNT 277
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 3
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 32
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 49

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  aux_sym__inline_tag_false_positive_token1 = 3,
  aux_sym__inline_tag_false_positive_token2 = 4,
  aux_sym__inline_tag_false_positive_token3 = 5,
  anon_sym_ATauthor = 6,
  anon_sym_ATcode = 7,
  anon_sym_ATdeprecated = 8,
  anon_sym_ATdocRoot = 9,
  anon_sym_AThidden = 10,
  anon_sym_ATindex = 11,
  anon_sym_ATinheritDoc = 12,
  anon_sym_ATlink = 13,
  anon_sym_ATlinkplain = 14,
  anon_sym_ATliteral = 15,
  anon_sym_ATparam = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_ATprovides = 19,
  anon_sym_ATreturn = 20,
  anon_sym_ATsee = 21,
  anon_sym_ATserial = 22,
  anon_sym_include = 23,
  anon_sym_exclude = 24,
  anon_sym_ATserialData = 25,
  anon_sym_ATserialField = 26,
  anon_sym_ATsince = 27,
  anon_sym_ATsnippet = 28,
  anon_sym_COLON = 29,
  anon_sym_LF = 30,
  anon_sym_ATspec = 31,
  anon_sym_ATsummary = 32,
  anon_sym_ATsystemProperty = 33,
  anon_sym_ATthrows = 34,
  anon_sym_ATexception = 35,
  anon_sym_ATuses = 36,
  anon_sym_ATvalue = 37,
  anon_sym_ATversion = 38,
  anon_sym_EQ = 39,
  anon_sym_SLASH = 40,
  anon_sym_POUND_POUND = 41,
  anon_sym_POUND = 42,
  anon_sym_LPAREN = 43,
  anon_sym_RPAREN = 44,
  anon_sym_COMMA = 45,
  anon_sym_LBRACK = 46,
  anon_sym_RBRACK = 47,
  anon_sym_DOT_DOT_DOT = 48,
  sym__space = 49,
  anon_sym_DOT = 50,
  sym_boolean_type = 51,
  anon_sym_byte = 52,
  anon_sym_short = 53,
  anon_sym_int = 54,
  anon_sym_long = 55,
  anon_sym_char = 56,
  anon_sym_float = 57,
  anon_sym_double = 58,
  sym_fragment = 59,
  sym_tag_name = 60,
  sym_bare_format_string = 61,
  anon_sym_DQUOTE = 62,
  aux_sym_literal_format_string_token1 = 63,
  sym_quoted_value = 64,
  sym_url = 65,
  sym_indexword = 66,
  sym_unsigned_integer = 67,
  sym_identifier = 68,
  sym__text = 69,
  anon_sym_SLASH_STAR_STAR = 70,
  anon_sym_STAR_SLASH = 71,
  anon_sym_SLASH_SLASH_SLASH = 72,
  sym_inline_description = 73,
  sym_document = 74,
  sym_description = 75,
  sym_block_tag = 76,
  sym_inline_tag = 77,
  sym__inline_tag_actual = 78,
  sym__inline_tag_false_positive = 79,
  sym_author_tag = 80,
  sym_code_tag = 81,
  sym_deprecated_tag = 82,
  sym_doc_root_tag = 83,
  sym_hidden_tag = 84,
  sym_index_tag = 85,
  sym_inherit_doc_tag = 86,
  sym_link_tag = 87,
  sym_literal_tag = 88,
  sym_param_tag = 89,
  sym_provides_tag = 90,
  sym_return_tag = 91,
  sym__inline_return_tag = 92,
  sym_see_tag = 93,
  sym_serial_tag = 94,
  sym_serial_data_tag = 95,
  sym_serial_field_tag = 96,
  sym_since_tag = 97,
  sym_snippet_tag = 98,
  sym_spec_tag = 99,
  sym_summary_tag = 100,
  sym_system_property_tag = 101,
  sym_throws_tag = 102,
  sym_uses_tag = 103,
  sym_value_tag = 104,
  sym_version_tag = 105,
  sym_custom_tag = 106,
  sym_custom_inline_tag = 107,
  sym_attributes = 108,
  sym_attribute = 109,
  sym_attribute_value = 110,
  sym_reference = 111,
  sym__fragment_or_member = 112,
  sym_member = 113,
  sym_method = 114,
  sym_parameters = 115,
  sym_parameter = 116,
  sym_parameter_type = 117,
  sym__parameter_mods = 118,
  sym__qualified_identifier = 119,
  sym__type = 120,
  sym_module = 121,
  sym_type = 122,
  sym_integral_type = 123,
  sym_floating_point_type = 124,
  sym_type_parameter = 125,
  sym_literal_format_string = 126,
  sym_system_property = 127,
  sym_string_literal = 128,
  sym_url_title = 129,
  sym__multiline_begin = 130,
  sym__multiline_end = 131,
  sym__singleline_begin = 132,
  aux_sym_document_repeat1 = 133,
  aux_sym_description_repeat1 = 134,
  aux_sym_attributes_repeat1 = 135,
  aux_sym_parameters_repeat1 = 136,
  aux_sym__parameter_mods_repeat1 = 137,
  aux_sym_system_property_repeat1 = 138,
  alias_sym_code = 139,
  alias_sym_literal = 140,
  alias_sym_markdown_description = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__inline_tag_false_positive_token1] = "_inline_tag_false_positive_token1",
  [aux_sym__inline_tag_false_positive_token2] = "_inline_tag_false_positive_token2",
  [aux_sym__inline_tag_false_positive_token3] = "_inline_tag_false_positive_token3",
  [anon_sym_ATauthor] = "tag_name",
  [anon_sym_ATcode] = "tag_name",
  [anon_sym_ATdeprecated] = "tag_name",
  [anon_sym_ATdocRoot] = "tag_name",
  [anon_sym_AThidden] = "tag_name",
  [anon_sym_ATindex] = "tag_name",
  [anon_sym_ATinheritDoc] = "tag_name",
  [anon_sym_ATlink] = "tag_name",
  [anon_sym_ATlinkplain] = "tag_name",
  [anon_sym_ATliteral] = "tag_name",
  [anon_sym_ATparam] = "tag_name",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_ATprovides] = "tag_name",
  [anon_sym_ATreturn] = "tag_name",
  [anon_sym_ATsee] = "tag_name",
  [anon_sym_ATserial] = "tag_name",
  [anon_sym_include] = "include",
  [anon_sym_exclude] = "exclude",
  [anon_sym_ATserialData] = "tag_name",
  [anon_sym_ATserialField] = "tag_name",
  [anon_sym_ATsince] = "tag_name",
  [anon_sym_ATsnippet] = "tag_name",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [anon_sym_ATspec] = "tag_name",
  [anon_sym_ATsummary] = "tag_name",
  [anon_sym_ATsystemProperty] = "tag_name",
  [anon_sym_ATthrows] = "tag_name",
  [anon_sym_ATexception] = "tag_name",
  [anon_sym_ATuses] = "tag_name",
  [anon_sym_ATvalue] = "tag_name",
  [anon_sym_ATversion] = "tag_name",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH] = "/",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym__space] = "_space",
  [anon_sym_DOT] = ".",
  [sym_boolean_type] = "boolean_type",
  [anon_sym_byte] = "byte",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_char] = "char",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [sym_fragment] = "fragment",
  [sym_tag_name] = "tag_name",
  [sym_bare_format_string] = "bare_format_string",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_literal_format_string_token1] = "literal_format_string_token1",
  [sym_quoted_value] = "quoted_value",
  [sym_url] = "url",
  [sym_indexword] = "indexword",
  [sym_unsigned_integer] = "unsigned_integer",
  [sym_identifier] = "identifier",
  [sym__text] = "_text",
  [anon_sym_SLASH_STAR_STAR] = "/**",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_SLASH_SLASH_SLASH] = "///",
  [sym_inline_description] = "description",
  [sym_document] = "document",
  [sym_description] = "description",
  [sym_block_tag] = "block_tag",
  [sym_inline_tag] = "inline_tag",
  [sym__inline_tag_actual] = "_inline_tag_actual",
  [sym__inline_tag_false_positive] = "_inline_tag_false_positive",
  [sym_author_tag] = "author_tag",
  [sym_code_tag] = "code_tag",
  [sym_deprecated_tag] = "deprecated_tag",
  [sym_doc_root_tag] = "doc_root_tag",
  [sym_hidden_tag] = "hidden_tag",
  [sym_index_tag] = "index_tag",
  [sym_inherit_doc_tag] = "inherit_doc_tag",
  [sym_link_tag] = "link_tag",
  [sym_literal_tag] = "literal_tag",
  [sym_param_tag] = "param_tag",
  [sym_provides_tag] = "provides_tag",
  [sym_return_tag] = "return_tag",
  [sym__inline_return_tag] = "return_tag",
  [sym_see_tag] = "see_tag",
  [sym_serial_tag] = "serial_tag",
  [sym_serial_data_tag] = "serial_data_tag",
  [sym_serial_field_tag] = "serial_field_tag",
  [sym_since_tag] = "since_tag",
  [sym_snippet_tag] = "snippet_tag",
  [sym_spec_tag] = "spec_tag",
  [sym_summary_tag] = "summary_tag",
  [sym_system_property_tag] = "system_property_tag",
  [sym_throws_tag] = "throws_tag",
  [sym_uses_tag] = "uses_tag",
  [sym_value_tag] = "value_tag",
  [sym_version_tag] = "version_tag",
  [sym_custom_tag] = "custom_tag",
  [sym_custom_inline_tag] = "custom_inline_tag",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_attribute_value] = "attribute_value",
  [sym_reference] = "reference",
  [sym__fragment_or_member] = "_fragment_or_member",
  [sym_member] = "member",
  [sym_method] = "method",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_parameter_type] = "parameter_type",
  [sym__parameter_mods] = "_parameter_mods",
  [sym__qualified_identifier] = "_qualified_identifier",
  [sym__type] = "_type",
  [sym_module] = "module",
  [sym_type] = "type",
  [sym_integral_type] = "integral_type",
  [sym_floating_point_type] = "floating_point_type",
  [sym_type_parameter] = "type_parameter",
  [sym_literal_format_string] = "literal_format_string",
  [sym_system_property] = "system_property",
  [sym_string_literal] = "string_literal",
  [sym_url_title] = "url_title",
  [sym__multiline_begin] = "_multiline_begin",
  [sym__multiline_end] = "_multiline_end",
  [sym__singleline_begin] = "_singleline_begin",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym__parameter_mods_repeat1] = "_parameter_mods_repeat1",
  [aux_sym_system_property_repeat1] = "system_property_repeat1",
  [alias_sym_code] = "code",
  [alias_sym_literal] = "literal",
  [alias_sym_markdown_description] = "markdown_description",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__inline_tag_false_positive_token1] = aux_sym__inline_tag_false_positive_token1,
  [aux_sym__inline_tag_false_positive_token2] = aux_sym__inline_tag_false_positive_token2,
  [aux_sym__inline_tag_false_positive_token3] = aux_sym__inline_tag_false_positive_token3,
  [anon_sym_ATauthor] = sym_tag_name,
  [anon_sym_ATcode] = sym_tag_name,
  [anon_sym_ATdeprecated] = sym_tag_name,
  [anon_sym_ATdocRoot] = sym_tag_name,
  [anon_sym_AThidden] = sym_tag_name,
  [anon_sym_ATindex] = sym_tag_name,
  [anon_sym_ATinheritDoc] = sym_tag_name,
  [anon_sym_ATlink] = sym_tag_name,
  [anon_sym_ATlinkplain] = sym_tag_name,
  [anon_sym_ATliteral] = sym_tag_name,
  [anon_sym_ATparam] = sym_tag_name,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_ATprovides] = sym_tag_name,
  [anon_sym_ATreturn] = sym_tag_name,
  [anon_sym_ATsee] = sym_tag_name,
  [anon_sym_ATserial] = sym_tag_name,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_exclude] = anon_sym_exclude,
  [anon_sym_ATserialData] = sym_tag_name,
  [anon_sym_ATserialField] = sym_tag_name,
  [anon_sym_ATsince] = sym_tag_name,
  [anon_sym_ATsnippet] = sym_tag_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_ATspec] = sym_tag_name,
  [anon_sym_ATsummary] = sym_tag_name,
  [anon_sym_ATsystemProperty] = sym_tag_name,
  [anon_sym_ATthrows] = sym_tag_name,
  [anon_sym_ATexception] = sym_tag_name,
  [anon_sym_ATuses] = sym_tag_name,
  [anon_sym_ATvalue] = sym_tag_name,
  [anon_sym_ATversion] = sym_tag_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym__space] = sym__space,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_boolean_type] = sym_boolean_type,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [sym_fragment] = sym_fragment,
  [sym_tag_name] = sym_tag_name,
  [sym_bare_format_string] = sym_bare_format_string,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_literal_format_string_token1] = aux_sym_literal_format_string_token1,
  [sym_quoted_value] = sym_quoted_value,
  [sym_url] = sym_url,
  [sym_indexword] = sym_indexword,
  [sym_unsigned_integer] = sym_unsigned_integer,
  [sym_identifier] = sym_identifier,
  [sym__text] = sym__text,
  [anon_sym_SLASH_STAR_STAR] = anon_sym_SLASH_STAR_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_SLASH_SLASH_SLASH] = anon_sym_SLASH_SLASH_SLASH,
  [sym_inline_description] = sym_description,
  [sym_document] = sym_document,
  [sym_description] = sym_description,
  [sym_block_tag] = sym_block_tag,
  [sym_inline_tag] = sym_inline_tag,
  [sym__inline_tag_actual] = sym__inline_tag_actual,
  [sym__inline_tag_false_positive] = sym__inline_tag_false_positive,
  [sym_author_tag] = sym_author_tag,
  [sym_code_tag] = sym_code_tag,
  [sym_deprecated_tag] = sym_deprecated_tag,
  [sym_doc_root_tag] = sym_doc_root_tag,
  [sym_hidden_tag] = sym_hidden_tag,
  [sym_index_tag] = sym_index_tag,
  [sym_inherit_doc_tag] = sym_inherit_doc_tag,
  [sym_link_tag] = sym_link_tag,
  [sym_literal_tag] = sym_literal_tag,
  [sym_param_tag] = sym_param_tag,
  [sym_provides_tag] = sym_provides_tag,
  [sym_return_tag] = sym_return_tag,
  [sym__inline_return_tag] = sym_return_tag,
  [sym_see_tag] = sym_see_tag,
  [sym_serial_tag] = sym_serial_tag,
  [sym_serial_data_tag] = sym_serial_data_tag,
  [sym_serial_field_tag] = sym_serial_field_tag,
  [sym_since_tag] = sym_since_tag,
  [sym_snippet_tag] = sym_snippet_tag,
  [sym_spec_tag] = sym_spec_tag,
  [sym_summary_tag] = sym_summary_tag,
  [sym_system_property_tag] = sym_system_property_tag,
  [sym_throws_tag] = sym_throws_tag,
  [sym_uses_tag] = sym_uses_tag,
  [sym_value_tag] = sym_value_tag,
  [sym_version_tag] = sym_version_tag,
  [sym_custom_tag] = sym_custom_tag,
  [sym_custom_inline_tag] = sym_custom_inline_tag,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [sym_reference] = sym_reference,
  [sym__fragment_or_member] = sym__fragment_or_member,
  [sym_member] = sym_member,
  [sym_method] = sym_method,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_parameter_type] = sym_parameter_type,
  [sym__parameter_mods] = sym__parameter_mods,
  [sym__qualified_identifier] = sym__qualified_identifier,
  [sym__type] = sym__type,
  [sym_module] = sym_module,
  [sym_type] = sym_type,
  [sym_integral_type] = sym_integral_type,
  [sym_floating_point_type] = sym_floating_point_type,
  [sym_type_parameter] = sym_type_parameter,
  [sym_literal_format_string] = sym_literal_format_string,
  [sym_system_property] = sym_system_property,
  [sym_string_literal] = sym_string_literal,
  [sym_url_title] = sym_url_title,
  [sym__multiline_begin] = sym__multiline_begin,
  [sym__multiline_end] = sym__multiline_end,
  [sym__singleline_begin] = sym__singleline_begin,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym__parameter_mods_repeat1] = aux_sym__parameter_mods_repeat1,
  [aux_sym_system_property_repeat1] = aux_sym_system_property_repeat1,
  [alias_sym_code] = alias_sym_code,
  [alias_sym_literal] = alias_sym_literal,
  [alias_sym_markdown_description] = alias_sym_markdown_description,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [aux_sym__inline_tag_false_positive_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inline_tag_false_positive_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inline_tag_false_positive_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATauthor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdeprecated] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATdocRoot] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AThidden] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATindex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATinheritDoc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATlink] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATlinkplain] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATliteral] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATparam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATprovides] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsee] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATserial] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATserialData] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATserialField] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsince] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsnippet] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATspec] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsummary] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsystemProperty] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATthrows] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATexception] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATuses] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATvalue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATversion] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_bare_format_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_format_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_quoted_value] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_indexword] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_inline_description] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_block_tag] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_inline_tag] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__inline_tag_actual] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_tag_false_positive] = {
    .visible = false,
    .named = true,
  },
  [sym_author_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_code_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_deprecated_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_root_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_hidden_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_index_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_inherit_doc_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_link_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_param_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_provides_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_return_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_return_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_see_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_serial_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_serial_data_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_serial_field_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_since_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_snippet_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_summary_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_system_property_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_throws_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_uses_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_value_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_version_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__fragment_or_member] = {
    .visible = false,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_type] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_mods] = {
    .visible = false,
    .named = true,
  },
  [sym__qualified_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integral_type] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_format_string] = {
    .visible = true,
    .named = true,
  },
  [sym_system_property] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_url_title] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_begin] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_end] = {
    .visible = false,
    .named = true,
  },
  [sym__singleline_begin] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameter_mods_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_property_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_code] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_literal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_markdown_description] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_attributes = 1,
  field_body = 2,
  field_data_description = 3,
  field_deprecated_text = 4,
  field_description = 5,
  field_exception_type = 6,
  field_exclude = 7,
  field_field_description = 8,
  field_field_name = 9,
  field_field_reference = 10,
  field_field_type = 11,
  field_format = 12,
  field_include = 13,
  field_indexword = 14,
  field_label = 15,
  field_name = 16,
  field_name_text = 17,
  field_parameter_name = 18,
  field_phrase = 19,
  field_property_name = 20,
  field_reference = 21,
  field_service_type = 22,
  field_since_text = 23,
  field_string = 24,
  field_supertype = 25,
  field_text = 26,
  field_title = 27,
  field_type_parameter_name = 28,
  field_url = 29,
  field_url_title = 30,
  field_value = 31,
  field_version_text = 32,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attributes] = "attributes",
  [field_body] = "body",
  [field_data_description] = "data_description",
  [field_deprecated_text] = "deprecated_text",
  [field_description] = "description",
  [field_exception_type] = "exception_type",
  [field_exclude] = "exclude",
  [field_field_description] = "field_description",
  [field_field_name] = "field_name",
  [field_field_reference] = "field_reference",
  [field_field_type] = "field_type",
  [field_format] = "format",
  [field_include] = "include",
  [field_indexword] = "indexword",
  [field_label] = "label",
  [field_name] = "name",
  [field_name_text] = "name_text",
  [field_parameter_name] = "parameter_name",
  [field_phrase] = "phrase",
  [field_property_name] = "property_name",
  [field_reference] = "reference",
  [field_service_type] = "service_type",
  [field_since_text] = "since_text",
  [field_string] = "string",
  [field_supertype] = "supertype",
  [field_text] = "text",
  [field_title] = "title",
  [field_type_parameter_name] = "type_parameter_name",
  [field_url] = "url",
  [field_url_title] = "url_title",
  [field_value] = "value",
  [field_version_text] = "version_text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 2},
  [14] = {.index = 21, .length = 2},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 2},
  [19] = {.index = 31, .length = 2},
  [20] = {.index = 33, .length = 2},
  [21] = {.index = 35, .length = 2},
  [22] = {.index = 37, .length = 2},
  [23] = {.index = 39, .length = 2},
  [24] = {.index = 41, .length = 2},
  [25] = {.index = 35, .length = 2},
  [26] = {.index = 43, .length = 2},
  [27] = {.index = 35, .length = 2},
  [28] = {.index = 45, .length = 2},
  [29] = {.index = 47, .length = 2},
  [30] = {.index = 49, .length = 2},
  [31] = {.index = 51, .length = 3},
  [32] = {.index = 54, .length = 3},
  [33] = {.index = 57, .length = 3},
  [34] = {.index = 60, .length = 3},
  [35] = {.index = 63, .length = 3},
  [36] = {.index = 66, .length = 3},
  [37] = {.index = 69, .length = 3},
  [38] = {.index = 72, .length = 3},
  [39] = {.index = 75, .length = 3},
  [40] = {.index = 78, .length = 2},
  [41] = {.index = 80, .length = 4},
  [42] = {.index = 84, .length = 3},
  [43] = {.index = 87, .length = 2},
  [44] = {.index = 89, .length = 2},
  [45] = {.index = 91, .length = 3},
  [46] = {.index = 94, .length = 1},
  [47] = {.index = 95, .length = 3},
  [48] = {.index = 98, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_description, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [3] =
    {field_name, 0},
    {field_name_text, 1},
  [5] =
    {field_deprecated_text, 1},
    {field_name, 0},
  [7] =
    {field_name, 0},
    {field_parameter_name, 1},
  [9] =
    {field_name, 0},
    {field_service_type, 1},
  [11] =
    {field_description, 1},
    {field_name, 0},
  [13] =
    {field_name, 0},
    {field_reference, 1},
  [15] =
    {field_name, 0},
    {field_string, 1},
  [17] =
    {field_name, 0},
    {field_url_title, 1},
  [19] =
    {field_include, 1},
    {field_name, 0},
  [21] =
    {field_exclude, 1},
    {field_name, 0},
  [23] =
    {field_field_description, 1},
    {field_name, 0},
  [25] =
    {field_data_description, 1},
    {field_name, 0},
  [27] =
    {field_name, 0},
    {field_since_text, 1},
  [29] =
    {field_name, 0},
    {field_url, 1},
  [31] =
    {field_exception_type, 1},
    {field_name, 0},
  [33] =
    {field_name, 0},
    {field_version_text, 1},
  [35] =
    {field_name, 0},
    {field_text, 1},
  [37] =
    {field_indexword, 1},
    {field_name, 0},
  [39] =
    {field_name, 0},
    {field_phrase, 1},
  [41] =
    {field_name, 0},
    {field_supertype, 1},
  [43] =
    {field_attributes, 1},
    {field_name, 0},
  [45] =
    {field_name, 0},
    {field_property_name, 1},
  [47] =
    {field_format, 1},
    {field_name, 0},
  [49] =
    {field_field_reference, 1},
    {field_name, 0},
  [51] =
    {field_description, 2},
    {field_name, 0},
    {field_parameter_name, 1},
  [54] =
    {field_description, 2},
    {field_name, 0},
    {field_service_type, 1},
  [57] =
    {field_label, 2},
    {field_name, 0},
    {field_reference, 1},
  [60] =
    {field_field_name, 1},
    {field_field_type, 2},
    {field_name, 0},
  [63] =
    {field_name, 0},
    {field_title, 2},
    {field_url, 1},
  [66] =
    {field_description, 2},
    {field_exception_type, 1},
    {field_name, 0},
  [69] =
    {field_description, 2},
    {field_indexword, 1},
    {field_name, 0},
  [72] =
    {field_description, 2},
    {field_name, 0},
    {field_phrase, 1},
  [75] =
    {field_field_reference, 2},
    {field_format, 1},
    {field_name, 0},
  [78] =
    {field_name, 0},
    {field_type_parameter_name, 2},
  [80] =
    {field_field_description, 3},
    {field_field_name, 1},
    {field_field_type, 2},
    {field_name, 0},
  [84] =
    {field_label, 3},
    {field_name, 0},
    {field_reference, 1},
  [87] =
    {field_body, 3},
    {field_name, 0},
  [89] =
    {field_name, 0},
    {field_value, 2},
  [91] =
    {field_description, 4},
    {field_name, 0},
    {field_type_parameter_name, 2},
  [94] =
    {field_name, 1},
  [95] =
    {field_attributes, 1},
    {field_body, 4},
    {field_name, 0},
  [98] =
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = alias_sym_markdown_description,
  },
  [10] = {
    [0] = sym_type,
  },
  [21] = {
    [1] = alias_sym_code,
  },
  [25] = {
    [1] = alias_sym_literal,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_description, 2,
    sym_description,
    alias_sym_markdown_description,
  sym__qualified_identifier, 2,
    sym__qualified_identifier,
    sym_type,
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
  [32] = 27,
  [33] = 33,
  [34] = 33,
  [35] = 27,
  [36] = 36,
  [37] = 31,
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
  [72] = 71,
  [73] = 71,
  [74] = 71,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 77,
  [79] = 79,
  [80] = 8,
  [81] = 9,
  [82] = 82,
  [83] = 15,
  [84] = 14,
  [85] = 16,
  [86] = 11,
  [87] = 17,
  [88] = 18,
  [89] = 20,
  [90] = 19,
  [91] = 22,
  [92] = 23,
  [93] = 25,
  [94] = 27,
  [95] = 27,
  [96] = 26,
  [97] = 21,
  [98] = 24,
  [99] = 12,
  [100] = 13,
  [101] = 10,
  [102] = 102,
  [103] = 102,
  [104] = 29,
  [105] = 31,
  [106] = 31,
  [107] = 30,
  [108] = 28,
  [109] = 27,
  [110] = 9,
  [111] = 111,
  [112] = 27,
  [113] = 31,
  [114] = 36,
  [115] = 38,
  [116] = 116,
  [117] = 41,
  [118] = 43,
  [119] = 42,
  [120] = 44,
  [121] = 17,
  [122] = 22,
  [123] = 9,
  [124] = 124,
  [125] = 27,
  [126] = 126,
  [127] = 40,
  [128] = 45,
  [129] = 39,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 22,
  [138] = 138,
  [139] = 29,
  [140] = 17,
  [141] = 31,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 144,
  [151] = 143,
  [152] = 29,
  [153] = 153,
  [154] = 153,
  [155] = 145,
  [156] = 147,
  [157] = 143,
  [158] = 158,
  [159] = 143,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 160,
  [167] = 36,
  [168] = 168,
  [169] = 162,
  [170] = 170,
  [171] = 162,
  [172] = 160,
  [173] = 162,
  [174] = 160,
  [175] = 175,
  [176] = 176,
  [177] = 38,
  [178] = 178,
  [179] = 42,
  [180] = 43,
  [181] = 181,
  [182] = 36,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 183,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 46,
  [194] = 41,
  [195] = 195,
  [196] = 40,
  [197] = 197,
  [198] = 39,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 185,
  [203] = 203,
  [204] = 44,
  [205] = 205,
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
  [217] = 41,
  [218] = 40,
  [219] = 219,
  [220] = 39,
  [221] = 221,
  [222] = 222,
  [223] = 44,
  [224] = 224,
  [225] = 38,
  [226] = 226,
  [227] = 42,
  [228] = 43,
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
  [239] = 231,
  [240] = 240,
  [241] = 238,
  [242] = 242,
  [243] = 236,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 235,
  [248] = 237,
  [249] = 249,
  [250] = 249,
  [251] = 251,
  [252] = 236,
  [253] = 253,
  [254] = 245,
  [255] = 255,
  [256] = 237,
  [257] = 257,
  [258] = 251,
  [259] = 236,
  [260] = 260,
  [261] = 245,
  [262] = 251,
  [263] = 237,
  [264] = 264,
  [265] = 251,
  [266] = 237,
  [267] = 237,
  [268] = 237,
  [269] = 237,
  [270] = 245,
  [271] = 242,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 272,
};

static TSCharacterRange sym_fragment_character_set_1[] = {
  {'!', '!'}, {'$', ')'}, {'+', '+'}, {'-', '.'}, {'0', ':'}, {'=', '='}, {'?', '?'}, {'A', 'Z'},
  {'_', '_'}, {'a', 'z'}, {'~', '~'},
};

static TSCharacterRange sym_identifier_character_set_1[] = {
  {'$', '$'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6},
  {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377},
  {0x37b, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481},
  {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f},
  {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f},
  {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824},
  {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d},
  {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2},
  {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a},
  {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e},
  {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd},
  {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33},
  {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0},
  {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61},
  {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde},
  {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56},
  {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30},
  {0xe32, 0xe32}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0},
  {0xeb2, 0xeb2}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c},
  {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070},
  {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5},
  {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731},
  {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x18a8},
  {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16},
  {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c},
  {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2118, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128},
  {0x212a, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2160, 0x2188}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3},
  {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae},
  {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x3005, 0x3007}, {0x3021, 0x3029},
  {0x3031, 0x3035}, {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x4dbf}, {0x4e00, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b},
  {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3},
  {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7},
  {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4},
  {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf},
  {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4},
  {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2},
  {0xac00, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d},
  {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfc5d},
  {0xfc64, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdf9}, {0xfe71, 0xfe71}, {0xfe73, 0xfe73}, {0xfe77, 0xfe77}, {0xfe79, 0xfe79},
  {0xfe7b, 0xfe7b}, {0xfe7d, 0xfe7d}, {0xfe7f, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xff9d}, {0xffa0, 0xffbe}, {0xffc2, 0xffc7},
  {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d},
  {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10140, 0x10174}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x1034a}, {0x10350, 0x10375},
  {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527},
  {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9},
  {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805},
  {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2},
  {0x108f4, 0x108f5}, {0x10900, 0x10915}, {0x10920, 0x10939}, {0x10980, 0x109b7}, {0x109be, 0x109bf}, {0x10a00, 0x10a00}, {0x10a10, 0x10a13}, {0x10a15, 0x10a17},
  {0x10a19, 0x10a35}, {0x10a60, 0x10a7c}, {0x10a80, 0x10a9c}, {0x10ac0, 0x10ac7}, {0x10ac9, 0x10ae4}, {0x10b00, 0x10b35}, {0x10b40, 0x10b55}, {0x10b60, 0x10b72},
  {0x10b80, 0x10b91}, {0x10c00, 0x10c48}, {0x10c80, 0x10cb2}, {0x10cc0, 0x10cf2}, {0x10d00, 0x10d23}, {0x10e80, 0x10ea9}, {0x10eb0, 0x10eb1}, {0x10f00, 0x10f1c},
  {0x10f27, 0x10f27}, {0x10f30, 0x10f45}, {0x10f70, 0x10f81}, {0x10fb0, 0x10fc4}, {0x10fe0, 0x10ff6}, {0x11003, 0x11037}, {0x11071, 0x11072}, {0x11075, 0x11075},
  {0x11083, 0x110af}, {0x110d0, 0x110e8}, {0x11103, 0x11126}, {0x11144, 0x11144}, {0x11147, 0x11147}, {0x11150, 0x11172}, {0x11176, 0x11176}, {0x11183, 0x111b2},
  {0x111c1, 0x111c4}, {0x111da, 0x111da}, {0x111dc, 0x111dc}, {0x11200, 0x11211}, {0x11213, 0x1122b}, {0x1123f, 0x11240}, {0x11280, 0x11286}, {0x11288, 0x11288},
  {0x1128a, 0x1128d}, {0x1128f, 0x1129d}, {0x1129f, 0x112a8}, {0x112b0, 0x112de}, {0x11305, 0x1130c}, {0x1130f, 0x11310}, {0x11313, 0x11328}, {0x1132a, 0x11330},
  {0x11332, 0x11333}, {0x11335, 0x11339}, {0x1133d, 0x1133d}, {0x11350, 0x11350}, {0x1135d, 0x11361}, {0x11400, 0x11434}, {0x11447, 0x1144a}, {0x1145f, 0x11461},
  {0x11480, 0x114af}, {0x114c4, 0x114c5}, {0x114c7, 0x114c7}, {0x11580, 0x115ae}, {0x115d8, 0x115db}, {0x11600, 0x1162f}, {0x11644, 0x11644}, {0x11680, 0x116aa},
  {0x116b8, 0x116b8}, {0x11700, 0x1171a}, {0x11740, 0x11746}, {0x11800, 0x1182b}, {0x118a0, 0x118df}, {0x118ff, 0x11906}, {0x11909, 0x11909}, {0x1190c, 0x11913},
  {0x11915, 0x11916}, {0x11918, 0x1192f}, {0x1193f, 0x1193f}, {0x11941, 0x11941}, {0x119a0, 0x119a7}, {0x119aa, 0x119d0}, {0x119e1, 0x119e1}, {0x119e3, 0x119e3},
  {0x11a00, 0x11a00}, {0x11a0b, 0x11a32}, {0x11a3a, 0x11a3a}, {0x11a50, 0x11a50}, {0x11a5c, 0x11a89}, {0x11a9d, 0x11a9d}, {0x11ab0, 0x11af8}, {0x11c00, 0x11c08},
  {0x11c0a, 0x11c2e}, {0x11c40, 0x11c40}, {0x11c72, 0x11c8f}, {0x11d00, 0x11d06}, {0x11d08, 0x11d09}, {0x11d0b, 0x11d30}, {0x11d46, 0x11d46}, {0x11d60, 0x11d65},
  {0x11d67, 0x11d68}, {0x11d6a, 0x11d89}, {0x11d98, 0x11d98}, {0x11ee0, 0x11ef2}, {0x11f02, 0x11f02}, {0x11f04, 0x11f10}, {0x11f12, 0x11f33}, {0x11fb0, 0x11fb0},
  {0x12000, 0x12399}, {0x12400, 0x1246e}, {0x12480, 0x12543}, {0x12f90, 0x12ff0}, {0x13000, 0x1342f}, {0x13441, 0x13446}, {0x14400, 0x14646}, {0x16800, 0x16a38},
  {0x16a40, 0x16a5e}, {0x16a70, 0x16abe}, {0x16ad0, 0x16aed}, {0x16b00, 0x16b2f}, {0x16b40, 0x16b43}, {0x16b63, 0x16b77}, {0x16b7d, 0x16b8f}, {0x16e40, 0x16e7f},
  {0x16f00, 0x16f4a}, {0x16f50, 0x16f50}, {0x16f93, 0x16f9f}, {0x16fe0, 0x16fe1}, {0x16fe3, 0x16fe3}, {0x17000, 0x187f7}, {0x18800, 0x18cd5}, {0x18d00, 0x18d08},
  {0x1aff0, 0x1aff3}, {0x1aff5, 0x1affb}, {0x1affd, 0x1affe}, {0x1b000, 0x1b122}, {0x1b132, 0x1b132}, {0x1b150, 0x1b152}, {0x1b155, 0x1b155}, {0x1b164, 0x1b167},
  {0x1b170, 0x1b2fb}, {0x1bc00, 0x1bc6a}, {0x1bc70, 0x1bc7c}, {0x1bc80, 0x1bc88}, {0x1bc90, 0x1bc99}, {0x1d400, 0x1d454}, {0x1d456, 0x1d49c}, {0x1d49e, 0x1d49f},
  {0x1d4a2, 0x1d4a2}, {0x1d4a5, 0x1d4a6}, {0x1d4a9, 0x1d4ac}, {0x1d4ae, 0x1d4b9}, {0x1d4bb, 0x1d4bb}, {0x1d4bd, 0x1d4c3}, {0x1d4c5, 0x1d505}, {0x1d507, 0x1d50a},
  {0x1d50d, 0x1d514}, {0x1d516, 0x1d51c}, {0x1d51e, 0x1d539}, {0x1d53b, 0x1d53e}, {0x1d540, 0x1d544}, {0x1d546, 0x1d546}, {0x1d54a, 0x1d550}, {0x1d552, 0x1d6a5},
  {0x1d6a8, 0x1d6c0}, {0x1d6c2, 0x1d6da}, {0x1d6dc, 0x1d6fa}, {0x1d6fc, 0x1d714}, {0x1d716, 0x1d734}, {0x1d736, 0x1d74e}, {0x1d750, 0x1d76e}, {0x1d770, 0x1d788},
  {0x1d78a, 0x1d7a8}, {0x1d7aa, 0x1d7c2}, {0x1d7c4, 0x1d7cb}, {0x1df00, 0x1df1e}, {0x1df25, 0x1df2a}, {0x1e030, 0x1e06d}, {0x1e100, 0x1e12c}, {0x1e137, 0x1e13d},
  {0x1e14e, 0x1e14e}, {0x1e290, 0x1e2ad}, {0x1e2c0, 0x1e2eb}, {0x1e4d0, 0x1e4eb}, {0x1e7e0, 0x1e7e6}, {0x1e7e8, 0x1e7eb}, {0x1e7ed, 0x1e7ee}, {0x1e7f0, 0x1e7fe},
  {0x1e800, 0x1e8c4}, {0x1e900, 0x1e943}, {0x1e94b, 0x1e94b}, {0x1ee00, 0x1ee03}, {0x1ee05, 0x1ee1f}, {0x1ee21, 0x1ee22}, {0x1ee24, 0x1ee24}, {0x1ee27, 0x1ee27},
  {0x1ee29, 0x1ee32}, {0x1ee34, 0x1ee37}, {0x1ee39, 0x1ee39}, {0x1ee3b, 0x1ee3b}, {0x1ee42, 0x1ee42}, {0x1ee47, 0x1ee47}, {0x1ee49, 0x1ee49}, {0x1ee4b, 0x1ee4b},
  {0x1ee4d, 0x1ee4f}, {0x1ee51, 0x1ee52}, {0x1ee54, 0x1ee54}, {0x1ee57, 0x1ee57}, {0x1ee59, 0x1ee59}, {0x1ee5b, 0x1ee5b}, {0x1ee5d, 0x1ee5d}, {0x1ee5f, 0x1ee5f},
  {0x1ee61, 0x1ee62}, {0x1ee64, 0x1ee64}, {0x1ee67, 0x1ee6a}, {0x1ee6c, 0x1ee72}, {0x1ee74, 0x1ee77}, {0x1ee79, 0x1ee7c}, {0x1ee7e, 0x1ee7e}, {0x1ee80, 0x1ee89},
  {0x1ee8b, 0x1ee9b}, {0x1eea1, 0x1eea3}, {0x1eea5, 0x1eea9}, {0x1eeab, 0x1eebb}, {0x20000, 0x2a6df}, {0x2a700, 0x2b739}, {0x2b740, 0x2b81d}, {0x2b820, 0x2cea1},
  {0x2ceb0, 0x2ebe0}, {0x2ebf0, 0x2ee5d}, {0x2f800, 0x2fa1d}, {0x30000, 0x3134a}, {0x31350, 0x323af},
};

static TSCharacterRange sym_identifier_character_set_2[] = {
  {'$', '$'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xa2, 0xa2}, {0xaa, 0xaa}, {0xb5, 0xb5},
  {0xb7, 0xb7}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec},
  {0x2ee, 0x2ee}, {0x300, 0x374}, {0x376, 0x377}, {0x37b, 0x37d}, {0x37f, 0x37f}, {0x386, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1},
  {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x483, 0x487}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x591, 0x5bd},
  {0x5bf, 0x5bf}, {0x5c1, 0x5c2}, {0x5c4, 0x5c5}, {0x5c7, 0x5c7}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x610, 0x61a}, {0x620, 0x669},
  {0x66e, 0x6d3}, {0x6d5, 0x6dc}, {0x6df, 0x6e8}, {0x6ea, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x74a}, {0x74d, 0x7b1}, {0x7c0, 0x7f5},
  {0x7fa, 0x7fa}, {0x7fd, 0x7fd}, {0x800, 0x82d}, {0x840, 0x85b}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x898, 0x8e1},
  {0x8e3, 0x963}, {0x966, 0x96f}, {0x971, 0x983}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2},
  {0x9b6, 0x9b9}, {0x9bc, 0x9c4}, {0x9c7, 0x9c8}, {0x9cb, 0x9ce}, {0x9d7, 0x9d7}, {0x9dc, 0x9dd}, {0x9df, 0x9e3}, {0x9e6, 0x9f1},
  {0x9fc, 0x9fc}, {0x9fe, 0x9fe}, {0xa01, 0xa03}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33},
  {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa3c, 0xa3c}, {0xa3e, 0xa42}, {0xa47, 0xa48}, {0xa4b, 0xa4d}, {0xa51, 0xa51}, {0xa59, 0xa5c},
  {0xa5e, 0xa5e}, {0xa66, 0xa75}, {0xa81, 0xa83}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3},
  {0xab5, 0xab9}, {0xabc, 0xac5}, {0xac7, 0xac9}, {0xacb, 0xacd}, {0xad0, 0xad0}, {0xae0, 0xae3}, {0xae6, 0xaef}, {0xaf9, 0xaff},
  {0xb01, 0xb03}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3c, 0xb44},
  {0xb47, 0xb48}, {0xb4b, 0xb4d}, {0xb55, 0xb57}, {0xb5c, 0xb5d}, {0xb5f, 0xb63}, {0xb66, 0xb6f}, {0xb71, 0xb71}, {0xb82, 0xb83},
  {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa},
  {0xbae, 0xbb9}, {0xbbe, 0xbc2}, {0xbc6, 0xbc8}, {0xbca, 0xbcd}, {0xbd0, 0xbd0}, {0xbd7, 0xbd7}, {0xbe6, 0xbef}, {0xc00, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3c, 0xc44}, {0xc46, 0xc48}, {0xc4a, 0xc4d}, {0xc55, 0xc56}, {0xc58, 0xc5a},
  {0xc5d, 0xc5d}, {0xc60, 0xc63}, {0xc66, 0xc6f}, {0xc80, 0xc83}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3},
  {0xcb5, 0xcb9}, {0xcbc, 0xcc4}, {0xcc6, 0xcc8}, {0xcca, 0xccd}, {0xcd5, 0xcd6}, {0xcdd, 0xcde}, {0xce0, 0xce3}, {0xce6, 0xcef},
  {0xcf1, 0xcf3}, {0xd00, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd44}, {0xd46, 0xd48}, {0xd4a, 0xd4e}, {0xd54, 0xd57}, {0xd5f, 0xd63},
  {0xd66, 0xd6f}, {0xd7a, 0xd7f}, {0xd81, 0xd83}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6},
  {0xdca, 0xdca}, {0xdcf, 0xdd4}, {0xdd6, 0xdd6}, {0xdd8, 0xddf}, {0xde6, 0xdef}, {0xdf2, 0xdf3}, {0xe01, 0xe3a}, {0xe40, 0xe4e},
  {0xe50, 0xe59}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xebd}, {0xec0, 0xec4},
  {0xec6, 0xec6}, {0xec8, 0xece}, {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf18, 0xf19}, {0xf20, 0xf29}, {0xf35, 0xf35},
  {0xf37, 0xf37}, {0xf39, 0xf39}, {0xf3e, 0xf47}, {0xf49, 0xf6c}, {0xf71, 0xf84}, {0xf86, 0xf97}, {0xf99, 0xfbc}, {0xfc6, 0xfc6},
  {0x1000, 0x1049}, {0x1050, 0x109d}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x135d, 0x135f}, {0x1369, 0x1371},
  {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8},
  {0x1700, 0x1715}, {0x171f, 0x1734}, {0x1740, 0x1753}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1772, 0x1773}, {0x1780, 0x17d3}, {0x17d7, 0x17d7},
  {0x17dc, 0x17dd}, {0x17e0, 0x17e9}, {0x180b, 0x180d}, {0x180f, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e},
  {0x1920, 0x192b}, {0x1930, 0x193b}, {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a1b},
  {0x1a20, 0x1a5e}, {0x1a60, 0x1a7c}, {0x1a7f, 0x1a89}, {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1ab0, 0x1abd}, {0x1abf, 0x1ace}, {0x1b00, 0x1b4c},
  {0x1b50, 0x1b59}, {0x1b6b, 0x1b73}, {0x1b80, 0x1bf3}, {0x1c00, 0x1c37}, {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba},
  {0x1cbd, 0x1cbf}, {0x1cd0, 0x1cd2}, {0x1cd4, 0x1cfa}, {0x1d00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57},
  {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4},
  {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x200c, 0x200d}, {0x203f, 0x2040},
  {0x2054, 0x2054}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x20d0, 0x20dc}, {0x20e1, 0x20e1}, {0x20e5, 0x20f0}, {0x2102, 0x2102},
  {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2118, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x2139},
  {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2160, 0x2188}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27},
  {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d7f, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe},
  {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2de0, 0x2dff}, {0x3005, 0x3007}, {0x3021, 0x302f}, {0x3031, 0x3035},
  {0x3038, 0x303c}, {0x3041, 0x3096}, {0x3099, 0x309a}, {0x309d, 0x309f}, {0x30a1, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf},
  {0x31f0, 0x31ff}, {0x3400, 0x4dbf}, {0x4e00, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66f}, {0xa674, 0xa67d},
  {0xa67f, 0xa6f1}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa827},
  {0xa82c, 0xa82c}, {0xa840, 0xa873}, {0xa880, 0xa8c5}, {0xa8d0, 0xa8d9}, {0xa8e0, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa92d}, {0xa930, 0xa953},
  {0xa960, 0xa97c}, {0xa980, 0xa9c0}, {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9fe}, {0xaa00, 0xaa36}, {0xaa40, 0xaa4d}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76},
  {0xaa7a, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaef}, {0xaaf2, 0xaaf6}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26},
  {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabea}, {0xabec, 0xabed}, {0xabf0, 0xabf9}, {0xac00, 0xd7a3}, {0xd7b0, 0xd7c6},
  {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c},
  {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfc5d}, {0xfc64, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7},
  {0xfdf0, 0xfdf9}, {0xfe00, 0xfe0f}, {0xfe20, 0xfe2f}, {0xfe33, 0xfe34}, {0xfe4d, 0xfe4f}, {0xfe71, 0xfe71}, {0xfe73, 0xfe73}, {0xfe77, 0xfe77},
  {0xfe79, 0xfe79}, {0xfe7b, 0xfe7b}, {0xfe7d, 0xfe7d}, {0xfe7f, 0xfefc}, {0xff10, 0xff19}, {0xff21, 0xff3a}, {0xff3f, 0xff3f}, {0xff41, 0xff5a},
  {0xff65, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a},
  {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10140, 0x10174}, {0x101fd, 0x101fd}, {0x10280, 0x1029c}, {0x102a0, 0x102d0},
  {0x102e0, 0x102e0}, {0x10300, 0x1031f}, {0x1032d, 0x1034a}, {0x10350, 0x1037a}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5},
  {0x10400, 0x1049d}, {0x104a0, 0x104a9}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a},
  {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755},
  {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838},
  {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915}, {0x10920, 0x10939},
  {0x10980, 0x109b7}, {0x109be, 0x109bf}, {0x10a00, 0x10a03}, {0x10a05, 0x10a06}, {0x10a0c, 0x10a13}, {0x10a15, 0x10a17}, {0x10a19, 0x10a35}, {0x10a38, 0x10a3a},
  {0x10a3f, 0x10a3f}, {0x10a60, 0x10a7c}, {0x10a80, 0x10a9c}, {0x10ac0, 0x10ac7}, {0x10ac9, 0x10ae6}, {0x10b00, 0x10b35}, {0x10b40, 0x10b55}, {0x10b60, 0x10b72},
  {0x10b80, 0x10b91}, {0x10c00, 0x10c48}, {0x10c80, 0x10cb2}, {0x10cc0, 0x10cf2}, {0x10d00, 0x10d27}, {0x10d30, 0x10d39}, {0x10e80, 0x10ea9}, {0x10eab, 0x10eac},
  {0x10eb0, 0x10eb1}, {0x10efd, 0x10f1c}, {0x10f27, 0x10f27}, {0x10f30, 0x10f50}, {0x10f70, 0x10f85}, {0x10fb0, 0x10fc4}, {0x10fe0, 0x10ff6}, {0x11000, 0x11046},
  {0x11066, 0x11075}, {0x1107f, 0x110ba}, {0x110c2, 0x110c2}, {0x110d0, 0x110e8}, {0x110f0, 0x110f9}, {0x11100, 0x11134}, {0x11136, 0x1113f}, {0x11144, 0x11147},
  {0x11150, 0x11173}, {0x11176, 0x11176}, {0x11180, 0x111c4}, {0x111c9, 0x111cc}, {0x111ce, 0x111da}, {0x111dc, 0x111dc}, {0x11200, 0x11211}, {0x11213, 0x11237},
  {0x1123e, 0x11241}, {0x11280, 0x11286}, {0x11288, 0x11288}, {0x1128a, 0x1128d}, {0x1128f, 0x1129d}, {0x1129f, 0x112a8}, {0x112b0, 0x112ea}, {0x112f0, 0x112f9},
  {0x11300, 0x11303}, {0x11305, 0x1130c}, {0x1130f, 0x11310}, {0x11313, 0x11328}, {0x1132a, 0x11330}, {0x11332, 0x11333}, {0x11335, 0x11339}, {0x1133b, 0x11344},
  {0x11347, 0x11348}, {0x1134b, 0x1134d}, {0x11350, 0x11350}, {0x11357, 0x11357}, {0x1135d, 0x11363}, {0x11366, 0x1136c}, {0x11370, 0x11374}, {0x11400, 0x1144a},
  {0x11450, 0x11459}, {0x1145e, 0x11461}, {0x11480, 0x114c5}, {0x114c7, 0x114c7}, {0x114d0, 0x114d9}, {0x11580, 0x115b5}, {0x115b8, 0x115c0}, {0x115d8, 0x115dd},
  {0x11600, 0x11640}, {0x11644, 0x11644}, {0x11650, 0x11659}, {0x11680, 0x116b8}, {0x116c0, 0x116c9}, {0x11700, 0x1171a}, {0x1171d, 0x1172b}, {0x11730, 0x11739},
  {0x11740, 0x11746}, {0x11800, 0x1183a}, {0x118a0, 0x118e9}, {0x118ff, 0x11906}, {0x11909, 0x11909}, {0x1190c, 0x11913}, {0x11915, 0x11916}, {0x11918, 0x11935},
  {0x11937, 0x11938}, {0x1193b, 0x11943}, {0x11950, 0x11959}, {0x119a0, 0x119a7}, {0x119aa, 0x119d7}, {0x119da, 0x119e1}, {0x119e3, 0x119e4}, {0x11a00, 0x11a3e},
  {0x11a47, 0x11a47}, {0x11a50, 0x11a99}, {0x11a9d, 0x11a9d}, {0x11ab0, 0x11af8}, {0x11c00, 0x11c08}, {0x11c0a, 0x11c36}, {0x11c38, 0x11c40}, {0x11c50, 0x11c59},
  {0x11c72, 0x11c8f}, {0x11c92, 0x11ca7}, {0x11ca9, 0x11cb6}, {0x11d00, 0x11d06}, {0x11d08, 0x11d09}, {0x11d0b, 0x11d36}, {0x11d3a, 0x11d3a}, {0x11d3c, 0x11d3d},
  {0x11d3f, 0x11d47}, {0x11d50, 0x11d59}, {0x11d60, 0x11d65}, {0x11d67, 0x11d68}, {0x11d6a, 0x11d8e}, {0x11d90, 0x11d91}, {0x11d93, 0x11d98}, {0x11da0, 0x11da9},
  {0x11ee0, 0x11ef6}, {0x11f00, 0x11f10}, {0x11f12, 0x11f3a}, {0x11f3e, 0x11f42}, {0x11f50, 0x11f59}, {0x11fb0, 0x11fb0}, {0x12000, 0x12399}, {0x12400, 0x1246e},
  {0x12480, 0x12543}, {0x12f90, 0x12ff0}, {0x13000, 0x1342f}, {0x13440, 0x13455}, {0x14400, 0x14646}, {0x16800, 0x16a38}, {0x16a40, 0x16a5e}, {0x16a60, 0x16a69},
  {0x16a70, 0x16abe}, {0x16ac0, 0x16ac9}, {0x16ad0, 0x16aed}, {0x16af0, 0x16af4}, {0x16b00, 0x16b36}, {0x16b40, 0x16b43}, {0x16b50, 0x16b59}, {0x16b63, 0x16b77},
  {0x16b7d, 0x16b8f}, {0x16e40, 0x16e7f}, {0x16f00, 0x16f4a}, {0x16f4f, 0x16f87}, {0x16f8f, 0x16f9f}, {0x16fe0, 0x16fe1}, {0x16fe3, 0x16fe4}, {0x16ff0, 0x16ff1},
  {0x17000, 0x187f7}, {0x18800, 0x18cd5}, {0x18d00, 0x18d08}, {0x1aff0, 0x1aff3}, {0x1aff5, 0x1affb}, {0x1affd, 0x1affe}, {0x1b000, 0x1b122}, {0x1b132, 0x1b132},
  {0x1b150, 0x1b152}, {0x1b155, 0x1b155}, {0x1b164, 0x1b167}, {0x1b170, 0x1b2fb}, {0x1bc00, 0x1bc6a}, {0x1bc70, 0x1bc7c}, {0x1bc80, 0x1bc88}, {0x1bc90, 0x1bc99},
  {0x1bc9d, 0x1bc9e}, {0x1cf00, 0x1cf2d}, {0x1cf30, 0x1cf46}, {0x1d165, 0x1d169}, {0x1d16d, 0x1d172}, {0x1d17b, 0x1d182}, {0x1d185, 0x1d18b}, {0x1d1aa, 0x1d1ad},
  {0x1d242, 0x1d244}, {0x1d400, 0x1d454}, {0x1d456, 0x1d49c}, {0x1d49e, 0x1d49f}, {0x1d4a2, 0x1d4a2}, {0x1d4a5, 0x1d4a6}, {0x1d4a9, 0x1d4ac}, {0x1d4ae, 0x1d4b9},
  {0x1d4bb, 0x1d4bb}, {0x1d4bd, 0x1d4c3}, {0x1d4c5, 0x1d505}, {0x1d507, 0x1d50a}, {0x1d50d, 0x1d514}, {0x1d516, 0x1d51c}, {0x1d51e, 0x1d539}, {0x1d53b, 0x1d53e},
  {0x1d540, 0x1d544}, {0x1d546, 0x1d546}, {0x1d54a, 0x1d550}, {0x1d552, 0x1d6a5}, {0x1d6a8, 0x1d6c0}, {0x1d6c2, 0x1d6da}, {0x1d6dc, 0x1d6fa}, {0x1d6fc, 0x1d714},
  {0x1d716, 0x1d734}, {0x1d736, 0x1d74e}, {0x1d750, 0x1d76e}, {0x1d770, 0x1d788}, {0x1d78a, 0x1d7a8}, {0x1d7aa, 0x1d7c2}, {0x1d7c4, 0x1d7cb}, {0x1d7ce, 0x1d7ff},
  {0x1da00, 0x1da36}, {0x1da3b, 0x1da6c}, {0x1da75, 0x1da75}, {0x1da84, 0x1da84}, {0x1da9b, 0x1da9f}, {0x1daa1, 0x1daaf}, {0x1df00, 0x1df1e}, {0x1df25, 0x1df2a},
  {0x1e000, 0x1e006}, {0x1e008, 0x1e018}, {0x1e01b, 0x1e021}, {0x1e023, 0x1e024}, {0x1e026, 0x1e02a}, {0x1e030, 0x1e06d}, {0x1e08f, 0x1e08f}, {0x1e100, 0x1e12c},
  {0x1e130, 0x1e13d}, {0x1e140, 0x1e149}, {0x1e14e, 0x1e14e}, {0x1e290, 0x1e2ae}, {0x1e2c0, 0x1e2f9}, {0x1e4d0, 0x1e4f9}, {0x1e7e0, 0x1e7e6}, {0x1e7e8, 0x1e7eb},
  {0x1e7ed, 0x1e7ee}, {0x1e7f0, 0x1e7fe}, {0x1e800, 0x1e8c4}, {0x1e8d0, 0x1e8d6}, {0x1e900, 0x1e94b}, {0x1e950, 0x1e959}, {0x1ee00, 0x1ee03}, {0x1ee05, 0x1ee1f},
  {0x1ee21, 0x1ee22}, {0x1ee24, 0x1ee24}, {0x1ee27, 0x1ee27}, {0x1ee29, 0x1ee32}, {0x1ee34, 0x1ee37}, {0x1ee39, 0x1ee39}, {0x1ee3b, 0x1ee3b}, {0x1ee42, 0x1ee42},
  {0x1ee47, 0x1ee47}, {0x1ee49, 0x1ee49}, {0x1ee4b, 0x1ee4b}, {0x1ee4d, 0x1ee4f}, {0x1ee51, 0x1ee52}, {0x1ee54, 0x1ee54}, {0x1ee57, 0x1ee57}, {0x1ee59, 0x1ee59},
  {0x1ee5b, 0x1ee5b}, {0x1ee5d, 0x1ee5d}, {0x1ee5f, 0x1ee5f}, {0x1ee61, 0x1ee62}, {0x1ee64, 0x1ee64}, {0x1ee67, 0x1ee6a}, {0x1ee6c, 0x1ee72}, {0x1ee74, 0x1ee77},
  {0x1ee79, 0x1ee7c}, {0x1ee7e, 0x1ee7e}, {0x1ee80, 0x1ee89}, {0x1ee8b, 0x1ee9b}, {0x1eea1, 0x1eea3}, {0x1eea5, 0x1eea9}, {0x1eeab, 0x1eebb}, {0x1fbf0, 0x1fbf9},
  {0x20000, 0x2a6df}, {0x2a700, 0x2b739}, {0x2b740, 0x2b81d}, {0x2b820, 0x2cea1}, {0x2ceb0, 0x2ebe0}, {0x2ebf0, 0x2ee5d}, {0x2f800, 0x2fa1d}, {0x30000, 0x3134a},
  {0x31350, 0x323af}, {0xe0100, 0xe01ef},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(90);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') SKIP(5);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(6);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '}') ADVANCE(147);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(8);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(8);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(8);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(13);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '*') SKIP(12);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(13);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(412);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(15);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(15);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(15);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(19);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(19);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(19);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(23);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(23);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(23);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(29);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(27);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(29);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(29);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(27);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(29);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(27);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(31);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(31);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(31);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(35);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(35);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(35);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(39);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(39);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(39);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(44);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == '}') ADVANCE(147);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(44);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(44);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(47);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == '*') SKIP(46);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(47);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(49);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(50);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(49);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') SKIP(49);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(49);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(50);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(49);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(52);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(53);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') SKIP(52);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(52);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(53);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(52);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 54:
      if (lookahead == '\n') SKIP(55);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(56);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '@' || 'Z' < lookahead)) ADVANCE(412);
      END_STATE();
    case 55:
      if (lookahead == '\n') SKIP(55);
      if (lookahead == '*') SKIP(55);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(55);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(56);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '@' || 'Z' < lookahead)) ADVANCE(412);
      END_STATE();
    case 56:
      if (lookahead == '\n') SKIP(55);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '*' &&
          (lookahead < '@' || 'Z' < lookahead)) ADVANCE(412);
      END_STATE();
    case 57:
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(57);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(59);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 58:
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') SKIP(58);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(59);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 59:
      if (lookahead == '\n') SKIP(58);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '}') ADVANCE(147);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(197);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      END_STATE();
    case 61:
      if (lookahead == '\n') SKIP(62);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(63);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 62:
      if (lookahead == '\n') SKIP(62);
      if (lookahead == '*') SKIP(62);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(63);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 63:
      if (lookahead == '\n') SKIP(62);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 64:
      if (lookahead == '\n') SKIP(65);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(66);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 65:
      if (lookahead == '\n') SKIP(65);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') SKIP(65);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(65);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(66);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 66:
      if (lookahead == '\n') SKIP(65);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 67:
      if (lookahead == '\n') SKIP(67);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '*') SKIP(67);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(67);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 68:
      if (lookahead == '\n') SKIP(67);
      if (lookahead == '"') ADVANCE(346);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '%') ADVANCE(347);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '%') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == '\n') SKIP(71);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(71);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(72);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 72:
      if (lookahead == '\n') SKIP(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(177);
      END_STATE();
    case 74:
      if (lookahead == '\n') SKIP(74);
      if (lookahead == '*') SKIP(74);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(74);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(75);
      if (set_contains(sym_fragment_character_set_1, 11, lookahead)) ADVANCE(209);
      END_STATE();
    case 75:
      if (lookahead == '\n') SKIP(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75);
      if (set_contains(sym_fragment_character_set_1, 11, lookahead)) ADVANCE(209);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(350);
      END_STATE();
    case 77:
      if (lookahead == '%') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '*') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == '*') ADVANCE(413);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(195);
      END_STATE();
    case 82:
      if (lookahead == '/') ADVANCE(414);
      END_STATE();
    case 83:
      if (lookahead == '/') ADVANCE(414);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(415);
      END_STATE();
    case 85:
      ADVANCE_MAP(
        'a', 335,
        'c', 292,
        'd', 237,
        'e', 341,
        'h', 264,
        'i', 283,
        'l', 263,
        'p', 213,
        'r', 246,
        's', 239,
        't', 261,
        'u', 322,
        'v', 214,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 86:
      ADVANCE_MAP(
        'a', 335,
        'd', 238,
        'e', 341,
        'h', 264,
        'p', 213,
        'r', 246,
        's', 240,
        't', 261,
        'u', 322,
        'v', 252,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(215);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 88:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(345);
      END_STATE();
    case 89:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(150);
      END_STATE();
    case 90:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(90);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(90);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 91:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(90);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(85);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == 'f') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 92:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(94);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(93);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 93:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(94);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 94:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(94);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(94);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(93);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 95:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(95);
      if (lookahead == '*') SKIP(95);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(95);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(97);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 96:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(95);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(97);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 97:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(95);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(412);
      END_STATE();
    case 98:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(100);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(99);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 99:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(100);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 100:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(100);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(100);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(99);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 101:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(103);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(102);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 102:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(103);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(102);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 103:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(103);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(103);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(102);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 104:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(107);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(106);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 105:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(107);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(106);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 106:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(107);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(106);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 107:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(107);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(107);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(106);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 108:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(110);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(109);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 109:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(110);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(109);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 110:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(110);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(110);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(109);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 111:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(113);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(112);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 112:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(113);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(112);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 113:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(113);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(113);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(112);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 114:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(116);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(115);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 115:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(116);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(115);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 116:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(116);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(116);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(115);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 117:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(119);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(118);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 118:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(119);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(118);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 119:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(119);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(119);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(118);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 120:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(122);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == '}') ADVANCE(147);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      END_STATE();
    case 121:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(122);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == '}') ADVANCE(147);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      END_STATE();
    case 122:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(122);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(122);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      END_STATE();
    case 123:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(124);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(125);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 124:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(124);
      if (lookahead == '*') SKIP(124);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(124);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(125);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 125:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(124);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(125);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 126:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(127);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(128);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 127:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(127);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') SKIP(127);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(127);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(128);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 128:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(127);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(128);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 129:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(131);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(132);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 130:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(131);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(132);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 131:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(131);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') SKIP(131);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(131);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(132);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 132:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(131);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(132);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 133:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(134);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(135);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '@' || 'Z' < lookahead)) ADVANCE(412);
      END_STATE();
    case 134:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(134);
      if (lookahead == '*') SKIP(134);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(134);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(135);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '@' || 'Z' < lookahead)) ADVANCE(412);
      END_STATE();
    case 135:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(134);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(135);
      if (set_contains(sym_identifier_character_set_1, 669, lookahead)) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '*' &&
          (lookahead < '@' || 'Z' < lookahead)) ADVANCE(412);
      END_STATE();
    case 136:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(137);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(57);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(138);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 137:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(137);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '*') SKIP(137);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(137);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(138);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 138:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(137);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(138);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 139:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(140);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(141);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 140:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(140);
      if (lookahead == '*') SKIP(140);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(140);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(141);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 141:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(140);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(141);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 142:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(143);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(144);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 143:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(143);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '*') SKIP(143);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(143);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(144);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 144:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(143);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(144);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '@') ADVANCE(412);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__inline_tag_false_positive_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__inline_tag_false_positive_token2);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__inline_tag_false_positive_token3);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ATcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_ATdocRoot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AThidden);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_ATindex);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_ATinheritDoc);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_ATlink);
      if (lookahead == 'p') ADVANCE(278);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_ATlinkplain);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_ATliteral);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_ATparam);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_ATprovides);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ATsee);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ATserial);
      if (lookahead == 'D') ADVANCE(221);
      if (lookahead == 'F') ADVANCE(271);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_include);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_exclude);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_ATserialData);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ATserialField);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ATsince);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ATsnippet);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATspec);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATsummary);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATsystemProperty);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATthrows);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATexception);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATuses);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATvalue);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATversion);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(196);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(397);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(81);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_boolean_type);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_byte);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_short);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_int);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_long);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_char);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_float);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_double);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_fragment);
      if (set_contains(sym_fragment_character_set_1, 11, lookahead)) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'D') ADVANCE(299);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'P') ADVANCE(316);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'R') ADVANCE(300);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(245);
      if (lookahead == 'h') ADVANCE(255);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(323);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(311);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(302);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(323);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(317);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(259);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(329);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(312);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(244);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(272);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(320);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(156);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(228);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(180);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_bare_format_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_literal_format_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '%') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_quoted_value);
      if (lookahead == '\n') ADVANCE(348);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(350);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_quoted_value);
      if (lookahead == '\n') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_quoted_value);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_indexword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unsigned_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(386);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(390);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(378);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(373);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(371);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 't') ADVANCE(204);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(365);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(366);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(202);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(205);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(355);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(384);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(393);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(367);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(364);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(383);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(394);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(360);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(368);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(201);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(389);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(392);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(372);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(377);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(356);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(387);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == 'y') ADVANCE(388);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(206);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(391);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(363);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(204);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(207);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(203);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(358);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(361);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(362);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(359);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_identifier_character_set_2, 778, lookahead)) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == 'c') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == 'c') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == 'd') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == 'd') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == 'u') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead == 'u') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '/') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(78);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead == 'x') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '/') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(408);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR_STAR);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 92},
  [3] = {.lex_state = 96},
  [4] = {.lex_state = 92},
  [5] = {.lex_state = 92},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 92},
  [8] = {.lex_state = 98},
  [9] = {.lex_state = 101},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 92},
  [13] = {.lex_state = 92},
  [14] = {.lex_state = 92},
  [15] = {.lex_state = 92},
  [16] = {.lex_state = 92},
  [17] = {.lex_state = 104},
  [18] = {.lex_state = 92},
  [19] = {.lex_state = 92},
  [20] = {.lex_state = 92},
  [21] = {.lex_state = 92},
  [22] = {.lex_state = 108},
  [23] = {.lex_state = 92},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 92},
  [26] = {.lex_state = 92},
  [27] = {.lex_state = 104},
  [28] = {.lex_state = 92},
  [29] = {.lex_state = 111},
  [30] = {.lex_state = 92},
  [31] = {.lex_state = 105},
  [32] = {.lex_state = 105},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 114},
  [36] = {.lex_state = 117},
  [37] = {.lex_state = 114},
  [38] = {.lex_state = 92},
  [39] = {.lex_state = 92},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 92},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 92},
  [44] = {.lex_state = 92},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 120},
  [47] = {.lex_state = 92},
  [48] = {.lex_state = 92},
  [49] = {.lex_state = 92},
  [50] = {.lex_state = 92},
  [51] = {.lex_state = 92},
  [52] = {.lex_state = 92},
  [53] = {.lex_state = 92},
  [54] = {.lex_state = 92},
  [55] = {.lex_state = 92},
  [56] = {.lex_state = 92},
  [57] = {.lex_state = 92},
  [58] = {.lex_state = 92},
  [59] = {.lex_state = 92},
  [60] = {.lex_state = 92},
  [61] = {.lex_state = 92},
  [62] = {.lex_state = 92},
  [63] = {.lex_state = 92},
  [64] = {.lex_state = 92},
  [65] = {.lex_state = 92},
  [66] = {.lex_state = 92},
  [67] = {.lex_state = 92},
  [68] = {.lex_state = 92},
  [69] = {.lex_state = 92},
  [70] = {.lex_state = 92},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 120},
  [77] = {.lex_state = 120},
  [78] = {.lex_state = 120},
  [79] = {.lex_state = 120},
  [80] = {.lex_state = 123},
  [81] = {.lex_state = 126},
  [82] = {.lex_state = 120},
  [83] = {.lex_state = 96},
  [84] = {.lex_state = 96},
  [85] = {.lex_state = 96},
  [86] = {.lex_state = 96},
  [87] = {.lex_state = 129},
  [88] = {.lex_state = 96},
  [89] = {.lex_state = 96},
  [90] = {.lex_state = 96},
  [91] = {.lex_state = 133},
  [92] = {.lex_state = 96},
  [93] = {.lex_state = 96},
  [94] = {.lex_state = 129},
  [95] = {.lex_state = 120},
  [96] = {.lex_state = 96},
  [97] = {.lex_state = 96},
  [98] = {.lex_state = 96},
  [99] = {.lex_state = 96},
  [100] = {.lex_state = 96},
  [101] = {.lex_state = 96},
  [102] = {.lex_state = 96},
  [103] = {.lex_state = 96},
  [104] = {.lex_state = 136},
  [105] = {.lex_state = 120},
  [106] = {.lex_state = 130},
  [107] = {.lex_state = 96},
  [108] = {.lex_state = 96},
  [109] = {.lex_state = 130},
  [110] = {.lex_state = 60},
  [111] = {.lex_state = 120},
  [112] = {.lex_state = 139},
  [113] = {.lex_state = 139},
  [114] = {.lex_state = 142},
  [115] = {.lex_state = 96},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 96},
  [118] = {.lex_state = 96},
  [119] = {.lex_state = 96},
  [120] = {.lex_state = 96},
  [121] = {.lex_state = 60},
  [122] = {.lex_state = 60},
  [123] = {.lex_state = 120},
  [124] = {.lex_state = 120},
  [125] = {.lex_state = 60},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 96},
  [128] = {.lex_state = 96},
  [129] = {.lex_state = 96},
  [130] = {.lex_state = 120},
  [131] = {.lex_state = 120},
  [132] = {.lex_state = 120},
  [133] = {.lex_state = 120},
  [134] = {.lex_state = 120},
  [135] = {.lex_state = 120},
  [136] = {.lex_state = 120},
  [137] = {.lex_state = 120},
  [138] = {.lex_state = 120},
  [139] = {.lex_state = 60},
  [140] = {.lex_state = 120},
  [141] = {.lex_state = 60},
  [142] = {.lex_state = 120},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 108},
  [145] = {.lex_state = 108},
  [146] = {.lex_state = 120},
  [147] = {.lex_state = 108},
  [148] = {.lex_state = 120},
  [149] = {.lex_state = 120},
  [150] = {.lex_state = 108},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 108},
  [154] = {.lex_state = 108},
  [155] = {.lex_state = 108},
  [156] = {.lex_state = 108},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 120},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 120},
  [162] = {.lex_state = 108},
  [163] = {.lex_state = 68},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 120},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 60},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 108},
  [170] = {.lex_state = 120},
  [171] = {.lex_state = 108},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 108},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6, .external_lex_state = 1},
  [177] = {.lex_state = 60},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 60},
  [180] = {.lex_state = 60},
  [181] = {.lex_state = 6, .external_lex_state = 1},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 120},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 108},
  [186] = {.lex_state = 6, .external_lex_state = 1},
  [187] = {.lex_state = 6, .external_lex_state = 1},
  [188] = {.lex_state = 120},
  [189] = {.lex_state = 60},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6, .external_lex_state = 1},
  [194] = {.lex_state = 60},
  [195] = {.lex_state = 108},
  [196] = {.lex_state = 60},
  [197] = {.lex_state = 6, .external_lex_state = 1},
  [198] = {.lex_state = 60},
  [199] = {.lex_state = 6, .external_lex_state = 1},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6, .external_lex_state = 1},
  [202] = {.lex_state = 108},
  [203] = {.lex_state = 108},
  [204] = {.lex_state = 60},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0, .external_lex_state = 1},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 70},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 0, .external_lex_state = 1},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 0, .external_lex_state = 1},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 72},
  [232] = {.lex_state = 73},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 108},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 75},
  [237] = {.lex_state = 108},
  [238] = {.lex_state = 108},
  [239] = {.lex_state = 72},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 108},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 75},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 108},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 75},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 108},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 75},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 108},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 108},
  [267] = {.lex_state = 108},
  [268] = {.lex_state = 108},
  [269] = {.lex_state = 108},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 76},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 73},
  [276] = {.lex_state = 76},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__inline_tag_false_positive_token1] = ACTIONS(1),
    [aux_sym__inline_tag_false_positive_token2] = ACTIONS(1),
    [aux_sym__inline_tag_false_positive_token3] = ACTIONS(1),
    [anon_sym_ATauthor] = ACTIONS(1),
    [anon_sym_ATcode] = ACTIONS(1),
    [anon_sym_ATdeprecated] = ACTIONS(1),
    [anon_sym_ATdocRoot] = ACTIONS(1),
    [anon_sym_AThidden] = ACTIONS(1),
    [anon_sym_ATindex] = ACTIONS(1),
    [anon_sym_ATinheritDoc] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [anon_sym_ATlinkplain] = ACTIONS(1),
    [anon_sym_ATliteral] = ACTIONS(1),
    [anon_sym_ATparam] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_ATprovides] = ACTIONS(1),
    [anon_sym_ATreturn] = ACTIONS(1),
    [anon_sym_ATsee] = ACTIONS(1),
    [anon_sym_ATserial] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_exclude] = ACTIONS(1),
    [anon_sym_ATserialData] = ACTIONS(1),
    [anon_sym_ATserialField] = ACTIONS(1),
    [anon_sym_ATsince] = ACTIONS(1),
    [anon_sym_ATsnippet] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ATspec] = ACTIONS(1),
    [anon_sym_ATsummary] = ACTIONS(1),
    [anon_sym_ATsystemProperty] = ACTIONS(1),
    [anon_sym_ATthrows] = ACTIONS(1),
    [anon_sym_ATexception] = ACTIONS(1),
    [anon_sym_ATuses] = ACTIONS(1),
    [anon_sym_ATvalue] = ACTIONS(1),
    [anon_sym_ATversion] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_boolean_type] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_unsigned_integer] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_inline_description] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(208),
    [sym__multiline_begin] = STATE(2),
    [sym__singleline_begin] = STATE(3),
    [anon_sym_SLASH_STAR_STAR] = ACTIONS(3),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_ATauthor,
    ACTIONS(15), 1,
      anon_sym_ATdeprecated,
    ACTIONS(17), 1,
      anon_sym_AThidden,
    ACTIONS(19), 1,
      anon_sym_ATparam,
    ACTIONS(21), 1,
      anon_sym_ATprovides,
    ACTIONS(23), 1,
      anon_sym_ATreturn,
    ACTIONS(25), 1,
      anon_sym_ATsee,
    ACTIONS(27), 1,
      anon_sym_ATserial,
    ACTIONS(29), 1,
      anon_sym_ATserialData,
    ACTIONS(31), 1,
      anon_sym_ATserialField,
    ACTIONS(33), 1,
      anon_sym_ATsince,
    ACTIONS(35), 1,
      anon_sym_ATspec,
    ACTIONS(39), 1,
      anon_sym_ATuses,
    ACTIONS(41), 1,
      anon_sym_ATversion,
    ACTIONS(43), 1,
      sym_tag_name,
    ACTIONS(45), 1,
      sym__text,
    ACTIONS(47), 1,
      anon_sym_STAR_SLASH,
    STATE(4), 1,
      sym_description,
    STATE(5), 1,
      aux_sym_document_repeat1,
    STATE(65), 1,
      sym_block_tag,
    STATE(206), 1,
      sym__multiline_end,
    ACTIONS(37), 2,
      anon_sym_ATthrows,
      anon_sym_ATexception,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    STATE(67), 16,
      sym_author_tag,
      sym_deprecated_tag,
      sym_hidden_tag,
      sym_param_tag,
      sym_provides_tag,
      sym_return_tag,
      sym_see_tag,
      sym_serial_tag,
      sym_serial_data_tag,
      sym_serial_field_tag,
      sym_since_tag,
      sym_spec_tag,
      sym_throws_tag,
      sym_uses_tag,
      sym_version_tag,
      sym_custom_tag,
  [102] = 23,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_AThidden,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_ATauthor,
    ACTIONS(55), 1,
      anon_sym_ATdeprecated,
    ACTIONS(57), 1,
      anon_sym_ATparam,
    ACTIONS(59), 1,
      anon_sym_ATprovides,
    ACTIONS(61), 1,
      anon_sym_ATreturn,
    ACTIONS(63), 1,
      anon_sym_ATsee,
    ACTIONS(65), 1,
      anon_sym_ATserial,
    ACTIONS(67), 1,
      anon_sym_ATserialData,
    ACTIONS(69), 1,
      anon_sym_ATserialField,
    ACTIONS(71), 1,
      anon_sym_ATsince,
    ACTIONS(73), 1,
      anon_sym_ATspec,
    ACTIONS(77), 1,
      anon_sym_ATuses,
    ACTIONS(79), 1,
      anon_sym_ATversion,
    ACTIONS(81), 1,
      sym_tag_name,
    STATE(206), 1,
      sym_block_tag,
    STATE(219), 1,
      sym_description,
    ACTIONS(75), 2,
      anon_sym_ATthrows,
      anon_sym_ATexception,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
    STATE(67), 16,
      sym_author_tag,
      sym_deprecated_tag,
      sym_hidden_tag,
      sym_param_tag,
      sym_provides_tag,
      sym_return_tag,
      sym_see_tag,
      sym_serial_tag,
      sym_serial_data_tag,
      sym_serial_field_tag,
      sym_since_tag,
      sym_spec_tag,
      sym_throws_tag,
      sym_uses_tag,
      sym_version_tag,
      sym_custom_tag,
  [193] = 21,
    ACTIONS(13), 1,
      anon_sym_ATauthor,
    ACTIONS(15), 1,
      anon_sym_ATdeprecated,
    ACTIONS(17), 1,
      anon_sym_AThidden,
    ACTIONS(19), 1,
      anon_sym_ATparam,
    ACTIONS(21), 1,
      anon_sym_ATprovides,
    ACTIONS(23), 1,
      anon_sym_ATreturn,
    ACTIONS(25), 1,
      anon_sym_ATsee,
    ACTIONS(27), 1,
      anon_sym_ATserial,
    ACTIONS(29), 1,
      anon_sym_ATserialData,
    ACTIONS(31), 1,
      anon_sym_ATserialField,
    ACTIONS(33), 1,
      anon_sym_ATsince,
    ACTIONS(35), 1,
      anon_sym_ATspec,
    ACTIONS(39), 1,
      anon_sym_ATuses,
    ACTIONS(41), 1,
      anon_sym_ATversion,
    ACTIONS(43), 1,
      sym_tag_name,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_STAR_SLASH,
    STATE(260), 1,
      sym__multiline_end,
    ACTIONS(37), 2,
      anon_sym_ATthrows,
      anon_sym_ATexception,
    STATE(6), 2,
      sym_block_tag,
      aux_sym_document_repeat1,
    STATE(67), 16,
      sym_author_tag,
      sym_deprecated_tag,
      sym_hidden_tag,
      sym_param_tag,
      sym_provides_tag,
      sym_return_tag,
      sym_see_tag,
      sym_serial_tag,
      sym_serial_data_tag,
      sym_serial_field_tag,
      sym_since_tag,
      sym_spec_tag,
      sym_throws_tag,
      sym_uses_tag,
      sym_version_tag,
      sym_custom_tag,
  [274] = 20,
    ACTIONS(13), 1,
      anon_sym_ATauthor,
    ACTIONS(15), 1,
      anon_sym_ATdeprecated,
    ACTIONS(17), 1,
      anon_sym_AThidden,
    ACTIONS(19), 1,
      anon_sym_ATparam,
    ACTIONS(21), 1,
      anon_sym_ATprovides,
    ACTIONS(23), 1,
      anon_sym_ATreturn,
    ACTIONS(25), 1,
      anon_sym_ATsee,
    ACTIONS(27), 1,
      anon_sym_ATserial,
    ACTIONS(29), 1,
      anon_sym_ATserialData,
    ACTIONS(31), 1,
      anon_sym_ATserialField,
    ACTIONS(33), 1,
      anon_sym_ATsince,
    ACTIONS(35), 1,
      anon_sym_ATspec,
    ACTIONS(39), 1,
      anon_sym_ATuses,
    ACTIONS(41), 1,
      anon_sym_ATversion,
    ACTIONS(43), 1,
      sym_tag_name,
    ACTIONS(85), 1,
      anon_sym_STAR_SLASH,
    STATE(260), 1,
      sym__multiline_end,
    ACTIONS(37), 2,
      anon_sym_ATthrows,
      anon_sym_ATexception,
    STATE(7), 2,
      sym_block_tag,
      aux_sym_document_repeat1,
    STATE(67), 16,
      sym_author_tag,
      sym_deprecated_tag,
      sym_hidden_tag,
      sym_param_tag,
      sym_provides_tag,
      sym_return_tag,
      sym_see_tag,
      sym_serial_tag,
      sym_serial_data_tag,
      sym_serial_field_tag,
      sym_since_tag,
      sym_spec_tag,
      sym_throws_tag,
      sym_uses_tag,
      sym_version_tag,
      sym_custom_tag,
  [352] = 20,
    ACTIONS(13), 1,
      anon_sym_ATauthor,
    ACTIONS(15), 1,
      anon_sym_ATdeprecated,
    ACTIONS(17), 1,
      anon_sym_AThidden,
    ACTIONS(19), 1,
      anon_sym_ATparam,
    ACTIONS(21), 1,
      anon_sym_ATprovides,
    ACTIONS(23), 1,
      anon_sym_ATreturn,
    ACTIONS(25), 1,
      anon_sym_ATsee,
    ACTIONS(27), 1,
      anon_sym_ATserial,
    ACTIONS(29), 1,
      anon_sym_ATserialData,
    ACTIONS(31), 1,
      anon_sym_ATserialField,
    ACTIONS(33), 1,
      anon_sym_ATsince,
    ACTIONS(35), 1,
      anon_sym_ATspec,
    ACTIONS(39), 1,
      anon_sym_ATuses,
    ACTIONS(41), 1,
      anon_sym_ATversion,
    ACTIONS(43), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      anon_sym_STAR_SLASH,
    STATE(210), 1,
      sym__multiline_end,
    ACTIONS(37), 2,
      anon_sym_ATthrows,
      anon_sym_ATexception,
    STATE(7), 2,
      sym_block_tag,
      aux_sym_document_repeat1,
    STATE(67), 16,
      sym_author_tag,
      sym_deprecated_tag,
      sym_hidden_tag,
      sym_param_tag,
      sym_provides_tag,
      sym_return_tag,
      sym_see_tag,
      sym_serial_tag,
      sym_serial_data_tag,
      sym_serial_field_tag,
      sym_since_tag,
      sym_spec_tag,
      sym_throws_tag,
      sym_uses_tag,
      sym_version_tag,
      sym_custom_tag,
  [430] = 19,
    ACTIONS(89), 1,
      anon_sym_ATauthor,
    ACTIONS(92), 1,
      anon_sym_ATdeprecated,
    ACTIONS(95), 1,
      anon_sym_AThidden,
    ACTIONS(98), 1,
      anon_sym_ATparam,
    ACTIONS(101), 1,
      anon_sym_ATprovides,
    ACTIONS(104), 1,
      anon_sym_ATreturn,
    ACTIONS(107), 1,
      anon_sym_ATsee,
    ACTIONS(110), 1,
      anon_sym_ATserial,
    ACTIONS(113), 1,
      anon_sym_ATserialData,
    ACTIONS(116), 1,
      anon_sym_ATserialField,
    ACTIONS(119), 1,
      anon_sym_ATsince,
    ACTIONS(122), 1,
      anon_sym_ATspec,
    ACTIONS(128), 1,
      anon_sym_ATuses,
    ACTIONS(131), 1,
      anon_sym_ATversion,
    ACTIONS(134), 1,
      sym_tag_name,
    ACTIONS(137), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(125), 2,
      anon_sym_ATthrows,
      anon_sym_ATexception,
    STATE(7), 2,
      sym_block_tag,
      aux_sym_document_repeat1,
    STATE(67), 16,
      sym_author_tag,
      sym_deprecated_tag,
      sym_hidden_tag,
      sym_param_tag,
      sym_provides_tag,
      sym_return_tag,
      sym_see_tag,
      sym_serial_tag,
      sym_serial_data_tag,
      sym_serial_field_tag,
      sym_since_tag,
      sym_spec_tag,
      sym_throws_tag,
      sym_uses_tag,
      sym_version_tag,
      sym_custom_tag,
  [505] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    ACTIONS(143), 1,
      anon_sym_include,
    ACTIONS(145), 1,
      anon_sym_exclude,
    STATE(60), 1,
      sym_description,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(141), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [554] = 5,
    ACTIONS(153), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 3,
      anon_sym_SLASH,
      anon_sym_POUND_POUND,
      anon_sym_DOT,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(149), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [594] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(66), 1,
      sym_description,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(159), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [637] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(53), 1,
      sym_description,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(163), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [680] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(61), 1,
      sym_description,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(167), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [723] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(62), 1,
      sym_description,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(171), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [766] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(50), 1,
      sym_description,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(175), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [809] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(49), 1,
      sym_description,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(179), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [852] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(69), 1,
      sym_description,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(183), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [895] = 4,
    ACTIONS(153), 1,
      anon_sym_POUND,
    ACTIONS(151), 3,
      anon_sym_SLASH,
      anon_sym_POUND_POUND,
      anon_sym_DOT,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(187), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [932] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(57), 1,
      sym_description,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(191), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [975] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(52), 1,
      sym_description,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(195), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [1018] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(56), 1,
      sym_description,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(199), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [1061] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(70), 1,
      sym_description,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(203), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [1104] = 5,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(29), 1,
      sym_type,
    STATE(31), 2,
      sym__qualified_identifier,
      sym__type,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(207), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1143] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(63), 1,
      sym_description,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(213), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [1186] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(47), 1,
      sym_description,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(217), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [1229] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(55), 1,
      sym_description,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(221), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [1272] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__text,
    STATE(64), 1,
      sym_description,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(11), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(225), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [1315] = 2,
    ACTIONS(227), 8,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_SLASH,
      anon_sym_POUND_POUND,
      anon_sym_DOT,
      anon_sym_STAR_SLASH,
    ACTIONS(229), 20,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_POUND,
      sym_tag_name,
      sym__text,
  [1348] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      sym__text,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(233), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(30), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(235), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [1388] = 5,
    ACTIONS(243), 1,
      anon_sym_POUND_POUND,
    ACTIONS(245), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym__fragment_or_member,
    ACTIONS(239), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(241), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1426] = 6,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      sym__text,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(252), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(30), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(255), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [1466] = 3,
    ACTIONS(264), 1,
      anon_sym_DOT,
    ACTIONS(260), 6,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_POUND_POUND,
      anon_sym_STAR_SLASH,
    ACTIONS(262), 20,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_POUND,
      sym_tag_name,
      sym__text,
  [1500] = 2,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_POUND_POUND,
      anon_sym_DOT,
      anon_sym_STAR_SLASH,
    ACTIONS(229), 20,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      anon_sym_POUND,
      sym_tag_name,
      sym__text,
  [1532] = 15,
    ACTIONS(266), 1,
      anon_sym_ATcode,
    ACTIONS(268), 1,
      anon_sym_ATdocRoot,
    ACTIONS(270), 1,
      anon_sym_ATindex,
    ACTIONS(272), 1,
      anon_sym_ATinheritDoc,
    ACTIONS(276), 1,
      anon_sym_ATliteral,
    ACTIONS(278), 1,
      anon_sym_ATreturn,
    ACTIONS(280), 1,
      anon_sym_ATsnippet,
    ACTIONS(282), 1,
      anon_sym_ATsummary,
    ACTIONS(284), 1,
      anon_sym_ATsystemProperty,
    ACTIONS(286), 1,
      anon_sym_ATvalue,
    ACTIONS(288), 1,
      sym_tag_name,
    STATE(222), 1,
      sym__inline_return_tag,
    STATE(271), 1,
      sym_inline_tag,
    ACTIONS(274), 2,
      anon_sym_ATlink,
      anon_sym_ATlinkplain,
    STATE(214), 11,
      sym_code_tag,
      sym_doc_root_tag,
      sym_index_tag,
      sym_inherit_doc_tag,
      sym_link_tag,
      sym_literal_tag,
      sym_snippet_tag,
      sym_summary_tag,
      sym_system_property_tag,
      sym_value_tag,
      sym_custom_inline_tag,
  [1589] = 15,
    ACTIONS(266), 1,
      anon_sym_ATcode,
    ACTIONS(268), 1,
      anon_sym_ATdocRoot,
    ACTIONS(270), 1,
      anon_sym_ATindex,
    ACTIONS(272), 1,
      anon_sym_ATinheritDoc,
    ACTIONS(276), 1,
      anon_sym_ATliteral,
    ACTIONS(278), 1,
      anon_sym_ATreturn,
    ACTIONS(280), 1,
      anon_sym_ATsnippet,
    ACTIONS(282), 1,
      anon_sym_ATsummary,
    ACTIONS(284), 1,
      anon_sym_ATsystemProperty,
    ACTIONS(286), 1,
      anon_sym_ATvalue,
    ACTIONS(288), 1,
      sym_tag_name,
    STATE(222), 1,
      sym__inline_return_tag,
    STATE(242), 1,
      sym_inline_tag,
    ACTIONS(274), 2,
      anon_sym_ATlink,
      anon_sym_ATlinkplain,
    STATE(214), 11,
      sym_code_tag,
      sym_doc_root_tag,
      sym_index_tag,
      sym_inherit_doc_tag,
      sym_link_tag,
      sym_literal_tag,
      sym_snippet_tag,
      sym_summary_tag,
      sym_system_property_tag,
      sym_value_tag,
      sym_custom_inline_tag,
  [1646] = 2,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_DOT,
      anon_sym_STAR_SLASH,
    ACTIONS(229), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1676] = 3,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(149), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1708] = 3,
    ACTIONS(290), 1,
      anon_sym_DOT,
    ACTIONS(260), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(262), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1740] = 2,
    ACTIONS(292), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(294), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1769] = 2,
    ACTIONS(296), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(298), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1798] = 2,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(149), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1827] = 2,
    ACTIONS(300), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(302), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1856] = 2,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(306), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1885] = 2,
    ACTIONS(308), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(310), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1914] = 2,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(207), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1943] = 2,
    ACTIONS(312), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_STAR_SLASH,
    ACTIONS(314), 19,
      anon_sym_LBRACE,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
      sym__text,
  [1972] = 2,
    ACTIONS(316), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_identifier,
      anon_sym_STAR_SLASH,
    ACTIONS(318), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [1999] = 2,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(322), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2023] = 2,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(326), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2047] = 2,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(330), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2071] = 2,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(334), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2095] = 2,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(338), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2119] = 2,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(342), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2143] = 2,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(346), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2167] = 2,
    ACTIONS(348), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(350), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2191] = 2,
    ACTIONS(352), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(354), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2215] = 2,
    ACTIONS(356), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(358), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2239] = 2,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(362), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2263] = 2,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(366), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2287] = 2,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(370), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2311] = 2,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(374), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2335] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(378), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2359] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(382), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2383] = 2,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(386), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2407] = 2,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(390), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2431] = 3,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(394), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(392), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2457] = 2,
    ACTIONS(396), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(398), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2481] = 2,
    ACTIONS(400), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(402), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2505] = 2,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(406), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2529] = 2,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(410), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2553] = 2,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      anon_sym_STAR_SLASH,
    ACTIONS(414), 17,
      anon_sym_ATauthor,
      anon_sym_ATdeprecated,
      anon_sym_AThidden,
      anon_sym_ATparam,
      anon_sym_ATprovides,
      anon_sym_ATreturn,
      anon_sym_ATsee,
      anon_sym_ATserial,
      anon_sym_ATserialData,
      anon_sym_ATserialField,
      anon_sym_ATsince,
      anon_sym_ATspec,
      anon_sym_ATthrows,
      anon_sym_ATexception,
      anon_sym_ATuses,
      anon_sym_ATversion,
      sym_tag_name,
  [2577] = 10,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(418), 1,
      sym_boolean_type,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(111), 1,
      sym_parameter_type,
    STATE(175), 1,
      sym_parameter,
    STATE(262), 1,
      sym_parameters,
    ACTIONS(422), 2,
      anon_sym_float,
      anon_sym_double,
    STATE(105), 2,
      sym__qualified_identifier,
      sym__type,
    STATE(132), 3,
      sym_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(420), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [2616] = 10,
    ACTIONS(418), 1,
      sym_boolean_type,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_parameter_type,
    STATE(175), 1,
      sym_parameter,
    STATE(251), 1,
      sym_parameters,
    ACTIONS(422), 2,
      anon_sym_float,
      anon_sym_double,
    STATE(105), 2,
      sym__qualified_identifier,
      sym__type,
    STATE(132), 3,
      sym_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(420), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [2655] = 10,
    ACTIONS(418), 1,
      sym_boolean_type,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_parameter_type,
    STATE(175), 1,
      sym_parameter,
    STATE(258), 1,
      sym_parameters,
    ACTIONS(422), 2,
      anon_sym_float,
      anon_sym_double,
    STATE(105), 2,
      sym__qualified_identifier,
      sym__type,
    STATE(132), 3,
      sym_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(420), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [2694] = 10,
    ACTIONS(418), 1,
      sym_boolean_type,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_parameter_type,
    STATE(175), 1,
      sym_parameter,
    STATE(265), 1,
      sym_parameters,
    ACTIONS(422), 2,
      anon_sym_float,
      anon_sym_double,
    STATE(105), 2,
      sym__qualified_identifier,
      sym__type,
    STATE(132), 3,
      sym_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(420), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [2733] = 8,
    ACTIONS(418), 1,
      sym_boolean_type,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(111), 1,
      sym_parameter_type,
    STATE(191), 1,
      sym_parameter,
    ACTIONS(422), 2,
      anon_sym_float,
      anon_sym_double,
    STATE(105), 2,
      sym__qualified_identifier,
      sym__type,
    STATE(132), 3,
      sym_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(420), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [2766] = 14,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    ACTIONS(434), 1,
      anon_sym_POUND_POUND,
    ACTIONS(436), 1,
      anon_sym_POUND,
    ACTIONS(438), 1,
      sym_bare_format_string,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 1,
      sym_identifier,
    STATE(79), 1,
      sym_literal_format_string,
    STATE(140), 1,
      sym__qualified_identifier,
    STATE(157), 1,
      sym__type,
    STATE(174), 1,
      sym_type,
    STATE(218), 1,
      sym_method,
    STATE(226), 1,
      sym_reference,
    STATE(261), 1,
      sym_module,
    STATE(217), 2,
      sym__fragment_or_member,
      sym_member,
  [2810] = 14,
    ACTIONS(243), 1,
      anon_sym_POUND_POUND,
    ACTIONS(245), 1,
      anon_sym_POUND,
    ACTIONS(444), 1,
      anon_sym_LT,
    ACTIONS(446), 1,
      anon_sym_DQUOTE,
    ACTIONS(448), 1,
      sym_identifier,
    STATE(11), 1,
      sym_reference,
    STATE(17), 1,
      sym__qualified_identifier,
    STATE(40), 1,
      sym_method,
    STATE(48), 1,
      sym_url_title,
    STATE(54), 1,
      sym_string_literal,
    STATE(151), 1,
      sym__type,
    STATE(166), 1,
      sym_type,
    STATE(270), 1,
      sym_module,
    STATE(41), 2,
      sym__fragment_or_member,
      sym_member,
  [2854] = 14,
    ACTIONS(446), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 1,
      anon_sym_LT,
    ACTIONS(452), 1,
      anon_sym_POUND_POUND,
    ACTIONS(454), 1,
      anon_sym_POUND,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(48), 1,
      sym_url_title,
    STATE(54), 1,
      sym_string_literal,
    STATE(86), 1,
      sym_reference,
    STATE(87), 1,
      sym__qualified_identifier,
    STATE(127), 1,
      sym_method,
    STATE(159), 1,
      sym__type,
    STATE(160), 1,
      sym_type,
    STATE(245), 1,
      sym_module,
    STATE(117), 2,
      sym__fragment_or_member,
      sym_member,
  [2898] = 11,
    ACTIONS(434), 1,
      anon_sym_POUND_POUND,
    ACTIONS(436), 1,
      anon_sym_POUND,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      sym__qualified_identifier,
    STATE(157), 1,
      sym__type,
    STATE(174), 1,
      sym_type,
    STATE(218), 1,
      sym_method,
    STATE(257), 1,
      sym_reference,
    STATE(261), 1,
      sym_module,
    STATE(217), 2,
      sym__fragment_or_member,
      sym_member,
  [2933] = 8,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      anon_sym_include,
    ACTIONS(145), 1,
      anon_sym_exclude,
    ACTIONS(460), 1,
      sym__text,
    STATE(60), 1,
      sym_description,
    ACTIONS(51), 3,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
  [2962] = 5,
    ACTIONS(153), 1,
      anon_sym_POUND,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 2,
      anon_sym_LBRACE,
      sym__text,
    ACTIONS(151), 3,
      anon_sym_SLASH,
      anon_sym_POUND_POUND,
      anon_sym_DOT,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
  [2984] = 10,
    ACTIONS(464), 1,
      anon_sym_POUND_POUND,
    ACTIONS(466), 1,
      anon_sym_POUND,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(121), 1,
      sym__qualified_identifier,
    STATE(143), 1,
      sym__type,
    STATE(172), 1,
      sym_type,
    STATE(189), 1,
      sym_reference,
    STATE(196), 1,
      sym_method,
    STATE(254), 1,
      sym_module,
    STATE(194), 2,
      sym__fragment_or_member,
      sym_member,
  [3016] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3037] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3058] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3079] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3100] = 4,
    ACTIONS(153), 1,
      anon_sym_POUND,
    ACTIONS(187), 2,
      anon_sym_LBRACE,
      sym__text,
    ACTIONS(151), 3,
      anon_sym_SLASH,
      anon_sym_POUND_POUND,
      anon_sym_DOT,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
  [3119] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3140] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3161] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3182] = 5,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(104), 1,
      sym_type,
    ACTIONS(207), 2,
      anon_sym_LBRACE,
      sym__text,
    STATE(106), 2,
      sym__qualified_identifier,
      sym__type,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
  [3203] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3224] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3245] = 2,
    ACTIONS(229), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym__text,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_SLASH,
      anon_sym_POUND_POUND,
      anon_sym_DOT,
  [3260] = 2,
    ACTIONS(229), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(227), 8,
      anon_sym_RBRACE,
      anon_sym_SLASH,
      anon_sym_POUND_POUND,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [3275] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3296] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3317] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3338] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3359] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3380] = 5,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3401] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_description,
    STATE(28), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(11), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3419] = 4,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_description,
    STATE(108), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(51), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3437] = 5,
    ACTIONS(452), 1,
      anon_sym_POUND_POUND,
    ACTIONS(454), 1,
      anon_sym_POUND,
    STATE(118), 1,
      sym__fragment_or_member,
    ACTIONS(241), 2,
      anon_sym_LBRACE,
      sym__text,
    ACTIONS(239), 4,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
  [3457] = 3,
    ACTIONS(262), 1,
      anon_sym_POUND,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(260), 7,
      anon_sym_RBRACE,
      anon_sym_POUND_POUND,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [3473] = 3,
    ACTIONS(474), 1,
      anon_sym_DOT,
    ACTIONS(262), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym__text,
    ACTIONS(260), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_POUND_POUND,
  [3489] = 4,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    STATE(107), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(479), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3507] = 4,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    STATE(107), 3,
      sym__inline_tag_actual,
      sym__inline_tag_false_positive,
      aux_sym_description_repeat1,
    ACTIONS(482), 4,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3525] = 2,
    ACTIONS(229), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      sym__text,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_POUND_POUND,
      anon_sym_DOT,
  [3539] = 5,
    ACTIONS(147), 1,
      sym__space,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 3,
      anon_sym_POUND_POUND,
      anon_sym_POUND,
      anon_sym_DOT,
  [3557] = 6,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    ACTIONS(490), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(492), 1,
      sym_identifier,
    STATE(135), 1,
      aux_sym__parameter_mods_repeat1,
    STATE(170), 1,
      sym__parameter_mods,
    ACTIONS(486), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3577] = 2,
    ACTIONS(229), 2,
      anon_sym_LBRACE,
      sym__text,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      anon_sym_DOT,
  [3589] = 3,
    ACTIONS(494), 1,
      anon_sym_DOT,
    ACTIONS(262), 2,
      anon_sym_LBRACE,
      sym__text,
    ACTIONS(260), 4,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
  [3603] = 3,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 2,
      anon_sym_LBRACE,
      sym__text,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
  [3617] = 2,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3628] = 5,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    ACTIONS(498), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(135), 1,
      aux_sym__parameter_mods_repeat1,
    STATE(184), 1,
      sym__parameter_mods,
    ACTIONS(496), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3645] = 2,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3656] = 2,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(308), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3667] = 2,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3678] = 2,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3689] = 4,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(185), 1,
      sym__space,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 3,
      anon_sym_POUND_POUND,
      anon_sym_POUND,
      anon_sym_DOT,
  [3704] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(500), 1,
      sym_identifier,
    STATE(139), 1,
      sym_type,
    STATE(141), 2,
      sym__qualified_identifier,
      sym__type,
  [3721] = 4,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 3,
      anon_sym_SLASH,
      anon_sym_POUND_POUND,
      anon_sym_DOT,
  [3736] = 5,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    ACTIONS(506), 1,
      anon_sym_COLON,
    ACTIONS(508), 1,
      sym_identifier,
    STATE(192), 1,
      sym_attributes,
    STATE(131), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [3753] = 2,
    ACTIONS(227), 2,
      anon_sym_SLASH,
      sym__space,
    ACTIONS(229), 4,
      anon_sym_RBRACE,
      anon_sym_POUND_POUND,
      anon_sym_POUND,
      anon_sym_DOT,
  [3764] = 5,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(135), 1,
      aux_sym__parameter_mods_repeat1,
    STATE(178), 1,
      sym__parameter_mods,
    ACTIONS(510), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3781] = 2,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3792] = 2,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3803] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 5,
      ts_builtin_sym_end,
      aux_sym__inline_tag_false_positive_token1,
      aux_sym__inline_tag_false_positive_token2,
      aux_sym__inline_tag_false_positive_token3,
      sym__text,
  [3814] = 1,
    ACTIONS(514), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [3822] = 3,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(516), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(142), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [3834] = 1,
    ACTIONS(518), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [3842] = 1,
    ACTIONS(520), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [3850] = 3,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    STATE(134), 1,
      aux_sym__parameter_mods_repeat1,
    ACTIONS(522), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [3862] = 3,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    STATE(134), 1,
      aux_sym__parameter_mods_repeat1,
    ACTIONS(527), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [3874] = 4,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(264), 1,
      sym_type,
    STATE(105), 2,
      sym__qualified_identifier,
      sym__type,
  [3888] = 4,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(152), 1,
      sym_type,
    STATE(105), 2,
      sym__qualified_identifier,
      sym__type,
  [3902] = 4,
    ACTIONS(446), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym_string_literal,
    STATE(165), 1,
      sym_attribute_value,
    ACTIONS(533), 2,
      sym_unsigned_integer,
      sym_identifier,
  [3916] = 5,
    ACTIONS(239), 1,
      sym__space,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(466), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      anon_sym_POUND_POUND,
    STATE(180), 1,
      sym__fragment_or_member,
  [3932] = 3,
    ACTIONS(153), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 3,
      anon_sym_SLASH,
      anon_sym_POUND_POUND,
      anon_sym_DOT,
  [3944] = 3,
    ACTIONS(260), 1,
      sym__space,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(262), 3,
      anon_sym_RBRACE,
      anon_sym_POUND_POUND,
      anon_sym_POUND,
  [3956] = 3,
    ACTIONS(541), 1,
      sym_identifier,
    ACTIONS(539), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
    STATE(142), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [3968] = 4,
    ACTIONS(260), 1,
      anon_sym_POUND_POUND,
    ACTIONS(262), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_SLASH,
    ACTIONS(546), 1,
      anon_sym_DOT,
  [3981] = 3,
    ACTIONS(548), 1,
      sym_identifier,
    STATE(23), 1,
      sym_type,
    STATE(37), 2,
      sym__qualified_identifier,
      sym__type,
  [3992] = 3,
    ACTIONS(548), 1,
      sym_identifier,
    STATE(20), 1,
      sym_type,
    STATE(37), 2,
      sym__qualified_identifier,
      sym__type,
  [4003] = 1,
    ACTIONS(522), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_identifier,
  [4010] = 3,
    ACTIONS(548), 1,
      sym_identifier,
    STATE(19), 1,
      sym_type,
    STATE(37), 2,
      sym__qualified_identifier,
      sym__type,
  [4021] = 2,
    ACTIONS(552), 1,
      anon_sym_EQ,
    ACTIONS(550), 3,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_identifier,
  [4030] = 2,
    ACTIONS(556), 1,
      anon_sym_POUND,
    ACTIONS(554), 3,
      anon_sym_RBRACE,
      anon_sym_POUND_POUND,
      sym_identifier,
  [4039] = 3,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(92), 1,
      sym_type,
    STATE(113), 2,
      sym__qualified_identifier,
      sym__type,
  [4050] = 4,
    ACTIONS(260), 1,
      anon_sym_POUND_POUND,
    ACTIONS(262), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_SLASH,
    ACTIONS(560), 1,
      anon_sym_DOT,
  [4063] = 4,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(434), 1,
      anon_sym_POUND_POUND,
    ACTIONS(436), 1,
      anon_sym_POUND,
    STATE(228), 1,
      sym__fragment_or_member,
  [4076] = 3,
    ACTIONS(548), 1,
      sym_identifier,
    STATE(14), 1,
      sym_type,
    STATE(37), 2,
      sym__qualified_identifier,
      sym__type,
  [4087] = 3,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(84), 1,
      sym_type,
    STATE(113), 2,
      sym__qualified_identifier,
      sym__type,
  [4098] = 3,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(89), 1,
      sym_type,
    STATE(113), 2,
      sym__qualified_identifier,
      sym__type,
  [4109] = 3,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(90), 1,
      sym_type,
    STATE(113), 2,
      sym__qualified_identifier,
      sym__type,
  [4120] = 4,
    ACTIONS(260), 1,
      anon_sym_POUND_POUND,
    ACTIONS(262), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_SLASH,
    ACTIONS(562), 1,
      anon_sym_DOT,
  [4133] = 4,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    ACTIONS(566), 1,
      sym_identifier,
    STATE(203), 1,
      aux_sym_system_property_repeat1,
    STATE(213), 1,
      sym_system_property,
  [4146] = 4,
    ACTIONS(260), 1,
      anon_sym_POUND_POUND,
    ACTIONS(262), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_SLASH,
    ACTIONS(568), 1,
      anon_sym_DOT,
  [4159] = 3,
    ACTIONS(452), 1,
      anon_sym_POUND_POUND,
    ACTIONS(454), 1,
      anon_sym_POUND,
    STATE(120), 1,
      sym__fragment_or_member,
  [4169] = 1,
    ACTIONS(570), 3,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_identifier,
  [4175] = 3,
    ACTIONS(572), 1,
      sym_identifier,
    STATE(39), 1,
      sym_member,
    STATE(40), 1,
      sym_method,
  [4185] = 3,
    ACTIONS(574), 1,
      anon_sym_DQUOTE,
    ACTIONS(576), 1,
      sym_indexword,
    STATE(187), 1,
      sym_string_literal,
  [4195] = 3,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_parameters_repeat1,
  [4205] = 1,
    ACTIONS(583), 3,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_identifier,
  [4211] = 3,
    ACTIONS(243), 1,
      anon_sym_POUND_POUND,
    ACTIONS(245), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym__fragment_or_member,
  [4221] = 3,
    ACTIONS(147), 1,
      sym__space,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
  [4231] = 3,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_parameters_repeat1,
  [4241] = 3,
    ACTIONS(589), 1,
      sym_identifier,
    STATE(127), 1,
      sym_method,
    STATE(129), 1,
      sym_member,
  [4251] = 2,
    ACTIONS(593), 1,
      sym_identifier,
    ACTIONS(591), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4259] = 3,
    ACTIONS(595), 1,
      sym_identifier,
    STATE(196), 1,
      sym_method,
    STATE(198), 1,
      sym_member,
  [4269] = 3,
    ACTIONS(464), 1,
      anon_sym_POUND_POUND,
    ACTIONS(466), 1,
      anon_sym_POUND,
    STATE(204), 1,
      sym__fragment_or_member,
  [4279] = 3,
    ACTIONS(597), 1,
      sym_identifier,
    STATE(218), 1,
      sym_method,
    STATE(220), 1,
      sym_member,
  [4289] = 3,
    ACTIONS(434), 1,
      anon_sym_POUND_POUND,
    ACTIONS(436), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym__fragment_or_member,
  [4299] = 3,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_parameters_repeat1,
  [4309] = 2,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    ACTIONS(603), 1,
      sym_inline_description,
  [4316] = 2,
    ACTIONS(292), 1,
      sym__space,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
  [4323] = 1,
    ACTIONS(605), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4328] = 2,
    ACTIONS(304), 1,
      sym__space,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
  [4335] = 2,
    ACTIONS(308), 1,
      sym__space,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
  [4342] = 2,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    ACTIONS(609), 1,
      sym_inline_description,
  [4349] = 2,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
  [4356] = 2,
    ACTIONS(611), 1,
      anon_sym_LT,
    ACTIONS(613), 1,
      sym_identifier,
  [4363] = 1,
    ACTIONS(615), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4368] = 2,
    ACTIONS(617), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type_parameter,
  [4375] = 2,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    ACTIONS(621), 1,
      sym_inline_description,
  [4382] = 2,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(625), 1,
      sym_inline_description,
  [4389] = 2,
    ACTIONS(627), 1,
      anon_sym_LT,
    ACTIONS(629), 1,
      sym_identifier,
  [4396] = 2,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    ACTIONS(633), 1,
      sym__space,
  [4403] = 2,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 1,
      anon_sym_DOT,
  [4410] = 1,
    ACTIONS(578), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4415] = 2,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(641), 1,
      anon_sym_COLON,
  [4422] = 1,
    ACTIONS(316), 2,
      sym_inline_description,
      anon_sym_RBRACE,
  [4427] = 2,
    ACTIONS(300), 1,
      sym__space,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
  [4434] = 2,
    ACTIONS(643), 1,
      sym_identifier,
    STATE(195), 1,
      aux_sym_system_property_repeat1,
  [4441] = 2,
    ACTIONS(147), 1,
      sym__space,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
  [4448] = 2,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      sym_inline_description,
  [4455] = 2,
    ACTIONS(296), 1,
      sym__space,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
  [4462] = 2,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(652), 1,
      sym_inline_description,
  [4469] = 2,
    ACTIONS(637), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
  [4476] = 2,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    ACTIONS(658), 1,
      sym_inline_description,
  [4483] = 2,
    ACTIONS(617), 1,
      sym_identifier,
    STATE(247), 1,
      sym_type_parameter,
  [4490] = 2,
    ACTIONS(660), 1,
      sym_identifier,
    STATE(195), 1,
      aux_sym_system_property_repeat1,
  [4497] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
  [4504] = 1,
    ACTIONS(662), 1,
      anon_sym_DQUOTE,
  [4508] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [4512] = 1,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
  [4516] = 1,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
  [4520] = 1,
    ACTIONS(668), 1,
      sym_inline_description,
  [4524] = 1,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
  [4528] = 1,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
  [4532] = 1,
    ACTIONS(637), 1,
      anon_sym_DOT,
  [4536] = 1,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
  [4540] = 1,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
  [4544] = 1,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
  [4548] = 1,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
  [4552] = 1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
  [4556] = 1,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
  [4560] = 1,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
  [4564] = 1,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
  [4568] = 1,
    ACTIONS(684), 1,
      aux_sym_literal_format_string_token1,
  [4572] = 1,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
  [4576] = 1,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
  [4580] = 1,
    ACTIONS(688), 1,
      sym_inline_description,
  [4584] = 1,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
  [4588] = 1,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
  [4592] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
  [4596] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
  [4600] = 1,
    ACTIONS(692), 1,
      sym_inline_description,
  [4604] = 1,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
  [4608] = 1,
    ACTIONS(696), 1,
      sym_url,
  [4612] = 1,
    ACTIONS(698), 1,
      anon_sym_LF,
  [4616] = 1,
    ACTIONS(700), 1,
      anon_sym_GT,
  [4620] = 1,
    ACTIONS(702), 1,
      sym_identifier,
  [4624] = 1,
    ACTIONS(704), 1,
      anon_sym_GT,
  [4628] = 1,
    ACTIONS(706), 1,
      sym_fragment,
  [4632] = 1,
    ACTIONS(708), 1,
      sym_identifier,
  [4636] = 1,
    ACTIONS(710), 1,
      sym_identifier,
  [4640] = 1,
    ACTIONS(712), 1,
      sym_url,
  [4644] = 1,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
  [4648] = 1,
    ACTIONS(716), 1,
      sym_identifier,
  [4652] = 1,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
  [4656] = 1,
    ACTIONS(720), 1,
      sym_fragment,
  [4660] = 1,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
  [4664] = 1,
    ACTIONS(724), 1,
      anon_sym_SLASH,
  [4668] = 1,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
  [4672] = 1,
    ACTIONS(728), 1,
      anon_sym_GT,
  [4676] = 1,
    ACTIONS(730), 1,
      sym_identifier,
  [4680] = 1,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
  [4684] = 1,
    ACTIONS(734), 1,
      anon_sym_DQUOTE,
  [4688] = 1,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
  [4692] = 1,
    ACTIONS(738), 1,
      sym_fragment,
  [4696] = 1,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
  [4700] = 1,
    ACTIONS(742), 1,
      anon_sym_SLASH,
  [4704] = 1,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
  [4708] = 1,
    ACTIONS(746), 1,
      sym_identifier,
  [4712] = 1,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
  [4716] = 1,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
  [4720] = 1,
    ACTIONS(752), 1,
      sym_fragment,
  [4724] = 1,
    ACTIONS(754), 1,
      ts_builtin_sym_end,
  [4728] = 1,
    ACTIONS(756), 1,
      anon_sym_SLASH,
  [4732] = 1,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
  [4736] = 1,
    ACTIONS(760), 1,
      sym_identifier,
  [4740] = 1,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
  [4744] = 1,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
  [4748] = 1,
    ACTIONS(766), 1,
      sym_identifier,
  [4752] = 1,
    ACTIONS(768), 1,
      sym_identifier,
  [4756] = 1,
    ACTIONS(770), 1,
      sym_identifier,
  [4760] = 1,
    ACTIONS(772), 1,
      sym_identifier,
  [4764] = 1,
    ACTIONS(774), 1,
      anon_sym_SLASH,
  [4768] = 1,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
  [4772] = 1,
    ACTIONS(778), 1,
      sym_quoted_value,
  [4776] = 1,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
  [4780] = 1,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
  [4784] = 1,
    ACTIONS(784), 1,
      anon_sym_LF,
  [4788] = 1,
    ACTIONS(786), 1,
      sym_quoted_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 102,
  [SMALL_STATE(4)] = 193,
  [SMALL_STATE(5)] = 274,
  [SMALL_STATE(6)] = 352,
  [SMALL_STATE(7)] = 430,
  [SMALL_STATE(8)] = 505,
  [SMALL_STATE(9)] = 554,
  [SMALL_STATE(10)] = 594,
  [SMALL_STATE(11)] = 637,
  [SMALL_STATE(12)] = 680,
  [SMALL_STATE(13)] = 723,
  [SMALL_STATE(14)] = 766,
  [SMALL_STATE(15)] = 809,
  [SMALL_STATE(16)] = 852,
  [SMALL_STATE(17)] = 895,
  [SMALL_STATE(18)] = 932,
  [SMALL_STATE(19)] = 975,
  [SMALL_STATE(20)] = 1018,
  [SMALL_STATE(21)] = 1061,
  [SMALL_STATE(22)] = 1104,
  [SMALL_STATE(23)] = 1143,
  [SMALL_STATE(24)] = 1186,
  [SMALL_STATE(25)] = 1229,
  [SMALL_STATE(26)] = 1272,
  [SMALL_STATE(27)] = 1315,
  [SMALL_STATE(28)] = 1348,
  [SMALL_STATE(29)] = 1388,
  [SMALL_STATE(30)] = 1426,
  [SMALL_STATE(31)] = 1466,
  [SMALL_STATE(32)] = 1500,
  [SMALL_STATE(33)] = 1532,
  [SMALL_STATE(34)] = 1589,
  [SMALL_STATE(35)] = 1646,
  [SMALL_STATE(36)] = 1676,
  [SMALL_STATE(37)] = 1708,
  [SMALL_STATE(38)] = 1740,
  [SMALL_STATE(39)] = 1769,
  [SMALL_STATE(40)] = 1798,
  [SMALL_STATE(41)] = 1827,
  [SMALL_STATE(42)] = 1856,
  [SMALL_STATE(43)] = 1885,
  [SMALL_STATE(44)] = 1914,
  [SMALL_STATE(45)] = 1943,
  [SMALL_STATE(46)] = 1972,
  [SMALL_STATE(47)] = 1999,
  [SMALL_STATE(48)] = 2023,
  [SMALL_STATE(49)] = 2047,
  [SMALL_STATE(50)] = 2071,
  [SMALL_STATE(51)] = 2095,
  [SMALL_STATE(52)] = 2119,
  [SMALL_STATE(53)] = 2143,
  [SMALL_STATE(54)] = 2167,
  [SMALL_STATE(55)] = 2191,
  [SMALL_STATE(56)] = 2215,
  [SMALL_STATE(57)] = 2239,
  [SMALL_STATE(58)] = 2263,
  [SMALL_STATE(59)] = 2287,
  [SMALL_STATE(60)] = 2311,
  [SMALL_STATE(61)] = 2335,
  [SMALL_STATE(62)] = 2359,
  [SMALL_STATE(63)] = 2383,
  [SMALL_STATE(64)] = 2407,
  [SMALL_STATE(65)] = 2431,
  [SMALL_STATE(66)] = 2457,
  [SMALL_STATE(67)] = 2481,
  [SMALL_STATE(68)] = 2505,
  [SMALL_STATE(69)] = 2529,
  [SMALL_STATE(70)] = 2553,
  [SMALL_STATE(71)] = 2577,
  [SMALL_STATE(72)] = 2616,
  [SMALL_STATE(73)] = 2655,
  [SMALL_STATE(74)] = 2694,
  [SMALL_STATE(75)] = 2733,
  [SMALL_STATE(76)] = 2766,
  [SMALL_STATE(77)] = 2810,
  [SMALL_STATE(78)] = 2854,
  [SMALL_STATE(79)] = 2898,
  [SMALL_STATE(80)] = 2933,
  [SMALL_STATE(81)] = 2962,
  [SMALL_STATE(82)] = 2984,
  [SMALL_STATE(83)] = 3016,
  [SMALL_STATE(84)] = 3037,
  [SMALL_STATE(85)] = 3058,
  [SMALL_STATE(86)] = 3079,
  [SMALL_STATE(87)] = 3100,
  [SMALL_STATE(88)] = 3119,
  [SMALL_STATE(89)] = 3140,
  [SMALL_STATE(90)] = 3161,
  [SMALL_STATE(91)] = 3182,
  [SMALL_STATE(92)] = 3203,
  [SMALL_STATE(93)] = 3224,
  [SMALL_STATE(94)] = 3245,
  [SMALL_STATE(95)] = 3260,
  [SMALL_STATE(96)] = 3275,
  [SMALL_STATE(97)] = 3296,
  [SMALL_STATE(98)] = 3317,
  [SMALL_STATE(99)] = 3338,
  [SMALL_STATE(100)] = 3359,
  [SMALL_STATE(101)] = 3380,
  [SMALL_STATE(102)] = 3401,
  [SMALL_STATE(103)] = 3419,
  [SMALL_STATE(104)] = 3437,
  [SMALL_STATE(105)] = 3457,
  [SMALL_STATE(106)] = 3473,
  [SMALL_STATE(107)] = 3489,
  [SMALL_STATE(108)] = 3507,
  [SMALL_STATE(109)] = 3525,
  [SMALL_STATE(110)] = 3539,
  [SMALL_STATE(111)] = 3557,
  [SMALL_STATE(112)] = 3577,
  [SMALL_STATE(113)] = 3589,
  [SMALL_STATE(114)] = 3603,
  [SMALL_STATE(115)] = 3617,
  [SMALL_STATE(116)] = 3628,
  [SMALL_STATE(117)] = 3645,
  [SMALL_STATE(118)] = 3656,
  [SMALL_STATE(119)] = 3667,
  [SMALL_STATE(120)] = 3678,
  [SMALL_STATE(121)] = 3689,
  [SMALL_STATE(122)] = 3704,
  [SMALL_STATE(123)] = 3721,
  [SMALL_STATE(124)] = 3736,
  [SMALL_STATE(125)] = 3753,
  [SMALL_STATE(126)] = 3764,
  [SMALL_STATE(127)] = 3781,
  [SMALL_STATE(128)] = 3792,
  [SMALL_STATE(129)] = 3803,
  [SMALL_STATE(130)] = 3814,
  [SMALL_STATE(131)] = 3822,
  [SMALL_STATE(132)] = 3834,
  [SMALL_STATE(133)] = 3842,
  [SMALL_STATE(134)] = 3850,
  [SMALL_STATE(135)] = 3862,
  [SMALL_STATE(136)] = 3874,
  [SMALL_STATE(137)] = 3888,
  [SMALL_STATE(138)] = 3902,
  [SMALL_STATE(139)] = 3916,
  [SMALL_STATE(140)] = 3932,
  [SMALL_STATE(141)] = 3944,
  [SMALL_STATE(142)] = 3956,
  [SMALL_STATE(143)] = 3968,
  [SMALL_STATE(144)] = 3981,
  [SMALL_STATE(145)] = 3992,
  [SMALL_STATE(146)] = 4003,
  [SMALL_STATE(147)] = 4010,
  [SMALL_STATE(148)] = 4021,
  [SMALL_STATE(149)] = 4030,
  [SMALL_STATE(150)] = 4039,
  [SMALL_STATE(151)] = 4050,
  [SMALL_STATE(152)] = 4063,
  [SMALL_STATE(153)] = 4076,
  [SMALL_STATE(154)] = 4087,
  [SMALL_STATE(155)] = 4098,
  [SMALL_STATE(156)] = 4109,
  [SMALL_STATE(157)] = 4120,
  [SMALL_STATE(158)] = 4133,
  [SMALL_STATE(159)] = 4146,
  [SMALL_STATE(160)] = 4159,
  [SMALL_STATE(161)] = 4169,
  [SMALL_STATE(162)] = 4175,
  [SMALL_STATE(163)] = 4185,
  [SMALL_STATE(164)] = 4195,
  [SMALL_STATE(165)] = 4205,
  [SMALL_STATE(166)] = 4211,
  [SMALL_STATE(167)] = 4221,
  [SMALL_STATE(168)] = 4231,
  [SMALL_STATE(169)] = 4241,
  [SMALL_STATE(170)] = 4251,
  [SMALL_STATE(171)] = 4259,
  [SMALL_STATE(172)] = 4269,
  [SMALL_STATE(173)] = 4279,
  [SMALL_STATE(174)] = 4289,
  [SMALL_STATE(175)] = 4299,
  [SMALL_STATE(176)] = 4309,
  [SMALL_STATE(177)] = 4316,
  [SMALL_STATE(178)] = 4323,
  [SMALL_STATE(179)] = 4328,
  [SMALL_STATE(180)] = 4335,
  [SMALL_STATE(181)] = 4342,
  [SMALL_STATE(182)] = 4349,
  [SMALL_STATE(183)] = 4356,
  [SMALL_STATE(184)] = 4363,
  [SMALL_STATE(185)] = 4368,
  [SMALL_STATE(186)] = 4375,
  [SMALL_STATE(187)] = 4382,
  [SMALL_STATE(188)] = 4389,
  [SMALL_STATE(189)] = 4396,
  [SMALL_STATE(190)] = 4403,
  [SMALL_STATE(191)] = 4410,
  [SMALL_STATE(192)] = 4415,
  [SMALL_STATE(193)] = 4422,
  [SMALL_STATE(194)] = 4427,
  [SMALL_STATE(195)] = 4434,
  [SMALL_STATE(196)] = 4441,
  [SMALL_STATE(197)] = 4448,
  [SMALL_STATE(198)] = 4455,
  [SMALL_STATE(199)] = 4462,
  [SMALL_STATE(200)] = 4469,
  [SMALL_STATE(201)] = 4476,
  [SMALL_STATE(202)] = 4483,
  [SMALL_STATE(203)] = 4490,
  [SMALL_STATE(204)] = 4497,
  [SMALL_STATE(205)] = 4504,
  [SMALL_STATE(206)] = 4508,
  [SMALL_STATE(207)] = 4512,
  [SMALL_STATE(208)] = 4516,
  [SMALL_STATE(209)] = 4520,
  [SMALL_STATE(210)] = 4524,
  [SMALL_STATE(211)] = 4528,
  [SMALL_STATE(212)] = 4532,
  [SMALL_STATE(213)] = 4536,
  [SMALL_STATE(214)] = 4540,
  [SMALL_STATE(215)] = 4544,
  [SMALL_STATE(216)] = 4548,
  [SMALL_STATE(217)] = 4552,
  [SMALL_STATE(218)] = 4556,
  [SMALL_STATE(219)] = 4560,
  [SMALL_STATE(220)] = 4564,
  [SMALL_STATE(221)] = 4568,
  [SMALL_STATE(222)] = 4572,
  [SMALL_STATE(223)] = 4576,
  [SMALL_STATE(224)] = 4580,
  [SMALL_STATE(225)] = 4584,
  [SMALL_STATE(226)] = 4588,
  [SMALL_STATE(227)] = 4592,
  [SMALL_STATE(228)] = 4596,
  [SMALL_STATE(229)] = 4600,
  [SMALL_STATE(230)] = 4604,
  [SMALL_STATE(231)] = 4608,
  [SMALL_STATE(232)] = 4612,
  [SMALL_STATE(233)] = 4616,
  [SMALL_STATE(234)] = 4620,
  [SMALL_STATE(235)] = 4624,
  [SMALL_STATE(236)] = 4628,
  [SMALL_STATE(237)] = 4632,
  [SMALL_STATE(238)] = 4636,
  [SMALL_STATE(239)] = 4640,
  [SMALL_STATE(240)] = 4644,
  [SMALL_STATE(241)] = 4648,
  [SMALL_STATE(242)] = 4652,
  [SMALL_STATE(243)] = 4656,
  [SMALL_STATE(244)] = 4660,
  [SMALL_STATE(245)] = 4664,
  [SMALL_STATE(246)] = 4668,
  [SMALL_STATE(247)] = 4672,
  [SMALL_STATE(248)] = 4676,
  [SMALL_STATE(249)] = 4680,
  [SMALL_STATE(250)] = 4684,
  [SMALL_STATE(251)] = 4688,
  [SMALL_STATE(252)] = 4692,
  [SMALL_STATE(253)] = 4696,
  [SMALL_STATE(254)] = 4700,
  [SMALL_STATE(255)] = 4704,
  [SMALL_STATE(256)] = 4708,
  [SMALL_STATE(257)] = 4712,
  [SMALL_STATE(258)] = 4716,
  [SMALL_STATE(259)] = 4720,
  [SMALL_STATE(260)] = 4724,
  [SMALL_STATE(261)] = 4728,
  [SMALL_STATE(262)] = 4732,
  [SMALL_STATE(263)] = 4736,
  [SMALL_STATE(264)] = 4740,
  [SMALL_STATE(265)] = 4744,
  [SMALL_STATE(266)] = 4748,
  [SMALL_STATE(267)] = 4752,
  [SMALL_STATE(268)] = 4756,
  [SMALL_STATE(269)] = 4760,
  [SMALL_STATE(270)] = 4764,
  [SMALL_STATE(271)] = 4768,
  [SMALL_STATE(272)] = 4772,
  [SMALL_STATE(273)] = 4776,
  [SMALL_STATE(274)] = 4780,
  [SMALL_STATE(275)] = 4784,
  [SMALL_STATE(276)] = 4788,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serial_tag, 1, 0, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_serial_tag, 1, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_tag, 1, 0, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_tag, 1, 0, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_tag, 2, 0, 9),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_see_tag, 2, 0, 9),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serial_data_tag, 1, 0, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_serial_data_tag, 1, 0, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_since_tag, 1, 0, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_since_tag, 1, 0, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provides_tag, 2, 0, 7),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_provides_tag, 2, 0, 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_tag, 2, 0, 6),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_tag, 2, 0, 6),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_tag, 1, 0, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_tag, 1, 0, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, 0, 10),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, 0, 10),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec_tag, 2, 0, 18),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_tag, 2, 0, 18),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_tag, 2, 0, 7),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uses_tag, 2, 0, 7),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throws_tag, 2, 0, 19),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_throws_tag, 2, 0, 19),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_tag, 1, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_tag, 1, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serial_field_tag, 3, 0, 34),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_serial_field_tag, 3, 0, 34),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_tag, 4, 0, 40),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_tag, 4, 0, 40),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_tag, 1, 0, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_tag, 1, 0, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated_tag, 1, 0, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprecated_tag, 1, 0, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_identifier, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qualified_identifier, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fragment_or_member, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fragment_or_member, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_tag_actual, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_tag_actual, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_tag, 5, 0, 45),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_tag, 5, 0, 45),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_tag, 2, 0, 12),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_see_tag, 2, 0, 12),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_tag, 3, 0, 31),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_tag, 3, 0, 31),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_provides_tag, 3, 0, 32),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_provides_tag, 3, 0, 32),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_title, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_title, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_tag, 3, 0, 32),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uses_tag, 3, 0, 32),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_tag, 3, 0, 33),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_see_tag, 3, 0, 33),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_tag, 2, 0, 11),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_see_tag, 2, 0, 11),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_tag, 2, 0, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_tag, 2, 0, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throws_tag, 3, 0, 36),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_throws_tag, 3, 0, 36),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spec_tag, 3, 0, 35),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spec_tag, 3, 0, 35),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serial_tag, 2, 0, 13),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_serial_tag, 2, 0, 13),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serial_tag, 2, 0, 14),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_serial_tag, 2, 0, 14),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serial_tag, 2, 0, 15),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_serial_tag, 2, 0, 15),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serial_data_tag, 2, 0, 16),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_serial_data_tag, 2, 0, 16),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_since_tag, 2, 0, 17),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_since_tag, 2, 0, 17),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serial_field_tag, 4, 0, 41),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_serial_field_tag, 4, 0, 41),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated_tag, 2, 0, 5),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deprecated_tag, 2, 0, 5),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_tag, 2, 0, 20),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_tag, 2, 0, 20),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_tag, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_tag, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hidden_tag, 1, 0, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hidden_tag, 1, 0, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_tag, 2, 0, 8),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_tag, 2, 0, 8),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_tag, 2, 0, 8),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_tag, 2, 0, 8),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_tag, 1, 0, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_tag, 2, 0, 29),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 48),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet_tag, 1, 0, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 46),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_type, 1, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_type, 1, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integral_type, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_mods_repeat1, 2, 0, 0),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_mods_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_mods, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inherit_doc_tag, 1, 0, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_format_string, 3, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_format_string, 3, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_property_tag, 1, 0, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 44),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_tag, 1, 0, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 46),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_inline_tag, 1, 0, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 48),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tag, 2, 0, 22),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tag, 2, 0, 23),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_tag, 2, 0, 9),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_property, 2, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet_tag, 2, 0, 26),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_property_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_return_tag, 1, 0, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_tag, 1, 0, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_property, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary_tag, 1, 0, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet_tag, 5, 0, 47),
  [666] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary_tag, 2, 0, 27),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_property_tag, 2, 0, 28),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 1, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tag, 3, 0, 37),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_tag, 3, 0, 38),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 1, 0, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_tag, 2, 0, 30),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_inline_tag, 2, 0, 8),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_property_repeat1, 2, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_tag, 4, 0, 42),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_root_tag, 1, 0, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet_tag, 4, 0, 43),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_tag, 2, 0, 21),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_tag, 3, 0, 39),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inherit_doc_tag, 2, 0, 24),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_tag, 2, 0, 25),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_return_tag, 2, 0, 8),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_inline_description = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_inline_description] = sym_inline_description,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_inline_description] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_javadoc_external_scanner_create(void);
void tree_sitter_javadoc_external_scanner_destroy(void *);
bool tree_sitter_javadoc_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_javadoc_external_scanner_serialize(void *, char *);
void tree_sitter_javadoc_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_javadoc(void) {
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
      tree_sitter_javadoc_external_scanner_create,
      tree_sitter_javadoc_external_scanner_destroy,
      tree_sitter_javadoc_external_scanner_scan,
      tree_sitter_javadoc_external_scanner_serialize,
      tree_sitter_javadoc_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
