#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 304
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 4
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  sym__normal_bare_identifier = 1,
  anon_sym_SLASH_DASH = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SEMI = 5,
  sym__identifier_char = 6,
  sym___identifier_char_no_digit = 7,
  sym___identifier_char_no_digit_sign = 8,
  anon_sym_null = 9,
  anon_sym_i8 = 10,
  anon_sym_i16 = 11,
  anon_sym_i32 = 12,
  anon_sym_i64 = 13,
  anon_sym_u8 = 14,
  anon_sym_u16 = 15,
  anon_sym_u32 = 16,
  anon_sym_u64 = 17,
  anon_sym_isize = 18,
  anon_sym_usize = 19,
  anon_sym_f32 = 20,
  anon_sym_f64 = 21,
  anon_sym_decimal64 = 22,
  anon_sym_decimal128 = 23,
  anon_sym_date_DASHtime = 24,
  anon_sym_time = 25,
  anon_sym_date = 26,
  anon_sym_duration = 27,
  anon_sym_decimal = 28,
  anon_sym_currency = 29,
  anon_sym_country_DASH2 = 30,
  anon_sym_country_DASH3 = 31,
  anon_sym_country_DASHsubdivision = 32,
  anon_sym_email = 33,
  anon_sym_idn_DASHemail = 34,
  anon_sym_hostname = 35,
  anon_sym_idn_DASHhostname = 36,
  anon_sym_ipv4 = 37,
  anon_sym_ipv6 = 38,
  anon_sym_url = 39,
  anon_sym_url_DASHreference = 40,
  anon_sym_irl = 41,
  anon_sym_iri_DASHreference = 42,
  anon_sym_url_DASHtemplate = 43,
  anon_sym_uuid = 44,
  anon_sym_regex = 45,
  anon_sym_base64 = 46,
  anon_sym_EQ = 47,
  anon_sym_LPAREN = 48,
  anon_sym_RPAREN = 49,
  anon_sym_DQUOTE = 50,
  aux_sym__escaped_string_token1 = 51,
  sym_escape = 52,
  sym__hex_digit = 53,
  anon_sym_DOT = 54,
  anon_sym_e = 55,
  anon_sym_E = 56,
  anon_sym__ = 57,
  sym__digit = 58,
  anon_sym_PLUS = 59,
  anon_sym_DASH = 60,
  anon_sym_0x = 61,
  anon_sym_0o = 62,
  aux_sym__octal_token1 = 63,
  anon_sym_0b = 64,
  anon_sym_0 = 65,
  anon_sym_1 = 66,
  anon_sym_true = 67,
  anon_sym_false = 68,
  anon_sym_BSLASH = 69,
  aux_sym__newline_token1 = 70,
  aux_sym__newline_token2 = 71,
  aux_sym__newline_token3 = 72,
  aux_sym__newline_token4 = 73,
  aux_sym__newline_token5 = 74,
  aux_sym__newline_token6 = 75,
  aux_sym__newline_token7 = 76,
  sym__bom = 77,
  sym__unicode_space = 78,
  anon_sym_SLASH_SLASH = 79,
  aux_sym_single_line_comment_token1 = 80,
  sym__eof = 81,
  sym_multi_line_comment = 82,
  sym__raw_string = 83,
  sym_document = 84,
  sym_node = 85,
  sym_node_field = 86,
  sym__node_field_comment = 87,
  sym__node_field = 88,
  sym_node_children = 89,
  sym__node_space = 90,
  sym__node_terminator = 91,
  sym_identifier = 92,
  sym__bare_identifier = 93,
  sym_keyword = 94,
  sym_annotation_type = 95,
  sym_prop = 96,
  sym_value = 97,
  sym_type = 98,
  sym_string = 99,
  sym__escaped_string = 100,
  sym_number = 101,
  sym__decimal = 102,
  sym__exponent = 103,
  sym__integer = 104,
  sym__sign = 105,
  sym__hex = 106,
  sym__octal = 107,
  sym__binary = 108,
  sym_boolean = 109,
  sym__escline = 110,
  sym__linespace = 111,
  sym__newline = 112,
  sym__ws = 113,
  sym_single_line_comment = 114,
  aux_sym_document_repeat1 = 115,
  aux_sym_document_repeat2 = 116,
  aux_sym_node_repeat1 = 117,
  aux_sym_node_repeat2 = 118,
  aux_sym_node_repeat3 = 119,
  aux_sym__bare_identifier_repeat1 = 120,
  aux_sym__escaped_string_repeat1 = 121,
  aux_sym__integer_repeat1 = 122,
  aux_sym__hex_repeat1 = 123,
  aux_sym__octal_repeat1 = 124,
  aux_sym__binary_repeat1 = 125,
  aux_sym_single_line_comment_repeat1 = 126,
  alias_sym_decimal = 127,
  alias_sym_node_children_comment = 128,
  alias_sym_node_field_comment = 129,
  alias_sym_string_fragment = 130,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__normal_bare_identifier] = "_normal_bare_identifier",
  [anon_sym_SLASH_DASH] = "node_comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [sym__identifier_char] = "_identifier_char",
  [sym___identifier_char_no_digit] = "__identifier_char_no_digit",
  [sym___identifier_char_no_digit_sign] = "__identifier_char_no_digit_sign",
  [anon_sym_null] = "null",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_isize] = "isize",
  [anon_sym_usize] = "usize",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_decimal64] = "decimal64",
  [anon_sym_decimal128] = "decimal128",
  [anon_sym_date_DASHtime] = "date-time",
  [anon_sym_time] = "time",
  [anon_sym_date] = "date",
  [anon_sym_duration] = "duration",
  [anon_sym_decimal] = "decimal",
  [anon_sym_currency] = "currency",
  [anon_sym_country_DASH2] = "country-2",
  [anon_sym_country_DASH3] = "country-3",
  [anon_sym_country_DASHsubdivision] = "country-subdivision",
  [anon_sym_email] = "email",
  [anon_sym_idn_DASHemail] = "idn-email",
  [anon_sym_hostname] = "hostname",
  [anon_sym_idn_DASHhostname] = "idn-hostname",
  [anon_sym_ipv4] = "ipv4",
  [anon_sym_ipv6] = "ipv6",
  [anon_sym_url] = "url",
  [anon_sym_url_DASHreference] = "url-reference",
  [anon_sym_irl] = "irl",
  [anon_sym_iri_DASHreference] = "iri-reference",
  [anon_sym_url_DASHtemplate] = "url-template",
  [anon_sym_uuid] = "uuid",
  [anon_sym_regex] = "regex",
  [anon_sym_base64] = "base64",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__escaped_string_token1] = "_escaped_string_token1",
  [sym_escape] = "escape",
  [sym__hex_digit] = "_hex_digit",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym__] = "_",
  [sym__digit] = "_digit",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_0x] = "0x",
  [anon_sym_0o] = "0o",
  [aux_sym__octal_token1] = "_octal_token1",
  [anon_sym_0b] = "0b",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__newline_token1] = "_newline_token1",
  [aux_sym__newline_token2] = "_newline_token2",
  [aux_sym__newline_token3] = "_newline_token3",
  [aux_sym__newline_token4] = "_newline_token4",
  [aux_sym__newline_token5] = "_newline_token5",
  [aux_sym__newline_token6] = "_newline_token6",
  [aux_sym__newline_token7] = "_newline_token7",
  [sym__bom] = "_bom",
  [sym__unicode_space] = "_unicode_space",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_single_line_comment_token1] = "single_line_comment_token1",
  [sym__eof] = "_eof",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym__raw_string] = "_raw_string",
  [sym_document] = "document",
  [sym_node] = "node",
  [sym_node_field] = "node_field",
  [sym__node_field_comment] = "_node_field_comment",
  [sym__node_field] = "_node_field",
  [sym_node_children] = "node_children",
  [sym__node_space] = "_node_space",
  [sym__node_terminator] = "_node_terminator",
  [sym_identifier] = "identifier",
  [sym__bare_identifier] = "_bare_identifier",
  [sym_keyword] = "keyword",
  [sym_annotation_type] = "annotation_type",
  [sym_prop] = "prop",
  [sym_value] = "value",
  [sym_type] = "type",
  [sym_string] = "string",
  [sym__escaped_string] = "_escaped_string",
  [sym_number] = "number",
  [sym__decimal] = "_decimal",
  [sym__exponent] = "exponent",
  [sym__integer] = "_integer",
  [sym__sign] = "_sign",
  [sym__hex] = "_hex",
  [sym__octal] = "_octal",
  [sym__binary] = "_binary",
  [sym_boolean] = "boolean",
  [sym__escline] = "_escline",
  [sym__linespace] = "_linespace",
  [sym__newline] = "_newline",
  [sym__ws] = "_ws",
  [sym_single_line_comment] = "single_line_comment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym_node_repeat2] = "node_repeat2",
  [aux_sym_node_repeat3] = "node_repeat3",
  [aux_sym__bare_identifier_repeat1] = "_bare_identifier_repeat1",
  [aux_sym__escaped_string_repeat1] = "_escaped_string_repeat1",
  [aux_sym__integer_repeat1] = "_integer_repeat1",
  [aux_sym__hex_repeat1] = "_hex_repeat1",
  [aux_sym__octal_repeat1] = "_octal_repeat1",
  [aux_sym__binary_repeat1] = "_binary_repeat1",
  [aux_sym_single_line_comment_repeat1] = "single_line_comment_repeat1",
  [alias_sym_decimal] = "decimal",
  [alias_sym_node_children_comment] = "node_children_comment",
  [alias_sym_node_field_comment] = "node_field_comment",
  [alias_sym_string_fragment] = "string_fragment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__normal_bare_identifier] = sym__normal_bare_identifier,
  [anon_sym_SLASH_DASH] = anon_sym_SLASH_DASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__identifier_char] = sym__identifier_char,
  [sym___identifier_char_no_digit] = sym___identifier_char_no_digit,
  [sym___identifier_char_no_digit_sign] = sym___identifier_char_no_digit_sign,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_isize] = anon_sym_isize,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_decimal64] = anon_sym_decimal64,
  [anon_sym_decimal128] = anon_sym_decimal128,
  [anon_sym_date_DASHtime] = anon_sym_date_DASHtime,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_currency] = anon_sym_currency,
  [anon_sym_country_DASH2] = anon_sym_country_DASH2,
  [anon_sym_country_DASH3] = anon_sym_country_DASH3,
  [anon_sym_country_DASHsubdivision] = anon_sym_country_DASHsubdivision,
  [anon_sym_email] = anon_sym_email,
  [anon_sym_idn_DASHemail] = anon_sym_idn_DASHemail,
  [anon_sym_hostname] = anon_sym_hostname,
  [anon_sym_idn_DASHhostname] = anon_sym_idn_DASHhostname,
  [anon_sym_ipv4] = anon_sym_ipv4,
  [anon_sym_ipv6] = anon_sym_ipv6,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_url_DASHreference] = anon_sym_url_DASHreference,
  [anon_sym_irl] = anon_sym_irl,
  [anon_sym_iri_DASHreference] = anon_sym_iri_DASHreference,
  [anon_sym_url_DASHtemplate] = anon_sym_url_DASHtemplate,
  [anon_sym_uuid] = anon_sym_uuid,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__escaped_string_token1] = aux_sym__escaped_string_token1,
  [sym_escape] = sym_escape,
  [sym__hex_digit] = sym__hex_digit,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym__] = anon_sym__,
  [sym__digit] = sym__digit,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_0o] = anon_sym_0o,
  [aux_sym__octal_token1] = aux_sym__octal_token1,
  [anon_sym_0b] = anon_sym_0b,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [aux_sym__newline_token2] = aux_sym__newline_token2,
  [aux_sym__newline_token3] = aux_sym__newline_token3,
  [aux_sym__newline_token4] = aux_sym__newline_token4,
  [aux_sym__newline_token5] = aux_sym__newline_token5,
  [aux_sym__newline_token6] = aux_sym__newline_token6,
  [aux_sym__newline_token7] = aux_sym__newline_token7,
  [sym__bom] = sym__bom,
  [sym__unicode_space] = sym__unicode_space,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_single_line_comment_token1] = aux_sym_single_line_comment_token1,
  [sym__eof] = sym__eof,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym__raw_string] = sym__raw_string,
  [sym_document] = sym_document,
  [sym_node] = sym_node,
  [sym_node_field] = sym_node_field,
  [sym__node_field_comment] = sym__node_field_comment,
  [sym__node_field] = sym__node_field,
  [sym_node_children] = sym_node_children,
  [sym__node_space] = sym__node_space,
  [sym__node_terminator] = sym__node_terminator,
  [sym_identifier] = sym_identifier,
  [sym__bare_identifier] = sym__bare_identifier,
  [sym_keyword] = sym_keyword,
  [sym_annotation_type] = sym_annotation_type,
  [sym_prop] = sym_prop,
  [sym_value] = sym_value,
  [sym_type] = sym_type,
  [sym_string] = sym_string,
  [sym__escaped_string] = sym__escaped_string,
  [sym_number] = sym_number,
  [sym__decimal] = sym__decimal,
  [sym__exponent] = sym__exponent,
  [sym__integer] = sym__integer,
  [sym__sign] = sym__sign,
  [sym__hex] = sym__hex,
  [sym__octal] = sym__octal,
  [sym__binary] = sym__binary,
  [sym_boolean] = sym_boolean,
  [sym__escline] = sym__escline,
  [sym__linespace] = sym__linespace,
  [sym__newline] = sym__newline,
  [sym__ws] = sym__ws,
  [sym_single_line_comment] = sym_single_line_comment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym_node_repeat2] = aux_sym_node_repeat2,
  [aux_sym_node_repeat3] = aux_sym_node_repeat3,
  [aux_sym__bare_identifier_repeat1] = aux_sym__bare_identifier_repeat1,
  [aux_sym__escaped_string_repeat1] = aux_sym__escaped_string_repeat1,
  [aux_sym__integer_repeat1] = aux_sym__integer_repeat1,
  [aux_sym__hex_repeat1] = aux_sym__hex_repeat1,
  [aux_sym__octal_repeat1] = aux_sym__octal_repeat1,
  [aux_sym__binary_repeat1] = aux_sym__binary_repeat1,
  [aux_sym_single_line_comment_repeat1] = aux_sym_single_line_comment_repeat1,
  [alias_sym_decimal] = alias_sym_decimal,
  [alias_sym_node_children_comment] = alias_sym_node_children_comment,
  [alias_sym_node_field_comment] = alias_sym_node_field_comment,
  [alias_sym_string_fragment] = alias_sym_string_fragment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__normal_bare_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_DASH] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier_char] = {
    .visible = false,
    .named = true,
  },
  [sym___identifier_char_no_digit] = {
    .visible = false,
    .named = true,
  },
  [sym___identifier_char_no_digit_sign] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date_DASHtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_currency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_country_DASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_country_DASH3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_country_DASHsubdivision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_email] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idn_DASHemail] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hostname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idn_DASHhostname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url_DASHreference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_irl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iri_DASHreference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url_DASHtemplate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escaped_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym__hex_digit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0o] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__octal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__newline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token7] = {
    .visible = false,
    .named = false,
  },
  [sym__bom] = {
    .visible = false,
    .named = true,
  },
  [sym__unicode_space] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_string] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_node_field] = {
    .visible = true,
    .named = true,
  },
  [sym__node_field_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__node_field] = {
    .visible = false,
    .named = true,
  },
  [sym_node_children] = {
    .visible = true,
    .named = true,
  },
  [sym__node_space] = {
    .visible = false,
    .named = true,
  },
  [sym__node_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__bare_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_type] = {
    .visible = true,
    .named = true,
  },
  [sym_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__escaped_string] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__exponent] = {
    .visible = true,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__sign] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__octal] = {
    .visible = false,
    .named = true,
  },
  [sym__binary] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__escline] = {
    .visible = false,
    .named = true,
  },
  [sym__linespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bare_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escaped_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__octal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__binary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_line_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_node_children_comment] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_node_field_comment] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_string_fragment] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_children = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_children] = "children",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 1},
  [8] = {.index = 2, .length = 1},
  [11] = {.index = 3, .length = 1},
  [12] = {.index = 3, .length = 1},
  [14] = {.index = 4, .length = 1},
  [15] = {.index = 4, .length = 1},
  [16] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_children, 1},
  [1] =
    {field_children, 2},
  [2] =
    {field_children, 3},
  [3] =
    {field_children, 4},
  [4] =
    {field_children, 5},
  [5] =
    {field_children, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_string_fragment,
  },
  [4] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [5] = {
    [0] = alias_sym_node_children_comment,
  },
  [6] = {
    [0] = alias_sym_node_field_comment,
    [1] = alias_sym_node_field_comment,
  },
  [8] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [9] = {
    [0] = alias_sym_node_field_comment,
    [1] = alias_sym_node_field_comment,
    [2] = alias_sym_node_field_comment,
  },
  [10] = {
    [2] = alias_sym_decimal,
  },
  [12] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [13] = {
    [3] = alias_sym_decimal,
  },
  [15] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [16] = {
    [1] = anon_sym_SLASH_DASH,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__node_field, 2,
    sym__node_field,
    alias_sym_node_field_comment,
  sym__integer, 2,
    sym__integer,
    alias_sym_decimal,
  aux_sym_node_repeat1, 3,
    aux_sym_node_repeat1,
    alias_sym_node_field_comment,
    anon_sym_SLASH_DASH,
  aux_sym__escaped_string_repeat1, 2,
    aux_sym__escaped_string_repeat1,
    alias_sym_string_fragment,
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
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 55,
  [60] = 60,
  [61] = 60,
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
  [74] = 15,
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
  [100] = 27,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
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
  [121] = 39,
  [122] = 53,
  [123] = 38,
  [124] = 124,
  [125] = 34,
  [126] = 49,
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
  [179] = 57,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 56,
  [184] = 184,
  [185] = 185,
  [186] = 58,
  [187] = 15,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 27,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 38,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 49,
  [206] = 39,
  [207] = 53,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 34,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 223,
  [225] = 223,
  [226] = 223,
  [227] = 227,
  [228] = 227,
  [229] = 227,
  [230] = 49,
  [231] = 227,
  [232] = 232,
  [233] = 233,
  [234] = 58,
  [235] = 235,
  [236] = 57,
  [237] = 55,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 60,
  [245] = 245,
  [246] = 56,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 250,
  [252] = 249,
  [253] = 249,
  [254] = 250,
  [255] = 250,
  [256] = 249,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 15,
  [263] = 263,
  [264] = 264,
  [265] = 27,
  [266] = 38,
  [267] = 39,
  [268] = 53,
  [269] = 34,
  [270] = 270,
  [271] = 271,
  [272] = 55,
  [273] = 273,
  [274] = 60,
  [275] = 58,
  [276] = 56,
  [277] = 277,
  [278] = 189,
  [279] = 188,
  [280] = 273,
  [281] = 57,
  [282] = 277,
  [283] = 283,
  [284] = 190,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 218,
  [291] = 291,
  [292] = 192,
  [293] = 197,
  [294] = 196,
  [295] = 295,
  [296] = 194,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
};

static inline bool sym__normal_bare_identifier_character_set_1(int32_t c) {
  return (c < 10145
    ? (c < 9854
      ? (c < 9742
        ? (c < 9167
          ? (c < 8482
            ? (c < 8252
              ? (c < 174
                ? c == 169
                : c <= 174)
              : (c <= 8252 || c == 8265))
            : (c <= 8482 || (c < 8986
              ? (c < 8617
                ? (c >= 8596 && c <= 8601)
                : c <= 8618)
              : (c <= 8987 || c == 9000))))
          : (c <= 9167 || (c < 9654
            ? (c < 9410
              ? (c < 9208
                ? (c >= 9193 && c <= 9203)
                : c <= 9210)
              : (c <= 9410 || (c >= 9642 && c <= 9643)))
            : (c <= 9654 || (c < 9723
              ? c == 9664
              : (c <= 9726 || (c >= 9728 && c <= 9732)))))))
        : (c <= 9742 || (c < 9784
          ? (c < 9760
            ? (c < 9752
              ? (c < 9748
                ? c == 9745
                : c <= 9749)
              : (c <= 9752 || c == 9757))
            : (c <= 9760 || (c < 9770
              ? (c < 9766
                ? (c >= 9762 && c <= 9763)
                : c <= 9766)
              : (c <= 9770 || (c >= 9774 && c <= 9775)))))
          : (c <= 9786 || (c < 9827
            ? (c < 9800
              ? (c < 9794
                ? c == 9792
                : c <= 9794)
              : (c <= 9811 || (c >= 9823 && c <= 9824)))
            : (c <= 9827 || (c < 9832
              ? (c >= 9829 && c <= 9830)
              : (c <= 9832 || c == 9851))))))))
      : (c <= 9855 || (c < 9989
        ? (c < 9928
          ? (c < 9895
            ? (c < 9883
              ? (c < 9881
                ? (c >= 9874 && c <= 9879)
                : c <= 9881)
              : (c <= 9884 || (c >= 9888 && c <= 9889)))
            : (c <= 9895 || (c < 9917
              ? (c < 9904
                ? (c >= 9898 && c <= 9899)
                : c <= 9905)
              : (c <= 9918 || (c >= 9924 && c <= 9925)))))
          : (c <= 9928 || (c < 9968
            ? (c < 9939
              ? (c < 9937
                ? (c >= 9934 && c <= 9935)
                : c <= 9937)
              : (c <= 9940 || (c >= 9961 && c <= 9962)))
            : (c <= 9973 || (c < 9981
              ? (c >= 9975 && c <= 9978)
              : (c <= 9981 || c == 9986))))))
        : (c <= 9989 || (c < 10035
          ? (c < 10006
            ? (c < 10002
              ? (c < 9999
                ? (c >= 9992 && c <= 9997)
                : c <= 9999)
              : (c <= 10002 || c == 10004))
            : (c <= 10006 || (c < 10017
              ? c == 10013
              : (c <= 10017 || c == 10024))))
          : (c <= 10036 || (c < 10067
            ? (c < 10060
              ? (c < 10055
                ? c == 10052
                : c <= 10055)
              : (c <= 10060 || c == 10062))
            : (c <= 10069 || (c < 10083
              ? c == 10071
              : (c <= 10084 || (c >= 10133 && c <= 10135)))))))))))
    : (c <= 10145 || (c < 128400
      ? (c < 127489
        ? (c < 12951
          ? (c < 11035
            ? (c < 10548
              ? (c < 10175
                ? c == 10160
                : c <= 10175)
              : (c <= 10549 || (c >= 11013 && c <= 11015)))
            : (c <= 11036 || (c < 12336
              ? (c < 11093
                ? c == 11088
                : c <= 11093)
              : (c <= 12336 || c == 12349))))
          : (c <= 12951 || (c < 127358
            ? (c < 127183
              ? (c < 126980
                ? c == 12953
                : c <= 126980)
              : (c <= 127183 || (c >= 127344 && c <= 127345)))
            : (c <= 127359 || (c < 127377
              ? c == 127374
              : (c <= 127386 || (c >= 127462 && c <= 127487)))))))
        : (c <= 127490 || (c < 127987
          ? (c < 127744
            ? (c < 127538
              ? (c < 127535
                ? c == 127514
                : c <= 127535)
              : (c <= 127546 || (c >= 127568 && c <= 127569)))
            : (c <= 127777 || (c < 127897
              ? (c < 127894
                ? (c >= 127780 && c <= 127891)
                : c <= 127895)
              : (c <= 127899 || (c >= 127902 && c <= 127984)))))
          : (c <= 127989 || (c < 128367
            ? (c < 128329
              ? (c < 128255
                ? (c >= 127991 && c <= 128253)
                : c <= 128317)
              : (c <= 128334 || (c >= 128336 && c <= 128359)))
            : (c <= 128368 || (c < 128391
              ? (c >= 128371 && c <= 128378)
              : (c <= 128391 || (c >= 128394 && c <= 128397)))))))))
      : (c <= 128400 || (c < 128745
        ? (c < 128483
          ? (c < 128444
            ? (c < 128424
              ? (c < 128420
                ? (c >= 128405 && c <= 128406)
                : c <= 128421)
              : (c <= 128424 || (c >= 128433 && c <= 128434)))
            : (c <= 128444 || (c < 128476
              ? (c < 128465
                ? (c >= 128450 && c <= 128452)
                : c <= 128467)
              : (c <= 128478 || c == 128481))))
          : (c <= 128483 || (c < 128640
            ? (c < 128499
              ? (c < 128495
                ? c == 128488
                : c <= 128495)
              : (c <= 128499 || (c >= 128506 && c <= 128591)))
            : (c <= 128709 || (c < 128725
              ? (c >= 128715 && c <= 128722)
              : (c <= 128727 || (c >= 128733 && c <= 128741)))))))
        : (c <= 128745 || (c < 129648
          ? (c < 129008
            ? (c < 128755
              ? (c < 128752
                ? (c >= 128747 && c <= 128748)
                : c <= 128752)
              : (c <= 128764 || (c >= 128992 && c <= 129003)))
            : (c <= 129008 || (c < 129340
              ? (c >= 129292 && c <= 129338)
              : (c <= 129349 || (c >= 129351 && c <= 129535)))))
          : (c <= 129652 || (c < 129728
            ? (c < 129680
              ? (c < 129664
                ? (c >= 129656 && c <= 129660)
                : c <= 129670)
              : (c <= 129708 || (c >= 129712 && c <= 129722)))
            : (c <= 129733 || (c < 129760
              ? (c >= 129744 && c <= 129753)
              : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_2(int32_t c) {
  return (c < 6016
    ? (c < 2962
      ? (c < 2451
        ? (c < 1376
          ? (c < 748
            ? (c < 181
              ? (c < '^'
                ? (c < ':'
                  ? (c >= '!' && c <= '*')
                  : (c <= ':' || (c >= '?' && c <= 'Z')))
                : (c <= '^' || (c < 170
                  ? (c >= 'g' && c <= '~')
                  : (c <= 170 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 216
                ? (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 768
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1155
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1869
            ? (c < 1552
              ? (c < 1476
                ? (c < 1471
                  ? (c >= 1425 && c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))
                : (c <= 1477 || (c < 1488
                  ? c == 1479
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1562 || (c < 1759
                ? (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))
                : (c <= 1768 || (c < 1791
                  ? (c >= 1770 && c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))
            : (c <= 1969 || (c < 2185
              ? (c < 2048
                ? (c < 2042
                  ? (c >= 1984 && c <= 2037)
                  : (c <= 2042 || c == 2045))
                : (c <= 2093 || (c < 2144
                  ? (c >= 2112 && c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2417
                ? (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))
                : (c <= 2435 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))))))))
        : (c <= 2472 || (c < 2693
          ? (c < 2575
            ? (c < 2524
              ? (c < 2492
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2500 || (c < 2507
                  ? (c >= 2503 && c <= 2504)
                  : (c <= 2510 || c == 2519))))
              : (c <= 2525 || (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2531)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))))))
            : (c <= 2576 || (c < 2631
              ? (c < 2613
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2654
                ? (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : c <= 2691)))))))
          : (c <= 2701 || (c < 2835
            ? (c < 2763
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))))
              : (c <= 2765 || (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))
                : (c <= 2815 || (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))))
            : (c <= 2856 || (c < 2908
              ? (c < 2876
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2884 || (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))
              : (c <= 2909 || (c < 2946
                ? (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))))))))))
      : (c <= 2965 || (c < 3664
        ? (c < 3253
          ? (c < 3114
            ? (c < 3014
              ? (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))))
              : (c <= 3016 || (c < 3046
                ? (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))
            : (c <= 3129 || (c < 3174
              ? (c < 3157
                ? (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))
              : (c <= 3183 || (c < 3214
                ? (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : (c <= 3203 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))))
          : (c <= 3257 || (c < 3450
            ? (c < 3313
              ? (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3406)
                  : (c <= 3427 || (c >= 3430 && c <= 3448)))))))
            : (c <= 3455 || (c < 3535
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))
              : (c <= 3540 || (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3648
                  ? (c >= 3585 && c <= 3642)
                  : c <= 3662)))))))))
        : (c <= 3673 || (c < 4682
          ? (c < 3895
            ? (c < 3782
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3872
                  ? (c >= 3864 && c <= 3865)
                  : (c <= 3891 || c == 3893))))))
            : (c <= 3895 || (c < 4096
              ? (c < 3953
                ? (c < 3902
                  ? c == 3897
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3972 || (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || c == 4038))))
              : (c <= 4169 || (c < 4301
                ? (c < 4256
                  ? (c >= 4176 && c <= 4253)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))))
          : (c <= 4685 || (c < 4957
            ? (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))
            : (c <= 4959 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))
                : (c <= 5996 || (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6003)))))))))))))
    : (c <= 6099 || (c < 42775
      ? (c < 8455
        ? (c < 7245
          ? (c < 6576
            ? (c < 6272
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))))
              : (c <= 6314 || (c < 6448
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6432 && c <= 6443)))
                : (c <= 6459 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))))
            : (c <= 6601 || (c < 6832
              ? (c < 6752
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))
              : (c <= 6862 || (c < 7040
                ? (c < 6992
                  ? (c >= 6912 && c <= 6988)
                  : (c <= 7001 || (c >= 7019 && c <= 7027)))
                : (c <= 7155 || (c < 7232
                  ? (c >= 7168 && c <= 7223)
                  : c <= 7241)))))))
          : (c <= 7293 || (c < 8118
            ? (c < 7968
              ? (c < 7376
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7378 || (c < 7424
                  ? (c >= 7380 && c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))
            : (c <= 8124 || (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8450
                  ? (c >= 8400 && c <= 8432)
                  : c <= 8450)))))))))
        : (c <= 8455 || (c < 11728
          ? (c < 11264
            ? (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : (c <= 9471 || (c >= 10102 && c <= 10131)))))))
            : (c <= 11492 || (c < 11647
              ? (c < 11559
                ? (c < 11517
                  ? (c >= 11499 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))))
          : (c <= 11734 || (c < 12784
            ? (c < 12441
              ? (c < 12293
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12344
                  ? (c >= 12321 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12690
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12693 || (c >= 12704 && c <= 12735)))))))
            : (c <= 12799 || (c < 19968
              ? (c < 12928
                ? (c < 12872
                  ? (c >= 12832 && c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))
                : (c <= 12937 || (c < 13312
                  ? (c >= 12977 && c <= 12991)
                  : (c <= 13312 || c == 19903))))
              : (c <= 42124 || (c < 42560
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))
                : (c <= 42610 || (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : c <= 42737)))))))))))
      : (c <= 42783 || (c < 65313
        ? (c < 43808
          ? (c < 43360
            ? (c < 43056
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43047 || c == 43052))))
              : (c <= 43061 || (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))))
            : (c <= 43388 || (c < 43642
              ? (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43638)))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64298
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44010 || (c < 44016
                  ? (c >= 44012 && c <= 44013)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64296)))))))
            : (c <= 64310 || (c < 64914
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))
              : (c <= 64967 || (c < 65136
                ? (c < 65024
                  ? (c >= 65008 && c <= 65019)
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65930
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : (c <= 65843 || (c >= 65856 && c <= 65912)))))))
            : (c <= 65931 || (c < 66432
              ? (c < 66272
                ? (c < 66176
                  ? c == 66045
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_3(int32_t c) {
  return (c < 8490
    ? (c < 3285
      ? (c < 2579
        ? (c < 1552
          ? (c < 886
            ? (c < 185
              ? (c < 'a'
                ? (c < '?'
                  ? (c < '.'
                    ? (c >= '!' && c <= '*')
                    : c <= ':')
                  : (c <= 'Z' || (c >= '^' && c <= '_')))
                : (c <= '~' || (c < 178
                  ? (c < 174
                    ? (c >= 169 && c <= 170)
                    : c <= 174)
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c < 192
                    ? (c >= 188 && c <= 190)
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 768 && c <= 884)))))))
            : (c <= 887 || (c < 1329
              ? (c < 908
                ? (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1155 && c <= 1327)))))
              : (c <= 1366 || (c < 1473
                ? (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || c == 1471))
                : (c <= 1474 || (c < 1488
                  ? (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))))))
          : (c <= 1562 || (c < 2417
            ? (c < 2042
              ? (c < 1770
                ? (c < 1749
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)
                  : (c <= 1756 || (c >= 1759 && c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2037)))))
              : (c <= 2042 || (c < 2160
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))))))
            : (c <= 2435 || (c < 2519
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))
              : (c <= 2519 || (c < 2556
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))))))))
        : (c <= 2600 || (c < 2918
          ? (c < 2748
            ? (c < 2649
              ? (c < 2620
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2620 || (c < 2635
                  ? (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)
                  : (c <= 2637 || c == 2641))))
              : (c <= 2652 || (c < 2703
                ? (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))
            : (c <= 2757 || (c < 2835
              ? (c < 2790
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c >= 2784 && c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2887
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))))))))
          : (c <= 2927 || (c < 3090
            ? (c < 2984
              ? (c < 2962
                ? (c < 2949
                  ? (c < 2946
                    ? (c >= 2929 && c <= 2935)
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))))
              : (c <= 2986 || (c < 3024
                ? (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))
            : (c <= 3112 || (c < 3192
              ? (c < 3157
                ? (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))))
              : (c <= 3198 || (c < 3242
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))))))))))))
      : (c <= 3286 || (c < 5792
        ? (c < 3864
          ? (c < 3535
            ? (c < 3412
              ? (c < 3328
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3406)))))
              : (c <= 3427 || (c < 3482
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3448)
                    : c <= 3455)
                  : (c <= 3459 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || c == 3530))))))
            : (c <= 3540 || (c < 3718
              ? (c < 3585
                ? (c < 3558
                  ? (c < 3544
                    ? c == 3542
                    : c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3713
                  ? (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)
                  : (c <= 3714 || c == 3716))))
              : (c <= 3722 || (c < 3782
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || c == 3840))))))))
          : (c <= 3865 || (c < 4696
            ? (c < 4038
              ? (c < 3902
                ? (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3891)
                    : c <= 3893)
                  : (c <= 3895 || c == 3897))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))
              : (c <= 4038 || (c < 4301
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))))
            : (c <= 4696 || (c < 4824
              ? (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))
              : (c <= 4880 || (c < 4992
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c >= 4969 && c <= 4988)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5786)))))))))))
        : (c <= 5866 || (c < 7296
          ? (c < 6448
            ? (c < 6108
              ? (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || c == 6103))))
              : (c <= 6109 || (c < 6176
                ? (c < 6155
                  ? (c < 6128
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6137)
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))
                : (c <= 6264 || (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c >= 6432 && c <= 6443)))))))
            : (c <= 6459 || (c < 6800
              ? (c < 6608
                ? (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6618 || (c < 6752
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))))
              : (c <= 6809 || (c < 7019
                ? (c < 6912
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6862)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))
                : (c <= 7027 || (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))))))
          : (c <= 7304 || (c < 8150
            ? (c < 8025
              ? (c < 7424
                ? (c < 7376
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7378 || (c >= 7380 && c <= 7418)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))
              : (c <= 8025 || (c < 8118
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))))))
            : (c <= 8155 || (c < 8400
              ? (c < 8265
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8252))
                : (c <= 8265 || (c < 8319
                  ? (c < 8308
                    ? (c >= 8304 && c <= 8305)
                    : c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))))
              : (c <= 8432 || (c < 8473
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? (c < 8484
                    ? c == 8482
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))))))))))))))
    : (c <= 8493 || (c < 43744
      ? (c < 10175
        ? (c < 9854
          ? (c < 9728
            ? (c < 9167
              ? (c < 8528
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 8986
                  ? (c < 8617
                    ? (c >= 8596 && c <= 8601)
                    : c <= 8618)
                  : (c <= 8987 || c == 9000))))
              : (c <= 9167 || (c < 9450
                ? (c < 9312
                  ? (c < 9208
                    ? (c >= 9193 && c <= 9203)
                    : c <= 9210)
                  : (c <= 9371 || c == 9410))
                : (c <= 9471 || (c < 9664
                  ? (c < 9654
                    ? (c >= 9642 && c <= 9643)
                    : c <= 9654)
                  : (c <= 9664 || (c >= 9723 && c <= 9726)))))))
            : (c <= 9732 || (c < 9774
              ? (c < 9757
                ? (c < 9748
                  ? (c < 9745
                    ? c == 9742
                    : c <= 9745)
                  : (c <= 9749 || c == 9752))
                : (c <= 9757 || (c < 9766
                  ? (c < 9762
                    ? c == 9760
                    : c <= 9763)
                  : (c <= 9766 || c == 9770))))
              : (c <= 9775 || (c < 9823
                ? (c < 9794
                  ? (c < 9792
                    ? (c >= 9784 && c <= 9786)
                    : c <= 9792)
                  : (c <= 9794 || (c >= 9800 && c <= 9811)))
                : (c <= 9824 || (c < 9832
                  ? (c < 9829
                    ? c == 9827
                    : c <= 9830)
                  : (c <= 9832 || c == 9851))))))))
          : (c <= 9855 || (c < 9992
            ? (c < 9928
              ? (c < 9895
                ? (c < 9883
                  ? (c < 9881
                    ? (c >= 9874 && c <= 9879)
                    : c <= 9881)
                  : (c <= 9884 || (c >= 9888 && c <= 9889)))
                : (c <= 9895 || (c < 9917
                  ? (c < 9904
                    ? (c >= 9898 && c <= 9899)
                    : c <= 9905)
                  : (c <= 9918 || (c >= 9924 && c <= 9925)))))
              : (c <= 9928 || (c < 9968
                ? (c < 9939
                  ? (c < 9937
                    ? (c >= 9934 && c <= 9935)
                    : c <= 9937)
                  : (c <= 9940 || (c >= 9961 && c <= 9962)))
                : (c <= 9973 || (c < 9986
                  ? (c < 9981
                    ? (c >= 9975 && c <= 9978)
                    : c <= 9981)
                  : (c <= 9986 || c == 9989))))))
            : (c <= 9997 || (c < 10055
              ? (c < 10013
                ? (c < 10004
                  ? (c < 10002
                    ? c == 9999
                    : c <= 10002)
                  : (c <= 10004 || c == 10006))
                : (c <= 10013 || (c < 10035
                  ? (c < 10024
                    ? c == 10017
                    : c <= 10024)
                  : (c <= 10036 || c == 10052))))
              : (c <= 10055 || (c < 10083
                ? (c < 10067
                  ? (c < 10062
                    ? c == 10060
                    : c <= 10062)
                  : (c <= 10069 || c == 10071))
                : (c <= 10084 || (c < 10145
                  ? (c < 10133
                    ? (c >= 10102 && c <= 10131)
                    : c <= 10135)
                  : (c <= 10145 || c == 10160))))))))))
        : (c <= 10175 || (c < 12881
          ? (c < 11720
            ? (c < 11559
              ? (c < 11093
                ? (c < 11035
                  ? (c < 11013
                    ? (c >= 10548 && c <= 10549)
                    : c <= 11015)
                  : (c <= 11036 || c == 11088))
                : (c <= 11093 || (c < 11517
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))))
              : (c <= 11559 || (c < 11680
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11647 && c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))))
            : (c <= 11726 || (c < 12445
              ? (c < 12293
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12321 && c <= 12341)
                    : c <= 12349)
                  : (c <= 12438 || (c >= 12441 && c <= 12442)))))
              : (c <= 12447 || (c < 12690
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12693 || (c < 12832
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))))))))
          : (c <= 12895 || (c < 42994
            ? (c < 42512
              ? (c < 13312
                ? (c < 12953
                  ? (c < 12951
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12951)
                  : (c <= 12953 || (c >= 12977 && c <= 12991)))
                : (c <= 13312 || (c < 42192
                  ? (c < 19968
                    ? c == 19903
                    : c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))))
              : (c <= 42539 || (c < 42786
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42610)
                    : c <= 42621)
                  : (c <= 42737 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))))))
            : (c <= 43047 || (c < 43360
              ? (c < 43216
                ? (c < 43072
                  ? (c < 43056
                    ? c == 43052
                    : c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43584
                ? (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))
                : (c <= 43597 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))))))))))
      : (c <= 43759 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_4(int32_t c) {
  return (c < 8484
    ? (c < 3260
      ? (c < 2558
        ? (c < 1476
          ? (c < 736
            ? (c < 169
              ? (c < '?'
                ? (c < '*'
                  ? (c < '#'
                    ? c == '!'
                    : c <= '\'')
                  : (c <= '+' || (c < '0'
                    ? (c >= '-' && c <= '.')
                    : c <= ':')))
                : (c <= 'Z' || (c < '|'
                  ? (c < 'a'
                    ? (c >= '^' && c <= '_')
                    : c <= 'z')
                  : (c <= '|' || c == '~'))))
              : (c <= 170 || (c < 188
                ? (c < 181
                  ? (c < 178
                    ? c == 174
                    : c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))
                : (c <= 190 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))))
            : (c <= 740 || (c < 910
              ? (c < 890
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))))))))
          : (c <= 1477 || (c < 2185
            ? (c < 1791
              ? (c < 1568
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1552 && c <= 1562)))
                : (c <= 1641 || (c < 1759
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))))
              : (c <= 1791 || (c < 2045
                ? (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || c == 2042))
                : (c <= 2045 || (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))))
            : (c <= 2190 || (c < 2486
              ? (c < 2437
                ? (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2548
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2553 || c == 2556))))))))))
        : (c <= 2558 || (c < 2901
          ? (c < 2730
            ? (c < 2631
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
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2662
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || c == 2654))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))
            : (c <= 2736 || (c < 2817
              ? (c < 2763
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2790
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2799 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))))
          : (c <= 2903 || (c < 3046
            ? (c < 2972
              ? (c < 2946
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 3006
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || c == 3031))))))
            : (c <= 3058 || (c < 3165
              ? (c < 3132
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3205
                ? (c < 3192
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3198 || (c >= 3200 && c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))))))))
      : (c <= 3268 || (c < 5121
        ? (c < 3804
          ? (c < 3520
            ? (c < 3398
              ? (c < 3302
                ? (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)))
                : (c <= 3311 || (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))))
              : (c <= 3400 || (c < 3457
                ? (c < 3430
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3427)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3459 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3713
              ? (c < 3558
                ? (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))))))))
          : (c <= 3807 || (c < 4682
            ? (c < 3974
              ? (c < 3895
                ? (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3891 || c == 3893))
                : (c <= 3895 || (c < 3913
                  ? (c < 3902
                    ? c == 3897
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3972)))))
              : (c <= 3991 || (c < 4256
                ? (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))))
            : (c <= 4685 || (c < 4802
              ? (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4957
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4988)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))))))))
        : (c <= 5740 || (c < 7168
          ? (c < 6320
            ? (c < 6002
              ? (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5909 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))
              : (c <= 6003 || (c < 6128
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))))))
            : (c <= 6389 || (c < 6688
              ? (c < 6512
                ? (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))))
              : (c <= 6750 || (c < 6832
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))
          : (c <= 7223 || (c < 8130
            ? (c < 7968
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))
            : (c <= 8132 || (c < 8308
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8265
                  ? (c < 8252
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8252)
                  : (c <= 8265 || (c >= 8304 && c <= 8305)))))
              : (c <= 8313 || (c < 8455
                ? (c < 8400
                  ? (c < 8336
                    ? (c >= 8319 && c <= 8329)
                    : c <= 8348)
                  : (c <= 8432 || c == 8450))
                : (c <= 8455 || (c < 8473
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8482))))))))))))))
    : (c <= 8484 || (c < 43739
      ? (c < 10145
        ? (c < 9832
          ? (c < 9664
            ? (c < 8986
              ? (c < 8517
                ? (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 8596
                  ? (c < 8528
                    ? c == 8526
                    : c <= 8585)
                  : (c <= 8601 || (c >= 8617 && c <= 8618)))))
              : (c <= 8987 || (c < 9312
                ? (c < 9193
                  ? (c < 9167
                    ? c == 9000
                    : c <= 9167)
                  : (c <= 9203 || (c >= 9208 && c <= 9210)))
                : (c <= 9371 || (c < 9642
                  ? (c < 9450
                    ? c == 9410
                    : c <= 9471)
                  : (c <= 9643 || c == 9654))))))
            : (c <= 9664 || (c < 9766
              ? (c < 9748
                ? (c < 9742
                  ? (c < 9728
                    ? (c >= 9723 && c <= 9726)
                    : c <= 9732)
                  : (c <= 9742 || c == 9745))
                : (c <= 9749 || (c < 9760
                  ? (c < 9757
                    ? c == 9752
                    : c <= 9757)
                  : (c <= 9760 || (c >= 9762 && c <= 9763)))))
              : (c <= 9766 || (c < 9794
                ? (c < 9784
                  ? (c < 9774
                    ? c == 9770
                    : c <= 9775)
                  : (c <= 9786 || c == 9792))
                : (c <= 9794 || (c < 9827
                  ? (c < 9823
                    ? (c >= 9800 && c <= 9811)
                    : c <= 9824)
                  : (c <= 9827 || (c >= 9829 && c <= 9830)))))))))
          : (c <= 9832 || (c < 9986
            ? (c < 9917
              ? (c < 9883
                ? (c < 9874
                  ? (c < 9854
                    ? c == 9851
                    : c <= 9855)
                  : (c <= 9879 || c == 9881))
                : (c <= 9884 || (c < 9898
                  ? (c < 9895
                    ? (c >= 9888 && c <= 9889)
                    : c <= 9895)
                  : (c <= 9899 || (c >= 9904 && c <= 9905)))))
              : (c <= 9918 || (c < 9939
                ? (c < 9934
                  ? (c < 9928
                    ? (c >= 9924 && c <= 9925)
                    : c <= 9928)
                  : (c <= 9935 || c == 9937))
                : (c <= 9940 || (c < 9975
                  ? (c < 9968
                    ? (c >= 9961 && c <= 9962)
                    : c <= 9973)
                  : (c <= 9978 || c == 9981))))))
            : (c <= 9986 || (c < 10035
              ? (c < 10004
                ? (c < 9999
                  ? (c < 9992
                    ? c == 9989
                    : c <= 9997)
                  : (c <= 9999 || c == 10002))
                : (c <= 10004 || (c < 10017
                  ? (c < 10013
                    ? c == 10006
                    : c <= 10013)
                  : (c <= 10017 || c == 10024))))
              : (c <= 10036 || (c < 10067
                ? (c < 10060
                  ? (c < 10055
                    ? c == 10052
                    : c <= 10055)
                  : (c <= 10060 || c == 10062))
                : (c <= 10069 || (c < 10102
                  ? (c < 10083
                    ? c == 10071
                    : c <= 10084)
                  : (c <= 10131 || (c >= 10133 && c <= 10135)))))))))))
        : (c <= 10145 || (c < 12872
          ? (c < 11712
            ? (c < 11520
              ? (c < 11088
                ? (c < 10548
                  ? (c < 10175
                    ? c == 10160
                    : c <= 10175)
                  : (c <= 10549 || (c < 11035
                    ? (c >= 11013 && c <= 11015)
                    : c <= 11036)))
                : (c <= 11088 || (c < 11499
                  ? (c < 11264
                    ? c == 11093
                    : c <= 11492)
                  : (c <= 11507 || c == 11517))))
              : (c <= 11557 || (c < 11647
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))))))
            : (c <= 11718 || (c < 12441
              ? (c < 11823
                ? (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11823 || (c < 12344
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12341)
                  : (c <= 12349 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12593
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12690 && c <= 12693)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))))))))
          : (c <= 12879 || (c < 42965
            ? (c < 42240
              ? (c < 12977
                ? (c < 12951
                  ? (c < 12928
                    ? (c >= 12881 && c <= 12895)
                    : c <= 12937)
                  : (c <= 12951 || c == 12953))
                : (c <= 12991 || (c < 19968
                  ? (c < 19903
                    ? c == 13312
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42775
                ? (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42610)
                  : (c <= 42621 || (c >= 42623 && c <= 42737)))
                : (c <= 42783 || (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))))))
            : (c <= 42969 || (c < 43312
              ? (c < 43136
                ? (c < 43056
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43061 || (c >= 43072 && c <= 43123)))
                : (c <= 43205 || (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43520
                ? (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c >= 43642 && c <= 43714)))))))))))))
      : (c <= 43741 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym___identifier_char_no_digit_character_set_1(int32_t c) {
  return (c < 6002
    ? (c < 2949
      ? (c < 2437
        ? (c < 1329
          ? (c < 248
            ? (c < '~'
              ? (c < '-'
                ? (c < '#'
                  ? c == '!'
                  : (c <= '\'' || (c >= '*' && c <= '+')))
                : (c <= ':' || (c < '^'
                  ? (c >= '?' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= '|')))))
              : (c <= '~' || (c < 185
                ? (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))
                : (c <= 186 || (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))))))
            : (c <= 705 || (c < 895
              ? (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 768 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1155 && c <= 1327)))))))))
          : (c <= 1366 || (c < 1791
            ? (c < 1488
              ? (c < 1471
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1425 && c <= 1469)))
                : (c <= 1471 || (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))))
              : (c <= 1514 || (c < 1646
                ? (c < 1552
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1562 || (c >= 1568 && c <= 1641)))
                : (c <= 1747 || (c < 1759
                  ? (c >= 1749 && c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))))))
            : (c <= 1791 || (c < 2144
              ? (c < 2042
                ? (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2037)))
                : (c <= 2042 || (c < 2048
                  ? c == 2045
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))))
              : (c <= 2154 || (c < 2275
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2200 && c <= 2273)))
                : (c <= 2403 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : c <= 2435)))))))))
        : (c <= 2444 || (c < 2662
          ? (c < 2561
            ? (c < 2507
              ? (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))))
              : (c <= 2510 || (c < 2534
                ? (c < 2524
                  ? c == 2519
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || c == 2558))))))
            : (c <= 2563 || (c < 2620
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2620 || (c < 2641
                ? (c < 2631
                  ? (c >= 2622 && c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))
                : (c <= 2641 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2677 || (c < 2821
            ? (c < 2748
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))
              : (c <= 2757 || (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2815 || (c >= 2817 && c <= 2819)))))))
            : (c <= 2828 || (c < 2891
              ? (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))))
              : (c <= 2893 || (c < 2918
                ? (c < 2908
                  ? (c >= 2901 && c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))
                : (c <= 2927 || (c < 2946
                  ? (c >= 2929 && c <= 2935)
                  : c <= 2947)))))))))))
      : (c <= 2954 || (c < 3585
        ? (c < 3218
          ? (c < 3086
            ? (c < 2990
              ? (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3058 || (c >= 3072 && c <= 3084)))))))
            : (c <= 3088 || (c < 3165
              ? (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3200
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3203 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))))
          : (c <= 3240 || (c < 3412
            ? (c < 3296
              ? (c < 3270
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))
                : (c <= 3272 || (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))
              : (c <= 3299 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))
                : (c <= 3344 || (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3406)))))))
            : (c <= 3427 || (c < 3520
              ? (c < 3461
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3544
                ? (c < 3535
                  ? c == 3530
                  : (c <= 3540 || c == 3542))
                : (c <= 3551 || (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : c <= 3571)))))))))
        : (c <= 3642 || (c < 4304
          ? (c < 3872
            ? (c < 3751
              ? (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3773 || (c < 3792
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3864 && c <= 3865)))))))
            : (c <= 3891 || (c < 3993
              ? (c < 3902
                ? (c < 3895
                  ? c == 3893
                  : (c <= 3895 || c == 3897))
                : (c <= 3911 || (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4256
                ? (c < 4096
                  ? c == 4038
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))))))
          : (c <= 4346 || (c < 4888
            ? (c < 4752
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))))
              : (c <= 4784 || (c < 4802
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
            : (c <= 4954 || (c < 5792
              ? (c < 5024
                ? (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))
                : (c <= 5971 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))))))))))
    : (c <= 6003 || (c < 42623
      ? (c < 8455
        ? (c < 7245
          ? (c < 6528
            ? (c < 6176
              ? (c < 6112
                ? (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : (c <= 6103 || (c >= 6108 && c <= 6109)))
                : (c <= 6121 || (c < 6155
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))))
              : (c <= 6264 || (c < 6432
                ? (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6443 || (c < 6470
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))))))
            : (c <= 6571 || (c < 6823
              ? (c < 6688
                ? (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))
                : (c <= 6750 || (c < 6783
                  ? (c >= 6752 && c <= 6780)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))))
              : (c <= 6823 || (c < 7019
                ? (c < 6912
                  ? (c >= 6832 && c <= 6862)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))
                : (c <= 7027 || (c < 7168
                  ? (c >= 7040 && c <= 7155)
                  : (c <= 7223 || (c >= 7232 && c <= 7241)))))))))
          : (c <= 7293 || (c < 8118
            ? (c < 7968
              ? (c < 7376
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7378 || (c < 7424
                  ? (c >= 7380 && c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))
            : (c <= 8124 || (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8450
                  ? (c >= 8400 && c <= 8432)
                  : c <= 8450)))))))))
        : (c <= 8455 || (c < 11728
          ? (c < 11264
            ? (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : (c <= 9471 || (c >= 10102 && c <= 10131)))))))
            : (c <= 11492 || (c < 11647
              ? (c < 11559
                ? (c < 11517
                  ? (c >= 11499 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))))
          : (c <= 11734 || (c < 12704
            ? (c < 12353
              ? (c < 12293
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12335)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12540
                ? (c < 12445
                  ? (c >= 12441 && c <= 12442)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12690 && c <= 12693)))))))
            : (c <= 12735 || (c < 19903
              ? (c < 12881
                ? (c < 12832
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))
                : (c <= 12895 || (c < 12977
                  ? (c >= 12928 && c <= 12937)
                  : (c <= 12991 || c == 13312))))
              : (c <= 19903 || (c < 42512
                ? (c < 42192
                  ? (c >= 19968 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42612
                  ? (c >= 42560 && c <= 42610)
                  : c <= 42621)))))))))))
      : (c <= 42737 || (c < 65296
        ? (c < 43793
          ? (c < 43312
            ? (c < 43052
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : (c <= 42969 || (c >= 42994 && c <= 43047)))))
              : (c <= 43052 || (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))))
            : (c <= 43347 || (c < 43616
              ? (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))
              : (c <= 43638 || (c < 43762
                ? (c < 43739
                  ? (c >= 43642 && c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43759)))
                : (c <= 43766 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65056
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65024 && c <= 65039)))
                : (c <= 65071 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65856
            ? (c < 65536
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65912 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? (c >= 66272 && c <= 66299)
                  : (c <= 66339 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67463
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\f') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == 133) ADVANCE(32);
      if (lookahead == 8232) ADVANCE(32);
      if (lookahead == 8233) ADVANCE(32);
      if (lookahead == 65279) ADVANCE(32);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(26);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(32);
      if (sym__normal_bare_identifier_character_set_1(lookahead)) ADVANCE(25);
      if (sym__normal_bare_identifier_character_set_2(lookahead)) ADVANCE(25);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\f') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(58);
      if (lookahead == 8232) ADVANCE(60);
      if (lookahead == 8233) ADVANCE(61);
      if (lookahead == 65279) ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(63);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\f') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(58);
      if (lookahead == 8232) ADVANCE(60);
      if (lookahead == 8233) ADVANCE(61);
      if (lookahead == 65279) ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(63);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\f') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(58);
      if (lookahead == 8232) ADVANCE(60);
      if (lookahead == 8233) ADVANCE(61);
      if (lookahead == 65279) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\f') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(58);
      if (lookahead == 8232) ADVANCE(60);
      if (lookahead == 8233) ADVANCE(61);
      if (lookahead == 65279) ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\f') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(58);
      if (lookahead == 8232) ADVANCE(60);
      if (lookahead == 8233) ADVANCE(61);
      if (lookahead == 65279) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\f') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(58);
      if (lookahead == 8232) ADVANCE(60);
      if (lookahead == 8233) ADVANCE(61);
      if (lookahead == 65279) ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\f') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == 133) ADVANCE(58);
      if (lookahead == 8232) ADVANCE(60);
      if (lookahead == 8233) ADVANCE(61);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\f') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == 133) ADVANCE(58);
      if (lookahead == 8232) ADVANCE(60);
      if (lookahead == 8233) ADVANCE(61);
      if (lookahead == 65279) ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(63);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(25);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__identifier_char);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym___identifier_char_no_digit);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(25);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_e);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(25);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_E);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(25);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym__);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(25);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__octal_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__newline_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__newline_token3);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__newline_token4);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__newline_token5);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__newline_token6);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__newline_token7);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__bom);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__unicode_space);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
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
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '6') ADVANCE(37);
      if (lookahead == '8') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(55);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == '6') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(67);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == '4') ADVANCE(81);
      if (lookahead == '6') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_irl);
      END_STATE();
    case 60:
      if (lookahead == 'z') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'z') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == '6') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ipv4);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ipv6);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 86:
      if (lookahead == 'x') ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 92:
      if (lookahead == '4') ADVANCE(109);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_email);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 110:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == '1') ADVANCE(135);
      if (lookahead == '6') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '3') ADVANCE(145);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_currency);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 135:
      if (lookahead == '2') ADVANCE(148);
      END_STATE();
    case 136:
      if (lookahead == '4') ADVANCE(149);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_hostname);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_country_DASH2);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_country_DASH3);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_date_DASHtime);
      END_STATE();
    case 148:
      if (lookahead == '8') ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_decimal64);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_idn_DASHemail);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_decimal128);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_idn_DASHhostname);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_url_DASHtemplate);
      END_STATE();
    case 171:
      if (lookahead == 'v') ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_iri_DASHreference);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_url_DASHreference);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_country_DASHsubdivision);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19, .external_lex_state = 2},
  [2] = {.lex_state = 19, .external_lex_state = 1},
  [3] = {.lex_state = 19, .external_lex_state = 1},
  [4] = {.lex_state = 19, .external_lex_state = 1},
  [5] = {.lex_state = 19, .external_lex_state = 1},
  [6] = {.lex_state = 19, .external_lex_state = 1},
  [7] = {.lex_state = 19, .external_lex_state = 1},
  [8] = {.lex_state = 19, .external_lex_state = 1},
  [9] = {.lex_state = 19, .external_lex_state = 2},
  [10] = {.lex_state = 19, .external_lex_state = 2},
  [11] = {.lex_state = 19, .external_lex_state = 2},
  [12] = {.lex_state = 19, .external_lex_state = 2},
  [13] = {.lex_state = 19, .external_lex_state = 2},
  [14] = {.lex_state = 19, .external_lex_state = 2},
  [15] = {.lex_state = 19, .external_lex_state = 1},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 19, .external_lex_state = 2},
  [23] = {.lex_state = 19, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 19, .external_lex_state = 2},
  [26] = {.lex_state = 19, .external_lex_state = 2},
  [27] = {.lex_state = 19, .external_lex_state = 1},
  [28] = {.lex_state = 19, .external_lex_state = 2},
  [29] = {.lex_state = 19, .external_lex_state = 2},
  [30] = {.lex_state = 19, .external_lex_state = 2},
  [31] = {.lex_state = 19, .external_lex_state = 2},
  [32] = {.lex_state = 19, .external_lex_state = 2},
  [33] = {.lex_state = 19, .external_lex_state = 2},
  [34] = {.lex_state = 19, .external_lex_state = 1},
  [35] = {.lex_state = 19, .external_lex_state = 2},
  [36] = {.lex_state = 19, .external_lex_state = 2},
  [37] = {.lex_state = 19, .external_lex_state = 2},
  [38] = {.lex_state = 19, .external_lex_state = 1},
  [39] = {.lex_state = 19, .external_lex_state = 1},
  [40] = {.lex_state = 19, .external_lex_state = 2},
  [41] = {.lex_state = 19, .external_lex_state = 2},
  [42] = {.lex_state = 19, .external_lex_state = 2},
  [43] = {.lex_state = 19, .external_lex_state = 2},
  [44] = {.lex_state = 19, .external_lex_state = 2},
  [45] = {.lex_state = 19, .external_lex_state = 2},
  [46] = {.lex_state = 19, .external_lex_state = 2},
  [47] = {.lex_state = 19, .external_lex_state = 2},
  [48] = {.lex_state = 19, .external_lex_state = 2},
  [49] = {.lex_state = 19, .external_lex_state = 1},
  [50] = {.lex_state = 19, .external_lex_state = 2},
  [51] = {.lex_state = 19, .external_lex_state = 2},
  [52] = {.lex_state = 19, .external_lex_state = 2},
  [53] = {.lex_state = 19, .external_lex_state = 1},
  [54] = {.lex_state = 19, .external_lex_state = 2},
  [55] = {.lex_state = 19, .external_lex_state = 2},
  [56] = {.lex_state = 19, .external_lex_state = 1},
  [57] = {.lex_state = 19, .external_lex_state = 1},
  [58] = {.lex_state = 19, .external_lex_state = 1},
  [59] = {.lex_state = 19, .external_lex_state = 1},
  [60] = {.lex_state = 19, .external_lex_state = 2},
  [61] = {.lex_state = 19, .external_lex_state = 1},
  [62] = {.lex_state = 19, .external_lex_state = 3},
  [63] = {.lex_state = 19, .external_lex_state = 3},
  [64] = {.lex_state = 19, .external_lex_state = 3},
  [65] = {.lex_state = 19, .external_lex_state = 3},
  [66] = {.lex_state = 19, .external_lex_state = 3},
  [67] = {.lex_state = 19, .external_lex_state = 2},
  [68] = {.lex_state = 19, .external_lex_state = 3},
  [69] = {.lex_state = 19, .external_lex_state = 3},
  [70] = {.lex_state = 19, .external_lex_state = 3},
  [71] = {.lex_state = 19, .external_lex_state = 3},
  [72] = {.lex_state = 19, .external_lex_state = 3},
  [73] = {.lex_state = 19, .external_lex_state = 2},
  [74] = {.lex_state = 19, .external_lex_state = 2},
  [75] = {.lex_state = 19, .external_lex_state = 2},
  [76] = {.lex_state = 19, .external_lex_state = 2},
  [77] = {.lex_state = 19, .external_lex_state = 2},
  [78] = {.lex_state = 19, .external_lex_state = 2},
  [79] = {.lex_state = 19, .external_lex_state = 2},
  [80] = {.lex_state = 19, .external_lex_state = 3},
  [81] = {.lex_state = 3, .external_lex_state = 3},
  [82] = {.lex_state = 19, .external_lex_state = 3},
  [83] = {.lex_state = 19, .external_lex_state = 3},
  [84] = {.lex_state = 19, .external_lex_state = 3},
  [85] = {.lex_state = 19, .external_lex_state = 3},
  [86] = {.lex_state = 19, .external_lex_state = 3},
  [87] = {.lex_state = 19, .external_lex_state = 3},
  [88] = {.lex_state = 19, .external_lex_state = 3},
  [89] = {.lex_state = 19, .external_lex_state = 3},
  [90] = {.lex_state = 19, .external_lex_state = 3},
  [91] = {.lex_state = 19, .external_lex_state = 3},
  [92] = {.lex_state = 19, .external_lex_state = 3},
  [93] = {.lex_state = 19, .external_lex_state = 3},
  [94] = {.lex_state = 19, .external_lex_state = 3},
  [95] = {.lex_state = 19, .external_lex_state = 3},
  [96] = {.lex_state = 19, .external_lex_state = 3},
  [97] = {.lex_state = 19, .external_lex_state = 3},
  [98] = {.lex_state = 19, .external_lex_state = 3},
  [99] = {.lex_state = 3, .external_lex_state = 3},
  [100] = {.lex_state = 19, .external_lex_state = 2},
  [101] = {.lex_state = 19, .external_lex_state = 3},
  [102] = {.lex_state = 19, .external_lex_state = 3},
  [103] = {.lex_state = 19, .external_lex_state = 3},
  [104] = {.lex_state = 19, .external_lex_state = 3},
  [105] = {.lex_state = 19, .external_lex_state = 3},
  [106] = {.lex_state = 19, .external_lex_state = 3},
  [107] = {.lex_state = 19, .external_lex_state = 3},
  [108] = {.lex_state = 19, .external_lex_state = 3},
  [109] = {.lex_state = 19, .external_lex_state = 3},
  [110] = {.lex_state = 19, .external_lex_state = 3},
  [111] = {.lex_state = 19, .external_lex_state = 3},
  [112] = {.lex_state = 19, .external_lex_state = 3},
  [113] = {.lex_state = 19, .external_lex_state = 3},
  [114] = {.lex_state = 19, .external_lex_state = 3},
  [115] = {.lex_state = 19, .external_lex_state = 3},
  [116] = {.lex_state = 19, .external_lex_state = 3},
  [117] = {.lex_state = 19, .external_lex_state = 3},
  [118] = {.lex_state = 19, .external_lex_state = 3},
  [119] = {.lex_state = 3, .external_lex_state = 3},
  [120] = {.lex_state = 19, .external_lex_state = 3},
  [121] = {.lex_state = 19, .external_lex_state = 2},
  [122] = {.lex_state = 19, .external_lex_state = 2},
  [123] = {.lex_state = 19, .external_lex_state = 2},
  [124] = {.lex_state = 19, .external_lex_state = 2},
  [125] = {.lex_state = 19, .external_lex_state = 2},
  [126] = {.lex_state = 19, .external_lex_state = 2},
  [127] = {.lex_state = 19, .external_lex_state = 2},
  [128] = {.lex_state = 19, .external_lex_state = 2},
  [129] = {.lex_state = 19, .external_lex_state = 2},
  [130] = {.lex_state = 4, .external_lex_state = 3},
  [131] = {.lex_state = 19, .external_lex_state = 2},
  [132] = {.lex_state = 19, .external_lex_state = 2},
  [133] = {.lex_state = 19, .external_lex_state = 2},
  [134] = {.lex_state = 19, .external_lex_state = 2},
  [135] = {.lex_state = 3, .external_lex_state = 3},
  [136] = {.lex_state = 19, .external_lex_state = 2},
  [137] = {.lex_state = 19, .external_lex_state = 2},
  [138] = {.lex_state = 19, .external_lex_state = 2},
  [139] = {.lex_state = 19, .external_lex_state = 2},
  [140] = {.lex_state = 19, .external_lex_state = 2},
  [141] = {.lex_state = 19, .external_lex_state = 2},
  [142] = {.lex_state = 19, .external_lex_state = 2},
  [143] = {.lex_state = 19, .external_lex_state = 2},
  [144] = {.lex_state = 19, .external_lex_state = 2},
  [145] = {.lex_state = 19, .external_lex_state = 2},
  [146] = {.lex_state = 19, .external_lex_state = 2},
  [147] = {.lex_state = 4, .external_lex_state = 3},
  [148] = {.lex_state = 19, .external_lex_state = 2},
  [149] = {.lex_state = 19, .external_lex_state = 2},
  [150] = {.lex_state = 19, .external_lex_state = 2},
  [151] = {.lex_state = 19, .external_lex_state = 2},
  [152] = {.lex_state = 19, .external_lex_state = 2},
  [153] = {.lex_state = 19, .external_lex_state = 2},
  [154] = {.lex_state = 3, .external_lex_state = 3},
  [155] = {.lex_state = 19, .external_lex_state = 2},
  [156] = {.lex_state = 19, .external_lex_state = 2},
  [157] = {.lex_state = 19, .external_lex_state = 2},
  [158] = {.lex_state = 19, .external_lex_state = 2},
  [159] = {.lex_state = 19, .external_lex_state = 2},
  [160] = {.lex_state = 19, .external_lex_state = 2},
  [161] = {.lex_state = 19, .external_lex_state = 2},
  [162] = {.lex_state = 19, .external_lex_state = 2},
  [163] = {.lex_state = 19, .external_lex_state = 2},
  [164] = {.lex_state = 4, .external_lex_state = 3},
  [165] = {.lex_state = 4, .external_lex_state = 3},
  [166] = {.lex_state = 4, .external_lex_state = 3},
  [167] = {.lex_state = 19, .external_lex_state = 2},
  [168] = {.lex_state = 19, .external_lex_state = 2},
  [169] = {.lex_state = 19, .external_lex_state = 2},
  [170] = {.lex_state = 19, .external_lex_state = 2},
  [171] = {.lex_state = 19, .external_lex_state = 2},
  [172] = {.lex_state = 5, .external_lex_state = 3},
  [173] = {.lex_state = 5, .external_lex_state = 3},
  [174] = {.lex_state = 3, .external_lex_state = 3},
  [175] = {.lex_state = 6, .external_lex_state = 3},
  [176] = {.lex_state = 5, .external_lex_state = 3},
  [177] = {.lex_state = 6, .external_lex_state = 3},
  [178] = {.lex_state = 6, .external_lex_state = 3},
  [179] = {.lex_state = 19, .external_lex_state = 2},
  [180] = {.lex_state = 3, .external_lex_state = 3},
  [181] = {.lex_state = 5, .external_lex_state = 3},
  [182] = {.lex_state = 5, .external_lex_state = 3},
  [183] = {.lex_state = 19, .external_lex_state = 2},
  [184] = {.lex_state = 6, .external_lex_state = 3},
  [185] = {.lex_state = 6, .external_lex_state = 3},
  [186] = {.lex_state = 19, .external_lex_state = 2},
  [187] = {.lex_state = 19, .external_lex_state = 3},
  [188] = {.lex_state = 2, .external_lex_state = 3},
  [189] = {.lex_state = 2, .external_lex_state = 3},
  [190] = {.lex_state = 2, .external_lex_state = 3},
  [191] = {.lex_state = 19, .external_lex_state = 3},
  [192] = {.lex_state = 1, .external_lex_state = 3},
  [193] = {.lex_state = 19, .external_lex_state = 3},
  [194] = {.lex_state = 19, .external_lex_state = 3},
  [195] = {.lex_state = 19, .external_lex_state = 3},
  [196] = {.lex_state = 19, .external_lex_state = 3},
  [197] = {.lex_state = 19, .external_lex_state = 3},
  [198] = {.lex_state = 19, .external_lex_state = 3},
  [199] = {.lex_state = 19, .external_lex_state = 3},
  [200] = {.lex_state = 19, .external_lex_state = 3},
  [201] = {.lex_state = 19, .external_lex_state = 3},
  [202] = {.lex_state = 19, .external_lex_state = 3},
  [203] = {.lex_state = 19, .external_lex_state = 3},
  [204] = {.lex_state = 19, .external_lex_state = 3},
  [205] = {.lex_state = 19, .external_lex_state = 3},
  [206] = {.lex_state = 19, .external_lex_state = 3},
  [207] = {.lex_state = 19, .external_lex_state = 3},
  [208] = {.lex_state = 19, .external_lex_state = 3},
  [209] = {.lex_state = 19, .external_lex_state = 3},
  [210] = {.lex_state = 19, .external_lex_state = 3},
  [211] = {.lex_state = 19, .external_lex_state = 3},
  [212] = {.lex_state = 19, .external_lex_state = 3},
  [213] = {.lex_state = 19, .external_lex_state = 3},
  [214] = {.lex_state = 19, .external_lex_state = 3},
  [215] = {.lex_state = 19, .external_lex_state = 3},
  [216] = {.lex_state = 19, .external_lex_state = 3},
  [217] = {.lex_state = 19, .external_lex_state = 3},
  [218] = {.lex_state = 19, .external_lex_state = 3},
  [219] = {.lex_state = 19, .external_lex_state = 3},
  [220] = {.lex_state = 19, .external_lex_state = 3},
  [221] = {.lex_state = 19, .external_lex_state = 3},
  [222] = {.lex_state = 19, .external_lex_state = 3},
  [223] = {.lex_state = 19, .external_lex_state = 4},
  [224] = {.lex_state = 19, .external_lex_state = 4},
  [225] = {.lex_state = 19, .external_lex_state = 4},
  [226] = {.lex_state = 19, .external_lex_state = 4},
  [227] = {.lex_state = 19, .external_lex_state = 4},
  [228] = {.lex_state = 19, .external_lex_state = 4},
  [229] = {.lex_state = 19, .external_lex_state = 4},
  [230] = {.lex_state = 19, .external_lex_state = 4},
  [231] = {.lex_state = 19, .external_lex_state = 4},
  [232] = {.lex_state = 19, .external_lex_state = 3},
  [233] = {.lex_state = 19, .external_lex_state = 3},
  [234] = {.lex_state = 19, .external_lex_state = 3},
  [235] = {.lex_state = 19, .external_lex_state = 3},
  [236] = {.lex_state = 19, .external_lex_state = 3},
  [237] = {.lex_state = 19, .external_lex_state = 3},
  [238] = {.lex_state = 19, .external_lex_state = 3},
  [239] = {.lex_state = 19, .external_lex_state = 3},
  [240] = {.lex_state = 19, .external_lex_state = 3},
  [241] = {.lex_state = 19, .external_lex_state = 3},
  [242] = {.lex_state = 19, .external_lex_state = 3},
  [243] = {.lex_state = 19, .external_lex_state = 3},
  [244] = {.lex_state = 19, .external_lex_state = 3},
  [245] = {.lex_state = 19, .external_lex_state = 3},
  [246] = {.lex_state = 19, .external_lex_state = 3},
  [247] = {.lex_state = 19, .external_lex_state = 3},
  [248] = {.lex_state = 19, .external_lex_state = 2},
  [249] = {.lex_state = 7, .external_lex_state = 3},
  [250] = {.lex_state = 7, .external_lex_state = 3},
  [251] = {.lex_state = 7, .external_lex_state = 3},
  [252] = {.lex_state = 7, .external_lex_state = 3},
  [253] = {.lex_state = 7, .external_lex_state = 3},
  [254] = {.lex_state = 7, .external_lex_state = 3},
  [255] = {.lex_state = 7, .external_lex_state = 3},
  [256] = {.lex_state = 7, .external_lex_state = 3},
  [257] = {.lex_state = 19, .external_lex_state = 2},
  [258] = {.lex_state = 19, .external_lex_state = 2},
  [259] = {.lex_state = 7, .external_lex_state = 3},
  [260] = {.lex_state = 19, .external_lex_state = 2},
  [261] = {.lex_state = 19, .external_lex_state = 4},
  [262] = {.lex_state = 19, .external_lex_state = 4},
  [263] = {.lex_state = 19, .external_lex_state = 4},
  [264] = {.lex_state = 1, .external_lex_state = 4},
  [265] = {.lex_state = 19, .external_lex_state = 4},
  [266] = {.lex_state = 19, .external_lex_state = 4},
  [267] = {.lex_state = 19, .external_lex_state = 4},
  [268] = {.lex_state = 19, .external_lex_state = 4},
  [269] = {.lex_state = 19, .external_lex_state = 4},
  [270] = {.lex_state = 19, .external_lex_state = 4},
  [271] = {.lex_state = 19, .external_lex_state = 4},
  [272] = {.lex_state = 19, .external_lex_state = 4},
  [273] = {.lex_state = 9, .external_lex_state = 4},
  [274] = {.lex_state = 19, .external_lex_state = 4},
  [275] = {.lex_state = 19, .external_lex_state = 4},
  [276] = {.lex_state = 19, .external_lex_state = 4},
  [277] = {.lex_state = 9, .external_lex_state = 4},
  [278] = {.lex_state = 2, .external_lex_state = 4},
  [279] = {.lex_state = 2, .external_lex_state = 4},
  [280] = {.lex_state = 9, .external_lex_state = 4},
  [281] = {.lex_state = 19, .external_lex_state = 4},
  [282] = {.lex_state = 9, .external_lex_state = 4},
  [283] = {.lex_state = 9, .external_lex_state = 4},
  [284] = {.lex_state = 2, .external_lex_state = 4},
  [285] = {.lex_state = 9, .external_lex_state = 4},
  [286] = {.lex_state = 19, .external_lex_state = 4},
  [287] = {.lex_state = 19, .external_lex_state = 4},
  [288] = {.lex_state = 4, .external_lex_state = 4},
  [289] = {.lex_state = 4, .external_lex_state = 4},
  [290] = {.lex_state = 19, .external_lex_state = 4},
  [291] = {.lex_state = 19, .external_lex_state = 4},
  [292] = {.lex_state = 1, .external_lex_state = 4},
  [293] = {.lex_state = 19, .external_lex_state = 4},
  [294] = {.lex_state = 19, .external_lex_state = 4},
  [295] = {.lex_state = 19, .external_lex_state = 4},
  [296] = {.lex_state = 19, .external_lex_state = 4},
  [297] = {.lex_state = 0, .external_lex_state = 4},
  [298] = {.lex_state = 6, .external_lex_state = 4},
  [299] = {.lex_state = 5, .external_lex_state = 4},
  [300] = {.lex_state = 5, .external_lex_state = 4},
  [301] = {.lex_state = 19, .external_lex_state = 4},
  [302] = {.lex_state = 6, .external_lex_state = 4},
  [303] = {.lex_state = 19, .external_lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__normal_bare_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__identifier_char] = ACTIONS(1),
    [sym___identifier_char_no_digit] = ACTIONS(1),
    [sym___identifier_char_no_digit_sign] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_decimal64] = ACTIONS(1),
    [anon_sym_decimal128] = ACTIONS(1),
    [anon_sym_date_DASHtime] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_currency] = ACTIONS(1),
    [anon_sym_country_DASH2] = ACTIONS(1),
    [anon_sym_country_DASH3] = ACTIONS(1),
    [anon_sym_country_DASHsubdivision] = ACTIONS(1),
    [anon_sym_email] = ACTIONS(1),
    [anon_sym_idn_DASHemail] = ACTIONS(1),
    [anon_sym_hostname] = ACTIONS(1),
    [anon_sym_idn_DASHhostname] = ACTIONS(1),
    [anon_sym_ipv4] = ACTIONS(1),
    [anon_sym_ipv6] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_url_DASHreference] = ACTIONS(1),
    [anon_sym_irl] = ACTIONS(1),
    [anon_sym_iri_DASHreference] = ACTIONS(1),
    [anon_sym_url_DASHtemplate] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_base64] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__escaped_string_token1] = ACTIONS(1),
    [sym__hex_digit] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__octal_token1] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym__newline_token2] = ACTIONS(1),
    [aux_sym__newline_token4] = ACTIONS(1),
    [aux_sym__newline_token5] = ACTIONS(1),
    [aux_sym__newline_token6] = ACTIONS(1),
    [aux_sym__newline_token7] = ACTIONS(1),
    [sym__bom] = ACTIONS(1),
    [sym__unicode_space] = ACTIONS(1),
    [aux_sym_single_line_comment_token1] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym__raw_string] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(297),
    [sym_node] = STATE(17),
    [sym_identifier] = STATE(71),
    [sym__bare_identifier] = STATE(218),
    [sym_type] = STATE(260),
    [sym_string] = STATE(218),
    [sym__escaped_string] = STATE(194),
    [sym__sign] = STATE(192),
    [sym__linespace] = STATE(45),
    [sym__newline] = STATE(45),
    [sym__ws] = STATE(45),
    [sym_single_line_comment] = STATE(45),
    [aux_sym_document_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__normal_bare_identifier] = ACTIONS(7),
    [anon_sym_SLASH_DASH] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [aux_sym__newline_token1] = ACTIONS(17),
    [aux_sym__newline_token2] = ACTIONS(17),
    [aux_sym__newline_token3] = ACTIONS(17),
    [aux_sym__newline_token4] = ACTIONS(17),
    [aux_sym__newline_token5] = ACTIONS(17),
    [aux_sym__newline_token6] = ACTIONS(17),
    [aux_sym__newline_token7] = ACTIONS(17),
    [sym__bom] = ACTIONS(17),
    [sym__unicode_space] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(19),
    [sym_multi_line_comment] = ACTIONS(17),
    [sym__raw_string] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 36,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(25), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(109), 1,
      sym_node_children,
    STATE(154), 1,
      sym__integer,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(198), 1,
      sym_node_field,
    STATE(217), 1,
      sym_boolean,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(211), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(152), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(29), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [130] = 36,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(25), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(118), 1,
      sym_node_children,
    STATE(154), 1,
      sym__integer,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(198), 1,
      sym_node_field,
    STATE(217), 1,
      sym_boolean,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(211), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(142), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(49), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [260] = 36,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(25), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(95), 1,
      sym_node_children,
    STATE(154), 1,
      sym__integer,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(198), 1,
      sym_node_field,
    STATE(217), 1,
      sym_boolean,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(211), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(171), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(51), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [390] = 36,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(25), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(85), 1,
      sym_node_children,
    STATE(154), 1,
      sym__integer,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(198), 1,
      sym_node_field,
    STATE(217), 1,
      sym_boolean,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(211), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(141), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(53), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [520] = 36,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(25), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(90), 1,
      sym_node_children,
    STATE(154), 1,
      sym__integer,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(198), 1,
      sym_node_field,
    STATE(217), 1,
      sym_boolean,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(211), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(162), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(55), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [650] = 36,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(25), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(80), 1,
      sym_node_children,
    STATE(154), 1,
      sym__integer,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(198), 1,
      sym_node_field,
    STATE(217), 1,
      sym_boolean,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(211), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(148), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(57), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [780] = 36,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(25), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(79), 1,
      sym_type,
    STATE(108), 1,
      sym_node_children,
    STATE(154), 1,
      sym__integer,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(198), 1,
      sym_node_field,
    STATE(217), 1,
      sym_boolean,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(211), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(160), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
    ACTIONS(59), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [910] = 10,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym__raw_string,
    STATE(292), 1,
      sym__sign,
    STATE(296), 1,
      sym__escaped_string,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(290), 2,
      sym__bare_identifier,
      sym_string,
    STATE(301), 2,
      sym_identifier,
      sym_annotation_type,
    ACTIONS(61), 37,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [980] = 31,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(69), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    STATE(74), 1,
      aux_sym_node_repeat1,
    STATE(79), 1,
      sym_type,
    STATE(125), 1,
      sym__escline,
    STATE(154), 1,
      sym__integer,
    STATE(186), 1,
      sym__node_space,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(198), 1,
      sym_node_field,
    STATE(217), 1,
      sym_boolean,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(211), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(73), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1085] = 30,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_node_repeat1,
    STATE(79), 1,
      sym_type,
    STATE(125), 1,
      sym__escline,
    STATE(154), 1,
      sym__integer,
    STATE(186), 1,
      sym__node_space,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(217), 1,
      sym_boolean,
    STATE(221), 1,
      sym__node_field,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(73), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1186] = 30,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      aux_sym_node_repeat1,
    STATE(79), 1,
      sym_type,
    STATE(125), 1,
      sym__escline,
    STATE(154), 1,
      sym__integer,
    STATE(186), 1,
      sym__node_space,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(209), 1,
      sym__node_field,
    STATE(217), 1,
      sym_boolean,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(73), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1287] = 29,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    STATE(14), 1,
      aux_sym_node_repeat1,
    STATE(79), 1,
      sym_type,
    STATE(125), 1,
      sym__escline,
    STATE(154), 1,
      sym__integer,
    STATE(186), 1,
      sym__node_space,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(217), 1,
      sym_boolean,
    STATE(221), 1,
      sym__node_field,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(73), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1385] = 29,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(23), 1,
      sym__normal_bare_identifier,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    STATE(74), 1,
      aux_sym_node_repeat1,
    STATE(79), 1,
      sym_type,
    STATE(125), 1,
      sym__escline,
    STATE(154), 1,
      sym__integer,
    STATE(186), 1,
      sym__node_space,
    STATE(191), 1,
      sym_string,
    STATE(194), 1,
      sym__escaped_string,
    STATE(209), 1,
      sym__node_field,
    STATE(217), 1,
      sym_boolean,
    STATE(264), 1,
      sym__sign,
    STATE(290), 1,
      sym__bare_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(199), 2,
      sym_keyword,
      sym_number,
    STATE(213), 2,
      sym_prop,
      sym_value,
    ACTIONS(73), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [1483] = 8,
    ACTIONS(83), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(86), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(79), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 20,
      sym__eof,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [1534] = 16,
    ACTIONS(91), 1,
      sym__normal_bare_identifier,
    ACTIONS(94), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(112), 1,
      sym__raw_string,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(54), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(106), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1600] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(29), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(43), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(117), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1665] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(20), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(51), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(121), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1730] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(50), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(125), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1795] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(41), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(129), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1860] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(51), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(121), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1925] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(21), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(47), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(133), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [1990] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(31), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(32), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(137), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2055] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(25), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(40), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(141), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2120] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(37), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(145), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2185] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(30), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(37), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(145), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2250] = 6,
    ACTIONS(151), 1,
      anon_sym_BSLASH,
    STATE(39), 1,
      sym__escline,
    STATE(49), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(154), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(147), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 20,
      sym__eof,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [2295] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(19), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(52), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(159), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2360] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(52), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(159), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2425] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(46), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(163), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2490] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(16), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(40), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(141), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2555] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(153), 1,
      sym_node,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2619] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_node,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(36), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(167), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2683] = 4,
    STATE(53), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(169), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(147), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 21,
      sym__eof,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [2723] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_node,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(44), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(174), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2787] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_node,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(78), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(176), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2851] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(153), 1,
      sym_node,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [2915] = 4,
    STATE(49), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(182), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(178), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 21,
      sym__eof,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [2955] = 4,
    STATE(38), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(189), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(185), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(187), 21,
      sym__eof,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [2995] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(153), 1,
      sym_node,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3059] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(153), 1,
      sym_node,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3123] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_node,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(76), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(194), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3187] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_identifier,
    STATE(153), 1,
      sym_node,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3251] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_node,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(75), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(196), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3315] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_node,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(77), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(198), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3379] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(153), 1,
      sym_node,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3443] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(153), 1,
      sym_node,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3507] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_node,
    STATE(71), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(42), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(204), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3571] = 4,
    STATE(49), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(210), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(206), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(208), 21,
      sym__eof,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [3611] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_identifier,
    STATE(153), 1,
      sym_node,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3675] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_identifier,
    STATE(153), 1,
      sym_node,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3739] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_identifier,
    STATE(153), 1,
      sym_node,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3803] = 4,
    STATE(49), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(215), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(185), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(187), 21,
      sym__eof,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [3843] = 15,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym__raw_string,
    STATE(71), 1,
      sym_identifier,
    STATE(153), 1,
      sym_node,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(165), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [3904] = 2,
    ACTIONS(220), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(218), 24,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [3938] = 2,
    ACTIONS(222), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(224), 24,
      sym__eof,
      sym_multi_line_comment,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [3972] = 2,
    ACTIONS(226), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 24,
      sym__eof,
      sym_multi_line_comment,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [4006] = 2,
    ACTIONS(230), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(232), 24,
      sym__eof,
      sym_multi_line_comment,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [4040] = 2,
    ACTIONS(220), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(218), 24,
      sym__eof,
      sym_multi_line_comment,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [4074] = 2,
    ACTIONS(236), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(234), 24,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [4108] = 2,
    ACTIONS(236), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(234), 24,
      sym__eof,
      sym_multi_line_comment,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [4142] = 13,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      anon_sym_SLASH_DASH,
    STATE(8), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(85), 1,
      sym_node_children,
    STATE(89), 1,
      aux_sym_node_repeat2,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(141), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(53), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4195] = 13,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      anon_sym_SLASH_DASH,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(69), 1,
      aux_sym_node_repeat2,
    STATE(97), 1,
      sym_node_children,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(169), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(240), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4248] = 13,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      anon_sym_SLASH_DASH,
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(70), 1,
      aux_sym_node_repeat2,
    STATE(95), 1,
      sym_node_children,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(171), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(51), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4301] = 13,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      anon_sym_SLASH_DASH,
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(89), 1,
      aux_sym_node_repeat2,
    STATE(95), 1,
      sym_node_children,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(171), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(51), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4354] = 13,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(65), 1,
      aux_sym_node_repeat2,
    STATE(109), 1,
      sym_node_children,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(152), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(29), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4407] = 19,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(242), 1,
      anon_sym_null,
    STATE(79), 1,
      sym_type,
    STATE(154), 1,
      sym__integer,
    STATE(194), 1,
      sym__escaped_string,
    STATE(208), 1,
      sym_value,
    STATE(217), 1,
      sym_boolean,
    STATE(271), 1,
      sym__sign,
    ACTIONS(244), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(199), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [4472] = 13,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      anon_sym_SLASH_DASH,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(62), 1,
      aux_sym_node_repeat2,
    STATE(80), 1,
      sym_node_children,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(148), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(57), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4525] = 13,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      anon_sym_SLASH_DASH,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(80), 1,
      sym_node_children,
    STATE(89), 1,
      aux_sym_node_repeat2,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(148), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(57), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4578] = 13,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(89), 1,
      aux_sym_node_repeat2,
    STATE(118), 1,
      sym_node_children,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(142), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(49), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4631] = 13,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      anon_sym_SLASH_DASH,
    STATE(2), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(72), 1,
      aux_sym_node_repeat2,
    STATE(104), 1,
      sym_node_children,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(156), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(248), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4684] = 13,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      anon_sym_SLASH_DASH,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(34), 1,
      sym__escline,
    STATE(58), 1,
      sym__node_space,
    STATE(89), 1,
      aux_sym_node_repeat2,
    STATE(109), 1,
      sym_node_children,
    STATE(27), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(47), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(152), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(29), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [4737] = 4,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(250), 9,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(252), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4771] = 8,
    ACTIONS(258), 1,
      anon_sym_BSLASH,
    STATE(74), 1,
      aux_sym_node_repeat1,
    STATE(125), 1,
      sym__escline,
    STATE(186), 1,
      sym__node_space,
    STATE(100), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(261), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(79), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 10,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [4812] = 5,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(250), 7,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(252), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4847] = 5,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(250), 7,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(252), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4882] = 5,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(250), 7,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(252), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4917] = 5,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(250), 7,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(252), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
  [4952] = 16,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(37), 1,
      anon_sym_0x,
    ACTIONS(39), 1,
      anon_sym_0o,
    ACTIONS(41), 1,
      anon_sym_0b,
    ACTIONS(242), 1,
      anon_sym_null,
    STATE(154), 1,
      sym__integer,
    STATE(194), 1,
      sym__escaped_string,
    STATE(217), 1,
      sym_boolean,
    STATE(271), 1,
      sym__sign,
    ACTIONS(244), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(246), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(220), 3,
      sym_keyword,
      sym_string,
      sym_number,
    STATE(214), 4,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
  [5008] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(87), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(86), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(280), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(155), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(276), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5049] = 3,
    STATE(119), 1,
      aux_sym__integer_repeat1,
    ACTIONS(284), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(282), 19,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [5078] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(129), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(286), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5119] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(136), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(290), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5160] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(128), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(292), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5201] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(117), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(114), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(296), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(131), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(294), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5242] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(222), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(195), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(300), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(132), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(298), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5283] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(132), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(298), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5324] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(133), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(302), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5365] = 8,
    ACTIONS(306), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      aux_sym_node_repeat1,
    STATE(89), 1,
      aux_sym_node_repeat2,
    STATE(125), 1,
      sym__escline,
    STATE(186), 1,
      sym__node_space,
    STATE(100), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(309), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(304), 12,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [5404] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(111), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(103), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(314), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(134), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(312), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5445] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(98), 1,
      aux_sym_node_repeat1,
    STATE(222), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(195), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(300), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(151), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(316), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5486] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(151), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(316), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5527] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(137), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(318), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5568] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(102), 1,
      aux_sym_node_repeat1,
    STATE(222), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(195), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(300), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(137), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(318), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5609] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(116), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(120), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(322), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(138), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(320), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5650] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(157), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(324), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5691] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(113), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(112), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(328), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(144), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(326), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5732] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(145), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(330), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5773] = 3,
    STATE(99), 1,
      aux_sym__integer_repeat1,
    ACTIONS(334), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(332), 19,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [5802] = 6,
    ACTIONS(337), 1,
      anon_sym_BSLASH,
    STATE(121), 1,
      sym__escline,
    STATE(126), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(340), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(147), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 10,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [5837] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(143), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(343), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5878] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(167), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(345), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5919] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(84), 1,
      aux_sym_node_repeat1,
    STATE(222), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(195), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(300), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(140), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(347), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [5960] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(107), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(106), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(351), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(158), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(349), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6001] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(82), 1,
      aux_sym_node_repeat1,
    STATE(222), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(195), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(300), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(143), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(343), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6042] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(115), 1,
      aux_sym_node_repeat1,
    STATE(222), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(195), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(300), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(146), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(353), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6083] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(146), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(353), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6124] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(101), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(105), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(357), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(355), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6165] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(93), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(94), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(361), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(149), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(359), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6206] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(150), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(363), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6247] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(140), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(347), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6288] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(88), 1,
      aux_sym_node_repeat1,
    STATE(222), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(195), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(300), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(159), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(365), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6329] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(159), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(365), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6370] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(110), 1,
      aux_sym_node_repeat1,
    STATE(222), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(195), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(300), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(139), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(367), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6411] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(161), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(369), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6452] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(168), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(371), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6493] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(288), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(139), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(367), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6534] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(92), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(91), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(375), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(170), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(373), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6575] = 3,
    STATE(99), 1,
      aux_sym__integer_repeat1,
    ACTIONS(379), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(377), 19,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [6604] = 9,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_BSLASH,
    STATE(96), 1,
      aux_sym_node_repeat1,
    STATE(222), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(195), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(300), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(168), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(371), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [6645] = 4,
    STATE(123), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(381), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(185), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(187), 11,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [6675] = 4,
    STATE(126), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(384), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(185), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(187), 11,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [6705] = 4,
    STATE(126), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(387), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(178), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 11,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [6735] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    STATE(63), 1,
      sym_identifier,
    STATE(74), 1,
      aux_sym_node_repeat1,
    STATE(125), 1,
      sym__escline,
    STATE(186), 1,
      sym__node_space,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(257), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(100), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(73), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [6789] = 4,
    STATE(122), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(390), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(147), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 11,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [6819] = 4,
    STATE(126), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(393), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(206), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(208), 11,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [6849] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    STATE(66), 1,
      sym_identifier,
    STATE(124), 1,
      aux_sym_node_repeat1,
    STATE(125), 1,
      sym__escline,
    STATE(186), 1,
      sym__node_space,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    STATE(258), 1,
      sym_type,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(100), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(73), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [6903] = 1,
    ACTIONS(396), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [6926] = 1,
    ACTIONS(398), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [6949] = 3,
    STATE(130), 1,
      aux_sym__binary_repeat1,
    ACTIONS(402), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(400), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [6976] = 1,
    ACTIONS(405), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [6999] = 1,
    ACTIONS(407), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7022] = 1,
    ACTIONS(409), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7045] = 1,
    ACTIONS(411), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7068] = 4,
    ACTIONS(415), 1,
      anon_sym_DOT,
    STATE(202), 1,
      sym__exponent,
    ACTIONS(417), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(413), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7097] = 1,
    ACTIONS(419), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7120] = 1,
    ACTIONS(421), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7143] = 1,
    ACTIONS(423), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7166] = 1,
    ACTIONS(425), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7189] = 1,
    ACTIONS(427), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7212] = 1,
    ACTIONS(429), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7235] = 1,
    ACTIONS(431), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7258] = 1,
    ACTIONS(433), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7281] = 1,
    ACTIONS(435), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7304] = 1,
    ACTIONS(437), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7327] = 1,
    ACTIONS(439), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7350] = 3,
    STATE(164), 1,
      aux_sym__binary_repeat1,
    ACTIONS(443), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(441), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7377] = 1,
    ACTIONS(445), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7400] = 1,
    ACTIONS(447), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7423] = 1,
    ACTIONS(449), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7446] = 1,
    ACTIONS(451), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7469] = 1,
    ACTIONS(453), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7492] = 1,
    ACTIONS(89), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7515] = 4,
    ACTIONS(457), 1,
      anon_sym_DOT,
    STATE(216), 1,
      sym__exponent,
    ACTIONS(417), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(455), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7544] = 1,
    ACTIONS(459), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7567] = 1,
    ACTIONS(461), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7590] = 1,
    ACTIONS(463), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7613] = 1,
    ACTIONS(465), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7636] = 1,
    ACTIONS(467), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7659] = 1,
    ACTIONS(469), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7682] = 1,
    ACTIONS(471), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7705] = 1,
    ACTIONS(473), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7728] = 1,
    ACTIONS(475), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7751] = 3,
    STATE(130), 1,
      aux_sym__binary_repeat1,
    ACTIONS(479), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(477), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7778] = 3,
    STATE(130), 1,
      aux_sym__binary_repeat1,
    ACTIONS(479), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(481), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7805] = 3,
    STATE(165), 1,
      aux_sym__binary_repeat1,
    ACTIONS(483), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(477), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7832] = 1,
    ACTIONS(485), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7855] = 1,
    ACTIONS(487), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7878] = 1,
    ACTIONS(489), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7901] = 1,
    ACTIONS(491), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7924] = 1,
    ACTIONS(493), 20,
      sym_multi_line_comment,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7947] = 3,
    STATE(181), 1,
      aux_sym__octal_repeat1,
    ACTIONS(497), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(495), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7973] = 3,
    STATE(182), 1,
      aux_sym__octal_repeat1,
    ACTIONS(501), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(499), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7999] = 3,
    STATE(203), 1,
      sym__exponent,
    ACTIONS(417), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(503), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8025] = 3,
    STATE(178), 1,
      aux_sym__hex_repeat1,
    ACTIONS(507), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(505), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8051] = 3,
    STATE(172), 1,
      aux_sym__octal_repeat1,
    ACTIONS(511), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(509), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8077] = 3,
    STATE(184), 1,
      aux_sym__hex_repeat1,
    ACTIONS(513), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(505), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8103] = 3,
    STATE(184), 1,
      aux_sym__hex_repeat1,
    ACTIONS(513), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(515), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8129] = 2,
    ACTIONS(226), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(228), 14,
      sym_multi_line_comment,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [8153] = 3,
    STATE(215), 1,
      sym__exponent,
    ACTIONS(417), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(517), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8179] = 3,
    STATE(181), 1,
      aux_sym__octal_repeat1,
    ACTIONS(521), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(519), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8205] = 3,
    STATE(181), 1,
      aux_sym__octal_repeat1,
    ACTIONS(497), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(509), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8231] = 2,
    ACTIONS(222), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(224), 14,
      sym_multi_line_comment,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [8255] = 3,
    STATE(184), 1,
      aux_sym__hex_repeat1,
    ACTIONS(526), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(524), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8281] = 3,
    STATE(177), 1,
      aux_sym__hex_repeat1,
    ACTIONS(531), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(529), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8307] = 2,
    ACTIONS(230), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(232), 14,
      sym_multi_line_comment,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [8331] = 7,
    ACTIONS(533), 1,
      anon_sym_BSLASH,
    STATE(187), 1,
      aux_sym_node_repeat1,
    STATE(212), 1,
      sym__escline,
    STATE(234), 1,
      sym__node_space,
    STATE(193), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(536), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(81), 10,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [8365] = 3,
    ACTIONS(541), 1,
      sym__identifier_char,
    STATE(188), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(539), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8390] = 3,
    ACTIONS(546), 1,
      sym__identifier_char,
    STATE(188), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(544), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8415] = 3,
    ACTIONS(550), 1,
      sym__identifier_char,
    STATE(189), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(548), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8440] = 2,
    ACTIONS(554), 1,
      anon_sym_EQ,
    ACTIONS(552), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8462] = 2,
    ACTIONS(558), 1,
      sym___identifier_char_no_digit,
    ACTIONS(556), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8484] = 5,
    ACTIONS(560), 1,
      anon_sym_BSLASH,
    STATE(206), 1,
      sym__escline,
    STATE(205), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(563), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(149), 10,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [8512] = 1,
    ACTIONS(566), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8532] = 5,
    ACTIONS(571), 1,
      anon_sym_BSLASH,
    STATE(206), 1,
      sym__escline,
    STATE(205), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(575), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(568), 10,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [8560] = 1,
    ACTIONS(579), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8580] = 1,
    ACTIONS(581), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8600] = 1,
    ACTIONS(304), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8619] = 1,
    ACTIONS(552), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8638] = 1,
    ACTIONS(583), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8657] = 3,
    STATE(205), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(585), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(180), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [8680] = 1,
    ACTIONS(588), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8699] = 1,
    ACTIONS(590), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8718] = 1,
    ACTIONS(592), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8737] = 3,
    STATE(205), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(594), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(208), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [8760] = 3,
    STATE(201), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(597), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(187), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [8783] = 3,
    STATE(205), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(600), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(187), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [8806] = 1,
    ACTIONS(603), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8825] = 1,
    ACTIONS(605), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8844] = 3,
    STATE(205), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(610), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(607), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [8867] = 1,
    ACTIONS(614), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8886] = 3,
    STATE(207), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(616), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(149), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [8909] = 1,
    ACTIONS(619), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8928] = 1,
    ACTIONS(621), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8947] = 1,
    ACTIONS(623), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8966] = 1,
    ACTIONS(413), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8985] = 1,
    ACTIONS(625), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9004] = 1,
    ACTIONS(554), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9023] = 1,
    ACTIONS(627), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9042] = 1,
    ACTIONS(629), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9061] = 1,
    ACTIONS(631), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9080] = 3,
    STATE(210), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(636), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(633), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [9103] = 5,
    ACTIONS(644), 1,
      anon_sym_SLASH_SLASH,
    STATE(230), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(281), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(642), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(640), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9129] = 5,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    STATE(179), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(230), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(642), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(646), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9155] = 5,
    ACTIONS(650), 1,
      anon_sym_SLASH_SLASH,
    STATE(57), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(230), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(642), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(648), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9181] = 5,
    ACTIONS(654), 1,
      anon_sym_SLASH_SLASH,
    STATE(230), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(236), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(642), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(652), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9207] = 5,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    STATE(183), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(224), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(658), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(656), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9233] = 5,
    ACTIONS(644), 1,
      anon_sym_SLASH_SLASH,
    STATE(223), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(276), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(662), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(660), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9259] = 5,
    ACTIONS(650), 1,
      anon_sym_SLASH_SLASH,
    STATE(56), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(225), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(666), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(664), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9285] = 3,
    STATE(230), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(668), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(208), 10,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      anon_sym_SLASH_SLASH,
  [9307] = 5,
    ACTIONS(654), 1,
      anon_sym_SLASH_SLASH,
    STATE(226), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(246), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(673), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(671), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9333] = 1,
    ACTIONS(675), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9350] = 1,
    ACTIONS(677), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9367] = 1,
    ACTIONS(232), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9384] = 1,
    ACTIONS(679), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9401] = 1,
    ACTIONS(228), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9418] = 1,
    ACTIONS(218), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9435] = 1,
    ACTIONS(681), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9452] = 1,
    ACTIONS(683), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9469] = 1,
    ACTIONS(685), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9486] = 1,
    ACTIONS(687), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9503] = 1,
    ACTIONS(689), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9520] = 1,
    ACTIONS(691), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9537] = 1,
    ACTIONS(234), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9554] = 1,
    ACTIONS(693), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9571] = 1,
    ACTIONS(224), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9588] = 1,
    ACTIONS(695), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9605] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(697), 5,
      sym__normal_bare_identifier,
      anon_sym_null,
      sym__digit,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(699), 7,
      sym__raw_string,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [9625] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(703), 1,
      aux_sym_single_line_comment_token1,
    STATE(61), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(701), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9648] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(707), 1,
      aux_sym_single_line_comment_token1,
    STATE(237), 1,
      sym__newline,
    STATE(259), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(705), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9671] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(707), 1,
      aux_sym_single_line_comment_token1,
    STATE(259), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(272), 1,
      sym__newline,
    ACTIONS(709), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9694] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(713), 1,
      aux_sym_single_line_comment_token1,
    STATE(60), 1,
      sym__newline,
    STATE(254), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(711), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9717] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(717), 1,
      aux_sym_single_line_comment_token1,
    STATE(251), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(274), 1,
      sym__newline,
    ACTIONS(715), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9740] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(707), 1,
      aux_sym_single_line_comment_token1,
    STATE(55), 1,
      sym__newline,
    STATE(259), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(719), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9763] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(707), 1,
      aux_sym_single_line_comment_token1,
    STATE(59), 1,
      sym__newline,
    STATE(259), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(721), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9786] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(725), 1,
      aux_sym_single_line_comment_token1,
    STATE(244), 1,
      sym__newline,
    STATE(250), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(723), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9809] = 9,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    STATE(68), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
  [9839] = 9,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    STATE(64), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
  [9869] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(729), 1,
      aux_sym_single_line_comment_token1,
    STATE(259), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(727), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token2,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
  [9889] = 9,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string,
    STATE(66), 1,
      sym_identifier,
    STATE(192), 1,
      sym__sign,
    STATE(194), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(218), 2,
      sym__bare_identifier,
      sym_string,
  [9919] = 7,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(732), 1,
      anon_sym_BSLASH,
    STATE(263), 1,
      aux_sym_node_repeat1,
    STATE(269), 1,
      sym__escline,
    STATE(275), 1,
      sym__node_space,
    STATE(265), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(734), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [9944] = 7,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(736), 1,
      anon_sym_BSLASH,
    STATE(262), 1,
      aux_sym_node_repeat1,
    STATE(269), 1,
      sym__escline,
    STATE(275), 1,
      sym__node_space,
    STATE(265), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(739), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [9969] = 7,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(732), 1,
      anon_sym_BSLASH,
    STATE(262), 1,
      aux_sym_node_repeat1,
    STATE(269), 1,
      sym__escline,
    STATE(275), 1,
      sym__node_space,
    STATE(265), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(734), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [9994] = 8,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(556), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      sym___identifier_char_no_digit,
    ACTIONS(744), 1,
      anon_sym_0x,
    ACTIONS(746), 1,
      anon_sym_0o,
    ACTIONS(748), 1,
      anon_sym_0b,
    STATE(135), 1,
      sym__integer,
  [10019] = 5,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_BSLASH,
    STATE(267), 1,
      sym__escline,
    STATE(230), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(753), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10038] = 3,
    ACTIONS(180), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
    STATE(230), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(756), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10052] = 3,
    ACTIONS(187), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
    STATE(266), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(759), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10066] = 3,
    ACTIONS(187), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
    STATE(230), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(762), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10080] = 3,
    ACTIONS(149), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
    STATE(268), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(765), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10094] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(768), 1,
      sym__digit,
    STATE(200), 1,
      sym__integer,
    STATE(287), 1,
      sym__sign,
    ACTIONS(770), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10111] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(33), 1,
      sym__digit,
    ACTIONS(744), 1,
      anon_sym_0x,
    ACTIONS(746), 1,
      anon_sym_0o,
    ACTIONS(748), 1,
      anon_sym_0b,
    STATE(135), 1,
      sym__integer,
  [10130] = 1,
    ACTIONS(218), 5,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [10138] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(772), 1,
      anon_sym_DQUOTE,
    ACTIONS(774), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(776), 1,
      sym_escape,
    STATE(282), 1,
      aux_sym__escaped_string_repeat1,
  [10154] = 1,
    ACTIONS(234), 5,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [10162] = 1,
    ACTIONS(232), 5,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [10170] = 1,
    ACTIONS(224), 5,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [10178] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(774), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(776), 1,
      sym_escape,
    ACTIONS(778), 1,
      anon_sym_DQUOTE,
    STATE(283), 1,
      aux_sym__escaped_string_repeat1,
  [10194] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(780), 1,
      sym__identifier_char,
    STATE(279), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(544), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [10208] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(782), 1,
      sym__identifier_char,
    STATE(279), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(539), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [10222] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(774), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(776), 1,
      sym_escape,
    ACTIONS(785), 1,
      anon_sym_DQUOTE,
    STATE(277), 1,
      aux_sym__escaped_string_repeat1,
  [10238] = 1,
    ACTIONS(228), 5,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [10246] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(774), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(776), 1,
      sym_escape,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    STATE(283), 1,
      aux_sym__escaped_string_repeat1,
  [10262] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(789), 1,
      anon_sym_DQUOTE,
    ACTIONS(791), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(794), 1,
      sym_escape,
    STATE(283), 1,
      aux_sym__escaped_string_repeat1,
  [10278] = 4,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(797), 1,
      sym__identifier_char,
    STATE(278), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(548), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [10292] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(801), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(799), 2,
      anon_sym_DQUOTE,
      sym_escape,
  [10303] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(768), 1,
      sym__digit,
    STATE(174), 1,
      sym__integer,
  [10313] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(768), 1,
      sym__digit,
    STATE(204), 1,
      sym__integer,
  [10323] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(803), 2,
      anon_sym_0,
      anon_sym_1,
  [10331] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(805), 2,
      anon_sym_0,
      anon_sym_1,
  [10339] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(554), 2,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [10347] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(768), 1,
      sym__digit,
    STATE(180), 1,
      sym__integer,
  [10357] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(742), 1,
      sym___identifier_char_no_digit,
  [10367] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
  [10374] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
  [10381] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(807), 1,
      anon_sym_EQ,
  [10388] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [10395] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(809), 1,
      ts_builtin_sym_end,
  [10402] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(811), 1,
      sym__hex_digit,
  [10409] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(813), 1,
      aux_sym__octal_token1,
  [10416] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(815), 1,
      aux_sym__octal_token1,
  [10423] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
  [10430] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(819), 1,
      sym__hex_digit,
  [10437] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 130,
  [SMALL_STATE(4)] = 260,
  [SMALL_STATE(5)] = 390,
  [SMALL_STATE(6)] = 520,
  [SMALL_STATE(7)] = 650,
  [SMALL_STATE(8)] = 780,
  [SMALL_STATE(9)] = 910,
  [SMALL_STATE(10)] = 980,
  [SMALL_STATE(11)] = 1085,
  [SMALL_STATE(12)] = 1186,
  [SMALL_STATE(13)] = 1287,
  [SMALL_STATE(14)] = 1385,
  [SMALL_STATE(15)] = 1483,
  [SMALL_STATE(16)] = 1534,
  [SMALL_STATE(17)] = 1600,
  [SMALL_STATE(18)] = 1665,
  [SMALL_STATE(19)] = 1730,
  [SMALL_STATE(20)] = 1795,
  [SMALL_STATE(21)] = 1860,
  [SMALL_STATE(22)] = 1925,
  [SMALL_STATE(23)] = 1990,
  [SMALL_STATE(24)] = 2055,
  [SMALL_STATE(25)] = 2120,
  [SMALL_STATE(26)] = 2185,
  [SMALL_STATE(27)] = 2250,
  [SMALL_STATE(28)] = 2295,
  [SMALL_STATE(29)] = 2360,
  [SMALL_STATE(30)] = 2425,
  [SMALL_STATE(31)] = 2490,
  [SMALL_STATE(32)] = 2555,
  [SMALL_STATE(33)] = 2619,
  [SMALL_STATE(34)] = 2683,
  [SMALL_STATE(35)] = 2723,
  [SMALL_STATE(36)] = 2787,
  [SMALL_STATE(37)] = 2851,
  [SMALL_STATE(38)] = 2915,
  [SMALL_STATE(39)] = 2955,
  [SMALL_STATE(40)] = 2995,
  [SMALL_STATE(41)] = 3059,
  [SMALL_STATE(42)] = 3123,
  [SMALL_STATE(43)] = 3187,
  [SMALL_STATE(44)] = 3251,
  [SMALL_STATE(45)] = 3315,
  [SMALL_STATE(46)] = 3379,
  [SMALL_STATE(47)] = 3443,
  [SMALL_STATE(48)] = 3507,
  [SMALL_STATE(49)] = 3571,
  [SMALL_STATE(50)] = 3611,
  [SMALL_STATE(51)] = 3675,
  [SMALL_STATE(52)] = 3739,
  [SMALL_STATE(53)] = 3803,
  [SMALL_STATE(54)] = 3843,
  [SMALL_STATE(55)] = 3904,
  [SMALL_STATE(56)] = 3938,
  [SMALL_STATE(57)] = 3972,
  [SMALL_STATE(58)] = 4006,
  [SMALL_STATE(59)] = 4040,
  [SMALL_STATE(60)] = 4074,
  [SMALL_STATE(61)] = 4108,
  [SMALL_STATE(62)] = 4142,
  [SMALL_STATE(63)] = 4195,
  [SMALL_STATE(64)] = 4248,
  [SMALL_STATE(65)] = 4301,
  [SMALL_STATE(66)] = 4354,
  [SMALL_STATE(67)] = 4407,
  [SMALL_STATE(68)] = 4472,
  [SMALL_STATE(69)] = 4525,
  [SMALL_STATE(70)] = 4578,
  [SMALL_STATE(71)] = 4631,
  [SMALL_STATE(72)] = 4684,
  [SMALL_STATE(73)] = 4737,
  [SMALL_STATE(74)] = 4771,
  [SMALL_STATE(75)] = 4812,
  [SMALL_STATE(76)] = 4847,
  [SMALL_STATE(77)] = 4882,
  [SMALL_STATE(78)] = 4917,
  [SMALL_STATE(79)] = 4952,
  [SMALL_STATE(80)] = 5008,
  [SMALL_STATE(81)] = 5049,
  [SMALL_STATE(82)] = 5078,
  [SMALL_STATE(83)] = 5119,
  [SMALL_STATE(84)] = 5160,
  [SMALL_STATE(85)] = 5201,
  [SMALL_STATE(86)] = 5242,
  [SMALL_STATE(87)] = 5283,
  [SMALL_STATE(88)] = 5324,
  [SMALL_STATE(89)] = 5365,
  [SMALL_STATE(90)] = 5404,
  [SMALL_STATE(91)] = 5445,
  [SMALL_STATE(92)] = 5486,
  [SMALL_STATE(93)] = 5527,
  [SMALL_STATE(94)] = 5568,
  [SMALL_STATE(95)] = 5609,
  [SMALL_STATE(96)] = 5650,
  [SMALL_STATE(97)] = 5691,
  [SMALL_STATE(98)] = 5732,
  [SMALL_STATE(99)] = 5773,
  [SMALL_STATE(100)] = 5802,
  [SMALL_STATE(101)] = 5837,
  [SMALL_STATE(102)] = 5878,
  [SMALL_STATE(103)] = 5919,
  [SMALL_STATE(104)] = 5960,
  [SMALL_STATE(105)] = 6001,
  [SMALL_STATE(106)] = 6042,
  [SMALL_STATE(107)] = 6083,
  [SMALL_STATE(108)] = 6124,
  [SMALL_STATE(109)] = 6165,
  [SMALL_STATE(110)] = 6206,
  [SMALL_STATE(111)] = 6247,
  [SMALL_STATE(112)] = 6288,
  [SMALL_STATE(113)] = 6329,
  [SMALL_STATE(114)] = 6370,
  [SMALL_STATE(115)] = 6411,
  [SMALL_STATE(116)] = 6452,
  [SMALL_STATE(117)] = 6493,
  [SMALL_STATE(118)] = 6534,
  [SMALL_STATE(119)] = 6575,
  [SMALL_STATE(120)] = 6604,
  [SMALL_STATE(121)] = 6645,
  [SMALL_STATE(122)] = 6675,
  [SMALL_STATE(123)] = 6705,
  [SMALL_STATE(124)] = 6735,
  [SMALL_STATE(125)] = 6789,
  [SMALL_STATE(126)] = 6819,
  [SMALL_STATE(127)] = 6849,
  [SMALL_STATE(128)] = 6903,
  [SMALL_STATE(129)] = 6926,
  [SMALL_STATE(130)] = 6949,
  [SMALL_STATE(131)] = 6976,
  [SMALL_STATE(132)] = 6999,
  [SMALL_STATE(133)] = 7022,
  [SMALL_STATE(134)] = 7045,
  [SMALL_STATE(135)] = 7068,
  [SMALL_STATE(136)] = 7097,
  [SMALL_STATE(137)] = 7120,
  [SMALL_STATE(138)] = 7143,
  [SMALL_STATE(139)] = 7166,
  [SMALL_STATE(140)] = 7189,
  [SMALL_STATE(141)] = 7212,
  [SMALL_STATE(142)] = 7235,
  [SMALL_STATE(143)] = 7258,
  [SMALL_STATE(144)] = 7281,
  [SMALL_STATE(145)] = 7304,
  [SMALL_STATE(146)] = 7327,
  [SMALL_STATE(147)] = 7350,
  [SMALL_STATE(148)] = 7377,
  [SMALL_STATE(149)] = 7400,
  [SMALL_STATE(150)] = 7423,
  [SMALL_STATE(151)] = 7446,
  [SMALL_STATE(152)] = 7469,
  [SMALL_STATE(153)] = 7492,
  [SMALL_STATE(154)] = 7515,
  [SMALL_STATE(155)] = 7544,
  [SMALL_STATE(156)] = 7567,
  [SMALL_STATE(157)] = 7590,
  [SMALL_STATE(158)] = 7613,
  [SMALL_STATE(159)] = 7636,
  [SMALL_STATE(160)] = 7659,
  [SMALL_STATE(161)] = 7682,
  [SMALL_STATE(162)] = 7705,
  [SMALL_STATE(163)] = 7728,
  [SMALL_STATE(164)] = 7751,
  [SMALL_STATE(165)] = 7778,
  [SMALL_STATE(166)] = 7805,
  [SMALL_STATE(167)] = 7832,
  [SMALL_STATE(168)] = 7855,
  [SMALL_STATE(169)] = 7878,
  [SMALL_STATE(170)] = 7901,
  [SMALL_STATE(171)] = 7924,
  [SMALL_STATE(172)] = 7947,
  [SMALL_STATE(173)] = 7973,
  [SMALL_STATE(174)] = 7999,
  [SMALL_STATE(175)] = 8025,
  [SMALL_STATE(176)] = 8051,
  [SMALL_STATE(177)] = 8077,
  [SMALL_STATE(178)] = 8103,
  [SMALL_STATE(179)] = 8129,
  [SMALL_STATE(180)] = 8153,
  [SMALL_STATE(181)] = 8179,
  [SMALL_STATE(182)] = 8205,
  [SMALL_STATE(183)] = 8231,
  [SMALL_STATE(184)] = 8255,
  [SMALL_STATE(185)] = 8281,
  [SMALL_STATE(186)] = 8307,
  [SMALL_STATE(187)] = 8331,
  [SMALL_STATE(188)] = 8365,
  [SMALL_STATE(189)] = 8390,
  [SMALL_STATE(190)] = 8415,
  [SMALL_STATE(191)] = 8440,
  [SMALL_STATE(192)] = 8462,
  [SMALL_STATE(193)] = 8484,
  [SMALL_STATE(194)] = 8512,
  [SMALL_STATE(195)] = 8532,
  [SMALL_STATE(196)] = 8560,
  [SMALL_STATE(197)] = 8580,
  [SMALL_STATE(198)] = 8600,
  [SMALL_STATE(199)] = 8619,
  [SMALL_STATE(200)] = 8638,
  [SMALL_STATE(201)] = 8657,
  [SMALL_STATE(202)] = 8680,
  [SMALL_STATE(203)] = 8699,
  [SMALL_STATE(204)] = 8718,
  [SMALL_STATE(205)] = 8737,
  [SMALL_STATE(206)] = 8760,
  [SMALL_STATE(207)] = 8783,
  [SMALL_STATE(208)] = 8806,
  [SMALL_STATE(209)] = 8825,
  [SMALL_STATE(210)] = 8844,
  [SMALL_STATE(211)] = 8867,
  [SMALL_STATE(212)] = 8886,
  [SMALL_STATE(213)] = 8909,
  [SMALL_STATE(214)] = 8928,
  [SMALL_STATE(215)] = 8947,
  [SMALL_STATE(216)] = 8966,
  [SMALL_STATE(217)] = 8985,
  [SMALL_STATE(218)] = 9004,
  [SMALL_STATE(219)] = 9023,
  [SMALL_STATE(220)] = 9042,
  [SMALL_STATE(221)] = 9061,
  [SMALL_STATE(222)] = 9080,
  [SMALL_STATE(223)] = 9103,
  [SMALL_STATE(224)] = 9129,
  [SMALL_STATE(225)] = 9155,
  [SMALL_STATE(226)] = 9181,
  [SMALL_STATE(227)] = 9207,
  [SMALL_STATE(228)] = 9233,
  [SMALL_STATE(229)] = 9259,
  [SMALL_STATE(230)] = 9285,
  [SMALL_STATE(231)] = 9307,
  [SMALL_STATE(232)] = 9333,
  [SMALL_STATE(233)] = 9350,
  [SMALL_STATE(234)] = 9367,
  [SMALL_STATE(235)] = 9384,
  [SMALL_STATE(236)] = 9401,
  [SMALL_STATE(237)] = 9418,
  [SMALL_STATE(238)] = 9435,
  [SMALL_STATE(239)] = 9452,
  [SMALL_STATE(240)] = 9469,
  [SMALL_STATE(241)] = 9486,
  [SMALL_STATE(242)] = 9503,
  [SMALL_STATE(243)] = 9520,
  [SMALL_STATE(244)] = 9537,
  [SMALL_STATE(245)] = 9554,
  [SMALL_STATE(246)] = 9571,
  [SMALL_STATE(247)] = 9588,
  [SMALL_STATE(248)] = 9605,
  [SMALL_STATE(249)] = 9625,
  [SMALL_STATE(250)] = 9648,
  [SMALL_STATE(251)] = 9671,
  [SMALL_STATE(252)] = 9694,
  [SMALL_STATE(253)] = 9717,
  [SMALL_STATE(254)] = 9740,
  [SMALL_STATE(255)] = 9763,
  [SMALL_STATE(256)] = 9786,
  [SMALL_STATE(257)] = 9809,
  [SMALL_STATE(258)] = 9839,
  [SMALL_STATE(259)] = 9869,
  [SMALL_STATE(260)] = 9889,
  [SMALL_STATE(261)] = 9919,
  [SMALL_STATE(262)] = 9944,
  [SMALL_STATE(263)] = 9969,
  [SMALL_STATE(264)] = 9994,
  [SMALL_STATE(265)] = 10019,
  [SMALL_STATE(266)] = 10038,
  [SMALL_STATE(267)] = 10052,
  [SMALL_STATE(268)] = 10066,
  [SMALL_STATE(269)] = 10080,
  [SMALL_STATE(270)] = 10094,
  [SMALL_STATE(271)] = 10111,
  [SMALL_STATE(272)] = 10130,
  [SMALL_STATE(273)] = 10138,
  [SMALL_STATE(274)] = 10154,
  [SMALL_STATE(275)] = 10162,
  [SMALL_STATE(276)] = 10170,
  [SMALL_STATE(277)] = 10178,
  [SMALL_STATE(278)] = 10194,
  [SMALL_STATE(279)] = 10208,
  [SMALL_STATE(280)] = 10222,
  [SMALL_STATE(281)] = 10238,
  [SMALL_STATE(282)] = 10246,
  [SMALL_STATE(283)] = 10262,
  [SMALL_STATE(284)] = 10278,
  [SMALL_STATE(285)] = 10292,
  [SMALL_STATE(286)] = 10303,
  [SMALL_STATE(287)] = 10313,
  [SMALL_STATE(288)] = 10323,
  [SMALL_STATE(289)] = 10331,
  [SMALL_STATE(290)] = 10339,
  [SMALL_STATE(291)] = 10347,
  [SMALL_STATE(292)] = 10357,
  [SMALL_STATE(293)] = 10367,
  [SMALL_STATE(294)] = 10374,
  [SMALL_STATE(295)] = 10381,
  [SMALL_STATE(296)] = 10388,
  [SMALL_STATE(297)] = 10395,
  [SMALL_STATE(298)] = 10402,
  [SMALL_STATE(299)] = 10409,
  [SMALL_STATE(300)] = 10416,
  [SMALL_STATE(301)] = 10423,
  [SMALL_STATE(302)] = 10430,
  [SMALL_STATE(303)] = 10437,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(229),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(218),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(127),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(9),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(273),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(192),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(54),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(252),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(194),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 1),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(229),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(49),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(53),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 3),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(49),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(38),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(49),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(49),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(252),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(227),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(100),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(247),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(243),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document, 2), REDUCE(aux_sym_document_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(245),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(227),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(100),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(99),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(227),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(126),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(123),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(126),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(126),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(122),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(126),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 14),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 16),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2), SHIFT_REPEAT(130),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 15),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 12),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 8),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 14),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 12),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 15),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 14),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 16),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 8),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 11),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 15),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 11),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 12),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 7),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 8),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 16),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 7),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 11),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3, .production_id = 10),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 13),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2), SHIFT_REPEAT(181),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2), SHIFT_REPEAT(184),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(231),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(193),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(188),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(231),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(205),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [571] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(231),
  [575] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(205),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3, .production_id = 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(205),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 10),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(205),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(201),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(205),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 3, .production_id = 9),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [610] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(205),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_field, 1),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(207),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 5, .production_id = 13),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 2, .production_id = 6),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [636] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(210),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(230),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3, .production_id = 5),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 8, .production_id = 5),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4, .production_id = 5),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 7, .production_id = 5),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5, .production_id = 5),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6, .production_id = 5),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(259),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(228),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(265),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(228),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(230),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(230),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(266),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(230),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(268),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(279),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2),
  [791] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(285),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(285),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [809] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_type, 1),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__eof = 0,
  ts_external_token_multi_line_comment = 1,
  ts_external_token__raw_string = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token_multi_line_comment] = sym_multi_line_comment,
  [ts_external_token__raw_string] = sym__raw_string,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token_multi_line_comment] = true,
    [ts_external_token__raw_string] = true,
  },
  [2] = {
    [ts_external_token_multi_line_comment] = true,
    [ts_external_token__raw_string] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
    [ts_external_token_multi_line_comment] = true,
  },
  [4] = {
    [ts_external_token_multi_line_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_kdl_external_scanner_create(void);
void tree_sitter_kdl_external_scanner_destroy(void *);
bool tree_sitter_kdl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_kdl_external_scanner_serialize(void *, char *);
void tree_sitter_kdl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kdl(void) {
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
    .keyword_capture_token = sym__normal_bare_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_kdl_external_scanner_create,
      tree_sitter_kdl_external_scanner_destroy,
      tree_sitter_kdl_external_scanner_scan,
      tree_sitter_kdl_external_scanner_serialize,
      tree_sitter_kdl_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
