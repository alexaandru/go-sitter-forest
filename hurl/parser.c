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
#define STATE_COUNT 663
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 353
#define ALIAS_COUNT 1
#define TOKEN_COUNT 166
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_GET = 2,
  anon_sym_HEAD = 3,
  anon_sym_POST = 4,
  anon_sym_PUT = 5,
  anon_sym_DELETE = 6,
  anon_sym_CONNECT = 7,
  anon_sym_OPTIONS = 8,
  anon_sym_TRACE = 9,
  anon_sym_PATCH = 10,
  anon_sym_LINK = 11,
  anon_sym_UNLINK = 12,
  anon_sym_PURGE = 13,
  anon_sym_LOCK = 14,
  anon_sym_UNLOCK = 15,
  anon_sym_PROPFIND = 16,
  anon_sym_VIEW = 17,
  aux_sym_method_token1 = 18,
  anon_sym_HTTP_SLASH1_DOT0 = 19,
  anon_sym_HTTP_SLASH1_DOT1 = 20,
  anon_sym_HTTP_SLASH2 = 21,
  anon_sym_HTTP_SLASH_STAR = 22,
  anon_sym_HTTP = 23,
  aux_sym_status_token1 = 24,
  anon_sym_STAR = 25,
  anon_sym_LBRACKBasicAuth_RBRACK = 26,
  anon_sym_LBRACKQueryStringParams_RBRACK = 27,
  anon_sym_LBRACKFormParams_RBRACK = 28,
  anon_sym_LBRACKMultipartFormData_RBRACK = 29,
  anon_sym_LBRACKCookies_RBRACK = 30,
  anon_sym_LBRACKCaptures_RBRACK = 31,
  anon_sym_LBRACKAsserts_RBRACK = 32,
  anon_sym_LBRACKOptions_RBRACK = 33,
  anon_sym_COLON = 34,
  anon_sym_COLON2 = 35,
  anon_sym_file_COMMA = 36,
  anon_sym_SEMI = 37,
  aux_sym_file_contenttype_token1 = 38,
  anon_sym_cacert = 39,
  anon_sym_compressed = 40,
  anon_sym_location = 41,
  anon_sym_insecure = 42,
  anon_sym_max_DASHredirs = 43,
  anon_sym_path_DASHas_DASHis = 44,
  anon_sym_proxy = 45,
  anon_sym_retry = 46,
  anon_sym_retry_DASHinterval = 47,
  anon_sym_retry_DASHmax_DASHcount = 48,
  anon_sym_variable = 49,
  anon_sym_verbose = 50,
  anon_sym_very_DASHverbose = 51,
  anon_sym_EQ = 52,
  anon_sym_status = 53,
  anon_sym_url = 54,
  anon_sym_header = 55,
  anon_sym_cookie = 56,
  anon_sym_body = 57,
  anon_sym_xpath = 58,
  anon_sym_jsonpath = 59,
  anon_sym_regex = 60,
  anon_sym_duration = 61,
  anon_sym_sha256 = 62,
  anon_sym_md5 = 63,
  anon_sym_bytes = 64,
  anon_sym_not = 65,
  anon_sym_equals = 66,
  anon_sym_EQ_EQ = 67,
  anon_sym_notEquals = 68,
  anon_sym_BANG_EQ = 69,
  anon_sym_greaterThan = 70,
  anon_sym_GT = 71,
  anon_sym_greaterThanOrEquals = 72,
  anon_sym_GT_EQ = 73,
  anon_sym_lessThan = 74,
  anon_sym_LT = 75,
  anon_sym_lessThanOrEquals = 76,
  anon_sym_LT_EQ = 77,
  anon_sym_startsWith = 78,
  anon_sym_endsWith = 79,
  anon_sym_contains = 80,
  anon_sym_matches = 81,
  anon_sym_exists = 82,
  anon_sym_includes = 83,
  anon_sym_isInteger = 84,
  anon_sym_isFloat = 85,
  anon_sym_isBoolean = 86,
  anon_sym_isString = 87,
  anon_sym_isCollection = 88,
  anon_sym_LT_QMARK = 89,
  aux_sym_xml_prolog_tag_token1 = 90,
  anon_sym_QMARK_GT = 91,
  aux_sym_xml_open_tag_token1 = 92,
  anon_sym_LT_SLASH = 93,
  aux_sym_xml_close_tag_token1 = 94,
  anon_sym_base64_COMMA = 95,
  aux_sym_oneline_base64_token1 = 96,
  anon_sym_hex_COMMA = 97,
  anon_sym_DQUOTE = 98,
  aux_sym_quoted_string_text_token1 = 99,
  anon_sym_BSLASH = 100,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 101,
  anon_sym_b = 102,
  anon_sym_f = 103,
  anon_sym_n = 104,
  anon_sym_r = 105,
  anon_sym_t = 106,
  anon_sym_u = 107,
  sym_key_string_text = 108,
  anon_sym_BSLASH2 = 109,
  aux_sym_key_string_escaped_char_token1 = 110,
  aux_sym_value_string_text_token1 = 111,
  anon_sym_POUND = 112,
  aux_sym_oneline_string_token1 = 113,
  anon_sym_BQUOTE = 114,
  aux_sym_oneline_string_text_token1 = 115,
  aux_sym_oneline_string_text_token2 = 116,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 117,
  anon_sym_base64 = 118,
  anon_sym_hex = 119,
  anon_sym_json = 120,
  anon_sym_xml = 121,
  anon_sym_graphql = 122,
  aux_sym_multiline_string_type_token1 = 123,
  aux_sym__multiline_string_text_token1 = 124,
  anon_sym_LBRACE = 125,
  sym_filename_text = 126,
  aux_sym_filename_escaped_char_token1 = 127,
  anon_sym_RBRACE = 128,
  anon_sym_COMMA = 129,
  anon_sym_LBRACK = 130,
  anon_sym_RBRACK = 131,
  aux_sym_json_string_text_token1 = 132,
  anon_sym_LBRACE_LBRACE = 133,
  anon_sym_RBRACE_RBRACE = 134,
  aux_sym_variable_name_token1 = 135,
  aux_sym_variable_name_token2 = 136,
  anon_sym_count = 137,
  anon_sym_urlEncode = 138,
  anon_sym_urlDecode = 139,
  anon_sym_htmlEscape = 140,
  anon_sym_htmlUnescape = 141,
  anon_sym_toInt = 142,
  anon_sym_daysAfterNow = 143,
  anon_sym_daysBeforeNow = 144,
  anon_sym_decode = 145,
  anon_sym_format = 146,
  anon_sym_nth = 147,
  anon_sym_replace = 148,
  anon_sym_split = 149,
  anon_sym_toDate = 150,
  anon_sym_true = 151,
  anon_sym_false = 152,
  anon_sym_null = 153,
  aux_sym__alphanum_token1 = 154,
  aux_sym_digit_token1 = 155,
  aux_sym_hexdigit_token1 = 156,
  anon_sym_DOT = 157,
  anon_sym_e = 158,
  anon_sym_E = 159,
  anon_sym_PLUS = 160,
  anon_sym_DASH = 161,
  sym_comment = 162,
  anon_sym_SLASH = 163,
  aux_sym_regex_text_token1 = 164,
  aux_sym_regex_escaped_char_token1 = 165,
  sym_hurl_file = 166,
  sym_entry = 167,
  sym__comment_or_new_line = 168,
  sym_request = 169,
  sym_response = 170,
  sym_method = 171,
  sym_version = 172,
  sym_status = 173,
  sym_header = 174,
  sym_body = 175,
  sym_request_section = 176,
  sym_response_section = 177,
  sym_basic_auth_section = 178,
  sym_query_string_params_section = 179,
  sym_form_params_section = 180,
  sym_multipart_form_data_section = 181,
  sym_cookies_section = 182,
  sym_captures_section = 183,
  sym_asserts_section = 184,
  sym_options_section = 185,
  sym_key_value = 186,
  sym_multipart_form_data_param = 187,
  sym_file_param = 188,
  sym_file_value = 189,
  sym_file_contenttype = 190,
  sym_capture = 191,
  sym_assert = 192,
  sym_option = 193,
  sym_ca_certificate_option = 194,
  sym_compressed_option = 195,
  sym_follow_redirect_option = 196,
  sym_insecure_option = 197,
  sym_max_redirs_option = 198,
  sym_path_as_is_option = 199,
  sym_proxy_option = 200,
  sym_retry_option = 201,
  sym_retry_interval_option = 202,
  sym_retry_max_count_option = 203,
  sym_variable_option = 204,
  sym_verbose_option = 205,
  sym_very_verbose_option = 206,
  sym_variable_definition = 207,
  sym_variable_value = 208,
  sym_query = 209,
  sym_status_query = 210,
  sym_url_query = 211,
  sym_header_query = 212,
  sym_cookie_query = 213,
  sym_body_query = 214,
  sym_xpath_query = 215,
  sym_jsonpath_query = 216,
  sym_regex_query = 217,
  sym_variable_query = 218,
  sym_duration_query = 219,
  sym_sha256_query = 220,
  sym_md5_query = 221,
  sym_bytes_query = 222,
  sym_predicate = 223,
  sym_predicate_func = 224,
  sym_equal_predicate = 225,
  sym_not_equal_predicate = 226,
  sym_greater_predicate = 227,
  sym_greater_or_equal_predicate = 228,
  sym_less_predicate = 229,
  sym_less_or_equal_predicate = 230,
  sym_start_with_predicate = 231,
  sym_end_with_predicate = 232,
  sym_contain_predicate = 233,
  sym_match_predicate = 234,
  sym_exist_predicate = 235,
  sym_include_predicate = 236,
  sym_integer_predicate = 237,
  sym_float_predicate = 238,
  sym_boolean_predicate = 239,
  sym_string_predicate = 240,
  sym_collection_predicate = 241,
  sym_predicate_value = 242,
  sym_bytes = 243,
  sym_xml = 244,
  sym_xml_prolog_tag = 245,
  sym_xml_tag = 246,
  sym_xml_open_tag = 247,
  sym_xml_close_tag = 248,
  sym_oneline_base64 = 249,
  sym_oneline_file = 250,
  sym_oneline_hex = 251,
  sym_quoted_string = 252,
  sym_quoted_string_content = 253,
  sym_quoted_string_text = 254,
  sym_invalid_quoted_string_escaped_char = 255,
  sym_quoted_string_escaped_char = 256,
  sym_key_string = 257,
  sym_key_string_content = 258,
  sym_key_string_escaped_char = 259,
  sym_value_string = 260,
  sym_value_string_content = 261,
  sym_value_string_text = 262,
  sym_value_string_escaped_char = 263,
  sym_oneline_string = 264,
  sym_oneline_string_content = 265,
  sym_oneline_string_text = 266,
  sym_oneline_string_escaped_char = 267,
  sym_multiline_string = 268,
  sym_multiline_string_type = 269,
  sym_multiline_string_content = 270,
  sym__multiline_string_text = 271,
  sym_multiline_string_escaped_char = 272,
  sym_filename = 273,
  sym_filename_content = 274,
  sym_filename_escaped_char = 275,
  sym_unicode_char = 276,
  sym_json_value = 277,
  sym_json_object = 278,
  sym_json_key_value = 279,
  sym_json_key_string = 280,
  sym_json_array = 281,
  sym_json_string = 282,
  sym_json_string_content = 283,
  sym_json_string_text = 284,
  sym_json_string_escaped_char = 285,
  sym_json_number = 286,
  sym_template = 287,
  sym_expr = 288,
  sym_variable_name = 289,
  sym_filter = 290,
  sym_regex_filter = 291,
  sym_count_filter = 292,
  sym_url_encode_filter = 293,
  sym_url_decode_filter = 294,
  sym_html_escape_filter = 295,
  sym_html_unescape_filter = 296,
  sym_to_int_filter = 297,
  sym_days_after_now_filter = 298,
  sym_days_before_now_filter = 299,
  sym_decode_filter = 300,
  sym_format_filter = 301,
  sym_nth_filter = 302,
  sym_replace_filter = 303,
  sym_split_filter = 304,
  sym_to_date_filter = 305,
  sym_xpath_filter = 306,
  sym_boolean = 307,
  sym_null = 308,
  sym_integer = 309,
  sym_float = 310,
  sym_digit = 311,
  sym_hexdigit = 312,
  sym_fraction = 313,
  sym_exponent = 314,
  sym_regex = 315,
  sym_regex_content = 316,
  sym_regex_text = 317,
  sym_regex_escaped_char = 318,
  aux_sym_hurl_file_repeat1 = 319,
  aux_sym_hurl_file_repeat2 = 320,
  aux_sym__comment_or_new_line_repeat1 = 321,
  aux_sym_request_repeat1 = 322,
  aux_sym_request_repeat2 = 323,
  aux_sym_response_repeat1 = 324,
  aux_sym_query_string_params_section_repeat1 = 325,
  aux_sym_multipart_form_data_section_repeat1 = 326,
  aux_sym_captures_section_repeat1 = 327,
  aux_sym_asserts_section_repeat1 = 328,
  aux_sym_options_section_repeat1 = 329,
  aux_sym_capture_repeat1 = 330,
  aux_sym_xml_repeat1 = 331,
  aux_sym_xml_tag_repeat1 = 332,
  aux_sym_oneline_hex_repeat1 = 333,
  aux_sym_quoted_string_repeat1 = 334,
  aux_sym_quoted_string_content_repeat1 = 335,
  aux_sym_key_string_repeat1 = 336,
  aux_sym_key_string_content_repeat1 = 337,
  aux_sym_value_string_repeat1 = 338,
  aux_sym_value_string_content_repeat1 = 339,
  aux_sym_value_string_text_repeat1 = 340,
  aux_sym_oneline_string_repeat1 = 341,
  aux_sym_oneline_string_content_repeat1 = 342,
  aux_sym_multiline_string_repeat1 = 343,
  aux_sym_multiline_string_content_repeat1 = 344,
  aux_sym__multiline_string_text_repeat1 = 345,
  aux_sym_filename_repeat1 = 346,
  aux_sym_filename_content_repeat1 = 347,
  aux_sym_json_object_repeat1 = 348,
  aux_sym_json_array_repeat1 = 349,
  aux_sym_json_string_repeat1 = 350,
  aux_sym_integer_repeat1 = 351,
  aux_sym_regex_content_repeat1 = 352,
  anon_alias_sym_json_key_string = 353,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_GET] = "GET",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_CONNECT] = "CONNECT",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_PATCH] = "PATCH",
  [anon_sym_LINK] = "LINK",
  [anon_sym_UNLINK] = "UNLINK",
  [anon_sym_PURGE] = "PURGE",
  [anon_sym_LOCK] = "LOCK",
  [anon_sym_UNLOCK] = "UNLOCK",
  [anon_sym_PROPFIND] = "PROPFIND",
  [anon_sym_VIEW] = "VIEW",
  [aux_sym_method_token1] = "method_token1",
  [anon_sym_HTTP_SLASH1_DOT0] = "HTTP/1.0",
  [anon_sym_HTTP_SLASH1_DOT1] = "HTTP/1.1",
  [anon_sym_HTTP_SLASH2] = "HTTP/2",
  [anon_sym_HTTP_SLASH_STAR] = "HTTP/*",
  [anon_sym_HTTP] = "HTTP",
  [aux_sym_status_token1] = "status_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACKBasicAuth_RBRACK] = "[BasicAuth]",
  [anon_sym_LBRACKQueryStringParams_RBRACK] = "[QueryStringParams]",
  [anon_sym_LBRACKFormParams_RBRACK] = "[FormParams]",
  [anon_sym_LBRACKMultipartFormData_RBRACK] = "[MultipartFormData]",
  [anon_sym_LBRACKCookies_RBRACK] = "[Cookies]",
  [anon_sym_LBRACKCaptures_RBRACK] = "[Captures]",
  [anon_sym_LBRACKAsserts_RBRACK] = "[Asserts]",
  [anon_sym_LBRACKOptions_RBRACK] = "[Options]",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON2] = ":",
  [anon_sym_file_COMMA] = "file,",
  [anon_sym_SEMI] = ";",
  [aux_sym_file_contenttype_token1] = "file_contenttype_token1",
  [anon_sym_cacert] = "cacert",
  [anon_sym_compressed] = "compressed",
  [anon_sym_location] = "location",
  [anon_sym_insecure] = "insecure",
  [anon_sym_max_DASHredirs] = "max-redirs",
  [anon_sym_path_DASHas_DASHis] = "path-as-is",
  [anon_sym_proxy] = "proxy",
  [anon_sym_retry] = "retry",
  [anon_sym_retry_DASHinterval] = "retry-interval",
  [anon_sym_retry_DASHmax_DASHcount] = "retry-max-count",
  [anon_sym_variable] = "variable",
  [anon_sym_verbose] = "verbose",
  [anon_sym_very_DASHverbose] = "very-verbose",
  [anon_sym_EQ] = "=",
  [anon_sym_status] = "status",
  [anon_sym_url] = "url",
  [anon_sym_header] = "header",
  [anon_sym_cookie] = "cookie",
  [anon_sym_body] = "body",
  [anon_sym_xpath] = "xpath",
  [anon_sym_jsonpath] = "jsonpath",
  [anon_sym_regex] = "regex",
  [anon_sym_duration] = "duration",
  [anon_sym_sha256] = "sha256",
  [anon_sym_md5] = "md5",
  [anon_sym_bytes] = "bytes",
  [anon_sym_not] = "not",
  [anon_sym_equals] = "equals",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_notEquals] = "notEquals",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_greaterThan] = "greaterThan",
  [anon_sym_GT] = ">",
  [anon_sym_greaterThanOrEquals] = "greaterThanOrEquals",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_lessThan] = "lessThan",
  [anon_sym_LT] = "<",
  [anon_sym_lessThanOrEquals] = "lessThanOrEquals",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_startsWith] = "startsWith",
  [anon_sym_endsWith] = "endsWith",
  [anon_sym_contains] = "contains",
  [anon_sym_matches] = "matches",
  [anon_sym_exists] = "exists",
  [anon_sym_includes] = "includes",
  [anon_sym_isInteger] = "isInteger",
  [anon_sym_isFloat] = "isFloat",
  [anon_sym_isBoolean] = "isBoolean",
  [anon_sym_isString] = "isString",
  [anon_sym_isCollection] = "isCollection",
  [anon_sym_LT_QMARK] = "<\?",
  [aux_sym_xml_prolog_tag_token1] = "xml_prolog_tag_token1",
  [anon_sym_QMARK_GT] = "\?>",
  [aux_sym_xml_open_tag_token1] = "xml_open_tag_token1",
  [anon_sym_LT_SLASH] = "</",
  [aux_sym_xml_close_tag_token1] = "xml_close_tag_token1",
  [anon_sym_base64_COMMA] = "base64,",
  [aux_sym_oneline_base64_token1] = "oneline_base64_token1",
  [anon_sym_hex_COMMA] = "hex,",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_text_token1] = "quoted_string_text_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_invalid_quoted_string_escaped_char_token1] = "invalid_quoted_string_escaped_char_token1",
  [anon_sym_b] = "b",
  [anon_sym_f] = "f",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
  [anon_sym_u] = "u",
  [sym_key_string_text] = "key_string_text",
  [anon_sym_BSLASH2] = "\\",
  [aux_sym_key_string_escaped_char_token1] = "key_string_escaped_char_token1",
  [aux_sym_value_string_text_token1] = "value_string_text_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_oneline_string_token1] = "oneline_string_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_oneline_string_text_token1] = "oneline_string_text_token1",
  [aux_sym_oneline_string_text_token2] = "oneline_string_text_token2",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_base64] = "base64",
  [anon_sym_hex] = "hex",
  [anon_sym_json] = "json",
  [anon_sym_xml] = "xml",
  [anon_sym_graphql] = "graphql",
  [aux_sym_multiline_string_type_token1] = "multiline_string_type_token1",
  [aux_sym__multiline_string_text_token1] = "_multiline_string_text_token1",
  [anon_sym_LBRACE] = "{",
  [sym_filename_text] = "filename_text",
  [aux_sym_filename_escaped_char_token1] = "filename_escaped_char_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_json_string_text_token1] = "json_string_text_token1",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_variable_name_token1] = "variable_name_token1",
  [aux_sym_variable_name_token2] = "variable_name_token2",
  [anon_sym_count] = "count",
  [anon_sym_urlEncode] = "urlEncode",
  [anon_sym_urlDecode] = "urlDecode",
  [anon_sym_htmlEscape] = "htmlEscape",
  [anon_sym_htmlUnescape] = "htmlUnescape",
  [anon_sym_toInt] = "toInt",
  [anon_sym_daysAfterNow] = "daysAfterNow",
  [anon_sym_daysBeforeNow] = "daysBeforeNow",
  [anon_sym_decode] = "decode",
  [anon_sym_format] = "format",
  [anon_sym_nth] = "nth",
  [anon_sym_replace] = "replace",
  [anon_sym_split] = "split",
  [anon_sym_toDate] = "toDate",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [aux_sym__alphanum_token1] = "_alphanum_token1",
  [aux_sym_digit_token1] = "digit_token1",
  [aux_sym_hexdigit_token1] = "hexdigit_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [aux_sym_regex_text_token1] = "regex_text_token1",
  [aux_sym_regex_escaped_char_token1] = "regex_escaped_char_token1",
  [sym_hurl_file] = "hurl_file",
  [sym_entry] = "entry",
  [sym__comment_or_new_line] = "_comment_or_new_line",
  [sym_request] = "request",
  [sym_response] = "response",
  [sym_method] = "method",
  [sym_version] = "version",
  [sym_status] = "status",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_request_section] = "request_section",
  [sym_response_section] = "response_section",
  [sym_basic_auth_section] = "basic_auth_section",
  [sym_query_string_params_section] = "query_string_params_section",
  [sym_form_params_section] = "form_params_section",
  [sym_multipart_form_data_section] = "multipart_form_data_section",
  [sym_cookies_section] = "cookies_section",
  [sym_captures_section] = "captures_section",
  [sym_asserts_section] = "asserts_section",
  [sym_options_section] = "options_section",
  [sym_key_value] = "key_value",
  [sym_multipart_form_data_param] = "multipart_form_data_param",
  [sym_file_param] = "file_param",
  [sym_file_value] = "file_value",
  [sym_file_contenttype] = "file_contenttype",
  [sym_capture] = "capture",
  [sym_assert] = "assert",
  [sym_option] = "option",
  [sym_ca_certificate_option] = "ca_certificate_option",
  [sym_compressed_option] = "compressed_option",
  [sym_follow_redirect_option] = "follow_redirect_option",
  [sym_insecure_option] = "insecure_option",
  [sym_max_redirs_option] = "max_redirs_option",
  [sym_path_as_is_option] = "path_as_is_option",
  [sym_proxy_option] = "proxy_option",
  [sym_retry_option] = "retry_option",
  [sym_retry_interval_option] = "retry_interval_option",
  [sym_retry_max_count_option] = "retry_max_count_option",
  [sym_variable_option] = "variable_option",
  [sym_verbose_option] = "verbose_option",
  [sym_very_verbose_option] = "very_verbose_option",
  [sym_variable_definition] = "variable_definition",
  [sym_variable_value] = "variable_value",
  [sym_query] = "query",
  [sym_status_query] = "status_query",
  [sym_url_query] = "url_query",
  [sym_header_query] = "header_query",
  [sym_cookie_query] = "cookie_query",
  [sym_body_query] = "body_query",
  [sym_xpath_query] = "xpath_query",
  [sym_jsonpath_query] = "jsonpath_query",
  [sym_regex_query] = "regex_query",
  [sym_variable_query] = "variable_query",
  [sym_duration_query] = "duration_query",
  [sym_sha256_query] = "sha256_query",
  [sym_md5_query] = "md5_query",
  [sym_bytes_query] = "bytes_query",
  [sym_predicate] = "predicate",
  [sym_predicate_func] = "predicate_func",
  [sym_equal_predicate] = "equal_predicate",
  [sym_not_equal_predicate] = "not_equal_predicate",
  [sym_greater_predicate] = "greater_predicate",
  [sym_greater_or_equal_predicate] = "greater_or_equal_predicate",
  [sym_less_predicate] = "less_predicate",
  [sym_less_or_equal_predicate] = "less_or_equal_predicate",
  [sym_start_with_predicate] = "start_with_predicate",
  [sym_end_with_predicate] = "end_with_predicate",
  [sym_contain_predicate] = "contain_predicate",
  [sym_match_predicate] = "match_predicate",
  [sym_exist_predicate] = "exist_predicate",
  [sym_include_predicate] = "include_predicate",
  [sym_integer_predicate] = "integer_predicate",
  [sym_float_predicate] = "float_predicate",
  [sym_boolean_predicate] = "boolean_predicate",
  [sym_string_predicate] = "string_predicate",
  [sym_collection_predicate] = "collection_predicate",
  [sym_predicate_value] = "predicate_value",
  [sym_bytes] = "bytes",
  [sym_xml] = "xml",
  [sym_xml_prolog_tag] = "xml_prolog_tag",
  [sym_xml_tag] = "xml_tag",
  [sym_xml_open_tag] = "xml_open_tag",
  [sym_xml_close_tag] = "xml_close_tag",
  [sym_oneline_base64] = "oneline_base64",
  [sym_oneline_file] = "oneline_file",
  [sym_oneline_hex] = "oneline_hex",
  [sym_quoted_string] = "quoted_string",
  [sym_quoted_string_content] = "quoted_string_content",
  [sym_quoted_string_text] = "quoted_string_text",
  [sym_invalid_quoted_string_escaped_char] = "invalid_quoted_string_escaped_char",
  [sym_quoted_string_escaped_char] = "quoted_string_escaped_char",
  [sym_key_string] = "key_string",
  [sym_key_string_content] = "key_string_content",
  [sym_key_string_escaped_char] = "key_string_escaped_char",
  [sym_value_string] = "value_string",
  [sym_value_string_content] = "value_string_content",
  [sym_value_string_text] = "value_string_text",
  [sym_value_string_escaped_char] = "value_string_escaped_char",
  [sym_oneline_string] = "oneline_string",
  [sym_oneline_string_content] = "oneline_string_content",
  [sym_oneline_string_text] = "oneline_string_text",
  [sym_oneline_string_escaped_char] = "oneline_string_escaped_char",
  [sym_multiline_string] = "multiline_string",
  [sym_multiline_string_type] = "multiline_string_type",
  [sym_multiline_string_content] = "multiline_string_content",
  [sym__multiline_string_text] = "_multiline_string_text",
  [sym_multiline_string_escaped_char] = "multiline_string_escaped_char",
  [sym_filename] = "filename",
  [sym_filename_content] = "filename_content",
  [sym_filename_escaped_char] = "filename_escaped_char",
  [sym_unicode_char] = "unicode_char",
  [sym_json_value] = "json_value",
  [sym_json_object] = "json_object",
  [sym_json_key_value] = "json_key_value",
  [sym_json_key_string] = "json_key_string",
  [sym_json_array] = "json_array",
  [sym_json_string] = "json_string",
  [sym_json_string_content] = "json_string_content",
  [sym_json_string_text] = "json_string_text",
  [sym_json_string_escaped_char] = "json_string_escaped_char",
  [sym_json_number] = "json_number",
  [sym_template] = "template",
  [sym_expr] = "expr",
  [sym_variable_name] = "variable_name",
  [sym_filter] = "filter",
  [sym_regex_filter] = "regex_filter",
  [sym_count_filter] = "count_filter",
  [sym_url_encode_filter] = "url_encode_filter",
  [sym_url_decode_filter] = "url_decode_filter",
  [sym_html_escape_filter] = "html_escape_filter",
  [sym_html_unescape_filter] = "html_unescape_filter",
  [sym_to_int_filter] = "to_int_filter",
  [sym_days_after_now_filter] = "days_after_now_filter",
  [sym_days_before_now_filter] = "days_before_now_filter",
  [sym_decode_filter] = "decode_filter",
  [sym_format_filter] = "format_filter",
  [sym_nth_filter] = "nth_filter",
  [sym_replace_filter] = "replace_filter",
  [sym_split_filter] = "split_filter",
  [sym_to_date_filter] = "to_date_filter",
  [sym_xpath_filter] = "xpath_filter",
  [sym_boolean] = "boolean",
  [sym_null] = "null",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_digit] = "digit",
  [sym_hexdigit] = "hexdigit",
  [sym_fraction] = "fraction",
  [sym_exponent] = "exponent",
  [sym_regex] = "regex",
  [sym_regex_content] = "regex_content",
  [sym_regex_text] = "regex_text",
  [sym_regex_escaped_char] = "regex_escaped_char",
  [aux_sym_hurl_file_repeat1] = "hurl_file_repeat1",
  [aux_sym_hurl_file_repeat2] = "hurl_file_repeat2",
  [aux_sym__comment_or_new_line_repeat1] = "_comment_or_new_line_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_response_repeat1] = "response_repeat1",
  [aux_sym_query_string_params_section_repeat1] = "query_string_params_section_repeat1",
  [aux_sym_multipart_form_data_section_repeat1] = "multipart_form_data_section_repeat1",
  [aux_sym_captures_section_repeat1] = "captures_section_repeat1",
  [aux_sym_asserts_section_repeat1] = "asserts_section_repeat1",
  [aux_sym_options_section_repeat1] = "options_section_repeat1",
  [aux_sym_capture_repeat1] = "capture_repeat1",
  [aux_sym_xml_repeat1] = "xml_repeat1",
  [aux_sym_xml_tag_repeat1] = "xml_tag_repeat1",
  [aux_sym_oneline_hex_repeat1] = "oneline_hex_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_quoted_string_content_repeat1] = "quoted_string_content_repeat1",
  [aux_sym_key_string_repeat1] = "key_string_repeat1",
  [aux_sym_key_string_content_repeat1] = "key_string_content_repeat1",
  [aux_sym_value_string_repeat1] = "value_string_repeat1",
  [aux_sym_value_string_content_repeat1] = "value_string_content_repeat1",
  [aux_sym_value_string_text_repeat1] = "value_string_text_repeat1",
  [aux_sym_oneline_string_repeat1] = "oneline_string_repeat1",
  [aux_sym_oneline_string_content_repeat1] = "oneline_string_content_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
  [aux_sym_multiline_string_content_repeat1] = "multiline_string_content_repeat1",
  [aux_sym__multiline_string_text_repeat1] = "_multiline_string_text_repeat1",
  [aux_sym_filename_repeat1] = "filename_repeat1",
  [aux_sym_filename_content_repeat1] = "filename_content_repeat1",
  [aux_sym_json_object_repeat1] = "json_object_repeat1",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
  [aux_sym_integer_repeat1] = "integer_repeat1",
  [aux_sym_regex_content_repeat1] = "regex_content_repeat1",
  [anon_alias_sym_json_key_string] = "json_key_string",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_CONNECT] = anon_sym_CONNECT,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [anon_sym_LINK] = anon_sym_LINK,
  [anon_sym_UNLINK] = anon_sym_UNLINK,
  [anon_sym_PURGE] = anon_sym_PURGE,
  [anon_sym_LOCK] = anon_sym_LOCK,
  [anon_sym_UNLOCK] = anon_sym_UNLOCK,
  [anon_sym_PROPFIND] = anon_sym_PROPFIND,
  [anon_sym_VIEW] = anon_sym_VIEW,
  [aux_sym_method_token1] = aux_sym_method_token1,
  [anon_sym_HTTP_SLASH1_DOT0] = anon_sym_HTTP_SLASH1_DOT0,
  [anon_sym_HTTP_SLASH1_DOT1] = anon_sym_HTTP_SLASH1_DOT1,
  [anon_sym_HTTP_SLASH2] = anon_sym_HTTP_SLASH2,
  [anon_sym_HTTP_SLASH_STAR] = anon_sym_HTTP_SLASH_STAR,
  [anon_sym_HTTP] = anon_sym_HTTP,
  [aux_sym_status_token1] = aux_sym_status_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACKBasicAuth_RBRACK] = anon_sym_LBRACKBasicAuth_RBRACK,
  [anon_sym_LBRACKQueryStringParams_RBRACK] = anon_sym_LBRACKQueryStringParams_RBRACK,
  [anon_sym_LBRACKFormParams_RBRACK] = anon_sym_LBRACKFormParams_RBRACK,
  [anon_sym_LBRACKMultipartFormData_RBRACK] = anon_sym_LBRACKMultipartFormData_RBRACK,
  [anon_sym_LBRACKCookies_RBRACK] = anon_sym_LBRACKCookies_RBRACK,
  [anon_sym_LBRACKCaptures_RBRACK] = anon_sym_LBRACKCaptures_RBRACK,
  [anon_sym_LBRACKAsserts_RBRACK] = anon_sym_LBRACKAsserts_RBRACK,
  [anon_sym_LBRACKOptions_RBRACK] = anon_sym_LBRACKOptions_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_file_COMMA] = anon_sym_file_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_file_contenttype_token1] = aux_sym_file_contenttype_token1,
  [anon_sym_cacert] = anon_sym_cacert,
  [anon_sym_compressed] = anon_sym_compressed,
  [anon_sym_location] = anon_sym_location,
  [anon_sym_insecure] = anon_sym_insecure,
  [anon_sym_max_DASHredirs] = anon_sym_max_DASHredirs,
  [anon_sym_path_DASHas_DASHis] = anon_sym_path_DASHas_DASHis,
  [anon_sym_proxy] = anon_sym_proxy,
  [anon_sym_retry] = anon_sym_retry,
  [anon_sym_retry_DASHinterval] = anon_sym_retry_DASHinterval,
  [anon_sym_retry_DASHmax_DASHcount] = anon_sym_retry_DASHmax_DASHcount,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_verbose] = anon_sym_verbose,
  [anon_sym_very_DASHverbose] = anon_sym_very_DASHverbose,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_cookie] = anon_sym_cookie,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_xpath] = anon_sym_xpath,
  [anon_sym_jsonpath] = anon_sym_jsonpath,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_equals] = anon_sym_equals,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_notEquals] = anon_sym_notEquals,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_greaterThan] = anon_sym_greaterThan,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_greaterThanOrEquals] = anon_sym_greaterThanOrEquals,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_lessThan] = anon_sym_lessThan,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_lessThanOrEquals] = anon_sym_lessThanOrEquals,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_startsWith] = anon_sym_startsWith,
  [anon_sym_endsWith] = anon_sym_endsWith,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_matches] = anon_sym_matches,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_includes] = anon_sym_includes,
  [anon_sym_isInteger] = anon_sym_isInteger,
  [anon_sym_isFloat] = anon_sym_isFloat,
  [anon_sym_isBoolean] = anon_sym_isBoolean,
  [anon_sym_isString] = anon_sym_isString,
  [anon_sym_isCollection] = anon_sym_isCollection,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [aux_sym_xml_prolog_tag_token1] = aux_sym_xml_prolog_tag_token1,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [aux_sym_xml_open_tag_token1] = aux_sym_xml_open_tag_token1,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [aux_sym_xml_close_tag_token1] = aux_sym_xml_close_tag_token1,
  [anon_sym_base64_COMMA] = anon_sym_base64_COMMA,
  [aux_sym_oneline_base64_token1] = aux_sym_oneline_base64_token1,
  [anon_sym_hex_COMMA] = anon_sym_hex_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_text_token1] = aux_sym_quoted_string_text_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_invalid_quoted_string_escaped_char_token1] = aux_sym_invalid_quoted_string_escaped_char_token1,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_u] = anon_sym_u,
  [sym_key_string_text] = sym_key_string_text,
  [anon_sym_BSLASH2] = anon_sym_BSLASH,
  [aux_sym_key_string_escaped_char_token1] = aux_sym_key_string_escaped_char_token1,
  [aux_sym_value_string_text_token1] = aux_sym_value_string_text_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_oneline_string_token1] = aux_sym_oneline_string_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_oneline_string_text_token1] = aux_sym_oneline_string_text_token1,
  [aux_sym_oneline_string_text_token2] = aux_sym_oneline_string_text_token2,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_hex] = anon_sym_hex,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_graphql] = anon_sym_graphql,
  [aux_sym_multiline_string_type_token1] = aux_sym_multiline_string_type_token1,
  [aux_sym__multiline_string_text_token1] = aux_sym__multiline_string_text_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_filename_text] = sym_filename_text,
  [aux_sym_filename_escaped_char_token1] = aux_sym_filename_escaped_char_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_json_string_text_token1] = aux_sym_json_string_text_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_variable_name_token1] = aux_sym_variable_name_token1,
  [aux_sym_variable_name_token2] = aux_sym_variable_name_token2,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_urlEncode] = anon_sym_urlEncode,
  [anon_sym_urlDecode] = anon_sym_urlDecode,
  [anon_sym_htmlEscape] = anon_sym_htmlEscape,
  [anon_sym_htmlUnescape] = anon_sym_htmlUnescape,
  [anon_sym_toInt] = anon_sym_toInt,
  [anon_sym_daysAfterNow] = anon_sym_daysAfterNow,
  [anon_sym_daysBeforeNow] = anon_sym_daysBeforeNow,
  [anon_sym_decode] = anon_sym_decode,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_nth] = anon_sym_nth,
  [anon_sym_replace] = anon_sym_replace,
  [anon_sym_split] = anon_sym_split,
  [anon_sym_toDate] = anon_sym_toDate,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [aux_sym__alphanum_token1] = aux_sym__alphanum_token1,
  [aux_sym_digit_token1] = aux_sym_digit_token1,
  [aux_sym_hexdigit_token1] = aux_sym_hexdigit_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_regex_text_token1] = aux_sym_regex_text_token1,
  [aux_sym_regex_escaped_char_token1] = aux_sym_regex_escaped_char_token1,
  [sym_hurl_file] = sym_hurl_file,
  [sym_entry] = sym_entry,
  [sym__comment_or_new_line] = sym__comment_or_new_line,
  [sym_request] = sym_request,
  [sym_response] = sym_response,
  [sym_method] = sym_method,
  [sym_version] = sym_version,
  [sym_status] = sym_status,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_request_section] = sym_request_section,
  [sym_response_section] = sym_response_section,
  [sym_basic_auth_section] = sym_basic_auth_section,
  [sym_query_string_params_section] = sym_query_string_params_section,
  [sym_form_params_section] = sym_form_params_section,
  [sym_multipart_form_data_section] = sym_multipart_form_data_section,
  [sym_cookies_section] = sym_cookies_section,
  [sym_captures_section] = sym_captures_section,
  [sym_asserts_section] = sym_asserts_section,
  [sym_options_section] = sym_options_section,
  [sym_key_value] = sym_key_value,
  [sym_multipart_form_data_param] = sym_multipart_form_data_param,
  [sym_file_param] = sym_file_param,
  [sym_file_value] = sym_file_value,
  [sym_file_contenttype] = sym_file_contenttype,
  [sym_capture] = sym_capture,
  [sym_assert] = sym_assert,
  [sym_option] = sym_option,
  [sym_ca_certificate_option] = sym_ca_certificate_option,
  [sym_compressed_option] = sym_compressed_option,
  [sym_follow_redirect_option] = sym_follow_redirect_option,
  [sym_insecure_option] = sym_insecure_option,
  [sym_max_redirs_option] = sym_max_redirs_option,
  [sym_path_as_is_option] = sym_path_as_is_option,
  [sym_proxy_option] = sym_proxy_option,
  [sym_retry_option] = sym_retry_option,
  [sym_retry_interval_option] = sym_retry_interval_option,
  [sym_retry_max_count_option] = sym_retry_max_count_option,
  [sym_variable_option] = sym_variable_option,
  [sym_verbose_option] = sym_verbose_option,
  [sym_very_verbose_option] = sym_very_verbose_option,
  [sym_variable_definition] = sym_variable_definition,
  [sym_variable_value] = sym_variable_value,
  [sym_query] = sym_query,
  [sym_status_query] = sym_status_query,
  [sym_url_query] = sym_url_query,
  [sym_header_query] = sym_header_query,
  [sym_cookie_query] = sym_cookie_query,
  [sym_body_query] = sym_body_query,
  [sym_xpath_query] = sym_xpath_query,
  [sym_jsonpath_query] = sym_jsonpath_query,
  [sym_regex_query] = sym_regex_query,
  [sym_variable_query] = sym_variable_query,
  [sym_duration_query] = sym_duration_query,
  [sym_sha256_query] = sym_sha256_query,
  [sym_md5_query] = sym_md5_query,
  [sym_bytes_query] = sym_bytes_query,
  [sym_predicate] = sym_predicate,
  [sym_predicate_func] = sym_predicate_func,
  [sym_equal_predicate] = sym_equal_predicate,
  [sym_not_equal_predicate] = sym_not_equal_predicate,
  [sym_greater_predicate] = sym_greater_predicate,
  [sym_greater_or_equal_predicate] = sym_greater_or_equal_predicate,
  [sym_less_predicate] = sym_less_predicate,
  [sym_less_or_equal_predicate] = sym_less_or_equal_predicate,
  [sym_start_with_predicate] = sym_start_with_predicate,
  [sym_end_with_predicate] = sym_end_with_predicate,
  [sym_contain_predicate] = sym_contain_predicate,
  [sym_match_predicate] = sym_match_predicate,
  [sym_exist_predicate] = sym_exist_predicate,
  [sym_include_predicate] = sym_include_predicate,
  [sym_integer_predicate] = sym_integer_predicate,
  [sym_float_predicate] = sym_float_predicate,
  [sym_boolean_predicate] = sym_boolean_predicate,
  [sym_string_predicate] = sym_string_predicate,
  [sym_collection_predicate] = sym_collection_predicate,
  [sym_predicate_value] = sym_predicate_value,
  [sym_bytes] = sym_bytes,
  [sym_xml] = sym_xml,
  [sym_xml_prolog_tag] = sym_xml_prolog_tag,
  [sym_xml_tag] = sym_xml_tag,
  [sym_xml_open_tag] = sym_xml_open_tag,
  [sym_xml_close_tag] = sym_xml_close_tag,
  [sym_oneline_base64] = sym_oneline_base64,
  [sym_oneline_file] = sym_oneline_file,
  [sym_oneline_hex] = sym_oneline_hex,
  [sym_quoted_string] = sym_quoted_string,
  [sym_quoted_string_content] = sym_quoted_string_content,
  [sym_quoted_string_text] = sym_quoted_string_text,
  [sym_invalid_quoted_string_escaped_char] = sym_invalid_quoted_string_escaped_char,
  [sym_quoted_string_escaped_char] = sym_quoted_string_escaped_char,
  [sym_key_string] = sym_key_string,
  [sym_key_string_content] = sym_key_string_content,
  [sym_key_string_escaped_char] = sym_key_string_escaped_char,
  [sym_value_string] = sym_value_string,
  [sym_value_string_content] = sym_value_string_content,
  [sym_value_string_text] = sym_value_string_text,
  [sym_value_string_escaped_char] = sym_value_string_escaped_char,
  [sym_oneline_string] = sym_oneline_string,
  [sym_oneline_string_content] = sym_oneline_string_content,
  [sym_oneline_string_text] = sym_oneline_string_text,
  [sym_oneline_string_escaped_char] = sym_oneline_string_escaped_char,
  [sym_multiline_string] = sym_multiline_string,
  [sym_multiline_string_type] = sym_multiline_string_type,
  [sym_multiline_string_content] = sym_multiline_string_content,
  [sym__multiline_string_text] = sym__multiline_string_text,
  [sym_multiline_string_escaped_char] = sym_multiline_string_escaped_char,
  [sym_filename] = sym_filename,
  [sym_filename_content] = sym_filename_content,
  [sym_filename_escaped_char] = sym_filename_escaped_char,
  [sym_unicode_char] = sym_unicode_char,
  [sym_json_value] = sym_json_value,
  [sym_json_object] = sym_json_object,
  [sym_json_key_value] = sym_json_key_value,
  [sym_json_key_string] = sym_json_key_string,
  [sym_json_array] = sym_json_array,
  [sym_json_string] = sym_json_string,
  [sym_json_string_content] = sym_json_string_content,
  [sym_json_string_text] = sym_json_string_text,
  [sym_json_string_escaped_char] = sym_json_string_escaped_char,
  [sym_json_number] = sym_json_number,
  [sym_template] = sym_template,
  [sym_expr] = sym_expr,
  [sym_variable_name] = sym_variable_name,
  [sym_filter] = sym_filter,
  [sym_regex_filter] = sym_regex_filter,
  [sym_count_filter] = sym_count_filter,
  [sym_url_encode_filter] = sym_url_encode_filter,
  [sym_url_decode_filter] = sym_url_decode_filter,
  [sym_html_escape_filter] = sym_html_escape_filter,
  [sym_html_unescape_filter] = sym_html_unescape_filter,
  [sym_to_int_filter] = sym_to_int_filter,
  [sym_days_after_now_filter] = sym_days_after_now_filter,
  [sym_days_before_now_filter] = sym_days_before_now_filter,
  [sym_decode_filter] = sym_decode_filter,
  [sym_format_filter] = sym_format_filter,
  [sym_nth_filter] = sym_nth_filter,
  [sym_replace_filter] = sym_replace_filter,
  [sym_split_filter] = sym_split_filter,
  [sym_to_date_filter] = sym_to_date_filter,
  [sym_xpath_filter] = sym_xpath_filter,
  [sym_boolean] = sym_boolean,
  [sym_null] = sym_null,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_digit] = sym_digit,
  [sym_hexdigit] = sym_hexdigit,
  [sym_fraction] = sym_fraction,
  [sym_exponent] = sym_exponent,
  [sym_regex] = sym_regex,
  [sym_regex_content] = sym_regex_content,
  [sym_regex_text] = sym_regex_text,
  [sym_regex_escaped_char] = sym_regex_escaped_char,
  [aux_sym_hurl_file_repeat1] = aux_sym_hurl_file_repeat1,
  [aux_sym_hurl_file_repeat2] = aux_sym_hurl_file_repeat2,
  [aux_sym__comment_or_new_line_repeat1] = aux_sym__comment_or_new_line_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_response_repeat1] = aux_sym_response_repeat1,
  [aux_sym_query_string_params_section_repeat1] = aux_sym_query_string_params_section_repeat1,
  [aux_sym_multipart_form_data_section_repeat1] = aux_sym_multipart_form_data_section_repeat1,
  [aux_sym_captures_section_repeat1] = aux_sym_captures_section_repeat1,
  [aux_sym_asserts_section_repeat1] = aux_sym_asserts_section_repeat1,
  [aux_sym_options_section_repeat1] = aux_sym_options_section_repeat1,
  [aux_sym_capture_repeat1] = aux_sym_capture_repeat1,
  [aux_sym_xml_repeat1] = aux_sym_xml_repeat1,
  [aux_sym_xml_tag_repeat1] = aux_sym_xml_tag_repeat1,
  [aux_sym_oneline_hex_repeat1] = aux_sym_oneline_hex_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_quoted_string_content_repeat1] = aux_sym_quoted_string_content_repeat1,
  [aux_sym_key_string_repeat1] = aux_sym_key_string_repeat1,
  [aux_sym_key_string_content_repeat1] = aux_sym_key_string_content_repeat1,
  [aux_sym_value_string_repeat1] = aux_sym_value_string_repeat1,
  [aux_sym_value_string_content_repeat1] = aux_sym_value_string_content_repeat1,
  [aux_sym_value_string_text_repeat1] = aux_sym_value_string_text_repeat1,
  [aux_sym_oneline_string_repeat1] = aux_sym_oneline_string_repeat1,
  [aux_sym_oneline_string_content_repeat1] = aux_sym_oneline_string_content_repeat1,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
  [aux_sym_multiline_string_content_repeat1] = aux_sym_multiline_string_content_repeat1,
  [aux_sym__multiline_string_text_repeat1] = aux_sym__multiline_string_text_repeat1,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
  [aux_sym_filename_content_repeat1] = aux_sym_filename_content_repeat1,
  [aux_sym_json_object_repeat1] = aux_sym_json_object_repeat1,
  [aux_sym_json_array_repeat1] = aux_sym_json_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
  [aux_sym_integer_repeat1] = aux_sym_integer_repeat1,
  [aux_sym_regex_content_repeat1] = aux_sym_regex_content_repeat1,
  [anon_alias_sym_json_key_string] = anon_alias_sym_json_key_string,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONNECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PURGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROPFIND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VIEW] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_method_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_HTTP_SLASH1_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_status_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKBasicAuth_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKQueryStringParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKFormParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKMultipartFormData_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKCookies_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKCaptures_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKAsserts_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKOptions_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_file_contenttype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_cacert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compressed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_location] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insecure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHredirs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path_DASHas_DASHis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proxy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry_DASHinterval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retry_DASHmax_DASHcount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_very_DASHverbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cookie] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jsonpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_md5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notEquals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greaterThan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_greaterThanOrEquals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessThan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessThanOrEquals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_startsWith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endsWith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isFloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isBoolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isCollection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_prolog_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_open_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_close_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_base64_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oneline_base64_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_hex_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_invalid_quoted_string_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [sym_key_string_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_string_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oneline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_oneline_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_string_text_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_graphql] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_string_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_filename_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filename_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [aux_sym_json_string_text_token1] = {
    .visible = false,
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
  [aux_sym_variable_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urlEncode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urlDecode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_htmlEscape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_htmlUnescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daysAfterNow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daysBeforeNow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_split] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toDate] = {
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
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__alphanum_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_digit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hexdigit_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_hurl_file] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_or_new_line] = {
    .visible = false,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_request_section] = {
    .visible = true,
    .named = true,
  },
  [sym_response_section] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_auth_section] = {
    .visible = true,
    .named = true,
  },
  [sym_query_string_params_section] = {
    .visible = true,
    .named = true,
  },
  [sym_form_params_section] = {
    .visible = true,
    .named = true,
  },
  [sym_multipart_form_data_section] = {
    .visible = true,
    .named = true,
  },
  [sym_cookies_section] = {
    .visible = true,
    .named = true,
  },
  [sym_captures_section] = {
    .visible = true,
    .named = true,
  },
  [sym_asserts_section] = {
    .visible = true,
    .named = true,
  },
  [sym_options_section] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_multipart_form_data_param] = {
    .visible = true,
    .named = true,
  },
  [sym_file_param] = {
    .visible = true,
    .named = true,
  },
  [sym_file_value] = {
    .visible = true,
    .named = true,
  },
  [sym_file_contenttype] = {
    .visible = true,
    .named = true,
  },
  [sym_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_assert] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_ca_certificate_option] = {
    .visible = true,
    .named = true,
  },
  [sym_compressed_option] = {
    .visible = true,
    .named = true,
  },
  [sym_follow_redirect_option] = {
    .visible = true,
    .named = true,
  },
  [sym_insecure_option] = {
    .visible = true,
    .named = true,
  },
  [sym_max_redirs_option] = {
    .visible = true,
    .named = true,
  },
  [sym_path_as_is_option] = {
    .visible = true,
    .named = true,
  },
  [sym_proxy_option] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_option] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_interval_option] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_max_count_option] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_option] = {
    .visible = true,
    .named = true,
  },
  [sym_verbose_option] = {
    .visible = true,
    .named = true,
  },
  [sym_very_verbose_option] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_value] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_status_query] = {
    .visible = true,
    .named = true,
  },
  [sym_url_query] = {
    .visible = true,
    .named = true,
  },
  [sym_header_query] = {
    .visible = true,
    .named = true,
  },
  [sym_cookie_query] = {
    .visible = true,
    .named = true,
  },
  [sym_body_query] = {
    .visible = true,
    .named = true,
  },
  [sym_xpath_query] = {
    .visible = true,
    .named = true,
  },
  [sym_jsonpath_query] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_query] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_query] = {
    .visible = true,
    .named = true,
  },
  [sym_duration_query] = {
    .visible = true,
    .named = true,
  },
  [sym_sha256_query] = {
    .visible = true,
    .named = true,
  },
  [sym_md5_query] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes_query] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_func] = {
    .visible = true,
    .named = true,
  },
  [sym_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_or_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_less_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_less_or_equal_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_start_with_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_end_with_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_contain_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_match_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_exist_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_include_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_float_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_string_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym_xml] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_prolog_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_open_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_close_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_base64] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_file] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_quoted_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_value_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_oneline_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_string_text] = {
    .visible = false,
    .named = true,
  },
  [sym_multiline_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_filename_content] = {
    .visible = true,
    .named = true,
  },
  [sym_filename_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_char] = {
    .visible = true,
    .named = true,
  },
  [sym_json_value] = {
    .visible = true,
    .named = true,
  },
  [sym_json_object] = {
    .visible = true,
    .named = true,
  },
  [sym_json_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_json_key_string] = {
    .visible = true,
    .named = true,
  },
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_json_number] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_count_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_url_encode_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_url_decode_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_html_escape_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_html_unescape_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_to_int_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_days_after_now_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_days_before_now_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_decode_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_format_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_nth_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_replace_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_split_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_to_date_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_xpath_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_hexdigit] = {
    .visible = true,
    .named = true,
  },
  [sym_fraction] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_content] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_text] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_hurl_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hurl_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_or_new_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_response_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_string_params_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_captures_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_asserts_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_options_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_capture_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_hex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_string_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneline_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_string_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_json_key_string] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_json_key_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_json_string, 2,
    sym_json_string,
    anon_alias_sym_json_key_string,
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
  [54] = 22,
  [55] = 23,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 22,
  [61] = 23,
  [62] = 62,
  [63] = 41,
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
  [107] = 22,
  [108] = 23,
  [109] = 62,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 21,
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
  [131] = 59,
  [132] = 58,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 53,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 53,
  [141] = 64,
  [142] = 142,
  [143] = 127,
  [144] = 22,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 145,
  [149] = 149,
  [150] = 150,
  [151] = 150,
  [152] = 146,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 23,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 79,
  [163] = 93,
  [164] = 80,
  [165] = 97,
  [166] = 96,
  [167] = 95,
  [168] = 98,
  [169] = 70,
  [170] = 73,
  [171] = 83,
  [172] = 84,
  [173] = 85,
  [174] = 86,
  [175] = 87,
  [176] = 88,
  [177] = 89,
  [178] = 90,
  [179] = 91,
  [180] = 81,
  [181] = 82,
  [182] = 74,
  [183] = 106,
  [184] = 103,
  [185] = 72,
  [186] = 71,
  [187] = 75,
  [188] = 104,
  [189] = 105,
  [190] = 77,
  [191] = 78,
  [192] = 92,
  [193] = 102,
  [194] = 101,
  [195] = 100,
  [196] = 99,
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
  [208] = 203,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 202,
  [215] = 215,
  [216] = 210,
  [217] = 209,
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
  [228] = 228,
  [229] = 229,
  [230] = 223,
  [231] = 231,
  [232] = 223,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 235,
  [237] = 219,
  [238] = 231,
  [239] = 239,
  [240] = 219,
  [241] = 233,
  [242] = 239,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 225,
  [248] = 248,
  [249] = 224,
  [250] = 246,
  [251] = 251,
  [252] = 252,
  [253] = 58,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 59,
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
  [271] = 271,
  [272] = 272,
  [273] = 271,
  [274] = 265,
  [275] = 264,
  [276] = 272,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 263,
  [281] = 261,
  [282] = 263,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 64,
  [288] = 288,
  [289] = 261,
  [290] = 290,
  [291] = 291,
  [292] = 288,
  [293] = 293,
  [294] = 294,
  [295] = 284,
  [296] = 296,
  [297] = 272,
  [298] = 265,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 279,
  [305] = 305,
  [306] = 279,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 277,
  [311] = 311,
  [312] = 312,
  [313] = 312,
  [314] = 301,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 309,
  [319] = 279,
  [320] = 23,
  [321] = 321,
  [322] = 317,
  [323] = 270,
  [324] = 324,
  [325] = 22,
  [326] = 324,
  [327] = 324,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 317,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 312,
  [336] = 336,
  [337] = 279,
  [338] = 279,
  [339] = 279,
  [340] = 301,
  [341] = 279,
  [342] = 279,
  [343] = 332,
  [344] = 344,
  [345] = 345,
  [346] = 330,
  [347] = 347,
  [348] = 336,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 279,
  [355] = 321,
  [356] = 296,
  [357] = 279,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 301,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 362,
  [369] = 369,
  [370] = 309,
  [371] = 371,
  [372] = 321,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 347,
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
  [388] = 388,
  [389] = 283,
  [390] = 301,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 396,
  [399] = 396,
  [400] = 396,
  [401] = 396,
  [402] = 396,
  [403] = 403,
  [404] = 396,
  [405] = 396,
  [406] = 396,
  [407] = 396,
  [408] = 408,
  [409] = 409,
  [410] = 396,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 394,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 412,
  [425] = 425,
  [426] = 423,
  [427] = 397,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 279,
  [432] = 432,
  [433] = 418,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 408,
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
  [469] = 439,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 416,
  [474] = 474,
  [475] = 417,
  [476] = 476,
  [477] = 396,
  [478] = 478,
  [479] = 479,
  [480] = 439,
  [481] = 408,
  [482] = 482,
  [483] = 374,
  [484] = 484,
  [485] = 465,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 489,
  [491] = 489,
  [492] = 489,
  [493] = 493,
  [494] = 494,
  [495] = 494,
  [496] = 494,
  [497] = 494,
  [498] = 498,
  [499] = 498,
  [500] = 498,
  [501] = 498,
  [502] = 488,
  [503] = 488,
  [504] = 488,
  [505] = 488,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 510,
  [521] = 521,
  [522] = 522,
  [523] = 509,
  [524] = 508,
  [525] = 525,
  [526] = 519,
  [527] = 527,
  [528] = 494,
  [529] = 529,
  [530] = 498,
  [531] = 531,
  [532] = 302,
  [533] = 533,
  [534] = 507,
  [535] = 489,
  [536] = 518,
  [537] = 515,
  [538] = 506,
  [539] = 512,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 285,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 373,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 367,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 544,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 455,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 487,
  [604] = 604,
  [605] = 605,
  [606] = 588,
  [607] = 607,
  [608] = 478,
  [609] = 609,
  [610] = 472,
  [611] = 611,
  [612] = 612,
  [613] = 471,
  [614] = 614,
  [615] = 293,
  [616] = 616,
  [617] = 617,
  [618] = 544,
  [619] = 588,
  [620] = 616,
  [621] = 544,
  [622] = 616,
  [623] = 544,
  [624] = 616,
  [625] = 544,
  [626] = 544,
  [627] = 544,
  [628] = 544,
  [629] = 544,
  [630] = 544,
  [631] = 544,
  [632] = 632,
  [633] = 600,
  [634] = 616,
  [635] = 454,
  [636] = 573,
  [637] = 607,
  [638] = 462,
  [639] = 639,
  [640] = 463,
  [641] = 303,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 596,
  [653] = 653,
  [654] = 654,
  [655] = 609,
  [656] = 656,
  [657] = 468,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 466,
  [662] = 662,
};

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 160 || c == 5760))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < ' '
        ? (c >= '\n' && c <= 11)
        : c <= ' ')
      : (c <= 160 || c == 5760))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym_key_string_text_character_set_1(int32_t c) {
  return (c < '_'
    ? (c < '@'
      ? (c < '-'
        ? c == '$'
        : c <= '.')
      : (c <= '[' || c == ']'))
    : (c <= '_' || (c < 'o'
      ? (c < 'g'
        ? (c >= 'a' && c <= 'e')
        : c <= 'm')
      : (c <= 's' || (c >= 'u' && c <= 'z')))));
}

static inline bool sym_key_string_text_character_set_2(int32_t c) {
  return (c < 'a'
    ? (c < '@'
      ? (c < '-'
        ? c == '$'
        : c <= '.')
      : (c <= '@' || (c < '_'
        ? c == ']'
        : c <= '_')))
    : (c <= 'a' || (c < 'i'
      ? (c < 'g'
        ? (c >= 'c' && c <= 'e')
        : c <= 'g')
      : (c <= 'm' || (c < 'u'
        ? (c >= 'o' && c <= 's')
        : c <= 'z')))));
}

static inline bool sym_key_string_text_character_set_3(int32_t c) {
  return (c < 'N'
    ? (c < '@'
      ? (c < '-'
        ? c == '$'
        : (c <= '.' || (c >= '0' && c <= '9')))
      : (c <= 'A' || (c < 'G'
        ? (c >= 'D' && c <= 'E')
        : c <= 'L')))
    : (c <= 'N' || (c < ']'
      ? (c < 'R'
        ? c == 'P'
        : c <= '[')
      : (c <= ']' || (c < 'a'
        ? c == '_'
        : c <= 'z')))));
}

static inline bool sym_key_string_text_character_set_4(int32_t c) {
  return (c < 'B'
    ? (c < '0'
      ? (c < '-'
        ? c == '$'
        : c <= '.')
      : (c <= '9' || c == '@'))
    : (c <= 'B' || (c < '_'
      ? (c < ']'
        ? (c >= 'D' && c <= '[')
        : c <= ']')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool aux_sym_oneline_string_text_token1_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym_filename_text_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < 11
        ? c == '\t'
        : c <= '\r')
      : (c <= 160 || c == 5760))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(512);
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(898);
      if (lookahead == '*') ADVANCE(616);
      if (lookahead == '+') ADVANCE(993);
      if (lookahead == ',') ADVANCE(948);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead == '.') ADVANCE(988);
      if (lookahead == '/') ADVANCE(996);
      if (lookahead == ':') ADVANCE(633);
      if (lookahead == ';') ADVANCE(636);
      if (lookahead == '<') ADVANCE(676);
      if (lookahead == '=') ADVANCE(652);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(992);
      if (lookahead == '[') ADVANCE(950);
      if (lookahead == '\\') ADVANCE(890);
      if (lookahead == ']') ADVANCE(955);
      if (lookahead == '`') ADVANCE(901);
      if (lookahead == 'b') ADVANCE(718);
      if (lookahead == 'e') ADVANCE(989);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == 't') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(723);
      if (lookahead == '{') ADVANCE(941);
      if (lookahead == '}') ADVANCE(947);
      if (('a' <= lookahead && lookahead <= 'd')) ADVANCE(964);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(511)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(995);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '.') ADVANCE(988);
      if (lookahead == 'E') ADVANCE(991);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(989);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'x') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == 'f') ADVANCE(894);
      if (lookahead == 'n') ADVANCE(896);
      if (lookahead == 't') ADVANCE(895);
      if (lookahead == '{') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(893);
      if (lookahead != 0) ADVANCE(893);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '{') ADVANCE(897);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(893);
      if (lookahead != 0) ADVANCE(893);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(502);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(502);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ':') ADVANCE(633);
      if (lookahead == '\\') ADVANCE(890);
      if (lookahead == '{') ADVANCE(500);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '<') ADVANCE(677);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '{') ADVANCE(897);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(893);
      if (lookahead != 0) ADVANCE(893);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '{') ADVANCE(943);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(945);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(945);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '{') ADVANCE(897);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(893);
      if (lookahead != 0) ADVANCE(893);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '`') ADVANCE(901);
      if (lookahead == '{') ADVANCE(941);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(937);
      if (lookahead != 0) ADVANCE(939);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '`') ADVANCE(900);
      if (lookahead == '{') ADVANCE(904);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(903);
      if (lookahead != 0) ADVANCE(902);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '`') ADVANCE(900);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(903);
      if (lookahead != 0) ADVANCE(902);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == '/') ADVANCE(996);
      if (lookahead == '\\') ADVANCE(714);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(998);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '#') ADVANCE(502);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(16)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '#') ADVANCE(1003);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1002);
      if (lookahead != 0) ADVANCE(1001);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '#') ADVANCE(934);
      if (lookahead == 'b') ADVANCE(919);
      if (lookahead == 'g') ADVANCE(930);
      if (lookahead == 'h') ADVANCE(920);
      if (lookahead == 'j') ADVANCE(931);
      if (lookahead == 'x') ADVANCE(925);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(915);
      if (lookahead != 0) ADVANCE(935);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '+') ADVANCE(993);
      if (lookahead == ',') ADVANCE(948);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead == '/') ADVANCE(996);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == '<') ADVANCE(678);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == '[') ADVANCE(949);
      if (lookahead == ']') ADVANCE(955);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '{') ADVANCE(941);
      if (lookahead == '}') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '+') ADVANCE(993);
      if (lookahead == ',') ADVANCE(948);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead == '/') ADVANCE(996);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == '<') ADVANCE(678);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == '[') ADVANCE(949);
      if (lookahead == ']') ADVANCE(955);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '{') ADVANCE(940);
      if (lookahead == '}') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '#') ADVANCE(892);
      if (lookahead == ',') ADVANCE(948);
      if (lookahead == '.') ADVANCE(988);
      if (lookahead == '<') ADVANCE(678);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == 'E') ADVANCE(991);
      if (lookahead == ']') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '{') ADVANCE(940);
      if (lookahead == '}') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == ',') ADVANCE(948);
      if (lookahead == '.') ADVANCE(988);
      if (lookahead == '<') ADVANCE(678);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == 'E') ADVANCE(991);
      if (lookahead == ']') ADVANCE(955);
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '{') ADVANCE(940);
      if (lookahead == '}') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(898);
      if (lookahead == ',') ADVANCE(946);
      if (lookahead == ';') ADVANCE(636);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(898);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '`') ADVANCE(900);
      if (lookahead == 'b') ADVANCE(718);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == 't') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(723);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(898);
      if (sym_key_string_text_character_set_1(lookahead)) ADVANCE(886);
      if (lookahead == ',') ADVANCE(946);
      if (lookahead == ';') ADVANCE(636);
      if (lookahead == '\\') ADVANCE(890);
      if (lookahead == 'f') ADVANCE(868);
      if (lookahead == 'n') ADVANCE(860);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '{') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(23)
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == ',') ADVANCE(948);
      if (lookahead == '.') ADVANCE(988);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == '<') ADVANCE(679);
      if (lookahead == '=') ADVANCE(651);
      if (lookahead == '>') ADVANCE(671);
      if (lookahead == 'E') ADVANCE(991);
      if (lookahead == ']') ADVANCE(955);
      if (lookahead == 'b') ADVANCE(320);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(989);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead == 'j') ADVANCE(415);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '}') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(710);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '{') ADVANCE(712);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(711);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '{') ADVANCE(958);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead != 0) ADVANCE(956);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(717);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == 'b') ADVANCE(718);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == 't') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r') SKIP(29)
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(716);
      if (lookahead != 0) ADVANCE(715);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '*') ADVANCE(616);
      if (lookahead == '=') ADVANCE(651);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '}') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == ':') ADVANCE(634);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == ';') ADVANCE(636);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '{') ADVANCE(943);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(33)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(944);
      if (lookahead != 0) ADVANCE(945);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == ';') ADVANCE(636);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(33)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(944);
      if (lookahead != 0) ADVANCE(945);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == ';') ADVANCE(636);
      if (lookahead == '}') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(987);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '<') ADVANCE(677);
      if (lookahead == '\\') ADVANCE(714);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(714);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(502);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ':') ADVANCE(633);
      if (lookahead == '\\') ADVANCE(890);
      if (lookahead == '{') ADVANCE(500);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(31)
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == '\\') ADVANCE(890);
      if (lookahead == '{') ADVANCE(500);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(31)
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(907);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(905);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(702);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(704);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(698);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(700);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(694);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(696);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(612);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '2') ADVANCE(611);
      END_STATE();
    case 45:
      if (lookahead == ',') ADVANCE(708);
      END_STATE();
    case 46:
      if (lookahead == ',') ADVANCE(635);
      END_STATE();
    case 47:
      if (lookahead == ',') ADVANCE(705);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(487);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(257);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == '0') ADVANCE(609);
      if (lookahead == '1') ADVANCE(610);
      END_STATE();
    case 55:
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == '5') ADVANCE(663);
      END_STATE();
    case 58:
      if (lookahead == '5') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == '6') ADVANCE(662);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(669);
      END_STATE();
    case 62:
      if (lookahead == '=') ADVANCE(667);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(697);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(223);
      if (lookahead == 'B') ADVANCE(195);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(474);
      END_STATE();
    case 66:
      if (lookahead == 'B') ADVANCE(327);
      if (lookahead == 'C') ADVANCE(331);
      if (lookahead == 'F') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(303);
      if (lookahead == 'S') ADVANCE(458);
      END_STATE();
    case 67:
      if (lookahead == 'D') ADVANCE(109);
      END_STATE();
    case 68:
      if (lookahead == 'D') ADVANCE(220);
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 69:
      if (lookahead == 'D') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(304);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(417);
      if (lookahead == 'U') ADVANCE(308);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(357);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(358);
      END_STATE();
    case 73:
      if (lookahead == 'F') ADVANCE(333);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(318);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(321);
      END_STATE();
    case 76:
      if (lookahead == 'P') ADVANCE(106);
      END_STATE();
    case 77:
      if (lookahead == 'P') ADVANCE(136);
      END_STATE();
    case 78:
      if (lookahead == 'S') ADVANCE(453);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(238);
      END_STATE();
    case 80:
      if (lookahead == 'T') ADVANCE(239);
      END_STATE();
    case 81:
      if (lookahead == 'W') ADVANCE(254);
      END_STATE();
    case 82:
      if (lookahead == 'W') ADVANCE(256);
      END_STATE();
    case 83:
      if (lookahead == ']') ADVANCE(629);
      END_STATE();
    case 84:
      if (lookahead == ']') ADVANCE(625);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(631);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(627);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(617);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(621);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(623);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(619);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(93);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(93);
      if (lookahead != 0) ADVANCE(899);
      END_STATE();
    case 93:
      if (lookahead == '`') ADVANCE(908);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(463);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(340);
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(271);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(344);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(325);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(482);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(464);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(639);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(496);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(398);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(980);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(982);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(974);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(977);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(968);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(969);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(970);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(339);
      END_STATE();
    case 223:
      if (lookahead == 'f') ADVANCE(467);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(691);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(658);
      END_STATE();
    case 231:
      if (lookahead == 'h') ADVANCE(659);
      END_STATE();
    case 232:
      if (lookahead == 'h') ADVANCE(976);
      END_STATE();
    case 233:
      if (lookahead == 'h') ADVANCE(683);
      END_STATE();
    case 234:
      if (lookahead == 'h') ADVANCE(682);
      END_STATE();
    case 235:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 240:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(435);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 260:
      if (lookahead == 'k') ADVANCE(243);
      END_STATE();
    case 261:
      if (lookahead == 'k') ADVANCE(249);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(654);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(984);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(646);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 283:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(418);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(419);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 289:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(661);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(675);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(690);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(670);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(692);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(640);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'q') ADVANCE(479);
      if (lookahead == 'x') ADVANCE(251);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(463);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(481);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 346:
      if (lookahead == 'p') ADVANCE(441);
      END_STATE();
    case 347:
      if (lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 348:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 349:
      if (lookahead == 'p') ADVANCE(270);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 350:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 351:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 352:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 353:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 354:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 355:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 356:
      if (lookahead == 'q') ADVANCE(483);
      END_STATE();
    case 357:
      if (lookahead == 'q') ADVANCE(484);
      END_STATE();
    case 358:
      if (lookahead == 'q') ADVANCE(485);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(655);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(664);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(686);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(684);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(680);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(642);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(966);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(978);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(971);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(975);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(689);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(647);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 470:
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 471:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 472:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 473:
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 474:
      if (lookahead == 'u') ADVANCE(431);
      END_STATE();
    case 475:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 476:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 477:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 478:
      if (lookahead == 'u') ADVANCE(379);
      END_STATE();
    case 479:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 480:
      if (lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 481:
      if (lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 482:
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 483:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 485:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 486:
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 487:
      if (lookahead == 'v') ADVANCE(211);
      END_STATE();
    case 488:
      if (lookahead == 'w') ADVANCE(972);
      END_STATE();
    case 489:
      if (lookahead == 'w') ADVANCE(973);
      END_STATE();
    case 490:
      if (lookahead == 'x') ADVANCE(45);
      END_STATE();
    case 491:
      if (lookahead == 'x') ADVANCE(660);
      END_STATE();
    case 492:
      if (lookahead == 'x') ADVANCE(52);
      END_STATE();
    case 493:
      if (lookahead == 'x') ADVANCE(497);
      END_STATE();
    case 494:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 495:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 496:
      if (lookahead == 'y') ADVANCE(657);
      END_STATE();
    case 497:
      if (lookahead == 'y') ADVANCE(644);
      END_STATE();
    case 498:
      if (lookahead == 'y') ADVANCE(645);
      END_STATE();
    case 499:
      if (lookahead == 'y') ADVANCE(397);
      END_STATE();
    case 500:
      if (lookahead == '{') ADVANCE(960);
      END_STATE();
    case 501:
      if (lookahead == '}') ADVANCE(963);
      END_STATE();
    case 502:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 503:
      if (eof) ADVANCE(512);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '.') ADVANCE(988);
      if (lookahead == '<') ADVANCE(679);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'D') ADVANCE(559);
      if (lookahead == 'G') ADVANCE(560);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'O') ADVANCE(595);
      if (lookahead == 'P') ADVANCE(550);
      if (lookahead == 'T') ADVANCE(597);
      if (lookahead == 'U') ADVANCE(584);
      if (lookahead == 'V') ADVANCE(573);
      if (lookahead == '[') ADVANCE(951);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == 'j') ADVANCE(415);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '{') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(504)
      END_STATE();
    case 504:
      if (eof) ADVANCE(512);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '.') ADVANCE(988);
      if (lookahead == '<') ADVANCE(679);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'D') ADVANCE(559);
      if (lookahead == 'G') ADVANCE(560);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'O') ADVANCE(595);
      if (lookahead == 'P') ADVANCE(550);
      if (lookahead == 'T') ADVANCE(597);
      if (lookahead == 'U') ADVANCE(584);
      if (lookahead == 'V') ADVANCE(573);
      if (lookahead == '[') ADVANCE(951);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == 'j') ADVANCE(415);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '{') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(504)
      END_STATE();
    case 505:
      if (eof) ADVANCE(512);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '<') ADVANCE(679);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'D') ADVANCE(559);
      if (lookahead == 'G') ADVANCE(560);
      if (lookahead == 'H') ADVANCE(561);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'O') ADVANCE(595);
      if (lookahead == 'P') ADVANCE(550);
      if (lookahead == 'T') ADVANCE(597);
      if (lookahead == 'U') ADVANCE(584);
      if (lookahead == 'V') ADVANCE(573);
      if (lookahead == '[') ADVANCE(952);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'v') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '{') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(506)
      END_STATE();
    case 506:
      if (eof) ADVANCE(512);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '<') ADVANCE(679);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'D') ADVANCE(559);
      if (lookahead == 'G') ADVANCE(560);
      if (lookahead == 'H') ADVANCE(561);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'O') ADVANCE(595);
      if (lookahead == 'P') ADVANCE(550);
      if (lookahead == 'T') ADVANCE(597);
      if (lookahead == 'U') ADVANCE(584);
      if (lookahead == 'V') ADVANCE(573);
      if (lookahead == '[') ADVANCE(952);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'v') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '{') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(506)
      END_STATE();
    case 507:
      if (eof) ADVANCE(512);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '<') ADVANCE(679);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'D') ADVANCE(559);
      if (lookahead == 'G') ADVANCE(560);
      if (lookahead == 'H') ADVANCE(561);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'O') ADVANCE(595);
      if (lookahead == 'P') ADVANCE(550);
      if (lookahead == 'T') ADVANCE(597);
      if (lookahead == 'U') ADVANCE(584);
      if (lookahead == 'V') ADVANCE(573);
      if (lookahead == '[') ADVANCE(952);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '{') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(507)
      END_STATE();
    case 508:
      if (eof) ADVANCE(512);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '<') ADVANCE(679);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'D') ADVANCE(559);
      if (lookahead == 'G') ADVANCE(560);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead == 'O') ADVANCE(595);
      if (lookahead == 'P') ADVANCE(550);
      if (lookahead == 'T') ADVANCE(597);
      if (lookahead == 'U') ADVANCE(584);
      if (lookahead == 'V') ADVANCE(573);
      if (lookahead == '[') ADVANCE(951);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '{') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(986);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(508)
      END_STATE();
    case 509:
      if (eof) ADVANCE(512);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(886);
      if (lookahead == '<') ADVANCE(679);
      if (lookahead == 'C') ADVANCE(765);
      if (lookahead == 'D') ADVANCE(734);
      if (lookahead == 'G') ADVANCE(735);
      if (lookahead == 'H') ADVANCE(736);
      if (lookahead == 'L') ADVANCE(748);
      if (lookahead == 'O') ADVANCE(770);
      if (lookahead == 'P') ADVANCE(726);
      if (lookahead == 'T') ADVANCE(772);
      if (lookahead == 'U') ADVANCE(759);
      if (lookahead == 'V') ADVANCE(747);
      if (lookahead == '[') ADVANCE(953);
      if (lookahead == '\\') ADVANCE(890);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(867);
      if (lookahead == 'f') ADVANCE(784);
      if (lookahead == 'h') ADVANCE(794);
      if (lookahead == 'n') ADVANCE(860);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '{') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(507)
      END_STATE();
    case 510:
      if (eof) ADVANCE(512);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (sym_key_string_text_character_set_2(lookahead)) ADVANCE(886);
      if (lookahead == '<') ADVANCE(679);
      if (lookahead == 'C') ADVANCE(765);
      if (lookahead == 'D') ADVANCE(734);
      if (lookahead == 'G') ADVANCE(735);
      if (lookahead == 'H') ADVANCE(737);
      if (lookahead == 'L') ADVANCE(748);
      if (lookahead == 'O') ADVANCE(770);
      if (lookahead == 'P') ADVANCE(726);
      if (lookahead == 'T') ADVANCE(772);
      if (lookahead == 'U') ADVANCE(759);
      if (lookahead == 'V') ADVANCE(747);
      if (lookahead == '[') ADVANCE(954);
      if (lookahead == '\\') ADVANCE(890);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(867);
      if (lookahead == 'f') ADVANCE(784);
      if (lookahead == 'h') ADVANCE(794);
      if (lookahead == 'n') ADVANCE(860);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '{') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(508)
      END_STATE();
    case 511:
      if (eof) ADVANCE(512);
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(898);
      if (lookahead == '*') ADVANCE(616);
      if (lookahead == '+') ADVANCE(993);
      if (lookahead == ',') ADVANCE(948);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead == '.') ADVANCE(988);
      if (lookahead == '/') ADVANCE(996);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == ';') ADVANCE(636);
      if (lookahead == '<') ADVANCE(676);
      if (lookahead == '=') ADVANCE(652);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(992);
      if (lookahead == '[') ADVANCE(950);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == ']') ADVANCE(955);
      if (lookahead == '`') ADVANCE(901);
      if (lookahead == 'b') ADVANCE(718);
      if (lookahead == 'e') ADVANCE(989);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == 't') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(723);
      if (lookahead == '{') ADVANCE(940);
      if (lookahead == '}') ADVANCE(947);
      if (('a' <= lookahead && lookahead <= 'd')) ADVANCE(964);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(511)
      END_STATE();
    case 512:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(514);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(942);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(515);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(937);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(516);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(915);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(557);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(604);
      if (lookahead == 'O') ADVANCE(599);
      if (lookahead == 'R') ADVANCE(590);
      if (lookahead == 'U') ADVANCE(596);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'A') ADVANCE(556);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(571);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'C') ADVANCE(565);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'D') ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(549);
      if (lookahead == 'T') ADVANCE(605);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(549);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(607);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(539);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(531);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'E') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'F') ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'G') ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'H') ADVANCE(533);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(587);
      if (lookahead == 'O') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'I') ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'K') ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(568);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'L') ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'N') ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'O') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'P') ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'R') ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'S') ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(527);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'T') ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == 'W') ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT0);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH1_DOT1);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH2);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH_STAR);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == '/') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_status_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_LBRACKBasicAuth_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_LBRACKMultipartFormData_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LBRACKCaptures_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_LBRACKAsserts_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LBRACKOptions_RBRACK);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_file_contenttype_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(259);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(667);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(392);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(674);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(364);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(701);
      if (lookahead == '=') ADVANCE(681);
      if (lookahead == '?') ADVANCE(693);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(701);
      if (lookahead == '?') ADVANCE(693);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(681);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(693);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(696);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead != 0) ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(694);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(696);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(696);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(700);
      if (lookahead == '>') ADVANCE(1);
      if (lookahead != 0) ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '>') ADVANCE(700);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(700);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(699);
      if (lookahead != 0) ADVANCE(700);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(704);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(1);
      if (lookahead != 0) ADVANCE(702);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(702);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(704);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(704);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(706);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '\n') ADVANCE(713);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(710);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '#') ADVANCE(710);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(713);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead == '{') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(713);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(713);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(717);
      if (lookahead == 'b') ADVANCE(718);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == 't') ADVANCE(722);
      if (aux_sym_invalid_quoted_string_escaped_char_token1_character_set_1(lookahead)) ADVANCE(716);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(715);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'A') ADVANCE(732);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'A') ADVANCE(730);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'A') ADVANCE(780);
      if (lookahead == 'O') ADVANCE(774);
      if (lookahead == 'R') ADVANCE(766);
      if (lookahead == 'U') ADVANCE(771);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'C') ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'C') ADVANCE(753);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'C') ADVANCE(755);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'C') ADVANCE(740);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'C') ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'D') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'D') ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'E') ADVANCE(756);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'E') ADVANCE(775);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'E') ADVANCE(724);
      if (lookahead == 'T') ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'E') ADVANCE(724);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'E') ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'E') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'E') ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'E') ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'E') ADVANCE(731);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'E') ADVANCE(781);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'F') ADVANCE(750);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'G') ADVANCE(739);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'H') ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'I') ADVANCE(738);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'I') ADVANCE(758);
      if (lookahead == 'O') ADVANCE(728);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'I') ADVANCE(762);
      if (lookahead == 'O') ADVANCE(729);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'I') ADVANCE(761);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'I') ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'K') ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'K') ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'K') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'K') ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'L') ADVANCE(743);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'L') ADVANCE(749);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'N') ADVANCE(752);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'N') ADVANCE(757);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'N') ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'N') ADVANCE(733);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'N') ADVANCE(754);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'N') ADVANCE(764);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'N') ADVANCE(742);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'O') ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'O') ADVANCE(769);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'O') ADVANCE(760);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'P') ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'P') ADVANCE(744);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'P') ADVANCE(779);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'R') ADVANCE(745);
      if (lookahead == 'T') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'R') ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'S') ADVANCE(530);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'S') ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'T') ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'T') ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'T') ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'T') ADVANCE(768);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'T') ADVANCE(751);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'T') ADVANCE(727);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'T') ADVANCE(741);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'W') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(814);
      if (lookahead == 'i') ADVANCE(812);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == '4') ADVANCE(889);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == '6') ADVANCE(785);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '@' ||
          ('B' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'A') ADVANCE(861);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'C') ||
          ('E' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'D') ADVANCE(873);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'E') ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'F') ADVANCE(826);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'P') ADVANCE(871);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'O') ||
          ('Q' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'P') ADVANCE(877);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'S') ADVANCE(857);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'c') ADVANCE(787);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'e') ADVANCE(983);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'g') ADVANCE(791);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'h') ADVANCE(880);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'i') ADVANCE(793);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'i') ADVANCE(829);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'i') ADVANCE(820);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'i') ADVANCE(823);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'k') ADVANCE(809);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'l') ADVANCE(985);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'l') ADVANCE(798);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'l') ADVANCE(811);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'l') ADVANCE(845);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'l') ADVANCE(854);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'm') ADVANCE(790);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'm') ADVANCE(788);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'm') ADVANCE(844);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'm') ADVANCE(846);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'n') ADVANCE(803);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'o') ADVANCE(810);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'o') ADVANCE(821);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'o') ADVANCE(830);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'o') ADVANCE(822);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'o') ADVANCE(834);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'p') ADVANCE(853);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'p') ADVANCE(856);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'p') ADVANCE(872);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'r') ADVANCE(816);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'r') ADVANCE(866);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'r') ADVANCE(870);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'r') ADVANCE(817);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'r') ADVANCE(852);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'r') ADVANCE(807);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'r') ADVANCE(858);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'r') ADVANCE(876);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 's') ADVANCE(805);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 's') ADVANCE(878);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 's') ADVANCE(879);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 's') ADVANCE(795);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 's') ADVANCE(881);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 's') ADVANCE(797);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 's') ADVANCE(883);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 's') ADVANCE(884);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 's') ADVANCE(885);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 's') ADVANCE(801);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 's') ADVANCE(849);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 't') ADVANCE(804);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 't') ADVANCE(808);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 't') ADVANCE(806);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 't') ADVANCE(864);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 't') ADVANCE(836);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 't') ADVANCE(847);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'u') ADVANCE(799);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'u') ADVANCE(813);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'u') ADVANCE(851);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'u') ADVANCE(815);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'u') ADVANCE(796);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'u') ADVANCE(838);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(886);
      if (lookahead == 'x') ADVANCE(887);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(886);
      if (lookahead == 'y') ADVANCE(792);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(843);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(814);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(840);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(832);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(835);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(855);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(882);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(828);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(819);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == 'a') ADVANCE(839);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ']') ADVANCE(626);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ']') ADVANCE(632);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ']') ADVANCE(618);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ']') ADVANCE(622);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ']') ADVANCE(624);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ']') ADVANCE(620);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ']') ADVANCE(630);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ']') ADVANCE(628);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ',') ADVANCE(708);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ',') ADVANCE(635);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      if (lookahead == ',') ADVANCE(705);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(960);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(93);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '`') ADVANCE(900);
      if (aux_sym_oneline_string_text_token1_character_set_1(lookahead)) ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(902);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '{') ADVANCE(960);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead == '#') ADVANCE(907);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(905);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_graphql);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(995);
      if (lookahead != 0) ADVANCE(914);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '#') ADVANCE(934);
      if (lookahead == 'b') ADVANCE(919);
      if (lookahead == 'g') ADVANCE(930);
      if (lookahead == 'h') ADVANCE(920);
      if (lookahead == 'j') ADVANCE(931);
      if (lookahead == 'x') ADVANCE(925);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(915);
      if (lookahead != 0) ADVANCE(935);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '4') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '6') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'h') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'm') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'n') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'p') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'q') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'r') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'x') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(914);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(995);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1);
      if (lookahead != 0) ADVANCE(936);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '#') ADVANCE(938);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(939);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(936);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(939);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(960);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(514);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(945);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(945);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_filename_text);
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(945);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(945);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(410);
      if (lookahead == 'B') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(130);
      if (lookahead == 'F') ADVANCE(312);
      if (lookahead == 'M') ADVANCE(470);
      if (lookahead == 'O') ADVANCE(346);
      if (lookahead == 'Q') ADVANCE(471);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(410);
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(319);
      if (lookahead == 'F') ADVANCE(312);
      if (lookahead == 'M') ADVANCE(470);
      if (lookahead == 'O') ADVANCE(346);
      if (lookahead == 'Q') ADVANCE(471);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(886);
      if (lookahead == 'B') ADVANCE(869);
      if (lookahead == 'C') ADVANCE(825);
      if (lookahead == 'F') ADVANCE(824);
      if (lookahead == 'M') ADVANCE(862);
      if (lookahead == 'O') ADVANCE(827);
      if (lookahead == 'Q') ADVANCE(859);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_4(lookahead)) ADVANCE(886);
      if (lookahead == 'A') ADVANCE(850);
      if (lookahead == 'C') ADVANCE(875);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(959);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(956);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(960);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(945);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(713);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(965);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_daysAfterNow);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_daysBeforeNow);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_decode);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_nth);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_replace);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_toDate);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'q') ADVANCE(479);
      if (lookahead == 'x') ADVANCE(251);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_E);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '\n') ADVANCE(995);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(997);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '#') ADVANCE(999);
      if (aux_sym_oneline_string_text_token1_character_set_1(lookahead)) ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1000);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(997);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(1000);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(1003);
      if (aux_sym_oneline_string_text_token1_character_set_1(lookahead)) ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1001);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 503},
  [2] = {.lex_state = 509},
  [3] = {.lex_state = 509},
  [4] = {.lex_state = 509},
  [5] = {.lex_state = 509},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 505},
  [9] = {.lex_state = 505},
  [10] = {.lex_state = 505},
  [11] = {.lex_state = 510},
  [12] = {.lex_state = 510},
  [13] = {.lex_state = 505},
  [14] = {.lex_state = 505},
  [15] = {.lex_state = 505},
  [16] = {.lex_state = 503},
  [17] = {.lex_state = 503},
  [18] = {.lex_state = 503},
  [19] = {.lex_state = 503},
  [20] = {.lex_state = 503},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 505},
  [23] = {.lex_state = 505},
  [24] = {.lex_state = 505},
  [25] = {.lex_state = 505},
  [26] = {.lex_state = 505},
  [27] = {.lex_state = 505},
  [28] = {.lex_state = 505},
  [29] = {.lex_state = 505},
  [30] = {.lex_state = 505},
  [31] = {.lex_state = 505},
  [32] = {.lex_state = 505},
  [33] = {.lex_state = 505},
  [34] = {.lex_state = 505},
  [35] = {.lex_state = 505},
  [36] = {.lex_state = 505},
  [37] = {.lex_state = 505},
  [38] = {.lex_state = 505},
  [39] = {.lex_state = 509},
  [40] = {.lex_state = 509},
  [41] = {.lex_state = 509},
  [42] = {.lex_state = 509},
  [43] = {.lex_state = 509},
  [44] = {.lex_state = 509},
  [45] = {.lex_state = 509},
  [46] = {.lex_state = 509},
  [47] = {.lex_state = 509},
  [48] = {.lex_state = 509},
  [49] = {.lex_state = 509},
  [50] = {.lex_state = 509},
  [51] = {.lex_state = 509},
  [52] = {.lex_state = 505},
  [53] = {.lex_state = 509},
  [54] = {.lex_state = 503},
  [55] = {.lex_state = 503},
  [56] = {.lex_state = 503},
  [57] = {.lex_state = 503},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 509},
  [61] = {.lex_state = 509},
  [62] = {.lex_state = 509},
  [63] = {.lex_state = 510},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 510},
  [66] = {.lex_state = 510},
  [67] = {.lex_state = 510},
  [68] = {.lex_state = 505},
  [69] = {.lex_state = 505},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 503},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 510},
  [108] = {.lex_state = 510},
  [109] = {.lex_state = 510},
  [110] = {.lex_state = 510},
  [111] = {.lex_state = 510},
  [112] = {.lex_state = 505},
  [113] = {.lex_state = 505},
  [114] = {.lex_state = 503},
  [115] = {.lex_state = 19},
  [116] = {.lex_state = 505},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 505},
  [119] = {.lex_state = 505},
  [120] = {.lex_state = 26},
  [121] = {.lex_state = 503},
  [122] = {.lex_state = 503},
  [123] = {.lex_state = 503},
  [124] = {.lex_state = 505},
  [125] = {.lex_state = 503},
  [126] = {.lex_state = 505},
  [127] = {.lex_state = 505},
  [128] = {.lex_state = 505},
  [129] = {.lex_state = 505},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 503},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 503},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 25},
  [139] = {.lex_state = 503},
  [140] = {.lex_state = 503},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 503},
  [143] = {.lex_state = 503},
  [144] = {.lex_state = 503},
  [145] = {.lex_state = 19},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 503},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 503},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 503},
  [154] = {.lex_state = 19},
  [155] = {.lex_state = 503},
  [156] = {.lex_state = 503},
  [157] = {.lex_state = 503},
  [158] = {.lex_state = 503},
  [159] = {.lex_state = 19},
  [160] = {.lex_state = 30},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 505},
  [163] = {.lex_state = 505},
  [164] = {.lex_state = 505},
  [165] = {.lex_state = 505},
  [166] = {.lex_state = 505},
  [167] = {.lex_state = 505},
  [168] = {.lex_state = 505},
  [169] = {.lex_state = 505},
  [170] = {.lex_state = 505},
  [171] = {.lex_state = 505},
  [172] = {.lex_state = 505},
  [173] = {.lex_state = 505},
  [174] = {.lex_state = 505},
  [175] = {.lex_state = 505},
  [176] = {.lex_state = 505},
  [177] = {.lex_state = 505},
  [178] = {.lex_state = 505},
  [179] = {.lex_state = 505},
  [180] = {.lex_state = 505},
  [181] = {.lex_state = 505},
  [182] = {.lex_state = 505},
  [183] = {.lex_state = 505},
  [184] = {.lex_state = 505},
  [185] = {.lex_state = 505},
  [186] = {.lex_state = 505},
  [187] = {.lex_state = 505},
  [188] = {.lex_state = 505},
  [189] = {.lex_state = 505},
  [190] = {.lex_state = 505},
  [191] = {.lex_state = 505},
  [192] = {.lex_state = 505},
  [193] = {.lex_state = 505},
  [194] = {.lex_state = 505},
  [195] = {.lex_state = 505},
  [196] = {.lex_state = 505},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 38},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 27},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 27},
  [210] = {.lex_state = 27},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 27},
  [217] = {.lex_state = 27},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 38},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 13},
  [222] = {.lex_state = 38},
  [223] = {.lex_state = 38},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 38},
  [227] = {.lex_state = 32},
  [228] = {.lex_state = 13},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 39},
  [231] = {.lex_state = 32},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 28},
  [234] = {.lex_state = 29},
  [235] = {.lex_state = 32},
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 39},
  [238] = {.lex_state = 9},
  [239] = {.lex_state = 28},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 28},
  [242] = {.lex_state = 28},
  [243] = {.lex_state = 28},
  [244] = {.lex_state = 24},
  [245] = {.lex_state = 12},
  [246] = {.lex_state = 24},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 12},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 24},
  [251] = {.lex_state = 24},
  [252] = {.lex_state = 12},
  [253] = {.lex_state = 26},
  [254] = {.lex_state = 27},
  [255] = {.lex_state = 12},
  [256] = {.lex_state = 12},
  [257] = {.lex_state = 26},
  [258] = {.lex_state = 27},
  [259] = {.lex_state = 18},
  [260] = {.lex_state = 19},
  [261] = {.lex_state = 38},
  [262] = {.lex_state = 13},
  [263] = {.lex_state = 38},
  [264] = {.lex_state = 15},
  [265] = {.lex_state = 26},
  [266] = {.lex_state = 19},
  [267] = {.lex_state = 13},
  [268] = {.lex_state = 19},
  [269] = {.lex_state = 19},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 26},
  [272] = {.lex_state = 26},
  [273] = {.lex_state = 26},
  [274] = {.lex_state = 26},
  [275] = {.lex_state = 15},
  [276] = {.lex_state = 26},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 19},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 39},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 7},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 24},
  [287] = {.lex_state = 26},
  [288] = {.lex_state = 32},
  [289] = {.lex_state = 39},
  [290] = {.lex_state = 15},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 19},
  [295] = {.lex_state = 32},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 26},
  [300] = {.lex_state = 15},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 38},
  [305] = {.lex_state = 12},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 12},
  [308] = {.lex_state = 12},
  [309] = {.lex_state = 19},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 12},
  [312] = {.lex_state = 26},
  [313] = {.lex_state = 19},
  [314] = {.lex_state = 12},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 12},
  [317] = {.lex_state = 26},
  [318] = {.lex_state = 26},
  [319] = {.lex_state = 12},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 38},
  [322] = {.lex_state = 26},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 19},
  [325] = {.lex_state = 7},
  [326] = {.lex_state = 19},
  [327] = {.lex_state = 19},
  [328] = {.lex_state = 503},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 19},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 19},
  [333] = {.lex_state = 19},
  [334] = {.lex_state = 26},
  [335] = {.lex_state = 503},
  [336] = {.lex_state = 19},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 39},
  [339] = {.lex_state = 27},
  [340] = {.lex_state = 27},
  [341] = {.lex_state = 13},
  [342] = {.lex_state = 28},
  [343] = {.lex_state = 19},
  [344] = {.lex_state = 503},
  [345] = {.lex_state = 503},
  [346] = {.lex_state = 19},
  [347] = {.lex_state = 19},
  [348] = {.lex_state = 19},
  [349] = {.lex_state = 503},
  [350] = {.lex_state = 503},
  [351] = {.lex_state = 27},
  [352] = {.lex_state = 27},
  [353] = {.lex_state = 503},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 7},
  [356] = {.lex_state = 4},
  [357] = {.lex_state = 32},
  [358] = {.lex_state = 503},
  [359] = {.lex_state = 503},
  [360] = {.lex_state = 503},
  [361] = {.lex_state = 13},
  [362] = {.lex_state = 32},
  [363] = {.lex_state = 34},
  [364] = {.lex_state = 28},
  [365] = {.lex_state = 13},
  [366] = {.lex_state = 13},
  [367] = {.lex_state = 26},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 503},
  [370] = {.lex_state = 503},
  [371] = {.lex_state = 28},
  [372] = {.lex_state = 39},
  [373] = {.lex_state = 26},
  [374] = {.lex_state = 28},
  [375] = {.lex_state = 28},
  [376] = {.lex_state = 34},
  [377] = {.lex_state = 19},
  [378] = {.lex_state = 27},
  [379] = {.lex_state = 503},
  [380] = {.lex_state = 503},
  [381] = {.lex_state = 503},
  [382] = {.lex_state = 503},
  [383] = {.lex_state = 503},
  [384] = {.lex_state = 13},
  [385] = {.lex_state = 19},
  [386] = {.lex_state = 19},
  [387] = {.lex_state = 19},
  [388] = {.lex_state = 34},
  [389] = {.lex_state = 4},
  [390] = {.lex_state = 4},
  [391] = {.lex_state = 28},
  [392] = {.lex_state = 19},
  [393] = {.lex_state = 27},
  [394] = {.lex_state = 26},
  [395] = {.lex_state = 503},
  [396] = {.lex_state = 37},
  [397] = {.lex_state = 503},
  [398] = {.lex_state = 37},
  [399] = {.lex_state = 37},
  [400] = {.lex_state = 37},
  [401] = {.lex_state = 37},
  [402] = {.lex_state = 37},
  [403] = {.lex_state = 503},
  [404] = {.lex_state = 37},
  [405] = {.lex_state = 37},
  [406] = {.lex_state = 37},
  [407] = {.lex_state = 37},
  [408] = {.lex_state = 19},
  [409] = {.lex_state = 6},
  [410] = {.lex_state = 37},
  [411] = {.lex_state = 19},
  [412] = {.lex_state = 25},
  [413] = {.lex_state = 19},
  [414] = {.lex_state = 19},
  [415] = {.lex_state = 37},
  [416] = {.lex_state = 19},
  [417] = {.lex_state = 26},
  [418] = {.lex_state = 19},
  [419] = {.lex_state = 26},
  [420] = {.lex_state = 503},
  [421] = {.lex_state = 503},
  [422] = {.lex_state = 503},
  [423] = {.lex_state = 26},
  [424] = {.lex_state = 25},
  [425] = {.lex_state = 503},
  [426] = {.lex_state = 26},
  [427] = {.lex_state = 503},
  [428] = {.lex_state = 503},
  [429] = {.lex_state = 503},
  [430] = {.lex_state = 503},
  [431] = {.lex_state = 26},
  [432] = {.lex_state = 503},
  [433] = {.lex_state = 19},
  [434] = {.lex_state = 503},
  [435] = {.lex_state = 503},
  [436] = {.lex_state = 503},
  [437] = {.lex_state = 503},
  [438] = {.lex_state = 503},
  [439] = {.lex_state = 19},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 19},
  [442] = {.lex_state = 503},
  [443] = {.lex_state = 503},
  [444] = {.lex_state = 503},
  [445] = {.lex_state = 503},
  [446] = {.lex_state = 503},
  [447] = {.lex_state = 503},
  [448] = {.lex_state = 6},
  [449] = {.lex_state = 30},
  [450] = {.lex_state = 503},
  [451] = {.lex_state = 503},
  [452] = {.lex_state = 503},
  [453] = {.lex_state = 503},
  [454] = {.lex_state = 26},
  [455] = {.lex_state = 26},
  [456] = {.lex_state = 19},
  [457] = {.lex_state = 19},
  [458] = {.lex_state = 503},
  [459] = {.lex_state = 503},
  [460] = {.lex_state = 503},
  [461] = {.lex_state = 19},
  [462] = {.lex_state = 26},
  [463] = {.lex_state = 26},
  [464] = {.lex_state = 19},
  [465] = {.lex_state = 503},
  [466] = {.lex_state = 26},
  [467] = {.lex_state = 19},
  [468] = {.lex_state = 26},
  [469] = {.lex_state = 19},
  [470] = {.lex_state = 503},
  [471] = {.lex_state = 26},
  [472] = {.lex_state = 26},
  [473] = {.lex_state = 19},
  [474] = {.lex_state = 503},
  [475] = {.lex_state = 26},
  [476] = {.lex_state = 26},
  [477] = {.lex_state = 37},
  [478] = {.lex_state = 26},
  [479] = {.lex_state = 503},
  [480] = {.lex_state = 19},
  [481] = {.lex_state = 19},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 34},
  [484] = {.lex_state = 503},
  [485] = {.lex_state = 503},
  [486] = {.lex_state = 503},
  [487] = {.lex_state = 26},
  [488] = {.lex_state = 34},
  [489] = {.lex_state = 34},
  [490] = {.lex_state = 34},
  [491] = {.lex_state = 34},
  [492] = {.lex_state = 34},
  [493] = {.lex_state = 34},
  [494] = {.lex_state = 34},
  [495] = {.lex_state = 34},
  [496] = {.lex_state = 34},
  [497] = {.lex_state = 34},
  [498] = {.lex_state = 34},
  [499] = {.lex_state = 34},
  [500] = {.lex_state = 34},
  [501] = {.lex_state = 34},
  [502] = {.lex_state = 34},
  [503] = {.lex_state = 34},
  [504] = {.lex_state = 34},
  [505] = {.lex_state = 34},
  [506] = {.lex_state = 19},
  [507] = {.lex_state = 19},
  [508] = {.lex_state = 19},
  [509] = {.lex_state = 19},
  [510] = {.lex_state = 19},
  [511] = {.lex_state = 19},
  [512] = {.lex_state = 19},
  [513] = {.lex_state = 26},
  [514] = {.lex_state = 34},
  [515] = {.lex_state = 19},
  [516] = {.lex_state = 21},
  [517] = {.lex_state = 19},
  [518] = {.lex_state = 19},
  [519] = {.lex_state = 21},
  [520] = {.lex_state = 19},
  [521] = {.lex_state = 21},
  [522] = {.lex_state = 34},
  [523] = {.lex_state = 19},
  [524] = {.lex_state = 19},
  [525] = {.lex_state = 34},
  [526] = {.lex_state = 21},
  [527] = {.lex_state = 26},
  [528] = {.lex_state = 34},
  [529] = {.lex_state = 19},
  [530] = {.lex_state = 34},
  [531] = {.lex_state = 30},
  [532] = {.lex_state = 26},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 19},
  [535] = {.lex_state = 34},
  [536] = {.lex_state = 19},
  [537] = {.lex_state = 19},
  [538] = {.lex_state = 19},
  [539] = {.lex_state = 19},
  [540] = {.lex_state = 21},
  [541] = {.lex_state = 503},
  [542] = {.lex_state = 503},
  [543] = {.lex_state = 503},
  [544] = {.lex_state = 19},
  [545] = {.lex_state = 19},
  [546] = {.lex_state = 19},
  [547] = {.lex_state = 19},
  [548] = {.lex_state = 19},
  [549] = {.lex_state = 19},
  [550] = {.lex_state = 19},
  [551] = {.lex_state = 19},
  [552] = {.lex_state = 19},
  [553] = {.lex_state = 19},
  [554] = {.lex_state = 19},
  [555] = {.lex_state = 19},
  [556] = {.lex_state = 503},
  [557] = {.lex_state = 19},
  [558] = {.lex_state = 503},
  [559] = {.lex_state = 19},
  [560] = {.lex_state = 503},
  [561] = {.lex_state = 503},
  [562] = {.lex_state = 503},
  [563] = {.lex_state = 503},
  [564] = {.lex_state = 503},
  [565] = {.lex_state = 503},
  [566] = {.lex_state = 503},
  [567] = {.lex_state = 503},
  [568] = {.lex_state = 40},
  [569] = {.lex_state = 503},
  [570] = {.lex_state = 503},
  [571] = {.lex_state = 503},
  [572] = {.lex_state = 503},
  [573] = {.lex_state = 41},
  [574] = {.lex_state = 503},
  [575] = {.lex_state = 503},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 503},
  [578] = {.lex_state = 503},
  [579] = {.lex_state = 965},
  [580] = {.lex_state = 19},
  [581] = {.lex_state = 503},
  [582] = {.lex_state = 503},
  [583] = {.lex_state = 503},
  [584] = {.lex_state = 19},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 19},
  [587] = {.lex_state = 503},
  [588] = {.lex_state = 21},
  [589] = {.lex_state = 503},
  [590] = {.lex_state = 503},
  [591] = {.lex_state = 503},
  [592] = {.lex_state = 503},
  [593] = {.lex_state = 503},
  [594] = {.lex_state = 503},
  [595] = {.lex_state = 503},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 19},
  [598] = {.lex_state = 503},
  [599] = {.lex_state = 42},
  [600] = {.lex_state = 43},
  [601] = {.lex_state = 503},
  [602] = {.lex_state = 503},
  [603] = {.lex_state = 503},
  [604] = {.lex_state = 503},
  [605] = {.lex_state = 16},
  [606] = {.lex_state = 21},
  [607] = {.lex_state = 26},
  [608] = {.lex_state = 503},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 503},
  [611] = {.lex_state = 503},
  [612] = {.lex_state = 26},
  [613] = {.lex_state = 503},
  [614] = {.lex_state = 503},
  [615] = {.lex_state = 503},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 503},
  [618] = {.lex_state = 19},
  [619] = {.lex_state = 21},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 19},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 19},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 19},
  [626] = {.lex_state = 19},
  [627] = {.lex_state = 19},
  [628] = {.lex_state = 19},
  [629] = {.lex_state = 19},
  [630] = {.lex_state = 19},
  [631] = {.lex_state = 19},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 43},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 503},
  [636] = {.lex_state = 41},
  [637] = {.lex_state = 26},
  [638] = {.lex_state = 503},
  [639] = {.lex_state = 503},
  [640] = {.lex_state = 503},
  [641] = {.lex_state = 503},
  [642] = {.lex_state = 503},
  [643] = {.lex_state = 503},
  [644] = {.lex_state = 503},
  [645] = {.lex_state = 503},
  [646] = {.lex_state = 503},
  [647] = {.lex_state = 503},
  [648] = {.lex_state = 503},
  [649] = {.lex_state = 503},
  [650] = {.lex_state = 503},
  [651] = {.lex_state = 26},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 503},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 17},
  [657] = {.lex_state = 503},
  [658] = {.lex_state = 503},
  [659] = {.lex_state = 503},
  [660] = {.lex_state = 503},
  [661] = {.lex_state = 503},
  [662] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [aux_sym_status_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [aux_sym_key_string_escaped_char_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_filename_escaped_char_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [aux_sym_variable_name_token1] = ACTIONS(1),
    [aux_sym__alphanum_token1] = ACTIONS(1),
    [aux_sym_digit_token1] = ACTIONS(1),
    [aux_sym_hexdigit_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_hurl_file] = STATE(576),
    [sym_entry] = STATE(121),
    [sym__comment_or_new_line] = STATE(123),
    [sym_request] = STATE(118),
    [sym_method] = STATE(198),
    [aux_sym_hurl_file_repeat1] = STATE(121),
    [aux_sym_hurl_file_repeat2] = STATE(123),
    [aux_sym__comment_or_new_line_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(9),
    [anon_sym_HEAD] = ACTIONS(9),
    [anon_sym_POST] = ACTIONS(9),
    [anon_sym_PUT] = ACTIONS(9),
    [anon_sym_DELETE] = ACTIONS(9),
    [anon_sym_CONNECT] = ACTIONS(9),
    [anon_sym_OPTIONS] = ACTIONS(9),
    [anon_sym_TRACE] = ACTIONS(9),
    [anon_sym_PATCH] = ACTIONS(9),
    [anon_sym_LINK] = ACTIONS(9),
    [anon_sym_UNLINK] = ACTIONS(9),
    [anon_sym_PURGE] = ACTIONS(9),
    [anon_sym_LOCK] = ACTIONS(9),
    [anon_sym_UNLOCK] = ACTIONS(9),
    [anon_sym_PROPFIND] = ACTIONS(9),
    [anon_sym_VIEW] = ACTIONS(9),
    [aux_sym_method_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym__comment_or_new_line] = STATE(53),
    [sym_header] = STATE(4),
    [sym_body] = STATE(129),
    [sym_request_section] = STATE(10),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_key_value] = STATE(397),
    [sym_bytes] = STATE(485),
    [sym_xml] = STATE(658),
    [sym_xml_prolog_tag] = STATE(299),
    [sym_xml_tag] = STATE(659),
    [sym_xml_open_tag] = STATE(146),
    [sym_oneline_base64] = STATE(658),
    [sym_oneline_file] = STATE(658),
    [sym_oneline_hex] = STATE(658),
    [sym_key_string] = STATE(662),
    [sym_key_string_content] = STATE(219),
    [sym_key_string_escaped_char] = STATE(263),
    [sym_oneline_string] = STATE(658),
    [sym_multiline_string] = STATE(658),
    [sym_json_value] = STATE(658),
    [sym_json_object] = STATE(661),
    [sym_json_array] = STATE(661),
    [sym_json_string] = STATE(661),
    [sym_json_number] = STATE(661),
    [sym_template] = STATE(315),
    [sym_boolean] = STATE(661),
    [sym_null] = STATE(661),
    [sym_integer] = STATE(297),
    [sym_digit] = STATE(131),
    [aux_sym_hurl_file_repeat2] = STATE(53),
    [aux_sym__comment_or_new_line_repeat1] = STATE(61),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(10),
    [aux_sym_xml_repeat1] = STATE(299),
    [aux_sym_key_string_repeat1] = STATE(219),
    [aux_sym_key_string_content_repeat1] = STATE(263),
    [aux_sym_integer_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_GET] = ACTIONS(17),
    [anon_sym_HEAD] = ACTIONS(17),
    [anon_sym_POST] = ACTIONS(17),
    [anon_sym_PUT] = ACTIONS(17),
    [anon_sym_DELETE] = ACTIONS(17),
    [anon_sym_CONNECT] = ACTIONS(17),
    [anon_sym_OPTIONS] = ACTIONS(17),
    [anon_sym_TRACE] = ACTIONS(17),
    [anon_sym_PATCH] = ACTIONS(17),
    [anon_sym_LINK] = ACTIONS(17),
    [anon_sym_UNLINK] = ACTIONS(17),
    [anon_sym_PURGE] = ACTIONS(17),
    [anon_sym_LOCK] = ACTIONS(17),
    [anon_sym_UNLOCK] = ACTIONS(17),
    [anon_sym_PROPFIND] = ACTIONS(17),
    [anon_sym_VIEW] = ACTIONS(17),
    [aux_sym_method_token1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH2] = ACTIONS(17),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(17),
    [anon_sym_HTTP] = ACTIONS(17),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [aux_sym_oneline_string_token1] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(63),
  },
  [3] = {
    [sym__comment_or_new_line] = STATE(53),
    [sym_header] = STATE(5),
    [sym_body] = STATE(128),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_key_value] = STATE(397),
    [sym_bytes] = STATE(485),
    [sym_xml] = STATE(658),
    [sym_xml_prolog_tag] = STATE(299),
    [sym_xml_tag] = STATE(659),
    [sym_xml_open_tag] = STATE(146),
    [sym_oneline_base64] = STATE(658),
    [sym_oneline_file] = STATE(658),
    [sym_oneline_hex] = STATE(658),
    [sym_key_string] = STATE(662),
    [sym_key_string_content] = STATE(219),
    [sym_key_string_escaped_char] = STATE(263),
    [sym_oneline_string] = STATE(658),
    [sym_multiline_string] = STATE(658),
    [sym_json_value] = STATE(658),
    [sym_json_object] = STATE(661),
    [sym_json_array] = STATE(661),
    [sym_json_string] = STATE(661),
    [sym_json_number] = STATE(661),
    [sym_template] = STATE(315),
    [sym_boolean] = STATE(661),
    [sym_null] = STATE(661),
    [sym_integer] = STATE(297),
    [sym_digit] = STATE(131),
    [aux_sym_hurl_file_repeat2] = STATE(53),
    [aux_sym__comment_or_new_line_repeat1] = STATE(61),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(299),
    [aux_sym_key_string_repeat1] = STATE(219),
    [aux_sym_key_string_content_repeat1] = STATE(263),
    [aux_sym_integer_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_GET] = ACTIONS(67),
    [anon_sym_HEAD] = ACTIONS(67),
    [anon_sym_POST] = ACTIONS(67),
    [anon_sym_PUT] = ACTIONS(67),
    [anon_sym_DELETE] = ACTIONS(67),
    [anon_sym_CONNECT] = ACTIONS(67),
    [anon_sym_OPTIONS] = ACTIONS(67),
    [anon_sym_TRACE] = ACTIONS(67),
    [anon_sym_PATCH] = ACTIONS(67),
    [anon_sym_LINK] = ACTIONS(67),
    [anon_sym_UNLINK] = ACTIONS(67),
    [anon_sym_PURGE] = ACTIONS(67),
    [anon_sym_LOCK] = ACTIONS(67),
    [anon_sym_UNLOCK] = ACTIONS(67),
    [anon_sym_PROPFIND] = ACTIONS(67),
    [anon_sym_VIEW] = ACTIONS(67),
    [aux_sym_method_token1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(67),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(67),
    [anon_sym_HTTP_SLASH2] = ACTIONS(67),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(67),
    [anon_sym_HTTP] = ACTIONS(67),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [aux_sym_oneline_string_token1] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(63),
  },
  [4] = {
    [sym_header] = STATE(41),
    [sym_body] = STATE(126),
    [sym_request_section] = STATE(9),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_key_value] = STATE(397),
    [sym_bytes] = STATE(485),
    [sym_xml] = STATE(658),
    [sym_xml_prolog_tag] = STATE(299),
    [sym_xml_tag] = STATE(659),
    [sym_xml_open_tag] = STATE(146),
    [sym_oneline_base64] = STATE(658),
    [sym_oneline_file] = STATE(658),
    [sym_oneline_hex] = STATE(658),
    [sym_key_string] = STATE(662),
    [sym_key_string_content] = STATE(219),
    [sym_key_string_escaped_char] = STATE(263),
    [sym_oneline_string] = STATE(658),
    [sym_multiline_string] = STATE(658),
    [sym_json_value] = STATE(658),
    [sym_json_object] = STATE(661),
    [sym_json_array] = STATE(661),
    [sym_json_string] = STATE(661),
    [sym_json_number] = STATE(661),
    [sym_template] = STATE(315),
    [sym_boolean] = STATE(661),
    [sym_null] = STATE(661),
    [sym_integer] = STATE(297),
    [sym_digit] = STATE(131),
    [aux_sym_request_repeat1] = STATE(41),
    [aux_sym_request_repeat2] = STATE(9),
    [aux_sym_xml_repeat1] = STATE(299),
    [aux_sym_key_string_repeat1] = STATE(219),
    [aux_sym_key_string_content_repeat1] = STATE(263),
    [aux_sym_integer_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_GET] = ACTIONS(71),
    [anon_sym_HEAD] = ACTIONS(71),
    [anon_sym_POST] = ACTIONS(71),
    [anon_sym_PUT] = ACTIONS(71),
    [anon_sym_DELETE] = ACTIONS(71),
    [anon_sym_CONNECT] = ACTIONS(71),
    [anon_sym_OPTIONS] = ACTIONS(71),
    [anon_sym_TRACE] = ACTIONS(71),
    [anon_sym_PATCH] = ACTIONS(71),
    [anon_sym_LINK] = ACTIONS(71),
    [anon_sym_UNLINK] = ACTIONS(71),
    [anon_sym_PURGE] = ACTIONS(71),
    [anon_sym_LOCK] = ACTIONS(71),
    [anon_sym_UNLOCK] = ACTIONS(71),
    [anon_sym_PROPFIND] = ACTIONS(71),
    [anon_sym_VIEW] = ACTIONS(71),
    [aux_sym_method_token1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH2] = ACTIONS(71),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(71),
    [anon_sym_HTTP] = ACTIONS(71),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [aux_sym_oneline_string_token1] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(71),
  },
  [5] = {
    [sym_header] = STATE(41),
    [sym_body] = STATE(129),
    [sym_request_section] = STATE(10),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_key_value] = STATE(397),
    [sym_bytes] = STATE(485),
    [sym_xml] = STATE(658),
    [sym_xml_prolog_tag] = STATE(299),
    [sym_xml_tag] = STATE(659),
    [sym_xml_open_tag] = STATE(146),
    [sym_oneline_base64] = STATE(658),
    [sym_oneline_file] = STATE(658),
    [sym_oneline_hex] = STATE(658),
    [sym_key_string] = STATE(662),
    [sym_key_string_content] = STATE(219),
    [sym_key_string_escaped_char] = STATE(263),
    [sym_oneline_string] = STATE(658),
    [sym_multiline_string] = STATE(658),
    [sym_json_value] = STATE(658),
    [sym_json_object] = STATE(661),
    [sym_json_array] = STATE(661),
    [sym_json_string] = STATE(661),
    [sym_json_number] = STATE(661),
    [sym_template] = STATE(315),
    [sym_boolean] = STATE(661),
    [sym_null] = STATE(661),
    [sym_integer] = STATE(297),
    [sym_digit] = STATE(131),
    [aux_sym_request_repeat1] = STATE(41),
    [aux_sym_request_repeat2] = STATE(10),
    [aux_sym_xml_repeat1] = STATE(299),
    [aux_sym_key_string_repeat1] = STATE(219),
    [aux_sym_key_string_content_repeat1] = STATE(263),
    [aux_sym_integer_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_GET] = ACTIONS(17),
    [anon_sym_HEAD] = ACTIONS(17),
    [anon_sym_POST] = ACTIONS(17),
    [anon_sym_PUT] = ACTIONS(17),
    [anon_sym_DELETE] = ACTIONS(17),
    [anon_sym_CONNECT] = ACTIONS(17),
    [anon_sym_OPTIONS] = ACTIONS(17),
    [anon_sym_TRACE] = ACTIONS(17),
    [anon_sym_PATCH] = ACTIONS(17),
    [anon_sym_LINK] = ACTIONS(17),
    [anon_sym_UNLINK] = ACTIONS(17),
    [anon_sym_PURGE] = ACTIONS(17),
    [anon_sym_LOCK] = ACTIONS(17),
    [anon_sym_UNLOCK] = ACTIONS(17),
    [anon_sym_PROPFIND] = ACTIONS(17),
    [anon_sym_VIEW] = ACTIONS(17),
    [aux_sym_method_token1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH2] = ACTIONS(17),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(17),
    [anon_sym_HTTP] = ACTIONS(17),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [aux_sym_oneline_string_token1] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(17),
  },
  [6] = {
    [sym_predicate] = STATE(403),
    [sym_predicate_func] = STATE(644),
    [sym_equal_predicate] = STATE(642),
    [sym_not_equal_predicate] = STATE(642),
    [sym_greater_predicate] = STATE(642),
    [sym_greater_or_equal_predicate] = STATE(642),
    [sym_less_predicate] = STATE(642),
    [sym_less_or_equal_predicate] = STATE(642),
    [sym_start_with_predicate] = STATE(642),
    [sym_end_with_predicate] = STATE(642),
    [sym_contain_predicate] = STATE(642),
    [sym_match_predicate] = STATE(642),
    [sym_exist_predicate] = STATE(642),
    [sym_include_predicate] = STATE(642),
    [sym_integer_predicate] = STATE(642),
    [sym_float_predicate] = STATE(642),
    [sym_boolean_predicate] = STATE(642),
    [sym_string_predicate] = STATE(642),
    [sym_collection_predicate] = STATE(642),
    [sym_filter] = STATE(7),
    [sym_regex_filter] = STATE(74),
    [sym_count_filter] = STATE(74),
    [sym_url_encode_filter] = STATE(74),
    [sym_url_decode_filter] = STATE(74),
    [sym_html_escape_filter] = STATE(74),
    [sym_html_unescape_filter] = STATE(74),
    [sym_to_int_filter] = STATE(74),
    [sym_days_after_now_filter] = STATE(74),
    [sym_days_before_now_filter] = STATE(74),
    [sym_decode_filter] = STATE(74),
    [sym_format_filter] = STATE(74),
    [sym_nth_filter] = STATE(74),
    [sym_replace_filter] = STATE(74),
    [sym_split_filter] = STATE(74),
    [sym_to_date_filter] = STATE(74),
    [sym_xpath_filter] = STATE(74),
    [aux_sym_capture_repeat1] = STATE(7),
    [anon_sym_xpath] = ACTIONS(73),
    [anon_sym_regex] = ACTIONS(75),
    [anon_sym_not] = ACTIONS(77),
    [anon_sym_equals] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_notEquals] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_greaterThan] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_greaterThanOrEquals] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(85),
    [anon_sym_lessThan] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_lessThanOrEquals] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(89),
    [anon_sym_startsWith] = ACTIONS(91),
    [anon_sym_endsWith] = ACTIONS(93),
    [anon_sym_contains] = ACTIONS(95),
    [anon_sym_matches] = ACTIONS(97),
    [anon_sym_exists] = ACTIONS(99),
    [anon_sym_includes] = ACTIONS(101),
    [anon_sym_isInteger] = ACTIONS(103),
    [anon_sym_isFloat] = ACTIONS(105),
    [anon_sym_isBoolean] = ACTIONS(107),
    [anon_sym_isString] = ACTIONS(109),
    [anon_sym_isCollection] = ACTIONS(111),
    [anon_sym_count] = ACTIONS(113),
    [anon_sym_urlEncode] = ACTIONS(115),
    [anon_sym_urlDecode] = ACTIONS(117),
    [anon_sym_htmlEscape] = ACTIONS(119),
    [anon_sym_htmlUnescape] = ACTIONS(121),
    [anon_sym_toInt] = ACTIONS(123),
    [anon_sym_daysAfterNow] = ACTIONS(125),
    [anon_sym_daysBeforeNow] = ACTIONS(127),
    [anon_sym_decode] = ACTIONS(129),
    [anon_sym_format] = ACTIONS(131),
    [anon_sym_nth] = ACTIONS(133),
    [anon_sym_replace] = ACTIONS(135),
    [anon_sym_split] = ACTIONS(137),
    [anon_sym_toDate] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_predicate] = STATE(445),
    [sym_predicate_func] = STATE(644),
    [sym_equal_predicate] = STATE(642),
    [sym_not_equal_predicate] = STATE(642),
    [sym_greater_predicate] = STATE(642),
    [sym_greater_or_equal_predicate] = STATE(642),
    [sym_less_predicate] = STATE(642),
    [sym_less_or_equal_predicate] = STATE(642),
    [sym_start_with_predicate] = STATE(642),
    [sym_end_with_predicate] = STATE(642),
    [sym_contain_predicate] = STATE(642),
    [sym_match_predicate] = STATE(642),
    [sym_exist_predicate] = STATE(642),
    [sym_include_predicate] = STATE(642),
    [sym_integer_predicate] = STATE(642),
    [sym_float_predicate] = STATE(642),
    [sym_boolean_predicate] = STATE(642),
    [sym_string_predicate] = STATE(642),
    [sym_collection_predicate] = STATE(642),
    [sym_filter] = STATE(21),
    [sym_regex_filter] = STATE(74),
    [sym_count_filter] = STATE(74),
    [sym_url_encode_filter] = STATE(74),
    [sym_url_decode_filter] = STATE(74),
    [sym_html_escape_filter] = STATE(74),
    [sym_html_unescape_filter] = STATE(74),
    [sym_to_int_filter] = STATE(74),
    [sym_days_after_now_filter] = STATE(74),
    [sym_days_before_now_filter] = STATE(74),
    [sym_decode_filter] = STATE(74),
    [sym_format_filter] = STATE(74),
    [sym_nth_filter] = STATE(74),
    [sym_replace_filter] = STATE(74),
    [sym_split_filter] = STATE(74),
    [sym_to_date_filter] = STATE(74),
    [sym_xpath_filter] = STATE(74),
    [aux_sym_capture_repeat1] = STATE(21),
    [anon_sym_xpath] = ACTIONS(73),
    [anon_sym_regex] = ACTIONS(75),
    [anon_sym_not] = ACTIONS(77),
    [anon_sym_equals] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_notEquals] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(81),
    [anon_sym_greaterThan] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_greaterThanOrEquals] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(85),
    [anon_sym_lessThan] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_lessThanOrEquals] = ACTIONS(89),
    [anon_sym_LT_EQ] = ACTIONS(89),
    [anon_sym_startsWith] = ACTIONS(91),
    [anon_sym_endsWith] = ACTIONS(93),
    [anon_sym_contains] = ACTIONS(95),
    [anon_sym_matches] = ACTIONS(97),
    [anon_sym_exists] = ACTIONS(99),
    [anon_sym_includes] = ACTIONS(101),
    [anon_sym_isInteger] = ACTIONS(103),
    [anon_sym_isFloat] = ACTIONS(105),
    [anon_sym_isBoolean] = ACTIONS(107),
    [anon_sym_isString] = ACTIONS(109),
    [anon_sym_isCollection] = ACTIONS(111),
    [anon_sym_count] = ACTIONS(113),
    [anon_sym_urlEncode] = ACTIONS(115),
    [anon_sym_urlDecode] = ACTIONS(117),
    [anon_sym_htmlEscape] = ACTIONS(119),
    [anon_sym_htmlUnescape] = ACTIONS(121),
    [anon_sym_toInt] = ACTIONS(123),
    [anon_sym_daysAfterNow] = ACTIONS(125),
    [anon_sym_daysBeforeNow] = ACTIONS(127),
    [anon_sym_decode] = ACTIONS(129),
    [anon_sym_format] = ACTIONS(131),
    [anon_sym_nth] = ACTIONS(133),
    [anon_sym_replace] = ACTIONS(135),
    [anon_sym_split] = ACTIONS(137),
    [anon_sym_toDate] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_body] = STATE(129),
    [sym_request_section] = STATE(52),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_bytes] = STATE(485),
    [sym_xml] = STATE(658),
    [sym_xml_prolog_tag] = STATE(299),
    [sym_xml_tag] = STATE(659),
    [sym_xml_open_tag] = STATE(146),
    [sym_oneline_base64] = STATE(658),
    [sym_oneline_file] = STATE(658),
    [sym_oneline_hex] = STATE(658),
    [sym_oneline_string] = STATE(658),
    [sym_multiline_string] = STATE(658),
    [sym_json_value] = STATE(658),
    [sym_json_object] = STATE(661),
    [sym_json_array] = STATE(661),
    [sym_json_string] = STATE(661),
    [sym_json_number] = STATE(661),
    [sym_template] = STATE(661),
    [sym_boolean] = STATE(661),
    [sym_null] = STATE(661),
    [sym_integer] = STATE(297),
    [sym_digit] = STATE(131),
    [aux_sym_request_repeat2] = STATE(52),
    [aux_sym_xml_repeat1] = STATE(299),
    [aux_sym_integer_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_GET] = ACTIONS(17),
    [anon_sym_HEAD] = ACTIONS(17),
    [anon_sym_POST] = ACTIONS(17),
    [anon_sym_PUT] = ACTIONS(17),
    [anon_sym_DELETE] = ACTIONS(17),
    [anon_sym_CONNECT] = ACTIONS(17),
    [anon_sym_OPTIONS] = ACTIONS(17),
    [anon_sym_TRACE] = ACTIONS(17),
    [anon_sym_PATCH] = ACTIONS(17),
    [anon_sym_LINK] = ACTIONS(17),
    [anon_sym_UNLINK] = ACTIONS(17),
    [anon_sym_PURGE] = ACTIONS(17),
    [anon_sym_LOCK] = ACTIONS(17),
    [anon_sym_UNLOCK] = ACTIONS(17),
    [anon_sym_PROPFIND] = ACTIONS(17),
    [anon_sym_VIEW] = ACTIONS(17),
    [aux_sym_method_token1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(17),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(17),
    [anon_sym_HTTP_SLASH2] = ACTIONS(17),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(17),
    [anon_sym_HTTP] = ACTIONS(17),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [aux_sym_oneline_string_token1] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(17),
  },
  [9] = {
    [sym_body] = STATE(124),
    [sym_request_section] = STATE(52),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_bytes] = STATE(485),
    [sym_xml] = STATE(658),
    [sym_xml_prolog_tag] = STATE(299),
    [sym_xml_tag] = STATE(659),
    [sym_xml_open_tag] = STATE(146),
    [sym_oneline_base64] = STATE(658),
    [sym_oneline_file] = STATE(658),
    [sym_oneline_hex] = STATE(658),
    [sym_oneline_string] = STATE(658),
    [sym_multiline_string] = STATE(658),
    [sym_json_value] = STATE(658),
    [sym_json_object] = STATE(661),
    [sym_json_array] = STATE(661),
    [sym_json_string] = STATE(661),
    [sym_json_number] = STATE(661),
    [sym_template] = STATE(661),
    [sym_boolean] = STATE(661),
    [sym_null] = STATE(661),
    [sym_integer] = STATE(297),
    [sym_digit] = STATE(131),
    [aux_sym_request_repeat2] = STATE(52),
    [aux_sym_xml_repeat1] = STATE(299),
    [aux_sym_integer_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_LF] = ACTIONS(141),
    [anon_sym_GET] = ACTIONS(143),
    [anon_sym_HEAD] = ACTIONS(143),
    [anon_sym_POST] = ACTIONS(143),
    [anon_sym_PUT] = ACTIONS(143),
    [anon_sym_DELETE] = ACTIONS(143),
    [anon_sym_CONNECT] = ACTIONS(143),
    [anon_sym_OPTIONS] = ACTIONS(143),
    [anon_sym_TRACE] = ACTIONS(143),
    [anon_sym_PATCH] = ACTIONS(143),
    [anon_sym_LINK] = ACTIONS(143),
    [anon_sym_UNLINK] = ACTIONS(143),
    [anon_sym_PURGE] = ACTIONS(143),
    [anon_sym_LOCK] = ACTIONS(143),
    [anon_sym_UNLOCK] = ACTIONS(143),
    [anon_sym_PROPFIND] = ACTIONS(143),
    [anon_sym_VIEW] = ACTIONS(143),
    [aux_sym_method_token1] = ACTIONS(143),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(143),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(143),
    [anon_sym_HTTP_SLASH2] = ACTIONS(143),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(143),
    [anon_sym_HTTP] = ACTIONS(143),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [aux_sym_oneline_string_token1] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(143),
  },
  [10] = {
    [sym_body] = STATE(126),
    [sym_request_section] = STATE(52),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_bytes] = STATE(485),
    [sym_xml] = STATE(658),
    [sym_xml_prolog_tag] = STATE(299),
    [sym_xml_tag] = STATE(659),
    [sym_xml_open_tag] = STATE(146),
    [sym_oneline_base64] = STATE(658),
    [sym_oneline_file] = STATE(658),
    [sym_oneline_hex] = STATE(658),
    [sym_oneline_string] = STATE(658),
    [sym_multiline_string] = STATE(658),
    [sym_json_value] = STATE(658),
    [sym_json_object] = STATE(661),
    [sym_json_array] = STATE(661),
    [sym_json_string] = STATE(661),
    [sym_json_number] = STATE(661),
    [sym_template] = STATE(661),
    [sym_boolean] = STATE(661),
    [sym_null] = STATE(661),
    [sym_integer] = STATE(297),
    [sym_digit] = STATE(131),
    [aux_sym_request_repeat2] = STATE(52),
    [aux_sym_xml_repeat1] = STATE(299),
    [aux_sym_integer_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_GET] = ACTIONS(71),
    [anon_sym_HEAD] = ACTIONS(71),
    [anon_sym_POST] = ACTIONS(71),
    [anon_sym_PUT] = ACTIONS(71),
    [anon_sym_DELETE] = ACTIONS(71),
    [anon_sym_CONNECT] = ACTIONS(71),
    [anon_sym_OPTIONS] = ACTIONS(71),
    [anon_sym_TRACE] = ACTIONS(71),
    [anon_sym_PATCH] = ACTIONS(71),
    [anon_sym_LINK] = ACTIONS(71),
    [anon_sym_UNLINK] = ACTIONS(71),
    [anon_sym_PURGE] = ACTIONS(71),
    [anon_sym_LOCK] = ACTIONS(71),
    [anon_sym_UNLOCK] = ACTIONS(71),
    [anon_sym_PROPFIND] = ACTIONS(71),
    [anon_sym_VIEW] = ACTIONS(71),
    [aux_sym_method_token1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(71),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(71),
    [anon_sym_HTTP_SLASH2] = ACTIONS(71),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(71),
    [anon_sym_HTTP] = ACTIONS(71),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [aux_sym_oneline_string_token1] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(71),
  },
  [11] = {
    [sym_header] = STATE(12),
    [sym_body] = STATE(158),
    [sym_response_section] = STATE(20),
    [sym_captures_section] = STATE(114),
    [sym_asserts_section] = STATE(114),
    [sym_key_value] = STATE(427),
    [sym_bytes] = STATE(465),
    [sym_xml] = STATE(658),
    [sym_xml_prolog_tag] = STATE(299),
    [sym_xml_tag] = STATE(659),
    [sym_xml_open_tag] = STATE(146),
    [sym_oneline_base64] = STATE(658),
    [sym_oneline_file] = STATE(658),
    [sym_oneline_hex] = STATE(658),
    [sym_key_string] = STATE(662),
    [sym_key_string_content] = STATE(219),
    [sym_key_string_escaped_char] = STATE(263),
    [sym_oneline_string] = STATE(658),
    [sym_multiline_string] = STATE(658),
    [sym_json_value] = STATE(658),
    [sym_json_object] = STATE(661),
    [sym_json_array] = STATE(661),
    [sym_json_string] = STATE(661),
    [sym_json_number] = STATE(661),
    [sym_template] = STATE(315),
    [sym_boolean] = STATE(661),
    [sym_null] = STATE(661),
    [sym_integer] = STATE(297),
    [sym_digit] = STATE(131),
    [aux_sym_request_repeat1] = STATE(12),
    [aux_sym_response_repeat1] = STATE(20),
    [aux_sym_xml_repeat1] = STATE(299),
    [aux_sym_key_string_repeat1] = STATE(219),
    [aux_sym_key_string_content_repeat1] = STATE(263),
    [aux_sym_integer_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_LF] = ACTIONS(145),
    [anon_sym_GET] = ACTIONS(147),
    [anon_sym_HEAD] = ACTIONS(147),
    [anon_sym_POST] = ACTIONS(147),
    [anon_sym_PUT] = ACTIONS(147),
    [anon_sym_DELETE] = ACTIONS(147),
    [anon_sym_CONNECT] = ACTIONS(147),
    [anon_sym_OPTIONS] = ACTIONS(147),
    [anon_sym_TRACE] = ACTIONS(147),
    [anon_sym_PATCH] = ACTIONS(147),
    [anon_sym_LINK] = ACTIONS(147),
    [anon_sym_UNLINK] = ACTIONS(147),
    [anon_sym_PURGE] = ACTIONS(147),
    [anon_sym_LOCK] = ACTIONS(147),
    [anon_sym_UNLOCK] = ACTIONS(147),
    [anon_sym_PROPFIND] = ACTIONS(147),
    [anon_sym_VIEW] = ACTIONS(147),
    [aux_sym_method_token1] = ACTIONS(147),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(151),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [aux_sym_oneline_string_token1] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(147),
  },
  [12] = {
    [sym_header] = STATE(63),
    [sym_body] = STATE(153),
    [sym_response_section] = STATE(19),
    [sym_captures_section] = STATE(114),
    [sym_asserts_section] = STATE(114),
    [sym_key_value] = STATE(427),
    [sym_bytes] = STATE(465),
    [sym_xml] = STATE(658),
    [sym_xml_prolog_tag] = STATE(299),
    [sym_xml_tag] = STATE(659),
    [sym_xml_open_tag] = STATE(146),
    [sym_oneline_base64] = STATE(658),
    [sym_oneline_file] = STATE(658),
    [sym_oneline_hex] = STATE(658),
    [sym_key_string] = STATE(662),
    [sym_key_string_content] = STATE(219),
    [sym_key_string_escaped_char] = STATE(263),
    [sym_oneline_string] = STATE(658),
    [sym_multiline_string] = STATE(658),
    [sym_json_value] = STATE(658),
    [sym_json_object] = STATE(661),
    [sym_json_array] = STATE(661),
    [sym_json_string] = STATE(661),
    [sym_json_number] = STATE(661),
    [sym_template] = STATE(315),
    [sym_boolean] = STATE(661),
    [sym_null] = STATE(661),
    [sym_integer] = STATE(297),
    [sym_digit] = STATE(131),
    [aux_sym_request_repeat1] = STATE(63),
    [aux_sym_response_repeat1] = STATE(19),
    [aux_sym_xml_repeat1] = STATE(299),
    [aux_sym_key_string_repeat1] = STATE(219),
    [aux_sym_key_string_content_repeat1] = STATE(263),
    [aux_sym_integer_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(153),
    [anon_sym_GET] = ACTIONS(155),
    [anon_sym_HEAD] = ACTIONS(155),
    [anon_sym_POST] = ACTIONS(155),
    [anon_sym_PUT] = ACTIONS(155),
    [anon_sym_DELETE] = ACTIONS(155),
    [anon_sym_CONNECT] = ACTIONS(155),
    [anon_sym_OPTIONS] = ACTIONS(155),
    [anon_sym_TRACE] = ACTIONS(155),
    [anon_sym_PATCH] = ACTIONS(155),
    [anon_sym_LINK] = ACTIONS(155),
    [anon_sym_UNLINK] = ACTIONS(155),
    [anon_sym_PURGE] = ACTIONS(155),
    [anon_sym_LOCK] = ACTIONS(155),
    [anon_sym_UNLOCK] = ACTIONS(155),
    [anon_sym_PROPFIND] = ACTIONS(155),
    [anon_sym_VIEW] = ACTIONS(155),
    [aux_sym_method_token1] = ACTIONS(155),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(151),
    [anon_sym_file_COMMA] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_QMARK] = ACTIONS(35),
    [anon_sym_base64_COMMA] = ACTIONS(37),
    [anon_sym_hex_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_key_string_text] = ACTIONS(43),
    [anon_sym_BSLASH2] = ACTIONS(45),
    [aux_sym_oneline_string_token1] = ACTIONS(47),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(59),
    [aux_sym_digit_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(155),
  },
  [13] = {
    [sym_option] = STATE(14),
    [sym_ca_certificate_option] = STATE(24),
    [sym_compressed_option] = STATE(24),
    [sym_follow_redirect_option] = STATE(24),
    [sym_insecure_option] = STATE(24),
    [sym_max_redirs_option] = STATE(24),
    [sym_path_as_is_option] = STATE(24),
    [sym_proxy_option] = STATE(24),
    [sym_retry_option] = STATE(24),
    [sym_retry_interval_option] = STATE(24),
    [sym_retry_max_count_option] = STATE(24),
    [sym_variable_option] = STATE(24),
    [sym_verbose_option] = STATE(24),
    [sym_very_verbose_option] = STATE(24),
    [aux_sym_options_section_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [anon_sym_GET] = ACTIONS(159),
    [anon_sym_HEAD] = ACTIONS(159),
    [anon_sym_POST] = ACTIONS(159),
    [anon_sym_PUT] = ACTIONS(159),
    [anon_sym_DELETE] = ACTIONS(159),
    [anon_sym_CONNECT] = ACTIONS(159),
    [anon_sym_OPTIONS] = ACTIONS(159),
    [anon_sym_TRACE] = ACTIONS(159),
    [anon_sym_PATCH] = ACTIONS(159),
    [anon_sym_LINK] = ACTIONS(159),
    [anon_sym_UNLINK] = ACTIONS(159),
    [anon_sym_PURGE] = ACTIONS(159),
    [anon_sym_LOCK] = ACTIONS(159),
    [anon_sym_UNLOCK] = ACTIONS(159),
    [anon_sym_PROPFIND] = ACTIONS(159),
    [anon_sym_VIEW] = ACTIONS(159),
    [aux_sym_method_token1] = ACTIONS(159),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(159),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(159),
    [anon_sym_HTTP_SLASH2] = ACTIONS(159),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(159),
    [anon_sym_HTTP] = ACTIONS(159),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(159),
    [anon_sym_file_COMMA] = ACTIONS(159),
    [anon_sym_cacert] = ACTIONS(161),
    [anon_sym_compressed] = ACTIONS(163),
    [anon_sym_location] = ACTIONS(165),
    [anon_sym_insecure] = ACTIONS(167),
    [anon_sym_max_DASHredirs] = ACTIONS(169),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(171),
    [anon_sym_proxy] = ACTIONS(173),
    [anon_sym_retry] = ACTIONS(175),
    [anon_sym_retry_DASHinterval] = ACTIONS(177),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(179),
    [anon_sym_variable] = ACTIONS(181),
    [anon_sym_verbose] = ACTIONS(183),
    [anon_sym_very_DASHverbose] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(159),
    [anon_sym_LT_QMARK] = ACTIONS(159),
    [anon_sym_base64_COMMA] = ACTIONS(159),
    [anon_sym_hex_COMMA] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [aux_sym_oneline_string_token1] = ACTIONS(159),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [anon_sym_null] = ACTIONS(159),
    [aux_sym_digit_token1] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
  },
  [14] = {
    [sym_option] = STATE(14),
    [sym_ca_certificate_option] = STATE(24),
    [sym_compressed_option] = STATE(24),
    [sym_follow_redirect_option] = STATE(24),
    [sym_insecure_option] = STATE(24),
    [sym_max_redirs_option] = STATE(24),
    [sym_path_as_is_option] = STATE(24),
    [sym_proxy_option] = STATE(24),
    [sym_retry_option] = STATE(24),
    [sym_retry_interval_option] = STATE(24),
    [sym_retry_max_count_option] = STATE(24),
    [sym_variable_option] = STATE(24),
    [sym_verbose_option] = STATE(24),
    [sym_very_verbose_option] = STATE(24),
    [aux_sym_options_section_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_GET] = ACTIONS(189),
    [anon_sym_HEAD] = ACTIONS(189),
    [anon_sym_POST] = ACTIONS(189),
    [anon_sym_PUT] = ACTIONS(189),
    [anon_sym_DELETE] = ACTIONS(189),
    [anon_sym_CONNECT] = ACTIONS(189),
    [anon_sym_OPTIONS] = ACTIONS(189),
    [anon_sym_TRACE] = ACTIONS(189),
    [anon_sym_PATCH] = ACTIONS(189),
    [anon_sym_LINK] = ACTIONS(189),
    [anon_sym_UNLINK] = ACTIONS(189),
    [anon_sym_PURGE] = ACTIONS(189),
    [anon_sym_LOCK] = ACTIONS(189),
    [anon_sym_UNLOCK] = ACTIONS(189),
    [anon_sym_PROPFIND] = ACTIONS(189),
    [anon_sym_VIEW] = ACTIONS(189),
    [aux_sym_method_token1] = ACTIONS(189),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(189),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(189),
    [anon_sym_HTTP_SLASH2] = ACTIONS(189),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(189),
    [anon_sym_HTTP] = ACTIONS(189),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(189),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(189),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(189),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(189),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(189),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(189),
    [anon_sym_file_COMMA] = ACTIONS(189),
    [anon_sym_cacert] = ACTIONS(191),
    [anon_sym_compressed] = ACTIONS(194),
    [anon_sym_location] = ACTIONS(197),
    [anon_sym_insecure] = ACTIONS(200),
    [anon_sym_max_DASHredirs] = ACTIONS(203),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(206),
    [anon_sym_proxy] = ACTIONS(209),
    [anon_sym_retry] = ACTIONS(212),
    [anon_sym_retry_DASHinterval] = ACTIONS(215),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(218),
    [anon_sym_variable] = ACTIONS(221),
    [anon_sym_verbose] = ACTIONS(224),
    [anon_sym_very_DASHverbose] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LT_QMARK] = ACTIONS(189),
    [anon_sym_base64_COMMA] = ACTIONS(189),
    [anon_sym_hex_COMMA] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [aux_sym_oneline_string_token1] = ACTIONS(189),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_null] = ACTIONS(189),
    [aux_sym_digit_token1] = ACTIONS(189),
    [sym_comment] = ACTIONS(189),
  },
  [15] = {
    [sym_option] = STATE(13),
    [sym_ca_certificate_option] = STATE(24),
    [sym_compressed_option] = STATE(24),
    [sym_follow_redirect_option] = STATE(24),
    [sym_insecure_option] = STATE(24),
    [sym_max_redirs_option] = STATE(24),
    [sym_path_as_is_option] = STATE(24),
    [sym_proxy_option] = STATE(24),
    [sym_retry_option] = STATE(24),
    [sym_retry_interval_option] = STATE(24),
    [sym_retry_max_count_option] = STATE(24),
    [sym_variable_option] = STATE(24),
    [sym_verbose_option] = STATE(24),
    [sym_very_verbose_option] = STATE(24),
    [aux_sym_options_section_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_LF] = ACTIONS(230),
    [anon_sym_GET] = ACTIONS(232),
    [anon_sym_HEAD] = ACTIONS(232),
    [anon_sym_POST] = ACTIONS(232),
    [anon_sym_PUT] = ACTIONS(232),
    [anon_sym_DELETE] = ACTIONS(232),
    [anon_sym_CONNECT] = ACTIONS(232),
    [anon_sym_OPTIONS] = ACTIONS(232),
    [anon_sym_TRACE] = ACTIONS(232),
    [anon_sym_PATCH] = ACTIONS(232),
    [anon_sym_LINK] = ACTIONS(232),
    [anon_sym_UNLINK] = ACTIONS(232),
    [anon_sym_PURGE] = ACTIONS(232),
    [anon_sym_LOCK] = ACTIONS(232),
    [anon_sym_UNLOCK] = ACTIONS(232),
    [anon_sym_PROPFIND] = ACTIONS(232),
    [anon_sym_VIEW] = ACTIONS(232),
    [aux_sym_method_token1] = ACTIONS(232),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(232),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(232),
    [anon_sym_HTTP_SLASH2] = ACTIONS(232),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(232),
    [anon_sym_HTTP] = ACTIONS(232),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(232),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(232),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(232),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(232),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(232),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(232),
    [anon_sym_file_COMMA] = ACTIONS(232),
    [anon_sym_cacert] = ACTIONS(161),
    [anon_sym_compressed] = ACTIONS(163),
    [anon_sym_location] = ACTIONS(165),
    [anon_sym_insecure] = ACTIONS(167),
    [anon_sym_max_DASHredirs] = ACTIONS(169),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(171),
    [anon_sym_proxy] = ACTIONS(173),
    [anon_sym_retry] = ACTIONS(175),
    [anon_sym_retry_DASHinterval] = ACTIONS(177),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(179),
    [anon_sym_variable] = ACTIONS(181),
    [anon_sym_verbose] = ACTIONS(183),
    [anon_sym_very_DASHverbose] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(232),
    [anon_sym_LT_QMARK] = ACTIONS(232),
    [anon_sym_base64_COMMA] = ACTIONS(232),
    [anon_sym_hex_COMMA] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [aux_sym_oneline_string_token1] = ACTIONS(232),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(232),
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(230),
    [anon_sym_true] = ACTIONS(232),
    [anon_sym_false] = ACTIONS(232),
    [anon_sym_null] = ACTIONS(232),
    [aux_sym_digit_token1] = ACTIONS(232),
    [sym_comment] = ACTIONS(232),
  },
  [16] = {
    [sym_assert] = STATE(17),
    [sym_query] = STATE(6),
    [sym_status_query] = STATE(98),
    [sym_url_query] = STATE(98),
    [sym_header_query] = STATE(98),
    [sym_cookie_query] = STATE(98),
    [sym_body_query] = STATE(98),
    [sym_xpath_query] = STATE(98),
    [sym_jsonpath_query] = STATE(98),
    [sym_regex_query] = STATE(98),
    [sym_variable_query] = STATE(98),
    [sym_duration_query] = STATE(98),
    [sym_sha256_query] = STATE(98),
    [sym_md5_query] = STATE(98),
    [sym_bytes_query] = STATE(98),
    [aux_sym_asserts_section_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_LF] = ACTIONS(234),
    [anon_sym_GET] = ACTIONS(236),
    [anon_sym_HEAD] = ACTIONS(236),
    [anon_sym_POST] = ACTIONS(236),
    [anon_sym_PUT] = ACTIONS(236),
    [anon_sym_DELETE] = ACTIONS(236),
    [anon_sym_CONNECT] = ACTIONS(236),
    [anon_sym_OPTIONS] = ACTIONS(236),
    [anon_sym_TRACE] = ACTIONS(236),
    [anon_sym_PATCH] = ACTIONS(236),
    [anon_sym_LINK] = ACTIONS(236),
    [anon_sym_UNLINK] = ACTIONS(236),
    [anon_sym_PURGE] = ACTIONS(236),
    [anon_sym_LOCK] = ACTIONS(236),
    [anon_sym_UNLOCK] = ACTIONS(236),
    [anon_sym_PROPFIND] = ACTIONS(236),
    [anon_sym_VIEW] = ACTIONS(236),
    [aux_sym_method_token1] = ACTIONS(236),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(236),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(236),
    [anon_sym_file_COMMA] = ACTIONS(236),
    [anon_sym_variable] = ACTIONS(238),
    [anon_sym_status] = ACTIONS(240),
    [anon_sym_url] = ACTIONS(242),
    [anon_sym_header] = ACTIONS(244),
    [anon_sym_cookie] = ACTIONS(246),
    [anon_sym_body] = ACTIONS(248),
    [anon_sym_xpath] = ACTIONS(250),
    [anon_sym_jsonpath] = ACTIONS(252),
    [anon_sym_regex] = ACTIONS(254),
    [anon_sym_duration] = ACTIONS(256),
    [anon_sym_sha256] = ACTIONS(258),
    [anon_sym_md5] = ACTIONS(260),
    [anon_sym_bytes] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_LT_QMARK] = ACTIONS(236),
    [anon_sym_base64_COMMA] = ACTIONS(236),
    [anon_sym_hex_COMMA] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [aux_sym_oneline_string_token1] = ACTIONS(236),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(236),
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(234),
    [anon_sym_true] = ACTIONS(236),
    [anon_sym_false] = ACTIONS(236),
    [anon_sym_null] = ACTIONS(236),
    [aux_sym_digit_token1] = ACTIONS(236),
    [sym_comment] = ACTIONS(236),
  },
  [17] = {
    [sym_assert] = STATE(17),
    [sym_query] = STATE(6),
    [sym_status_query] = STATE(98),
    [sym_url_query] = STATE(98),
    [sym_header_query] = STATE(98),
    [sym_cookie_query] = STATE(98),
    [sym_body_query] = STATE(98),
    [sym_xpath_query] = STATE(98),
    [sym_jsonpath_query] = STATE(98),
    [sym_regex_query] = STATE(98),
    [sym_variable_query] = STATE(98),
    [sym_duration_query] = STATE(98),
    [sym_sha256_query] = STATE(98),
    [sym_md5_query] = STATE(98),
    [sym_bytes_query] = STATE(98),
    [aux_sym_asserts_section_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_LF] = ACTIONS(264),
    [anon_sym_GET] = ACTIONS(266),
    [anon_sym_HEAD] = ACTIONS(266),
    [anon_sym_POST] = ACTIONS(266),
    [anon_sym_PUT] = ACTIONS(266),
    [anon_sym_DELETE] = ACTIONS(266),
    [anon_sym_CONNECT] = ACTIONS(266),
    [anon_sym_OPTIONS] = ACTIONS(266),
    [anon_sym_TRACE] = ACTIONS(266),
    [anon_sym_PATCH] = ACTIONS(266),
    [anon_sym_LINK] = ACTIONS(266),
    [anon_sym_UNLINK] = ACTIONS(266),
    [anon_sym_PURGE] = ACTIONS(266),
    [anon_sym_LOCK] = ACTIONS(266),
    [anon_sym_UNLOCK] = ACTIONS(266),
    [anon_sym_PROPFIND] = ACTIONS(266),
    [anon_sym_VIEW] = ACTIONS(266),
    [aux_sym_method_token1] = ACTIONS(266),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(266),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(266),
    [anon_sym_file_COMMA] = ACTIONS(266),
    [anon_sym_variable] = ACTIONS(268),
    [anon_sym_status] = ACTIONS(271),
    [anon_sym_url] = ACTIONS(274),
    [anon_sym_header] = ACTIONS(277),
    [anon_sym_cookie] = ACTIONS(280),
    [anon_sym_body] = ACTIONS(283),
    [anon_sym_xpath] = ACTIONS(286),
    [anon_sym_jsonpath] = ACTIONS(289),
    [anon_sym_regex] = ACTIONS(292),
    [anon_sym_duration] = ACTIONS(295),
    [anon_sym_sha256] = ACTIONS(298),
    [anon_sym_md5] = ACTIONS(301),
    [anon_sym_bytes] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(266),
    [anon_sym_LT_QMARK] = ACTIONS(266),
    [anon_sym_base64_COMMA] = ACTIONS(266),
    [anon_sym_hex_COMMA] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [aux_sym_oneline_string_token1] = ACTIONS(266),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(266),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(264),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(266),
    [anon_sym_null] = ACTIONS(266),
    [aux_sym_digit_token1] = ACTIONS(266),
    [sym_comment] = ACTIONS(266),
  },
  [18] = {
    [sym_assert] = STATE(16),
    [sym_query] = STATE(6),
    [sym_status_query] = STATE(98),
    [sym_url_query] = STATE(98),
    [sym_header_query] = STATE(98),
    [sym_cookie_query] = STATE(98),
    [sym_body_query] = STATE(98),
    [sym_xpath_query] = STATE(98),
    [sym_jsonpath_query] = STATE(98),
    [sym_regex_query] = STATE(98),
    [sym_variable_query] = STATE(98),
    [sym_duration_query] = STATE(98),
    [sym_sha256_query] = STATE(98),
    [sym_md5_query] = STATE(98),
    [sym_bytes_query] = STATE(98),
    [aux_sym_asserts_section_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_LF] = ACTIONS(307),
    [anon_sym_GET] = ACTIONS(309),
    [anon_sym_HEAD] = ACTIONS(309),
    [anon_sym_POST] = ACTIONS(309),
    [anon_sym_PUT] = ACTIONS(309),
    [anon_sym_DELETE] = ACTIONS(309),
    [anon_sym_CONNECT] = ACTIONS(309),
    [anon_sym_OPTIONS] = ACTIONS(309),
    [anon_sym_TRACE] = ACTIONS(309),
    [anon_sym_PATCH] = ACTIONS(309),
    [anon_sym_LINK] = ACTIONS(309),
    [anon_sym_UNLINK] = ACTIONS(309),
    [anon_sym_PURGE] = ACTIONS(309),
    [anon_sym_LOCK] = ACTIONS(309),
    [anon_sym_UNLOCK] = ACTIONS(309),
    [anon_sym_PROPFIND] = ACTIONS(309),
    [anon_sym_VIEW] = ACTIONS(309),
    [aux_sym_method_token1] = ACTIONS(309),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(309),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(309),
    [anon_sym_file_COMMA] = ACTIONS(309),
    [anon_sym_variable] = ACTIONS(238),
    [anon_sym_status] = ACTIONS(240),
    [anon_sym_url] = ACTIONS(242),
    [anon_sym_header] = ACTIONS(244),
    [anon_sym_cookie] = ACTIONS(246),
    [anon_sym_body] = ACTIONS(248),
    [anon_sym_xpath] = ACTIONS(250),
    [anon_sym_jsonpath] = ACTIONS(252),
    [anon_sym_regex] = ACTIONS(254),
    [anon_sym_duration] = ACTIONS(256),
    [anon_sym_sha256] = ACTIONS(258),
    [anon_sym_md5] = ACTIONS(260),
    [anon_sym_bytes] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_LT_QMARK] = ACTIONS(309),
    [anon_sym_base64_COMMA] = ACTIONS(309),
    [anon_sym_hex_COMMA] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [aux_sym_oneline_string_token1] = ACTIONS(309),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(307),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [anon_sym_null] = ACTIONS(309),
    [aux_sym_digit_token1] = ACTIONS(309),
    [sym_comment] = ACTIONS(309),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(31), 1,
      anon_sym_file_COMMA,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_LT_QMARK,
    ACTIONS(37), 1,
      anon_sym_base64_COMMA,
    ACTIONS(39), 1,
      anon_sym_hex_COMMA,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      aux_sym_oneline_string_token1,
    ACTIONS(49), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(149), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(151), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(146), 1,
      sym_xml_open_tag,
    STATE(147), 1,
      sym_body,
    STATE(297), 1,
      sym_integer,
    STATE(465), 1,
      sym_bytes,
    STATE(659), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(94), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(114), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(299), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(658), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(661), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    ACTIONS(313), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [123] = 29,
    ACTIONS(31), 1,
      anon_sym_file_COMMA,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_LT_QMARK,
    ACTIONS(37), 1,
      anon_sym_base64_COMMA,
    ACTIONS(39), 1,
      anon_sym_hex_COMMA,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      aux_sym_oneline_string_token1,
    ACTIONS(49), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(149), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(151), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(146), 1,
      sym_xml_open_tag,
    STATE(153), 1,
      sym_body,
    STATE(297), 1,
      sym_integer,
    STATE(465), 1,
      sym_bytes,
    STATE(659), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(94), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(114), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(299), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(658), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(661), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    ACTIONS(155), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [246] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_xpath,
    ACTIONS(318), 1,
      anon_sym_regex,
    ACTIONS(325), 1,
      anon_sym_count,
    ACTIONS(328), 1,
      anon_sym_urlEncode,
    ACTIONS(331), 1,
      anon_sym_urlDecode,
    ACTIONS(334), 1,
      anon_sym_htmlEscape,
    ACTIONS(337), 1,
      anon_sym_htmlUnescape,
    ACTIONS(340), 1,
      anon_sym_toInt,
    ACTIONS(343), 1,
      anon_sym_daysAfterNow,
    ACTIONS(346), 1,
      anon_sym_daysBeforeNow,
    ACTIONS(349), 1,
      anon_sym_decode,
    ACTIONS(352), 1,
      anon_sym_format,
    ACTIONS(355), 1,
      anon_sym_nth,
    ACTIONS(358), 1,
      anon_sym_replace,
    ACTIONS(361), 1,
      anon_sym_split,
    ACTIONS(364), 1,
      anon_sym_toDate,
    STATE(21), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(321), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(74), 16,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_escape_filter,
      sym_html_unescape_filter,
      sym_to_int_filter,
      sym_days_after_now_filter,
      sym_days_before_now_filter,
      sym_decode_filter,
      sym_format_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_to_date_filter,
      sym_xpath_filter,
    ACTIONS(323), 20,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
  [349] = 5,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(374), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(372), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [420] = 5,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(381), 55,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [491] = 2,
    ACTIONS(385), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(387), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [555] = 2,
    ACTIONS(389), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(391), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [619] = 2,
    ACTIONS(393), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(395), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [683] = 2,
    ACTIONS(397), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(399), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [747] = 2,
    ACTIONS(401), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(403), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [811] = 2,
    ACTIONS(405), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(407), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [875] = 2,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(411), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [939] = 2,
    ACTIONS(413), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(415), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1003] = 2,
    ACTIONS(417), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(419), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1067] = 2,
    ACTIONS(421), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(423), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1131] = 2,
    ACTIONS(425), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(427), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1195] = 2,
    ACTIONS(429), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(431), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1259] = 2,
    ACTIONS(433), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(435), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1323] = 2,
    ACTIONS(437), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(439), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1387] = 2,
    ACTIONS(441), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(443), 56,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_cacert,
      anon_sym_compressed,
      anon_sym_location,
      anon_sym_insecure,
      anon_sym_max_DASHredirs,
      anon_sym_path_DASHas_DASHis,
      anon_sym_proxy,
      anon_sym_retry,
      anon_sym_retry_DASHinterval,
      anon_sym_retry_DASHmax_DASHcount,
      anon_sym_variable,
      anon_sym_verbose,
      anon_sym_very_DASHverbose,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1451] = 10,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(533), 1,
      sym_key_string,
    STATE(611), 1,
      sym_multipart_form_data_param,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(566), 2,
      sym_key_value,
      sym_file_param,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(447), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1529] = 10,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(533), 1,
      sym_key_string,
    STATE(611), 1,
      sym_multipart_form_data_param,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(566), 2,
      sym_key_value,
      sym_file_param,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(453), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1607] = 10,
    ACTIONS(459), 1,
      sym_key_string_text,
    ACTIONS(462), 1,
      anon_sym_BSLASH2,
    ACTIONS(465), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(397), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(41), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(457), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1685] = 10,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(533), 1,
      sym_key_string,
    STATE(611), 1,
      sym_multipart_form_data_param,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(566), 2,
      sym_key_value,
      sym_file_param,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(470), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1763] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(639), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    ACTIONS(472), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(474), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1837] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(639), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(478), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1911] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(639), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(482), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [1985] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(639), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(486), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2059] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(639), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(490), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2133] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(639), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(494), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2207] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(639), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(498), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2281] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(639), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(502), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2355] = 9,
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(639), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(506), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2429] = 10,
    ACTIONS(512), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(515), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(518), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(521), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    ACTIONS(524), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(527), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(52), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(508), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(68), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(510), 37,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2504] = 6,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(537), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(53), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(530), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(535), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2568] = 5,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(543), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(372), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_body,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_duration,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_bytes,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2630] = 5,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(548), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(381), 46,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_body,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_duration,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_bytes,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2692] = 2,
    ACTIONS(550), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(552), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_body,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_duration,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_bytes,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2747] = 2,
    ACTIONS(554), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(556), 47,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_body,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
      anon_sym_duration,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_bytes,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [2802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      aux_sym_digit_token1,
    STATE(58), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(560), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(558), 40,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      anon_sym_DOT,
      anon_sym_E,
  [2863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
    STATE(58), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(567), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(565), 40,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      anon_sym_DOT,
      anon_sym_E,
  [2924] = 5,
    ACTIONS(571), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(367), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(372), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [2984] = 5,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(377), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(381), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [3044] = 2,
    ACTIONS(581), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(583), 44,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3097] = 10,
    ACTIONS(459), 1,
      sym_key_string_text,
    ACTIONS(462), 1,
      anon_sym_BSLASH2,
    ACTIONS(465), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(427), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(63), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(457), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(585), 41,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_E,
  [3221] = 9,
    ACTIONS(593), 1,
      sym_key_string_text,
    ACTIONS(595), 1,
      anon_sym_BSLASH2,
    ACTIONS(597), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    ACTIONS(589), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(67), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(280), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(237), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(591), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3287] = 9,
    ACTIONS(603), 1,
      sym_key_string_text,
    ACTIONS(606), 1,
      anon_sym_BSLASH2,
    ACTIONS(609), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(66), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(280), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(237), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(601), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3353] = 9,
    ACTIONS(593), 1,
      sym_key_string_text,
    ACTIONS(595), 1,
      anon_sym_BSLASH2,
    ACTIONS(597), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(597), 1,
      sym_key_string,
    ACTIONS(612), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(66), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(280), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(237), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(614), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3419] = 2,
    ACTIONS(616), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(618), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3470] = 2,
    ACTIONS(620), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(622), 43,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      anon_sym_LBRACKBasicAuth_RBRACK,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKMultipartFormData_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      anon_sym_LBRACKOptions_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [3521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(624), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [3571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(628), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [3621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(632), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [3671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(636), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [3721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(640), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [3770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(644), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [3819] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_startsWith,
    ACTIONS(93), 1,
      anon_sym_endsWith,
    ACTIONS(95), 1,
      anon_sym_contains,
    ACTIONS(97), 1,
      anon_sym_matches,
    ACTIONS(99), 1,
      anon_sym_exists,
    ACTIONS(101), 1,
      anon_sym_includes,
    ACTIONS(103), 1,
      anon_sym_isInteger,
    ACTIONS(105), 1,
      anon_sym_isFloat,
    ACTIONS(107), 1,
      anon_sym_isBoolean,
    ACTIONS(109), 1,
      anon_sym_isString,
    ACTIONS(111), 1,
      anon_sym_isCollection,
    STATE(591), 1,
      sym_predicate_func,
    ACTIONS(79), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(81), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(83), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(85), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(87), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(89), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(642), 17,
      sym_equal_predicate,
      sym_not_equal_predicate,
      sym_greater_predicate,
      sym_greater_or_equal_predicate,
      sym_less_predicate,
      sym_less_or_equal_predicate,
      sym_start_with_predicate,
      sym_end_with_predicate,
      sym_contain_predicate,
      sym_match_predicate,
      sym_exist_predicate,
      sym_include_predicate,
      sym_integer_predicate,
      sym_float_predicate,
      sym_boolean_predicate,
      sym_string_predicate,
      sym_collection_predicate,
  [3902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(648), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [3951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(652), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(656), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(660), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(664), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(668), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(672), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(676), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(680), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(684), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(688), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(692), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(696), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(700), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(704), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(708), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(712), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4733] = 6,
    ACTIONS(720), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(723), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(94), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(114), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(716), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(718), 32,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [4787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(726), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(730), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(734), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(738), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [4979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(742), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [5027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(746), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [5075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(750), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [5123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(754), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [5171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(758), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [5219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(762), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [5267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(766), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [5315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(770), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_equals,
      anon_sym_EQ_EQ,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
      anon_sym_startsWith,
      anon_sym_endsWith,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_exists,
      anon_sym_includes,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [5363] = 5,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(777), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(367), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(372), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5414] = 5,
    ACTIONS(780), 1,
      anon_sym_LF,
    ACTIONS(782), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(377), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(381), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
  [5465] = 2,
    ACTIONS(581), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(583), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [5509] = 2,
    ACTIONS(784), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [5553] = 2,
    ACTIONS(788), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(790), 35,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      sym_key_string_text,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [5597] = 22,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(794), 1,
      anon_sym_xpath,
    ACTIONS(796), 1,
      anon_sym_regex,
    ACTIONS(798), 1,
      anon_sym_count,
    ACTIONS(800), 1,
      anon_sym_urlEncode,
    ACTIONS(802), 1,
      anon_sym_urlDecode,
    ACTIONS(804), 1,
      anon_sym_htmlEscape,
    ACTIONS(806), 1,
      anon_sym_htmlUnescape,
    ACTIONS(808), 1,
      anon_sym_toInt,
    ACTIONS(810), 1,
      anon_sym_daysAfterNow,
    ACTIONS(812), 1,
      anon_sym_daysBeforeNow,
    ACTIONS(814), 1,
      anon_sym_decode,
    ACTIONS(816), 1,
      anon_sym_format,
    ACTIONS(818), 1,
      anon_sym_nth,
    ACTIONS(820), 1,
      anon_sym_replace,
    ACTIONS(822), 1,
      anon_sym_split,
    ACTIONS(824), 1,
      anon_sym_toDate,
    ACTIONS(826), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(111), 1,
      sym__comment_or_new_line,
    STATE(113), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(182), 16,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_escape_filter,
      sym_html_unescape_filter,
      sym_to_int_filter,
      sym_days_after_now_filter,
      sym_days_before_now_filter,
      sym_decode_filter,
      sym_format_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_to_date_filter,
      sym_xpath_filter,
  [5680] = 22,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(794), 1,
      anon_sym_xpath,
    ACTIONS(796), 1,
      anon_sym_regex,
    ACTIONS(798), 1,
      anon_sym_count,
    ACTIONS(800), 1,
      anon_sym_urlEncode,
    ACTIONS(802), 1,
      anon_sym_urlDecode,
    ACTIONS(804), 1,
      anon_sym_htmlEscape,
    ACTIONS(806), 1,
      anon_sym_htmlUnescape,
    ACTIONS(808), 1,
      anon_sym_toInt,
    ACTIONS(810), 1,
      anon_sym_daysAfterNow,
    ACTIONS(812), 1,
      anon_sym_daysBeforeNow,
    ACTIONS(814), 1,
      anon_sym_decode,
    ACTIONS(816), 1,
      anon_sym_format,
    ACTIONS(818), 1,
      anon_sym_nth,
    ACTIONS(820), 1,
      anon_sym_replace,
    ACTIONS(822), 1,
      anon_sym_split,
    ACTIONS(824), 1,
      anon_sym_toDate,
    ACTIONS(826), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(110), 1,
      sym__comment_or_new_line,
    STATE(116), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(182), 16,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_escape_filter,
      sym_html_unescape_filter,
      sym_to_int_filter,
      sym_days_after_now_filter,
      sym_days_before_now_filter,
      sym_decode_filter,
      sym_format_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_to_date_filter,
      sym_xpath_filter,
  [5763] = 2,
    ACTIONS(828), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(830), 34,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_LBRACKCaptures_RBRACK,
      anon_sym_LBRACKAsserts_RBRACK,
      anon_sym_file_COMMA,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_base64_COMMA,
      anon_sym_hex_COMMA,
      anon_sym_DQUOTE,
      aux_sym_oneline_string_token1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      aux_sym_digit_token1,
      sym_comment,
  [5805] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_xpath,
    ACTIONS(75), 1,
      anon_sym_regex,
    ACTIONS(113), 1,
      anon_sym_count,
    ACTIONS(115), 1,
      anon_sym_urlEncode,
    ACTIONS(117), 1,
      anon_sym_urlDecode,
    ACTIONS(119), 1,
      anon_sym_htmlEscape,
    ACTIONS(121), 1,
      anon_sym_htmlUnescape,
    ACTIONS(123), 1,
      anon_sym_toInt,
    ACTIONS(125), 1,
      anon_sym_daysAfterNow,
    ACTIONS(127), 1,
      anon_sym_daysBeforeNow,
    ACTIONS(129), 1,
      anon_sym_decode,
    ACTIONS(131), 1,
      anon_sym_format,
    ACTIONS(133), 1,
      anon_sym_nth,
    ACTIONS(135), 1,
      anon_sym_replace,
    ACTIONS(137), 1,
      anon_sym_split,
    ACTIONS(139), 1,
      anon_sym_toDate,
    ACTIONS(832), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(117), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 16,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_escape_filter,
      sym_html_unescape_filter,
      sym_to_int_filter,
      sym_days_after_now_filter,
      sym_days_before_now_filter,
      sym_decode_filter,
      sym_format_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_to_date_filter,
      sym_xpath_filter,
  [5882] = 20,
    ACTIONS(321), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(834), 1,
      anon_sym_xpath,
    ACTIONS(837), 1,
      anon_sym_regex,
    ACTIONS(840), 1,
      anon_sym_count,
    ACTIONS(843), 1,
      anon_sym_urlEncode,
    ACTIONS(846), 1,
      anon_sym_urlDecode,
    ACTIONS(849), 1,
      anon_sym_htmlEscape,
    ACTIONS(852), 1,
      anon_sym_htmlUnescape,
    ACTIONS(855), 1,
      anon_sym_toInt,
    ACTIONS(858), 1,
      anon_sym_daysAfterNow,
    ACTIONS(861), 1,
      anon_sym_daysBeforeNow,
    ACTIONS(864), 1,
      anon_sym_decode,
    ACTIONS(867), 1,
      anon_sym_format,
    ACTIONS(870), 1,
      anon_sym_nth,
    ACTIONS(873), 1,
      anon_sym_replace,
    ACTIONS(876), 1,
      anon_sym_split,
    ACTIONS(879), 1,
      anon_sym_toDate,
    STATE(116), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(182), 16,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_escape_filter,
      sym_html_unescape_filter,
      sym_to_int_filter,
      sym_days_after_now_filter,
      sym_days_before_now_filter,
      sym_decode_filter,
      sym_format_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_to_date_filter,
      sym_xpath_filter,
  [5959] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_xpath,
    ACTIONS(75), 1,
      anon_sym_regex,
    ACTIONS(113), 1,
      anon_sym_count,
    ACTIONS(115), 1,
      anon_sym_urlEncode,
    ACTIONS(117), 1,
      anon_sym_urlDecode,
    ACTIONS(119), 1,
      anon_sym_htmlEscape,
    ACTIONS(121), 1,
      anon_sym_htmlUnescape,
    ACTIONS(123), 1,
      anon_sym_toInt,
    ACTIONS(125), 1,
      anon_sym_daysAfterNow,
    ACTIONS(127), 1,
      anon_sym_daysBeforeNow,
    ACTIONS(129), 1,
      anon_sym_decode,
    ACTIONS(131), 1,
      anon_sym_format,
    ACTIONS(133), 1,
      anon_sym_nth,
    ACTIONS(135), 1,
      anon_sym_replace,
    ACTIONS(137), 1,
      anon_sym_split,
    ACTIONS(139), 1,
      anon_sym_toDate,
    ACTIONS(882), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(21), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 16,
      sym_regex_filter,
      sym_count_filter,
      sym_url_encode_filter,
      sym_url_decode_filter,
      sym_html_escape_filter,
      sym_html_unescape_filter,
      sym_to_int_filter,
      sym_days_after_now_filter,
      sym_days_before_now_filter,
      sym_decode_filter,
      sym_format_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_to_date_filter,
      sym_xpath_filter,
  [6036] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(884), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(139), 1,
      sym_response,
    STATE(156), 1,
      sym__comment_or_new_line,
    STATE(449), 1,
      sym_version,
    ACTIONS(888), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(886), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6084] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(890), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(142), 1,
      sym_response,
    STATE(149), 1,
      sym__comment_or_new_line,
    STATE(449), 1,
      sym_version,
    ACTIONS(888), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(892), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6132] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_variable,
    ACTIONS(896), 1,
      anon_sym_status,
    ACTIONS(898), 1,
      anon_sym_url,
    ACTIONS(900), 1,
      anon_sym_header,
    ACTIONS(902), 1,
      anon_sym_cookie,
    ACTIONS(904), 1,
      anon_sym_body,
    ACTIONS(906), 1,
      anon_sym_xpath,
    ACTIONS(908), 1,
      anon_sym_jsonpath,
    ACTIONS(910), 1,
      anon_sym_regex,
    ACTIONS(912), 1,
      anon_sym_duration,
    ACTIONS(914), 1,
      anon_sym_sha256,
    ACTIONS(916), 1,
      anon_sym_md5,
    ACTIONS(918), 1,
      anon_sym_bytes,
    STATE(112), 1,
      sym_query,
    STATE(168), 13,
      sym_status_query,
      sym_url_query,
      sym_header_query,
      sym_cookie_query,
      sym_body_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
      sym_duration_query,
      sym_sha256_query,
      sym_md5_query,
      sym_bytes_query,
  [6193] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(118), 1,
      sym_request,
    STATE(198), 1,
      sym_method,
    STATE(122), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(125), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(9), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6239] = 9,
    ACTIONS(922), 1,
      ts_builtin_sym_end,
    ACTIONS(924), 1,
      anon_sym_LF,
    ACTIONS(930), 1,
      sym_comment,
    STATE(118), 1,
      sym_request,
    STATE(157), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(198), 1,
      sym_method,
    STATE(122), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(134), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(927), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6285] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(119), 1,
      sym_request,
    STATE(198), 1,
      sym_method,
    STATE(136), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(9), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6327] = 2,
    ACTIONS(933), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(935), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [6357] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(937), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(119), 1,
      sym_request,
    STATE(198), 1,
      sym_method,
    STATE(136), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(9), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6399] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(143), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [6429] = 2,
    ACTIONS(939), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(941), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [6459] = 2,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(17), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [6489] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(71), 23,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
      sym_comment,
  [6519] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(943), 1,
      anon_sym_file_COMMA,
    ACTIONS(945), 1,
      anon_sym_base64_COMMA,
    ACTIONS(947), 1,
      anon_sym_hex_COMMA,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(951), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(955), 1,
      anon_sym_null,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(429), 1,
      sym_integer,
    STATE(590), 1,
      sym_predicate_value,
    ACTIONS(953), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(589), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [6572] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(565), 1,
      anon_sym_LF,
    STATE(132), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(567), 20,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [6605] = 4,
    ACTIONS(558), 1,
      anon_sym_LF,
    ACTIONS(959), 1,
      aux_sym_digit_token1,
    STATE(132), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(560), 20,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [6638] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(943), 1,
      anon_sym_file_COMMA,
    ACTIONS(945), 1,
      anon_sym_base64_COMMA,
    ACTIONS(947), 1,
      anon_sym_hex_COMMA,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(951), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(955), 1,
      anon_sym_null,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(429), 1,
      sym_integer,
    STATE(587), 1,
      sym_predicate_value,
    ACTIONS(953), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(589), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [6691] = 7,
    ACTIONS(962), 1,
      anon_sym_LF,
    ACTIONS(964), 1,
      sym_comment,
    STATE(119), 1,
      sym_request,
    STATE(157), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(198), 1,
      sym_method,
    STATE(140), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(9), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6730] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(943), 1,
      anon_sym_file_COMMA,
    ACTIONS(945), 1,
      anon_sym_base64_COMMA,
    ACTIONS(947), 1,
      anon_sym_hex_COMMA,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(951), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(955), 1,
      anon_sym_null,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(429), 1,
      sym_integer,
    STATE(562), 1,
      sym_predicate_value,
    ACTIONS(953), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(589), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [6783] = 6,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    ACTIONS(966), 1,
      anon_sym_LF,
    ACTIONS(969), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(136), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(535), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6819] = 13,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(974), 1,
      anon_sym_BSLASH,
    ACTIONS(976), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(978), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_value_string_text_repeat1,
    STATE(479), 1,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(972), 2,
      anon_sym_LF,
      sym_comment,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(208), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(643), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [6869] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(980), 1,
      sym_key_string_text,
    ACTIONS(982), 1,
      anon_sym_BSLASH2,
    STATE(451), 1,
      sym_integer,
    STATE(558), 1,
      sym_variable_value,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(282), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(240), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(556), 5,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_null,
      sym_float,
  [6921] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(890), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(149), 1,
      sym__comment_or_new_line,
    ACTIONS(892), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6956] = 5,
    ACTIONS(984), 1,
      anon_sym_LF,
    ACTIONS(987), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(140), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(535), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [6989] = 2,
    ACTIONS(585), 1,
      anon_sym_LF,
    ACTIONS(587), 21,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [7016] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(990), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(155), 1,
      sym__comment_or_new_line,
    ACTIONS(992), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [7051] = 2,
    ACTIONS(939), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(941), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [7076] = 4,
    ACTIONS(994), 1,
      anon_sym_LF,
    ACTIONS(997), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(372), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [7105] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      anon_sym_LBRACE,
    ACTIONS(1004), 1,
      anon_sym_LBRACK,
    ACTIONS(1006), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1010), 1,
      anon_sym_null,
    STATE(276), 1,
      sym_integer,
    STATE(418), 1,
      sym_json_value,
    ACTIONS(1008), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(466), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [7150] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(1012), 1,
      anon_sym_LT_QMARK,
    ACTIONS(1014), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1016), 1,
      anon_sym_BSLASH,
    ACTIONS(1018), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1020), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1022), 1,
      sym_comment,
    STATE(152), 1,
      sym_xml_open_tag,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    STATE(571), 1,
      sym_xml_close_tag,
    STATE(203), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(225), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(151), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [7197] = 2,
    ACTIONS(1024), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(1026), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [7222] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      anon_sym_LBRACE,
    ACTIONS(1004), 1,
      anon_sym_LBRACK,
    ACTIONS(1006), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1010), 1,
      anon_sym_null,
    STATE(276), 1,
      sym_integer,
    STATE(433), 1,
      sym_json_value,
    ACTIONS(1008), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(466), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [7267] = 2,
    ACTIONS(990), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(992), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [7292] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(1012), 1,
      anon_sym_LT_QMARK,
    ACTIONS(1016), 1,
      anon_sym_BSLASH,
    ACTIONS(1018), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1020), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_LT_SLASH,
    STATE(152), 1,
      sym_xml_open_tag,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    STATE(303), 1,
      sym_xml_close_tag,
    STATE(203), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(225), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(161), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [7339] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(1012), 1,
      anon_sym_LT_QMARK,
    ACTIONS(1014), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1016), 1,
      anon_sym_BSLASH,
    ACTIONS(1018), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1020), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1022), 1,
      sym_comment,
    STATE(152), 1,
      sym_xml_open_tag,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    STATE(641), 1,
      sym_xml_close_tag,
    STATE(203), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(225), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(161), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [7386] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(1012), 1,
      anon_sym_LT_QMARK,
    ACTIONS(1016), 1,
      anon_sym_BSLASH,
    ACTIONS(1018), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1020), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_LT_SLASH,
    STATE(152), 1,
      sym_xml_open_tag,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    STATE(285), 1,
      sym_xml_close_tag,
    STATE(203), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(225), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(150), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [7433] = 2,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(313), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [7458] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      anon_sym_LBRACE,
    ACTIONS(1004), 1,
      anon_sym_LBRACK,
    ACTIONS(1006), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1010), 1,
      anon_sym_null,
    STATE(276), 1,
      sym_integer,
    STATE(511), 1,
      sym_json_value,
    ACTIONS(1008), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(466), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [7503] = 2,
    ACTIONS(1030), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(1032), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [7528] = 2,
    ACTIONS(890), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(892), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [7553] = 4,
    ACTIONS(1034), 1,
      anon_sym_LF,
    ACTIONS(1036), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(381), 17,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
  [7582] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(155), 18,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LINK,
      anon_sym_UNLINK,
      anon_sym_PURGE,
      anon_sym_LOCK,
      anon_sym_UNLOCK,
      anon_sym_PROPFIND,
      anon_sym_VIEW,
      aux_sym_method_token1,
      sym_comment,
  [7607] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      anon_sym_LBRACE,
    ACTIONS(1004), 1,
      anon_sym_LBRACK,
    ACTIONS(1006), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1010), 1,
      anon_sym_null,
    ACTIONS(1038), 1,
      aux_sym_digit_token1,
    STATE(272), 1,
      sym_integer,
    STATE(527), 1,
      sym_json_value,
    ACTIONS(1008), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(257), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(466), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [7652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 18,
      anon_sym_EQ,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
  [7676] = 12,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_LT,
    ACTIONS(1045), 1,
      anon_sym_LT_QMARK,
    ACTIONS(1048), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1050), 1,
      anon_sym_BSLASH,
    ACTIONS(1053), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1056), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(152), 1,
      sym_xml_open_tag,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    STATE(203), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(225), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(161), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [7720] = 2,
    ACTIONS(656), 1,
      anon_sym_LF,
    ACTIONS(658), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7743] = 2,
    ACTIONS(712), 1,
      anon_sym_LF,
    ACTIONS(714), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7766] = 2,
    ACTIONS(660), 1,
      anon_sym_LF,
    ACTIONS(662), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7789] = 2,
    ACTIONS(734), 1,
      anon_sym_LF,
    ACTIONS(736), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7812] = 2,
    ACTIONS(730), 1,
      anon_sym_LF,
    ACTIONS(732), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7835] = 2,
    ACTIONS(726), 1,
      anon_sym_LF,
    ACTIONS(728), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7858] = 2,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(740), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7881] = 2,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(626), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7904] = 2,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(638), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7927] = 2,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7950] = 2,
    ACTIONS(676), 1,
      anon_sym_LF,
    ACTIONS(678), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7973] = 2,
    ACTIONS(680), 1,
      anon_sym_LF,
    ACTIONS(682), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [7996] = 2,
    ACTIONS(684), 1,
      anon_sym_LF,
    ACTIONS(686), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8019] = 2,
    ACTIONS(688), 1,
      anon_sym_LF,
    ACTIONS(690), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8042] = 2,
    ACTIONS(692), 1,
      anon_sym_LF,
    ACTIONS(694), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8065] = 2,
    ACTIONS(696), 1,
      anon_sym_LF,
    ACTIONS(698), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8088] = 2,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(702), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8111] = 2,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(706), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8134] = 2,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(666), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8157] = 2,
    ACTIONS(668), 1,
      anon_sym_LF,
    ACTIONS(670), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8180] = 2,
    ACTIONS(640), 1,
      anon_sym_LF,
    ACTIONS(642), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8203] = 2,
    ACTIONS(770), 1,
      anon_sym_LF,
    ACTIONS(772), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8226] = 2,
    ACTIONS(758), 1,
      anon_sym_LF,
    ACTIONS(760), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8249] = 2,
    ACTIONS(632), 1,
      anon_sym_LF,
    ACTIONS(634), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8272] = 2,
    ACTIONS(628), 1,
      anon_sym_LF,
    ACTIONS(630), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8295] = 2,
    ACTIONS(644), 1,
      anon_sym_LF,
    ACTIONS(646), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8318] = 2,
    ACTIONS(762), 1,
      anon_sym_LF,
    ACTIONS(764), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8341] = 2,
    ACTIONS(766), 1,
      anon_sym_LF,
    ACTIONS(768), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8364] = 2,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(650), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8387] = 2,
    ACTIONS(652), 1,
      anon_sym_LF,
    ACTIONS(654), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8410] = 2,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(710), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8433] = 2,
    ACTIONS(754), 1,
      anon_sym_LF,
    ACTIONS(756), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8456] = 2,
    ACTIONS(750), 1,
      anon_sym_LF,
    ACTIONS(752), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8479] = 2,
    ACTIONS(746), 1,
      anon_sym_LF,
    ACTIONS(748), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8502] = 2,
    ACTIONS(742), 1,
      anon_sym_LF,
    ACTIONS(744), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_toInt,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_toDate,
      sym_comment,
  [8525] = 13,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1059), 1,
      sym_key_string_text,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(353), 1,
      sym_multipart_form_data_param,
    STATE(358), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(533), 1,
      sym_key_string,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(566), 2,
      sym_key_value,
      sym_file_param,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8569] = 10,
    ACTIONS(974), 1,
      anon_sym_BSLASH,
    ACTIONS(976), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(978), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_value_string_text_repeat1,
    STATE(369), 1,
      sym_value_string,
    ACTIONS(63), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    STATE(208), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8606] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1059), 1,
      sym_key_string_text,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(359), 1,
      sym_key_value,
    STATE(360), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(662), 1,
      sym_key_string,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8646] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1059), 1,
      sym_key_string_text,
    STATE(50), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(344), 1,
      sym_key_value,
    STATE(345), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(662), 1,
      sym_key_string,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8686] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1059), 1,
      sym_key_string_text,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(349), 1,
      sym_key_value,
    STATE(350), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(662), 1,
      sym_key_string,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8726] = 8,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_BSLASH,
    ACTIONS(1066), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1069), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1061), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(202), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(225), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8757] = 6,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    STATE(202), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(225), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(1072), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8784] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1059), 1,
      sym_key_string_text,
    STATE(533), 1,
      sym_key_string,
    STATE(611), 1,
      sym_multipart_form_data_param,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(566), 2,
      sym_key_value,
      sym_file_param,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8816] = 9,
    ACTIONS(1078), 1,
      anon_sym_BSLASH,
    ACTIONS(1080), 1,
      sym_filename_text,
    ACTIONS(1082), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(26), 1,
      sym__comment_or_new_line,
    STATE(443), 1,
      sym_filename,
    ACTIONS(1076), 2,
      anon_sym_LF,
      sym_comment,
    STATE(284), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(238), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8848] = 8,
    ACTIONS(974), 1,
      anon_sym_BSLASH,
    ACTIONS(976), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(978), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1022), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym_value_string_text_repeat1,
    STATE(453), 1,
      sym_value_string,
    STATE(208), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8877] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_DQUOTE,
    ACTIONS(1086), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1089), 1,
      anon_sym_BSLASH,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(207), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(258), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8904] = 7,
    ACTIONS(974), 1,
      anon_sym_BSLASH,
    ACTIONS(976), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(978), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1072), 2,
      anon_sym_LF,
      sym_comment,
    STATE(214), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8931] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_DQUOTE,
    ACTIONS(1097), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1099), 1,
      anon_sym_BSLASH,
    ACTIONS(1101), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(207), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(258), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8958] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1099), 1,
      anon_sym_BSLASH,
    ACTIONS(1101), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1103), 1,
      anon_sym_DQUOTE,
    STATE(209), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(258), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8985] = 8,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_LF,
    ACTIONS(1107), 1,
      anon_sym_BSLASH,
    ACTIONS(1109), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1111), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1113), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(215), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(255), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [9014] = 8,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_BSLASH,
    ACTIONS(1111), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1113), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1115), 1,
      anon_sym_LF,
    ACTIONS(1117), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(213), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(255), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [9043] = 8,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_LF,
    ACTIONS(1107), 1,
      anon_sym_BSLASH,
    ACTIONS(1109), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1111), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1113), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(218), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(255), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [9072] = 7,
    ACTIONS(1119), 1,
      anon_sym_BSLASH,
    ACTIONS(1122), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1125), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1061), 2,
      anon_sym_LF,
      sym_comment,
    STATE(214), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(247), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9099] = 8,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_BSLASH,
    ACTIONS(1111), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1113), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1128), 1,
      anon_sym_LF,
    ACTIONS(1130), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(218), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(255), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [9128] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1099), 1,
      anon_sym_BSLASH,
    ACTIONS(1101), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1132), 1,
      anon_sym_DQUOTE,
    STATE(217), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(258), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9155] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1099), 1,
      anon_sym_BSLASH,
    ACTIONS(1101), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1134), 1,
      anon_sym_DQUOTE,
    STATE(207), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(258), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9182] = 8,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_LF,
    ACTIONS(1139), 1,
      anon_sym_BSLASH,
    ACTIONS(1142), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1144), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1147), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(218), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(255), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [9211] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1059), 1,
      sym_key_string_text,
    ACTIONS(1150), 1,
      anon_sym_COLON,
    ACTIONS(1152), 1,
      anon_sym_COLON2,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(223), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9239] = 8,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_SEMI,
    ACTIONS(1156), 1,
      anon_sym_BSLASH,
    ACTIONS(1158), 1,
      sym_filename_text,
    ACTIONS(1160), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(632), 1,
      sym_filename,
    STATE(295), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(231), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9267] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_BSLASH,
    ACTIONS(1164), 1,
      anon_sym_BQUOTE,
    ACTIONS(1166), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1168), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(228), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(262), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [9293] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1059), 1,
      sym_key_string_text,
    STATE(639), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9321] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_COLON,
    ACTIONS(1172), 1,
      anon_sym_COLON2,
    ACTIONS(1174), 1,
      sym_key_string_text,
    ACTIONS(1177), 1,
      anon_sym_BSLASH2,
    ACTIONS(1180), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(223), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9349] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_BSLASH,
    ACTIONS(1188), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1191), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1183), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(224), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9375] = 7,
    ACTIONS(1016), 1,
      anon_sym_BSLASH,
    ACTIONS(1018), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(277), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1193), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(224), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9401] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1059), 1,
      sym_key_string_text,
    STATE(437), 1,
      sym_key_value,
    STATE(662), 1,
      sym_key_string,
    STATE(263), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(219), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9429] = 8,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_BSLASH,
    ACTIONS(1158), 1,
      sym_filename_text,
    ACTIONS(1160), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1197), 1,
      anon_sym_SEMI,
    STATE(585), 1,
      sym_filename,
    STATE(295), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(231), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9457] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_BSLASH,
    ACTIONS(1202), 1,
      anon_sym_BQUOTE,
    ACTIONS(1204), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1207), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(228), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(262), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [9483] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_BSLASH,
    ACTIONS(1166), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1168), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1210), 1,
      anon_sym_BQUOTE,
    STATE(221), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(262), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [9509] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_COLON2,
    ACTIONS(1212), 1,
      sym_key_string_text,
    ACTIONS(1215), 1,
      anon_sym_BSLASH2,
    ACTIONS(1218), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(280), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(230), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9534] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_BSLASH,
    ACTIONS(1158), 1,
      sym_filename_text,
    ACTIONS(1160), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1221), 1,
      anon_sym_SEMI,
    STATE(295), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(235), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9559] = 7,
    ACTIONS(1170), 1,
      anon_sym_LF,
    ACTIONS(1172), 1,
      sym_comment,
    ACTIONS(1223), 1,
      sym_key_string_text,
    ACTIONS(1226), 1,
      anon_sym_BSLASH2,
    ACTIONS(1229), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(282), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(232), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9584] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_DQUOTE,
    ACTIONS(1234), 1,
      anon_sym_BSLASH,
    ACTIONS(1236), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1238), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(371), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(243), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9609] = 4,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1242), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1244), 1,
      anon_sym_u,
    ACTIONS(1240), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [9628] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1246), 1,
      anon_sym_SEMI,
    ACTIONS(1248), 1,
      anon_sym_BSLASH,
    ACTIONS(1251), 1,
      sym_filename_text,
    ACTIONS(1254), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(295), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(235), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9653] = 6,
    ACTIONS(1257), 1,
      anon_sym_BSLASH,
    ACTIONS(1260), 1,
      sym_filename_text,
    ACTIONS(1263), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1246), 2,
      anon_sym_LF,
      sym_comment,
    STATE(284), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(236), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9676] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_BSLASH2,
    ACTIONS(597), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1150), 1,
      anon_sym_COLON2,
    ACTIONS(1266), 1,
      sym_key_string_text,
    STATE(280), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(230), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9701] = 6,
    ACTIONS(1078), 1,
      anon_sym_BSLASH,
    ACTIONS(1080), 1,
      sym_filename_text,
    ACTIONS(1082), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1221), 2,
      anon_sym_LF,
      sym_comment,
    STATE(284), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(236), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9724] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_BSLASH,
    ACTIONS(1236), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1238), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1268), 1,
      anon_sym_DQUOTE,
    STATE(371), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(233), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9749] = 7,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(982), 1,
      anon_sym_BSLASH2,
    ACTIONS(1150), 1,
      anon_sym_LF,
    ACTIONS(1152), 1,
      sym_comment,
    ACTIONS(1270), 1,
      sym_key_string_text,
    STATE(282), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(232), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9774] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_BSLASH,
    ACTIONS(1236), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1238), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    STATE(371), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(243), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9799] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_BSLASH,
    ACTIONS(1236), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1238), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1274), 1,
      anon_sym_DQUOTE,
    STATE(371), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(241), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9824] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_DQUOTE,
    ACTIONS(1278), 1,
      anon_sym_BSLASH,
    ACTIONS(1281), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1284), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(371), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(243), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_u,
    ACTIONS(1287), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [9865] = 7,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_LF,
    ACTIONS(1294), 1,
      anon_sym_BSLASH,
    ACTIONS(1297), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1299), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(245), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [9889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_u,
    ACTIONS(1308), 1,
      anon_sym_POUND,
    ACTIONS(1304), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [9907] = 6,
    ACTIONS(974), 1,
      anon_sym_BSLASH,
    ACTIONS(976), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1195), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1193), 2,
      anon_sym_LF,
      sym_comment,
    STATE(249), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9929] = 5,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1312), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1310), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9949] = 6,
    ACTIONS(1191), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1317), 1,
      anon_sym_BSLASH,
    ACTIONS(1320), 1,
      aux_sym_value_string_text_token1,
    STATE(310), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1183), 2,
      anon_sym_LF,
      sym_comment,
    STATE(249), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_u,
    ACTIONS(1327), 1,
      anon_sym_POUND,
    ACTIONS(1323), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [9989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_u,
    ACTIONS(1329), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [10005] = 5,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1337), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1335), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1333), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      aux_sym_digit_token1,
    STATE(253), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(558), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [10043] = 5,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1344), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1347), 1,
      anon_sym_BSLASH,
    ACTIONS(1342), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(254), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [10063] = 4,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(245), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1350), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10081] = 5,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(252), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1356), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1354), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      aux_sym_digit_token1,
    STATE(253), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(565), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [10119] = 5,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1097), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1099), 1,
      anon_sym_BSLASH,
    ACTIONS(1360), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(254), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [10139] = 4,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_LF,
    STATE(614), 1,
      sym_multiline_string_type,
    ACTIONS(1364), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [10157] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(434), 1,
      sym_integer,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(575), 2,
      sym_quoted_string,
      sym_float,
  [10178] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      anon_sym_COLON2,
    ACTIONS(1370), 1,
      sym_key_string_text,
    ACTIONS(1373), 1,
      anon_sym_BSLASH2,
    ACTIONS(1366), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(261), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [10199] = 4,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1378), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1376), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(267), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [10216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      anon_sym_COLON2,
    STATE(261), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1380), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10233] = 6,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1384), 1,
      anon_sym_BSLASH,
    ACTIONS(1386), 1,
      anon_sym_SLASH,
    ACTIONS(1388), 1,
      aux_sym_regex_text_token1,
    STATE(609), 1,
      sym_regex_content,
    STATE(300), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
    STATE(58), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1390), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [10271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(432), 1,
      sym_integer,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(577), 2,
      sym_quoted_string,
      sym_float,
  [10292] = 6,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_BSLASH,
    ACTIONS(1395), 1,
      anon_sym_BQUOTE,
    ACTIONS(1397), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1400), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(267), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [10313] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(436), 1,
      sym_integer,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(572), 2,
      sym_quoted_string,
      sym_float,
  [10334] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(438), 1,
      sym_integer,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(570), 2,
      sym_quoted_string,
      sym_float,
  [10355] = 5,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1404), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1407), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(270), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1402), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [10374] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1409), 1,
      anon_sym_RBRACE,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym_json_object_repeat1,
    STATE(426), 1,
      sym_json_key_value,
    STATE(580), 1,
      sym_json_string,
    STATE(584), 1,
      sym_json_key_string,
  [10399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DOT,
    STATE(317), 1,
      sym_fraction,
    STATE(478), 1,
      sym_exponent,
    ACTIONS(1413), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(1417), 2,
      anon_sym_e,
      anon_sym_E,
  [10420] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1419), 1,
      anon_sym_RBRACE,
    STATE(419), 1,
      aux_sym_json_object_repeat1,
    STATE(423), 1,
      sym_json_key_value,
    STATE(580), 1,
      sym_json_string,
    STATE(584), 1,
      sym_json_key_string,
  [10445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      aux_sym_digit_token1,
    STATE(253), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1390), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_e,
      anon_sym_E,
  [10462] = 6,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1384), 1,
      anon_sym_BSLASH,
    ACTIONS(1388), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1421), 1,
      anon_sym_SLASH,
    STATE(655), 1,
      sym_regex_content,
    STATE(300), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10483] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      anon_sym_DOT,
    STATE(322), 1,
      sym_fraction,
    STATE(478), 1,
      sym_exponent,
    ACTIONS(1413), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1425), 2,
      anon_sym_e,
      anon_sym_E,
  [10504] = 5,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1429), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1431), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(270), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1427), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [10523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_base64_COMMA,
    ACTIONS(947), 1,
      anon_sym_hex_COMMA,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(565), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [10541] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1433), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(289), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1380), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10569] = 5,
    ACTIONS(1368), 1,
      sym_comment,
    ACTIONS(1437), 1,
      sym_key_string_text,
    ACTIONS(1440), 1,
      anon_sym_BSLASH2,
    ACTIONS(1366), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(281), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [10587] = 3,
    ACTIONS(1382), 1,
      sym_comment,
    STATE(281), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1380), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10601] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1443), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10615] = 2,
    STATE(292), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1447), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10627] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1451), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1449), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_u,
    ACTIONS(1457), 1,
      anon_sym_POUND,
    ACTIONS(1453), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [10657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [10669] = 5,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_BSLASH,
    ACTIONS(1464), 1,
      sym_filename_text,
    ACTIONS(1459), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(288), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [10687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 1,
      sym_key_string_text,
    ACTIONS(1470), 1,
      anon_sym_BSLASH2,
    ACTIONS(1366), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(289), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [10705] = 5,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1473), 1,
      anon_sym_BSLASH,
    ACTIONS(1476), 1,
      anon_sym_SLASH,
    ACTIONS(1478), 1,
      aux_sym_regex_text_token1,
    STATE(290), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10723] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1481), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10737] = 4,
    ACTIONS(1485), 1,
      anon_sym_BSLASH,
    ACTIONS(1488), 1,
      sym_filename_text,
    STATE(292), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1459), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10753] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1491), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_base64_COMMA,
    ACTIONS(947), 1,
      anon_sym_hex_COMMA,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(569), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [10785] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    STATE(288), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1447), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10799] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1497), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1495), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10813] = 6,
    ACTIONS(1413), 1,
      anon_sym_LF,
    ACTIONS(1499), 1,
      anon_sym_DOT,
    ACTIONS(1503), 1,
      sym_comment,
    STATE(331), 1,
      sym_fraction,
    STATE(608), 1,
      sym_exponent,
    ACTIONS(1501), 2,
      anon_sym_e,
      anon_sym_E,
  [10833] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1390), 1,
      anon_sym_LF,
    STATE(132), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1505), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [10849] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(1507), 1,
      anon_sym_LT_QMARK,
    STATE(146), 1,
      sym_xml_open_tag,
    STATE(601), 1,
      sym_xml_tag,
    STATE(334), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [10869] = 5,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1384), 1,
      anon_sym_BSLASH,
    ACTIONS(1388), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1509), 1,
      anon_sym_SLASH,
    STATE(290), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10887] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1513), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1511), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10901] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1517), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1515), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10915] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1521), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1519), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_COLON2,
    ACTIONS(1435), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10942] = 4,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1525), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1523), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [10957] = 2,
    ACTIONS(1433), 1,
      sym_comment,
    ACTIONS(1435), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10968] = 4,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1525), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1527), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1523), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [10983] = 4,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1525), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1523), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [10998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
    ACTIONS(1529), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(58), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11013] = 4,
    ACTIONS(1431), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1531), 1,
      aux_sym_value_string_text_token1,
    STATE(323), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1427), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [11028] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1535), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1533), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [11041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      aux_sym_digit_token1,
    ACTIONS(1537), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(253), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
    ACTIONS(1537), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(58), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11071] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1513), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1511), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [11084] = 3,
    ACTIONS(1539), 1,
      anon_sym_LF,
    ACTIONS(1543), 1,
      sym_comment,
    ACTIONS(1541), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [11097] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1547), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1545), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [11110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(468), 1,
      sym_exponent,
    ACTIONS(1417), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1549), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      aux_sym_digit_token1,
    ACTIONS(1529), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(253), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11140] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1433), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [11153] = 4,
    ACTIONS(1551), 1,
      anon_sym_LF,
    ACTIONS(1553), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(377), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [11168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1557), 1,
      anon_sym_COLON2,
    ACTIONS(1555), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [11181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(468), 1,
      sym_exponent,
    ACTIONS(1425), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1549), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11196] = 4,
    ACTIONS(1407), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1559), 1,
      aux_sym_value_string_text_token1,
    STATE(323), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1402), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [11211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
    ACTIONS(1562), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(309), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11226] = 4,
    ACTIONS(1564), 1,
      anon_sym_LF,
    ACTIONS(1567), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(367), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [11241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    ACTIONS(1570), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(370), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      aux_sym_digit_token1,
    ACTIONS(1572), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(318), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11271] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(380), 1,
      aux_sym_query_string_params_section_repeat1,
  [11287] = 2,
    ACTIONS(1576), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1574), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [11297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    ACTIONS(1580), 1,
      anon_sym_SLASH,
    STATE(512), 2,
      sym_quoted_string,
      sym_regex,
  [11311] = 4,
    ACTIONS(1549), 1,
      anon_sym_LF,
    ACTIONS(1582), 1,
      sym_comment,
    STATE(657), 1,
      sym_exponent,
    ACTIONS(1501), 2,
      anon_sym_e,
      anon_sym_E,
  [11325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(1584), 1,
      anon_sym_SLASH,
    STATE(192), 2,
      sym_quoted_string,
      sym_regex,
  [11339] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(513), 1,
      sym_json_key_value,
    STATE(580), 1,
      sym_json_string,
    STATE(584), 1,
      sym_json_key_string,
  [11355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_LT,
    ACTIONS(1588), 1,
      anon_sym_LT_QMARK,
    STATE(334), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [11369] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1537), 1,
      anon_sym_LF,
    ACTIONS(1591), 1,
      sym_comment,
    STATE(132), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(1584), 1,
      anon_sym_SLASH,
    STATE(191), 2,
      sym_quoted_string,
      sym_regex,
  [11397] = 1,
    ACTIONS(1433), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [11405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [11415] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1433), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11425] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1511), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11435] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1433), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [11447] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1433), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [11459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    ACTIONS(1580), 1,
      anon_sym_SLASH,
    STATE(92), 2,
      sym_quoted_string,
      sym_regex,
  [11473] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(379), 1,
      aux_sym_query_string_params_section_repeat1,
  [11489] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(380), 1,
      aux_sym_query_string_params_section_repeat1,
  [11505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    ACTIONS(1580), 1,
      anon_sym_SLASH,
    STATE(539), 2,
      sym_quoted_string,
      sym_regex,
  [11519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
    STATE(79), 1,
      sym_integer,
    STATE(59), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    ACTIONS(1580), 1,
      anon_sym_SLASH,
    STATE(78), 2,
      sym_quoted_string,
      sym_regex,
  [11547] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(48), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(328), 1,
      aux_sym_query_string_params_section_repeat1,
  [11563] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(48), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(380), 1,
      aux_sym_query_string_params_section_repeat1,
  [11579] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1593), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11589] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1595), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11599] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(381), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [11615] = 2,
    ACTIONS(1435), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1433), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [11625] = 2,
    ACTIONS(1557), 1,
      sym_comment,
    ACTIONS(1555), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [11635] = 2,
    ACTIONS(1497), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1495), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [11645] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1433), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [11655] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(382), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [11671] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(49), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(383), 1,
      aux_sym_query_string_params_section_repeat1,
  [11687] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(49), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(380), 1,
      aux_sym_query_string_params_section_repeat1,
  [11703] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1513), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1511), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [11715] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1597), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [11725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 1,
      anon_sym_SEMI,
    ACTIONS(1601), 1,
      aux_sym_hexdigit_token1,
    STATE(363), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11739] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1604), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [11751] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1610), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1608), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [11763] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1612), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [11775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11785] = 1,
    ACTIONS(1597), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [11793] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [11807] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1529), 1,
      anon_sym_LF,
    ACTIONS(1618), 1,
      sym_comment,
    STATE(132), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11821] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1620), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [11833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [11843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11853] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1626), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [11865] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1630), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [11877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_SEMI,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(363), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(162), 1,
      sym_integer,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11905] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1638), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11915] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(380), 1,
      aux_sym_query_string_params_section_repeat1,
  [11931] = 5,
    ACTIONS(1640), 1,
      anon_sym_LF,
    ACTIONS(1643), 1,
      sym_comment,
    STATE(222), 1,
      sym__comment_or_new_line,
    STATE(320), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(380), 1,
      aux_sym_query_string_params_section_repeat1,
  [11947] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(40), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(382), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [11963] = 5,
    ACTIONS(1646), 1,
      anon_sym_LF,
    ACTIONS(1649), 1,
      sym_comment,
    STATE(204), 1,
      sym__comment_or_new_line,
    STATE(320), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(382), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [11979] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(51), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(380), 1,
      aux_sym_query_string_params_section_repeat1,
  [11995] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1654), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1652), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [12007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(452), 1,
      sym_integer,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [12021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(474), 1,
      sym_integer,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [12035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    ACTIONS(1584), 1,
      anon_sym_SLASH,
    STATE(563), 2,
      sym_quoted_string,
      sym_regex,
  [12049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1656), 1,
      anon_sym_SEMI,
    STATE(376), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [12063] = 2,
    ACTIONS(1445), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1443), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [12073] = 2,
    ACTIONS(1513), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1511), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [12083] = 3,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1660), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1658), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [12095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(470), 1,
      sym_integer,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [12109] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1662), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [12119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1664), 1,
      anon_sym_RBRACE,
    STATE(476), 1,
      aux_sym_json_object_repeat1,
  [12132] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 1,
      sym__comment_or_new_line,
  [12145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(631), 1,
      sym_expr,
  [12158] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(62), 1,
      sym__comment_or_new_line,
  [12171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(630), 1,
      sym_expr,
  [12184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(629), 1,
      sym_expr,
  [12197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(628), 1,
      sym_expr,
  [12210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(627), 1,
      sym_expr,
  [12223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(626), 1,
      sym_expr,
  [12236] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(56), 1,
      sym__comment_or_new_line,
  [12249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(625), 1,
      sym_expr,
  [12262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(623), 1,
      sym_expr,
  [12275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(621), 1,
      sym_expr,
  [12288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(618), 1,
      sym_expr,
  [12301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(298), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [12312] = 4,
    ACTIONS(1670), 1,
      anon_sym_LF,
    ACTIONS(1672), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1674), 1,
      sym_comment,
    STATE(560), 1,
      sym_file_contenttype,
  [12325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(586), 1,
      sym_expr,
  [12338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_COMMA,
    ACTIONS(1679), 1,
      anon_sym_RBRACK,
    STATE(411), 1,
      aux_sym_json_array_repeat1,
  [12351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1683), 1,
      anon_sym_POUND,
    ACTIONS(1681), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [12362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(486), 1,
      sym_boolean,
    ACTIONS(953), 2,
      anon_sym_true,
      anon_sym_false,
  [12373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(484), 1,
      sym_boolean,
    ACTIONS(953), 2,
      anon_sym_true,
      anon_sym_false,
  [12384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(458), 1,
      sym_variable_definition,
    STATE(651), 1,
      sym_variable_name,
  [12397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      anon_sym_COMMA,
    ACTIONS(1687), 1,
      anon_sym_RBRACK,
    STATE(411), 1,
      aux_sym_json_array_repeat1,
  [12410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1689), 1,
      anon_sym_RBRACE,
    STATE(476), 1,
      aux_sym_json_object_repeat1,
  [12423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      anon_sym_COMMA,
    ACTIONS(1691), 1,
      anon_sym_RBRACK,
    STATE(416), 1,
      aux_sym_json_array_repeat1,
  [12436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1693), 1,
      anon_sym_RBRACE,
    STATE(476), 1,
      aux_sym_json_object_repeat1,
  [12449] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__comment_or_new_line,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12462] = 4,
    ACTIONS(1695), 1,
      anon_sym_LF,
    ACTIONS(1697), 1,
      sym_comment,
    STATE(199), 1,
      sym__comment_or_new_line,
    STATE(320), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12475] = 4,
    ACTIONS(1695), 1,
      anon_sym_LF,
    ACTIONS(1697), 1,
      sym_comment,
    STATE(197), 1,
      sym__comment_or_new_line,
    STATE(320), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1693), 1,
      anon_sym_RBRACE,
    STATE(417), 1,
      aux_sym_json_object_repeat1,
  [12501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1701), 1,
      anon_sym_POUND,
    ACTIONS(1699), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [12512] = 4,
    ACTIONS(1695), 1,
      anon_sym_LF,
    ACTIONS(1697), 1,
      sym_comment,
    STATE(201), 1,
      sym__comment_or_new_line,
    STATE(320), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1664), 1,
      anon_sym_RBRACE,
    STATE(475), 1,
      aux_sym_json_object_repeat1,
  [12538] = 4,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(826), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(109), 1,
      sym__comment_or_new_line,
  [12551] = 4,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(826), 1,
      sym_comment,
    STATE(65), 1,
      sym__comment_or_new_line,
    STATE(108), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12564] = 4,
    ACTIONS(1499), 1,
      anon_sym_DOT,
    ACTIONS(1703), 1,
      anon_sym_LF,
    ACTIONS(1705), 1,
      sym_comment,
    STATE(542), 1,
      sym_fraction,
  [12577] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(18), 1,
      sym__comment_or_new_line,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12599] = 4,
    ACTIONS(1499), 1,
      anon_sym_DOT,
    ACTIONS(1707), 1,
      anon_sym_LF,
    ACTIONS(1709), 1,
      sym_comment,
    STATE(542), 1,
      sym_fraction,
  [12612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      anon_sym_COMMA,
    ACTIONS(1711), 1,
      anon_sym_RBRACK,
    STATE(473), 1,
      aux_sym_json_array_repeat1,
  [12625] = 4,
    ACTIONS(1499), 1,
      anon_sym_DOT,
    ACTIONS(1713), 1,
      anon_sym_LF,
    ACTIONS(1715), 1,
      sym_comment,
    STATE(542), 1,
      sym_fraction,
  [12638] = 4,
    ACTIONS(1695), 1,
      anon_sym_LF,
    ACTIONS(1697), 1,
      sym_comment,
    STATE(226), 1,
      sym__comment_or_new_line,
    STATE(320), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12651] = 4,
    ACTIONS(1499), 1,
      anon_sym_DOT,
    ACTIONS(1717), 1,
      anon_sym_LF,
    ACTIONS(1719), 1,
      sym_comment,
    STATE(542), 1,
      sym_fraction,
  [12664] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(69), 1,
      sym__comment_or_new_line,
  [12677] = 4,
    ACTIONS(1499), 1,
      anon_sym_DOT,
    ACTIONS(1721), 1,
      anon_sym_LF,
    ACTIONS(1723), 1,
      sym_comment,
    STATE(542), 1,
      sym_fraction,
  [12690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      aux_sym_digit_token1,
    STATE(312), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [12701] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1725), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [12710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      aux_sym_digit_token1,
    STATE(274), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [12721] = 4,
    ACTIONS(962), 1,
      anon_sym_LF,
    ACTIONS(964), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(617), 1,
      sym__comment_or_new_line,
  [12734] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(27), 1,
      sym__comment_or_new_line,
  [12747] = 4,
    ACTIONS(1695), 1,
      anon_sym_LF,
    ACTIONS(1697), 1,
      sym_comment,
    STATE(200), 1,
      sym__comment_or_new_line,
    STATE(320), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12760] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(57), 1,
      sym__comment_or_new_line,
  [12773] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
  [12786] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(29), 1,
      sym__comment_or_new_line,
  [12799] = 4,
    ACTIONS(1672), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1727), 1,
      anon_sym_LF,
    ACTIONS(1729), 1,
      sym_comment,
    STATE(581), 1,
      sym_file_contenttype,
  [12812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(459), 1,
      sym_status,
    ACTIONS(1731), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [12823] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(25), 1,
      sym__comment_or_new_line,
  [12836] = 4,
    ACTIONS(1499), 1,
      anon_sym_DOT,
    ACTIONS(1733), 1,
      anon_sym_LF,
    ACTIONS(1735), 1,
      sym_comment,
    STATE(542), 1,
      sym_fraction,
  [12849] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(30), 1,
      sym__comment_or_new_line,
  [12862] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
  [12875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1739), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(460), 1,
      sym_boolean,
    ACTIONS(953), 2,
      anon_sym_true,
      anon_sym_false,
  [12904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(395), 1,
      sym_boolean,
    ACTIONS(953), 2,
      anon_sym_true,
      anon_sym_false,
  [12915] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(38), 1,
      sym__comment_or_new_line,
  [12928] = 4,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(826), 1,
      sym_comment,
    STATE(11), 1,
      sym__comment_or_new_line,
    STATE(108), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12941] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(33), 1,
      sym__comment_or_new_line,
  [12954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(450), 1,
      sym_boolean,
    ACTIONS(953), 2,
      anon_sym_true,
      anon_sym_false,
  [12965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1741), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1743), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(447), 1,
      sym_boolean,
    ACTIONS(953), 2,
      anon_sym_true,
      anon_sym_false,
  [12994] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(143), 1,
      sym__comment_or_new_line,
  [13007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(446), 1,
      sym_boolean,
    ACTIONS(953), 2,
      anon_sym_true,
      anon_sym_false,
  [13027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1745), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
    STATE(313), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [13047] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(34), 1,
      sym__comment_or_new_line,
  [13060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1747), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      anon_sym_COMMA,
    ACTIONS(1751), 1,
      anon_sym_RBRACK,
    STATE(411), 1,
      aux_sym_json_array_repeat1,
  [13091] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(35), 1,
      sym__comment_or_new_line,
  [13104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_COMMA,
    ACTIONS(1753), 1,
      anon_sym_RBRACE,
    STATE(476), 1,
      aux_sym_json_object_repeat1,
  [13117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 1,
      anon_sym_RBRACE,
    ACTIONS(1757), 1,
      anon_sym_COMMA,
    STATE(476), 1,
      aux_sym_json_object_repeat1,
  [13130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      aux_sym_variable_name_token1,
    STATE(115), 1,
      sym_variable_name,
    STATE(544), 1,
      sym_expr,
  [13143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13152] = 4,
    ACTIONS(1499), 1,
      anon_sym_DOT,
    ACTIONS(1760), 1,
      anon_sym_LF,
    ACTIONS(1762), 1,
      sym_comment,
    STATE(542), 1,
      sym_fraction,
  [13165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      aux_sym_digit_token1,
    STATE(335), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [13176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_digit_token1,
    STATE(265), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [13187] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1764), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [13196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [13205] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(37), 1,
      sym__comment_or_new_line,
  [13218] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(127), 1,
      sym__comment_or_new_line,
  [13231] = 4,
    ACTIONS(1076), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 1,
      sym__comment_or_new_line,
  [13244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1766), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(634), 1,
      sym_hexdigit,
  [13263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(494), 1,
      sym_hexdigit,
  [13273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(495), 1,
      sym_hexdigit,
  [13283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(496), 1,
      sym_hexdigit,
  [13293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(497), 1,
      sym_hexdigit,
  [13303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(514), 1,
      sym_hexdigit,
  [13313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(498), 1,
      sym_hexdigit,
  [13323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(499), 1,
      sym_hexdigit,
  [13333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(500), 1,
      sym_hexdigit,
  [13343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(501), 1,
      sym_hexdigit,
  [13353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(502), 1,
      sym_hexdigit,
  [13363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(503), 1,
      sym_hexdigit,
  [13373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(504), 1,
      sym_hexdigit,
  [13383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(505), 1,
      sym_hexdigit,
  [13393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(624), 1,
      sym_hexdigit,
  [13403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(622), 1,
      sym_hexdigit,
  [13413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(620), 1,
      sym_hexdigit,
  [13423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(616), 1,
      sym_hexdigit,
  [13433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(163), 1,
      sym_quoted_string,
  [13443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_quoted_string,
  [13453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_quoted_string,
  [13463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_quoted_string,
  [13473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_quoted_string,
  [13483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1679), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_quoted_string,
  [13501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1768), 1,
      aux_sym_hexdigit_token1,
    STATE(391), 1,
      sym_hexdigit,
  [13519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_quoted_string,
  [13529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1770), 1,
      anon_sym_LBRACE,
    STATE(316), 1,
      sym_unicode_char,
  [13539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1772), 1,
      anon_sym_file_COMMA,
    STATE(442), 1,
      sym_file_value,
  [13549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym_quoted_string,
  [13559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1774), 1,
      anon_sym_LBRACE,
    STATE(296), 1,
      sym_unicode_char,
  [13569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_quoted_string,
  [13579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1776), 1,
      anon_sym_LBRACE,
    STATE(384), 1,
      sym_unicode_char,
  [13589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(493), 1,
      sym_hexdigit,
  [13599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_quoted_string,
  [13609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_quoted_string,
  [13619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(522), 1,
      sym_hexdigit,
  [13629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1778), 1,
      anon_sym_LBRACE,
    STATE(356), 1,
      sym_unicode_char,
  [13639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1780), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(530), 1,
      sym_hexdigit,
  [13657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_DQUOTE,
    STATE(564), 1,
      sym_quoted_string,
  [13667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(488), 1,
      sym_hexdigit,
  [13677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1782), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [13685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      anon_sym_LT,
    ACTIONS(1517), 1,
      anon_sym_LT_QMARK,
  [13695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1784), 1,
      anon_sym_COLON,
    ACTIONS(1786), 1,
      anon_sym_COLON2,
  [13705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_quoted_string,
  [13715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      aux_sym_hexdigit_token1,
    STATE(528), 1,
      sym_hexdigit,
  [13725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_quoted_string,
  [13735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_quoted_string,
  [13745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_quoted_string,
  [13755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_quoted_string,
  [13765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1788), 1,
      anon_sym_LBRACE,
    STATE(393), 1,
      sym_unicode_char,
  [13775] = 2,
    ACTIONS(1790), 1,
      anon_sym_LF,
    ACTIONS(1792), 1,
      sym_comment,
  [13782] = 2,
    ACTIONS(1794), 1,
      anon_sym_LF,
    ACTIONS(1796), 1,
      sym_comment,
  [13789] = 2,
    ACTIONS(1798), 1,
      anon_sym_LF,
    ACTIONS(1800), 1,
      sym_comment,
  [13796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1802), 1,
      anon_sym_RBRACE_RBRACE,
  [13803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1804), 1,
      anon_sym_COLON2,
  [13810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1806), 1,
      anon_sym_COLON2,
  [13817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1808), 1,
      anon_sym_COLON2,
  [13824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_COLON2,
  [13831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1812), 1,
      anon_sym_COLON2,
  [13838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1814), 1,
      anon_sym_COLON2,
  [13845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1816), 1,
      anon_sym_COLON2,
  [13852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_COLON2,
  [13859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1820), 1,
      anon_sym_COLON2,
  [13866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1822), 1,
      anon_sym_COLON2,
  [13873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1824), 1,
      anon_sym_COLON2,
  [13880] = 2,
    ACTIONS(1733), 1,
      anon_sym_LF,
    ACTIONS(1735), 1,
      sym_comment,
  [13887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1826), 1,
      anon_sym_COLON2,
  [13894] = 2,
    ACTIONS(1828), 1,
      anon_sym_LF,
    ACTIONS(1830), 1,
      sym_comment,
  [13901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1832), 1,
      anon_sym_COLON2,
  [13908] = 2,
    ACTIONS(1727), 1,
      anon_sym_LF,
    ACTIONS(1729), 1,
      sym_comment,
  [13915] = 2,
    ACTIONS(1834), 1,
      anon_sym_LF,
    ACTIONS(1836), 1,
      sym_comment,
  [13922] = 2,
    ACTIONS(1838), 1,
      anon_sym_LF,
    ACTIONS(1840), 1,
      sym_comment,
  [13929] = 2,
    ACTIONS(1842), 1,
      anon_sym_LF,
    ACTIONS(1844), 1,
      sym_comment,
  [13936] = 2,
    ACTIONS(1846), 1,
      anon_sym_LF,
    ACTIONS(1848), 1,
      sym_comment,
  [13943] = 2,
    ACTIONS(1850), 1,
      anon_sym_LF,
    ACTIONS(1852), 1,
      sym_comment,
  [13950] = 2,
    ACTIONS(1854), 1,
      anon_sym_LF,
    ACTIONS(1856), 1,
      sym_comment,
  [13957] = 2,
    ACTIONS(1858), 1,
      anon_sym_LF,
    ACTIONS(1860), 1,
      sym_comment,
  [13964] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1862), 1,
      aux_sym_oneline_string_text_token2,
  [13971] = 2,
    ACTIONS(1864), 1,
      anon_sym_LF,
    ACTIONS(1866), 1,
      sym_comment,
  [13978] = 2,
    ACTIONS(1721), 1,
      anon_sym_LF,
    ACTIONS(1723), 1,
      sym_comment,
  [13985] = 2,
    ACTIONS(1449), 1,
      sym_comment,
    ACTIONS(1451), 1,
      anon_sym_LF,
  [13992] = 2,
    ACTIONS(1717), 1,
      anon_sym_LF,
    ACTIONS(1719), 1,
      sym_comment,
  [13999] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1868), 1,
      aux_sym_xml_close_tag_token1,
  [14006] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1870), 1,
      anon_sym_LF,
  [14013] = 2,
    ACTIONS(1713), 1,
      anon_sym_LF,
    ACTIONS(1715), 1,
      sym_comment,
  [14020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1872), 1,
      ts_builtin_sym_end,
  [14027] = 2,
    ACTIONS(1707), 1,
      anon_sym_LF,
    ACTIONS(1709), 1,
      sym_comment,
  [14034] = 2,
    ACTIONS(1624), 1,
      anon_sym_LF,
    ACTIONS(1874), 1,
      sym_comment,
  [14041] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1876), 1,
      aux_sym_variable_name_token2,
  [14048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1878), 1,
      anon_sym_COLON2,
  [14055] = 2,
    ACTIONS(1880), 1,
      anon_sym_LF,
    ACTIONS(1882), 1,
      sym_comment,
  [14062] = 2,
    ACTIONS(1616), 1,
      anon_sym_LF,
    ACTIONS(1884), 1,
      sym_comment,
  [14069] = 2,
    ACTIONS(1886), 1,
      anon_sym_LF,
    ACTIONS(1888), 1,
      sym_comment,
  [14076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1890), 1,
      anon_sym_COLON2,
  [14083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1892), 1,
      anon_sym_SEMI,
  [14090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1894), 1,
      anon_sym_RBRACE_RBRACE,
  [14097] = 2,
    ACTIONS(1896), 1,
      anon_sym_LF,
    ACTIONS(1898), 1,
      sym_comment,
  [14104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1900), 1,
      aux_sym_key_string_escaped_char_token1,
  [14111] = 2,
    ACTIONS(1703), 1,
      anon_sym_LF,
    ACTIONS(1705), 1,
      sym_comment,
  [14118] = 2,
    ACTIONS(1902), 1,
      anon_sym_LF,
    ACTIONS(1904), 1,
      sym_comment,
  [14125] = 2,
    ACTIONS(1906), 1,
      anon_sym_LF,
    ACTIONS(1908), 1,
      sym_comment,
  [14132] = 2,
    ACTIONS(1910), 1,
      anon_sym_LF,
    ACTIONS(1912), 1,
      sym_comment,
  [14139] = 2,
    ACTIONS(1914), 1,
      anon_sym_LF,
    ACTIONS(1916), 1,
      sym_comment,
  [14146] = 2,
    ACTIONS(1918), 1,
      anon_sym_LF,
    ACTIONS(1920), 1,
      sym_comment,
  [14153] = 2,
    ACTIONS(1922), 1,
      anon_sym_LF,
    ACTIONS(1924), 1,
      sym_comment,
  [14160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1926), 1,
      anon_sym_QMARK_GT,
  [14167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1928), 1,
      anon_sym_COLON2,
  [14174] = 2,
    ACTIONS(1739), 1,
      anon_sym_LF,
    ACTIONS(1930), 1,
      sym_comment,
  [14181] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1932), 1,
      aux_sym_xml_open_tag_token1,
  [14188] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1934), 1,
      aux_sym_xml_prolog_tag_token1,
  [14195] = 2,
    ACTIONS(1936), 1,
      anon_sym_LF,
    ACTIONS(1938), 1,
      sym_comment,
  [14202] = 2,
    ACTIONS(1940), 1,
      anon_sym_LF,
    ACTIONS(1942), 1,
      sym_comment,
  [14209] = 2,
    ACTIONS(1766), 1,
      anon_sym_LF,
    ACTIONS(1944), 1,
      sym_comment,
  [14216] = 2,
    ACTIONS(1946), 1,
      anon_sym_LF,
    ACTIONS(1948), 1,
      sym_comment,
  [14223] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1950), 1,
      aux_sym_oneline_base64_token1,
  [14230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1952), 1,
      aux_sym_key_string_escaped_char_token1,
  [14237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1954), 1,
      anon_sym_GT,
  [14244] = 2,
    ACTIONS(1549), 1,
      anon_sym_LF,
    ACTIONS(1582), 1,
      sym_comment,
  [14251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1956), 1,
      anon_sym_SLASH,
  [14258] = 2,
    ACTIONS(1749), 1,
      anon_sym_LF,
    ACTIONS(1958), 1,
      sym_comment,
  [14265] = 2,
    ACTIONS(1960), 1,
      anon_sym_LF,
    ACTIONS(1962), 1,
      sym_comment,
  [14272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1964), 1,
      anon_sym_GT,
  [14279] = 2,
    ACTIONS(1747), 1,
      anon_sym_LF,
    ACTIONS(1966), 1,
      sym_comment,
  [14286] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(1968), 1,
      anon_sym_LF,
  [14293] = 2,
    ACTIONS(1491), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_LF,
  [14300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1970), 1,
      anon_sym_RBRACE,
  [14307] = 2,
    ACTIONS(1972), 1,
      anon_sym_LF,
    ACTIONS(1974), 1,
      sym_comment,
  [14314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1976), 1,
      anon_sym_RBRACE_RBRACE,
  [14321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1978), 1,
      aux_sym_key_string_escaped_char_token1,
  [14328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1980), 1,
      anon_sym_RBRACE,
  [14335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1982), 1,
      anon_sym_RBRACE_RBRACE,
  [14342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1984), 1,
      anon_sym_RBRACE,
  [14349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1986), 1,
      anon_sym_RBRACE_RBRACE,
  [14356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1988), 1,
      anon_sym_RBRACE,
  [14363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1990), 1,
      anon_sym_RBRACE_RBRACE,
  [14370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1992), 1,
      anon_sym_RBRACE_RBRACE,
  [14377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1994), 1,
      anon_sym_RBRACE_RBRACE,
  [14384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1996), 1,
      anon_sym_RBRACE_RBRACE,
  [14391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1998), 1,
      anon_sym_RBRACE_RBRACE,
  [14398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2000), 1,
      anon_sym_RBRACE_RBRACE,
  [14405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2002), 1,
      anon_sym_RBRACE_RBRACE,
  [14412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2004), 1,
      anon_sym_SEMI,
  [14419] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(2006), 1,
      aux_sym_xml_prolog_tag_token1,
  [14426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2008), 1,
      anon_sym_RBRACE,
  [14433] = 2,
    ACTIONS(1737), 1,
      anon_sym_LF,
    ACTIONS(2010), 1,
      sym_comment,
  [14440] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(2012), 1,
      aux_sym_xml_close_tag_token1,
  [14447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2014), 1,
      anon_sym_GT,
  [14454] = 2,
    ACTIONS(1741), 1,
      anon_sym_LF,
    ACTIONS(2016), 1,
      sym_comment,
  [14461] = 2,
    ACTIONS(2018), 1,
      anon_sym_LF,
    ACTIONS(2020), 1,
      sym_comment,
  [14468] = 2,
    ACTIONS(1743), 1,
      anon_sym_LF,
    ACTIONS(2022), 1,
      sym_comment,
  [14475] = 2,
    ACTIONS(1519), 1,
      sym_comment,
    ACTIONS(1521), 1,
      anon_sym_LF,
  [14482] = 2,
    ACTIONS(2024), 1,
      anon_sym_LF,
    ACTIONS(2026), 1,
      sym_comment,
  [14489] = 2,
    ACTIONS(1760), 1,
      anon_sym_LF,
    ACTIONS(1762), 1,
      sym_comment,
  [14496] = 2,
    ACTIONS(2028), 1,
      anon_sym_LF,
    ACTIONS(2030), 1,
      sym_comment,
  [14503] = 2,
    ACTIONS(2032), 1,
      anon_sym_LF,
    ACTIONS(2034), 1,
      sym_comment,
  [14510] = 2,
    ACTIONS(2036), 1,
      anon_sym_LF,
    ACTIONS(2038), 1,
      sym_comment,
  [14517] = 2,
    ACTIONS(2040), 1,
      anon_sym_LF,
    ACTIONS(2042), 1,
      sym_comment,
  [14524] = 2,
    ACTIONS(2044), 1,
      anon_sym_LF,
    ACTIONS(2046), 1,
      sym_comment,
  [14531] = 2,
    ACTIONS(2048), 1,
      anon_sym_LF,
    ACTIONS(2050), 1,
      sym_comment,
  [14538] = 2,
    ACTIONS(2052), 1,
      anon_sym_LF,
    ACTIONS(2054), 1,
      sym_comment,
  [14545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2056), 1,
      anon_sym_EQ,
  [14552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2058), 1,
      anon_sym_QMARK_GT,
  [14559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2060), 1,
      anon_sym_SEMI,
  [14566] = 2,
    ACTIONS(2062), 1,
      anon_sym_LF,
    ACTIONS(2064), 1,
      sym_comment,
  [14573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2066), 1,
      anon_sym_SLASH,
  [14580] = 2,
    ACTIONS(1022), 1,
      sym_comment,
    ACTIONS(2068), 1,
      aux_sym_regex_escaped_char_token1,
  [14587] = 2,
    ACTIONS(1745), 1,
      anon_sym_LF,
    ACTIONS(2070), 1,
      sym_comment,
  [14594] = 2,
    ACTIONS(2072), 1,
      anon_sym_LF,
    ACTIONS(2074), 1,
      sym_comment,
  [14601] = 2,
    ACTIONS(2076), 1,
      anon_sym_LF,
    ACTIONS(2078), 1,
      sym_comment,
  [14608] = 2,
    ACTIONS(2080), 1,
      anon_sym_LF,
    ACTIONS(2082), 1,
      sym_comment,
  [14615] = 2,
    ACTIONS(1539), 1,
      anon_sym_LF,
    ACTIONS(1543), 1,
      sym_comment,
  [14622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1784), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 123,
  [SMALL_STATE(21)] = 246,
  [SMALL_STATE(22)] = 349,
  [SMALL_STATE(23)] = 420,
  [SMALL_STATE(24)] = 491,
  [SMALL_STATE(25)] = 555,
  [SMALL_STATE(26)] = 619,
  [SMALL_STATE(27)] = 683,
  [SMALL_STATE(28)] = 747,
  [SMALL_STATE(29)] = 811,
  [SMALL_STATE(30)] = 875,
  [SMALL_STATE(31)] = 939,
  [SMALL_STATE(32)] = 1003,
  [SMALL_STATE(33)] = 1067,
  [SMALL_STATE(34)] = 1131,
  [SMALL_STATE(35)] = 1195,
  [SMALL_STATE(36)] = 1259,
  [SMALL_STATE(37)] = 1323,
  [SMALL_STATE(38)] = 1387,
  [SMALL_STATE(39)] = 1451,
  [SMALL_STATE(40)] = 1529,
  [SMALL_STATE(41)] = 1607,
  [SMALL_STATE(42)] = 1685,
  [SMALL_STATE(43)] = 1763,
  [SMALL_STATE(44)] = 1837,
  [SMALL_STATE(45)] = 1911,
  [SMALL_STATE(46)] = 1985,
  [SMALL_STATE(47)] = 2059,
  [SMALL_STATE(48)] = 2133,
  [SMALL_STATE(49)] = 2207,
  [SMALL_STATE(50)] = 2281,
  [SMALL_STATE(51)] = 2355,
  [SMALL_STATE(52)] = 2429,
  [SMALL_STATE(53)] = 2504,
  [SMALL_STATE(54)] = 2568,
  [SMALL_STATE(55)] = 2630,
  [SMALL_STATE(56)] = 2692,
  [SMALL_STATE(57)] = 2747,
  [SMALL_STATE(58)] = 2802,
  [SMALL_STATE(59)] = 2863,
  [SMALL_STATE(60)] = 2924,
  [SMALL_STATE(61)] = 2984,
  [SMALL_STATE(62)] = 3044,
  [SMALL_STATE(63)] = 3097,
  [SMALL_STATE(64)] = 3166,
  [SMALL_STATE(65)] = 3221,
  [SMALL_STATE(66)] = 3287,
  [SMALL_STATE(67)] = 3353,
  [SMALL_STATE(68)] = 3419,
  [SMALL_STATE(69)] = 3470,
  [SMALL_STATE(70)] = 3521,
  [SMALL_STATE(71)] = 3571,
  [SMALL_STATE(72)] = 3621,
  [SMALL_STATE(73)] = 3671,
  [SMALL_STATE(74)] = 3721,
  [SMALL_STATE(75)] = 3770,
  [SMALL_STATE(76)] = 3819,
  [SMALL_STATE(77)] = 3902,
  [SMALL_STATE(78)] = 3951,
  [SMALL_STATE(79)] = 4000,
  [SMALL_STATE(80)] = 4049,
  [SMALL_STATE(81)] = 4098,
  [SMALL_STATE(82)] = 4147,
  [SMALL_STATE(83)] = 4196,
  [SMALL_STATE(84)] = 4245,
  [SMALL_STATE(85)] = 4294,
  [SMALL_STATE(86)] = 4343,
  [SMALL_STATE(87)] = 4392,
  [SMALL_STATE(88)] = 4441,
  [SMALL_STATE(89)] = 4490,
  [SMALL_STATE(90)] = 4539,
  [SMALL_STATE(91)] = 4588,
  [SMALL_STATE(92)] = 4637,
  [SMALL_STATE(93)] = 4685,
  [SMALL_STATE(94)] = 4733,
  [SMALL_STATE(95)] = 4787,
  [SMALL_STATE(96)] = 4835,
  [SMALL_STATE(97)] = 4883,
  [SMALL_STATE(98)] = 4931,
  [SMALL_STATE(99)] = 4979,
  [SMALL_STATE(100)] = 5027,
  [SMALL_STATE(101)] = 5075,
  [SMALL_STATE(102)] = 5123,
  [SMALL_STATE(103)] = 5171,
  [SMALL_STATE(104)] = 5219,
  [SMALL_STATE(105)] = 5267,
  [SMALL_STATE(106)] = 5315,
  [SMALL_STATE(107)] = 5363,
  [SMALL_STATE(108)] = 5414,
  [SMALL_STATE(109)] = 5465,
  [SMALL_STATE(110)] = 5509,
  [SMALL_STATE(111)] = 5553,
  [SMALL_STATE(112)] = 5597,
  [SMALL_STATE(113)] = 5680,
  [SMALL_STATE(114)] = 5763,
  [SMALL_STATE(115)] = 5805,
  [SMALL_STATE(116)] = 5882,
  [SMALL_STATE(117)] = 5959,
  [SMALL_STATE(118)] = 6036,
  [SMALL_STATE(119)] = 6084,
  [SMALL_STATE(120)] = 6132,
  [SMALL_STATE(121)] = 6193,
  [SMALL_STATE(122)] = 6239,
  [SMALL_STATE(123)] = 6285,
  [SMALL_STATE(124)] = 6327,
  [SMALL_STATE(125)] = 6357,
  [SMALL_STATE(126)] = 6399,
  [SMALL_STATE(127)] = 6429,
  [SMALL_STATE(128)] = 6459,
  [SMALL_STATE(129)] = 6489,
  [SMALL_STATE(130)] = 6519,
  [SMALL_STATE(131)] = 6572,
  [SMALL_STATE(132)] = 6605,
  [SMALL_STATE(133)] = 6638,
  [SMALL_STATE(134)] = 6691,
  [SMALL_STATE(135)] = 6730,
  [SMALL_STATE(136)] = 6783,
  [SMALL_STATE(137)] = 6819,
  [SMALL_STATE(138)] = 6869,
  [SMALL_STATE(139)] = 6921,
  [SMALL_STATE(140)] = 6956,
  [SMALL_STATE(141)] = 6989,
  [SMALL_STATE(142)] = 7016,
  [SMALL_STATE(143)] = 7051,
  [SMALL_STATE(144)] = 7076,
  [SMALL_STATE(145)] = 7105,
  [SMALL_STATE(146)] = 7150,
  [SMALL_STATE(147)] = 7197,
  [SMALL_STATE(148)] = 7222,
  [SMALL_STATE(149)] = 7267,
  [SMALL_STATE(150)] = 7292,
  [SMALL_STATE(151)] = 7339,
  [SMALL_STATE(152)] = 7386,
  [SMALL_STATE(153)] = 7433,
  [SMALL_STATE(154)] = 7458,
  [SMALL_STATE(155)] = 7503,
  [SMALL_STATE(156)] = 7528,
  [SMALL_STATE(157)] = 7553,
  [SMALL_STATE(158)] = 7582,
  [SMALL_STATE(159)] = 7607,
  [SMALL_STATE(160)] = 7652,
  [SMALL_STATE(161)] = 7676,
  [SMALL_STATE(162)] = 7720,
  [SMALL_STATE(163)] = 7743,
  [SMALL_STATE(164)] = 7766,
  [SMALL_STATE(165)] = 7789,
  [SMALL_STATE(166)] = 7812,
  [SMALL_STATE(167)] = 7835,
  [SMALL_STATE(168)] = 7858,
  [SMALL_STATE(169)] = 7881,
  [SMALL_STATE(170)] = 7904,
  [SMALL_STATE(171)] = 7927,
  [SMALL_STATE(172)] = 7950,
  [SMALL_STATE(173)] = 7973,
  [SMALL_STATE(174)] = 7996,
  [SMALL_STATE(175)] = 8019,
  [SMALL_STATE(176)] = 8042,
  [SMALL_STATE(177)] = 8065,
  [SMALL_STATE(178)] = 8088,
  [SMALL_STATE(179)] = 8111,
  [SMALL_STATE(180)] = 8134,
  [SMALL_STATE(181)] = 8157,
  [SMALL_STATE(182)] = 8180,
  [SMALL_STATE(183)] = 8203,
  [SMALL_STATE(184)] = 8226,
  [SMALL_STATE(185)] = 8249,
  [SMALL_STATE(186)] = 8272,
  [SMALL_STATE(187)] = 8295,
  [SMALL_STATE(188)] = 8318,
  [SMALL_STATE(189)] = 8341,
  [SMALL_STATE(190)] = 8364,
  [SMALL_STATE(191)] = 8387,
  [SMALL_STATE(192)] = 8410,
  [SMALL_STATE(193)] = 8433,
  [SMALL_STATE(194)] = 8456,
  [SMALL_STATE(195)] = 8479,
  [SMALL_STATE(196)] = 8502,
  [SMALL_STATE(197)] = 8525,
  [SMALL_STATE(198)] = 8569,
  [SMALL_STATE(199)] = 8606,
  [SMALL_STATE(200)] = 8646,
  [SMALL_STATE(201)] = 8686,
  [SMALL_STATE(202)] = 8726,
  [SMALL_STATE(203)] = 8757,
  [SMALL_STATE(204)] = 8784,
  [SMALL_STATE(205)] = 8816,
  [SMALL_STATE(206)] = 8848,
  [SMALL_STATE(207)] = 8877,
  [SMALL_STATE(208)] = 8904,
  [SMALL_STATE(209)] = 8931,
  [SMALL_STATE(210)] = 8958,
  [SMALL_STATE(211)] = 8985,
  [SMALL_STATE(212)] = 9014,
  [SMALL_STATE(213)] = 9043,
  [SMALL_STATE(214)] = 9072,
  [SMALL_STATE(215)] = 9099,
  [SMALL_STATE(216)] = 9128,
  [SMALL_STATE(217)] = 9155,
  [SMALL_STATE(218)] = 9182,
  [SMALL_STATE(219)] = 9211,
  [SMALL_STATE(220)] = 9239,
  [SMALL_STATE(221)] = 9267,
  [SMALL_STATE(222)] = 9293,
  [SMALL_STATE(223)] = 9321,
  [SMALL_STATE(224)] = 9349,
  [SMALL_STATE(225)] = 9375,
  [SMALL_STATE(226)] = 9401,
  [SMALL_STATE(227)] = 9429,
  [SMALL_STATE(228)] = 9457,
  [SMALL_STATE(229)] = 9483,
  [SMALL_STATE(230)] = 9509,
  [SMALL_STATE(231)] = 9534,
  [SMALL_STATE(232)] = 9559,
  [SMALL_STATE(233)] = 9584,
  [SMALL_STATE(234)] = 9609,
  [SMALL_STATE(235)] = 9628,
  [SMALL_STATE(236)] = 9653,
  [SMALL_STATE(237)] = 9676,
  [SMALL_STATE(238)] = 9701,
  [SMALL_STATE(239)] = 9724,
  [SMALL_STATE(240)] = 9749,
  [SMALL_STATE(241)] = 9774,
  [SMALL_STATE(242)] = 9799,
  [SMALL_STATE(243)] = 9824,
  [SMALL_STATE(244)] = 9849,
  [SMALL_STATE(245)] = 9865,
  [SMALL_STATE(246)] = 9889,
  [SMALL_STATE(247)] = 9907,
  [SMALL_STATE(248)] = 9929,
  [SMALL_STATE(249)] = 9949,
  [SMALL_STATE(250)] = 9971,
  [SMALL_STATE(251)] = 9989,
  [SMALL_STATE(252)] = 10005,
  [SMALL_STATE(253)] = 10025,
  [SMALL_STATE(254)] = 10043,
  [SMALL_STATE(255)] = 10063,
  [SMALL_STATE(256)] = 10081,
  [SMALL_STATE(257)] = 10101,
  [SMALL_STATE(258)] = 10119,
  [SMALL_STATE(259)] = 10139,
  [SMALL_STATE(260)] = 10157,
  [SMALL_STATE(261)] = 10178,
  [SMALL_STATE(262)] = 10199,
  [SMALL_STATE(263)] = 10216,
  [SMALL_STATE(264)] = 10233,
  [SMALL_STATE(265)] = 10254,
  [SMALL_STATE(266)] = 10271,
  [SMALL_STATE(267)] = 10292,
  [SMALL_STATE(268)] = 10313,
  [SMALL_STATE(269)] = 10334,
  [SMALL_STATE(270)] = 10355,
  [SMALL_STATE(271)] = 10374,
  [SMALL_STATE(272)] = 10399,
  [SMALL_STATE(273)] = 10420,
  [SMALL_STATE(274)] = 10445,
  [SMALL_STATE(275)] = 10462,
  [SMALL_STATE(276)] = 10483,
  [SMALL_STATE(277)] = 10504,
  [SMALL_STATE(278)] = 10523,
  [SMALL_STATE(279)] = 10541,
  [SMALL_STATE(280)] = 10555,
  [SMALL_STATE(281)] = 10569,
  [SMALL_STATE(282)] = 10587,
  [SMALL_STATE(283)] = 10601,
  [SMALL_STATE(284)] = 10615,
  [SMALL_STATE(285)] = 10627,
  [SMALL_STATE(286)] = 10641,
  [SMALL_STATE(287)] = 10657,
  [SMALL_STATE(288)] = 10669,
  [SMALL_STATE(289)] = 10687,
  [SMALL_STATE(290)] = 10705,
  [SMALL_STATE(291)] = 10723,
  [SMALL_STATE(292)] = 10737,
  [SMALL_STATE(293)] = 10753,
  [SMALL_STATE(294)] = 10767,
  [SMALL_STATE(295)] = 10785,
  [SMALL_STATE(296)] = 10799,
  [SMALL_STATE(297)] = 10813,
  [SMALL_STATE(298)] = 10833,
  [SMALL_STATE(299)] = 10849,
  [SMALL_STATE(300)] = 10869,
  [SMALL_STATE(301)] = 10887,
  [SMALL_STATE(302)] = 10901,
  [SMALL_STATE(303)] = 10915,
  [SMALL_STATE(304)] = 10929,
  [SMALL_STATE(305)] = 10942,
  [SMALL_STATE(306)] = 10957,
  [SMALL_STATE(307)] = 10968,
  [SMALL_STATE(308)] = 10983,
  [SMALL_STATE(309)] = 10998,
  [SMALL_STATE(310)] = 11013,
  [SMALL_STATE(311)] = 11028,
  [SMALL_STATE(312)] = 11041,
  [SMALL_STATE(313)] = 11056,
  [SMALL_STATE(314)] = 11071,
  [SMALL_STATE(315)] = 11084,
  [SMALL_STATE(316)] = 11097,
  [SMALL_STATE(317)] = 11110,
  [SMALL_STATE(318)] = 11125,
  [SMALL_STATE(319)] = 11140,
  [SMALL_STATE(320)] = 11153,
  [SMALL_STATE(321)] = 11168,
  [SMALL_STATE(322)] = 11181,
  [SMALL_STATE(323)] = 11196,
  [SMALL_STATE(324)] = 11211,
  [SMALL_STATE(325)] = 11226,
  [SMALL_STATE(326)] = 11241,
  [SMALL_STATE(327)] = 11256,
  [SMALL_STATE(328)] = 11271,
  [SMALL_STATE(329)] = 11287,
  [SMALL_STATE(330)] = 11297,
  [SMALL_STATE(331)] = 11311,
  [SMALL_STATE(332)] = 11325,
  [SMALL_STATE(333)] = 11339,
  [SMALL_STATE(334)] = 11355,
  [SMALL_STATE(335)] = 11369,
  [SMALL_STATE(336)] = 11383,
  [SMALL_STATE(337)] = 11397,
  [SMALL_STATE(338)] = 11405,
  [SMALL_STATE(339)] = 11415,
  [SMALL_STATE(340)] = 11425,
  [SMALL_STATE(341)] = 11435,
  [SMALL_STATE(342)] = 11447,
  [SMALL_STATE(343)] = 11459,
  [SMALL_STATE(344)] = 11473,
  [SMALL_STATE(345)] = 11489,
  [SMALL_STATE(346)] = 11505,
  [SMALL_STATE(347)] = 11519,
  [SMALL_STATE(348)] = 11533,
  [SMALL_STATE(349)] = 11547,
  [SMALL_STATE(350)] = 11563,
  [SMALL_STATE(351)] = 11579,
  [SMALL_STATE(352)] = 11589,
  [SMALL_STATE(353)] = 11599,
  [SMALL_STATE(354)] = 11615,
  [SMALL_STATE(355)] = 11625,
  [SMALL_STATE(356)] = 11635,
  [SMALL_STATE(357)] = 11645,
  [SMALL_STATE(358)] = 11655,
  [SMALL_STATE(359)] = 11671,
  [SMALL_STATE(360)] = 11687,
  [SMALL_STATE(361)] = 11703,
  [SMALL_STATE(362)] = 11715,
  [SMALL_STATE(363)] = 11725,
  [SMALL_STATE(364)] = 11739,
  [SMALL_STATE(365)] = 11751,
  [SMALL_STATE(366)] = 11763,
  [SMALL_STATE(367)] = 11775,
  [SMALL_STATE(368)] = 11785,
  [SMALL_STATE(369)] = 11793,
  [SMALL_STATE(370)] = 11807,
  [SMALL_STATE(371)] = 11821,
  [SMALL_STATE(372)] = 11833,
  [SMALL_STATE(373)] = 11843,
  [SMALL_STATE(374)] = 11853,
  [SMALL_STATE(375)] = 11865,
  [SMALL_STATE(376)] = 11877,
  [SMALL_STATE(377)] = 11891,
  [SMALL_STATE(378)] = 11905,
  [SMALL_STATE(379)] = 11915,
  [SMALL_STATE(380)] = 11931,
  [SMALL_STATE(381)] = 11947,
  [SMALL_STATE(382)] = 11963,
  [SMALL_STATE(383)] = 11979,
  [SMALL_STATE(384)] = 11995,
  [SMALL_STATE(385)] = 12007,
  [SMALL_STATE(386)] = 12021,
  [SMALL_STATE(387)] = 12035,
  [SMALL_STATE(388)] = 12049,
  [SMALL_STATE(389)] = 12063,
  [SMALL_STATE(390)] = 12073,
  [SMALL_STATE(391)] = 12083,
  [SMALL_STATE(392)] = 12095,
  [SMALL_STATE(393)] = 12109,
  [SMALL_STATE(394)] = 12119,
  [SMALL_STATE(395)] = 12132,
  [SMALL_STATE(396)] = 12145,
  [SMALL_STATE(397)] = 12158,
  [SMALL_STATE(398)] = 12171,
  [SMALL_STATE(399)] = 12184,
  [SMALL_STATE(400)] = 12197,
  [SMALL_STATE(401)] = 12210,
  [SMALL_STATE(402)] = 12223,
  [SMALL_STATE(403)] = 12236,
  [SMALL_STATE(404)] = 12249,
  [SMALL_STATE(405)] = 12262,
  [SMALL_STATE(406)] = 12275,
  [SMALL_STATE(407)] = 12288,
  [SMALL_STATE(408)] = 12301,
  [SMALL_STATE(409)] = 12312,
  [SMALL_STATE(410)] = 12325,
  [SMALL_STATE(411)] = 12338,
  [SMALL_STATE(412)] = 12351,
  [SMALL_STATE(413)] = 12362,
  [SMALL_STATE(414)] = 12373,
  [SMALL_STATE(415)] = 12384,
  [SMALL_STATE(416)] = 12397,
  [SMALL_STATE(417)] = 12410,
  [SMALL_STATE(418)] = 12423,
  [SMALL_STATE(419)] = 12436,
  [SMALL_STATE(420)] = 12449,
  [SMALL_STATE(421)] = 12462,
  [SMALL_STATE(422)] = 12475,
  [SMALL_STATE(423)] = 12488,
  [SMALL_STATE(424)] = 12501,
  [SMALL_STATE(425)] = 12512,
  [SMALL_STATE(426)] = 12525,
  [SMALL_STATE(427)] = 12538,
  [SMALL_STATE(428)] = 12551,
  [SMALL_STATE(429)] = 12564,
  [SMALL_STATE(430)] = 12577,
  [SMALL_STATE(431)] = 12590,
  [SMALL_STATE(432)] = 12599,
  [SMALL_STATE(433)] = 12612,
  [SMALL_STATE(434)] = 12625,
  [SMALL_STATE(435)] = 12638,
  [SMALL_STATE(436)] = 12651,
  [SMALL_STATE(437)] = 12664,
  [SMALL_STATE(438)] = 12677,
  [SMALL_STATE(439)] = 12690,
  [SMALL_STATE(440)] = 12701,
  [SMALL_STATE(441)] = 12710,
  [SMALL_STATE(442)] = 12721,
  [SMALL_STATE(443)] = 12734,
  [SMALL_STATE(444)] = 12747,
  [SMALL_STATE(445)] = 12760,
  [SMALL_STATE(446)] = 12773,
  [SMALL_STATE(447)] = 12786,
  [SMALL_STATE(448)] = 12799,
  [SMALL_STATE(449)] = 12812,
  [SMALL_STATE(450)] = 12823,
  [SMALL_STATE(451)] = 12836,
  [SMALL_STATE(452)] = 12849,
  [SMALL_STATE(453)] = 12862,
  [SMALL_STATE(454)] = 12875,
  [SMALL_STATE(455)] = 12884,
  [SMALL_STATE(456)] = 12893,
  [SMALL_STATE(457)] = 12904,
  [SMALL_STATE(458)] = 12915,
  [SMALL_STATE(459)] = 12928,
  [SMALL_STATE(460)] = 12941,
  [SMALL_STATE(461)] = 12954,
  [SMALL_STATE(462)] = 12965,
  [SMALL_STATE(463)] = 12974,
  [SMALL_STATE(464)] = 12983,
  [SMALL_STATE(465)] = 12994,
  [SMALL_STATE(466)] = 13007,
  [SMALL_STATE(467)] = 13016,
  [SMALL_STATE(468)] = 13027,
  [SMALL_STATE(469)] = 13036,
  [SMALL_STATE(470)] = 13047,
  [SMALL_STATE(471)] = 13060,
  [SMALL_STATE(472)] = 13069,
  [SMALL_STATE(473)] = 13078,
  [SMALL_STATE(474)] = 13091,
  [SMALL_STATE(475)] = 13104,
  [SMALL_STATE(476)] = 13117,
  [SMALL_STATE(477)] = 13130,
  [SMALL_STATE(478)] = 13143,
  [SMALL_STATE(479)] = 13152,
  [SMALL_STATE(480)] = 13165,
  [SMALL_STATE(481)] = 13176,
  [SMALL_STATE(482)] = 13187,
  [SMALL_STATE(483)] = 13196,
  [SMALL_STATE(484)] = 13205,
  [SMALL_STATE(485)] = 13218,
  [SMALL_STATE(486)] = 13231,
  [SMALL_STATE(487)] = 13244,
  [SMALL_STATE(488)] = 13253,
  [SMALL_STATE(489)] = 13263,
  [SMALL_STATE(490)] = 13273,
  [SMALL_STATE(491)] = 13283,
  [SMALL_STATE(492)] = 13293,
  [SMALL_STATE(493)] = 13303,
  [SMALL_STATE(494)] = 13313,
  [SMALL_STATE(495)] = 13323,
  [SMALL_STATE(496)] = 13333,
  [SMALL_STATE(497)] = 13343,
  [SMALL_STATE(498)] = 13353,
  [SMALL_STATE(499)] = 13363,
  [SMALL_STATE(500)] = 13373,
  [SMALL_STATE(501)] = 13383,
  [SMALL_STATE(502)] = 13393,
  [SMALL_STATE(503)] = 13403,
  [SMALL_STATE(504)] = 13413,
  [SMALL_STATE(505)] = 13423,
  [SMALL_STATE(506)] = 13433,
  [SMALL_STATE(507)] = 13443,
  [SMALL_STATE(508)] = 13453,
  [SMALL_STATE(509)] = 13463,
  [SMALL_STATE(510)] = 13473,
  [SMALL_STATE(511)] = 13483,
  [SMALL_STATE(512)] = 13491,
  [SMALL_STATE(513)] = 13501,
  [SMALL_STATE(514)] = 13509,
  [SMALL_STATE(515)] = 13519,
  [SMALL_STATE(516)] = 13529,
  [SMALL_STATE(517)] = 13539,
  [SMALL_STATE(518)] = 13549,
  [SMALL_STATE(519)] = 13559,
  [SMALL_STATE(520)] = 13569,
  [SMALL_STATE(521)] = 13579,
  [SMALL_STATE(522)] = 13589,
  [SMALL_STATE(523)] = 13599,
  [SMALL_STATE(524)] = 13609,
  [SMALL_STATE(525)] = 13619,
  [SMALL_STATE(526)] = 13629,
  [SMALL_STATE(527)] = 13639,
  [SMALL_STATE(528)] = 13647,
  [SMALL_STATE(529)] = 13657,
  [SMALL_STATE(530)] = 13667,
  [SMALL_STATE(531)] = 13677,
  [SMALL_STATE(532)] = 13685,
  [SMALL_STATE(533)] = 13695,
  [SMALL_STATE(534)] = 13705,
  [SMALL_STATE(535)] = 13715,
  [SMALL_STATE(536)] = 13725,
  [SMALL_STATE(537)] = 13735,
  [SMALL_STATE(538)] = 13745,
  [SMALL_STATE(539)] = 13755,
  [SMALL_STATE(540)] = 13765,
  [SMALL_STATE(541)] = 13775,
  [SMALL_STATE(542)] = 13782,
  [SMALL_STATE(543)] = 13789,
  [SMALL_STATE(544)] = 13796,
  [SMALL_STATE(545)] = 13803,
  [SMALL_STATE(546)] = 13810,
  [SMALL_STATE(547)] = 13817,
  [SMALL_STATE(548)] = 13824,
  [SMALL_STATE(549)] = 13831,
  [SMALL_STATE(550)] = 13838,
  [SMALL_STATE(551)] = 13845,
  [SMALL_STATE(552)] = 13852,
  [SMALL_STATE(553)] = 13859,
  [SMALL_STATE(554)] = 13866,
  [SMALL_STATE(555)] = 13873,
  [SMALL_STATE(556)] = 13880,
  [SMALL_STATE(557)] = 13887,
  [SMALL_STATE(558)] = 13894,
  [SMALL_STATE(559)] = 13901,
  [SMALL_STATE(560)] = 13908,
  [SMALL_STATE(561)] = 13915,
  [SMALL_STATE(562)] = 13922,
  [SMALL_STATE(563)] = 13929,
  [SMALL_STATE(564)] = 13936,
  [SMALL_STATE(565)] = 13943,
  [SMALL_STATE(566)] = 13950,
  [SMALL_STATE(567)] = 13957,
  [SMALL_STATE(568)] = 13964,
  [SMALL_STATE(569)] = 13971,
  [SMALL_STATE(570)] = 13978,
  [SMALL_STATE(571)] = 13985,
  [SMALL_STATE(572)] = 13992,
  [SMALL_STATE(573)] = 13999,
  [SMALL_STATE(574)] = 14006,
  [SMALL_STATE(575)] = 14013,
  [SMALL_STATE(576)] = 14020,
  [SMALL_STATE(577)] = 14027,
  [SMALL_STATE(578)] = 14034,
  [SMALL_STATE(579)] = 14041,
  [SMALL_STATE(580)] = 14048,
  [SMALL_STATE(581)] = 14055,
  [SMALL_STATE(582)] = 14062,
  [SMALL_STATE(583)] = 14069,
  [SMALL_STATE(584)] = 14076,
  [SMALL_STATE(585)] = 14083,
  [SMALL_STATE(586)] = 14090,
  [SMALL_STATE(587)] = 14097,
  [SMALL_STATE(588)] = 14104,
  [SMALL_STATE(589)] = 14111,
  [SMALL_STATE(590)] = 14118,
  [SMALL_STATE(591)] = 14125,
  [SMALL_STATE(592)] = 14132,
  [SMALL_STATE(593)] = 14139,
  [SMALL_STATE(594)] = 14146,
  [SMALL_STATE(595)] = 14153,
  [SMALL_STATE(596)] = 14160,
  [SMALL_STATE(597)] = 14167,
  [SMALL_STATE(598)] = 14174,
  [SMALL_STATE(599)] = 14181,
  [SMALL_STATE(600)] = 14188,
  [SMALL_STATE(601)] = 14195,
  [SMALL_STATE(602)] = 14202,
  [SMALL_STATE(603)] = 14209,
  [SMALL_STATE(604)] = 14216,
  [SMALL_STATE(605)] = 14223,
  [SMALL_STATE(606)] = 14230,
  [SMALL_STATE(607)] = 14237,
  [SMALL_STATE(608)] = 14244,
  [SMALL_STATE(609)] = 14251,
  [SMALL_STATE(610)] = 14258,
  [SMALL_STATE(611)] = 14265,
  [SMALL_STATE(612)] = 14272,
  [SMALL_STATE(613)] = 14279,
  [SMALL_STATE(614)] = 14286,
  [SMALL_STATE(615)] = 14293,
  [SMALL_STATE(616)] = 14300,
  [SMALL_STATE(617)] = 14307,
  [SMALL_STATE(618)] = 14314,
  [SMALL_STATE(619)] = 14321,
  [SMALL_STATE(620)] = 14328,
  [SMALL_STATE(621)] = 14335,
  [SMALL_STATE(622)] = 14342,
  [SMALL_STATE(623)] = 14349,
  [SMALL_STATE(624)] = 14356,
  [SMALL_STATE(625)] = 14363,
  [SMALL_STATE(626)] = 14370,
  [SMALL_STATE(627)] = 14377,
  [SMALL_STATE(628)] = 14384,
  [SMALL_STATE(629)] = 14391,
  [SMALL_STATE(630)] = 14398,
  [SMALL_STATE(631)] = 14405,
  [SMALL_STATE(632)] = 14412,
  [SMALL_STATE(633)] = 14419,
  [SMALL_STATE(634)] = 14426,
  [SMALL_STATE(635)] = 14433,
  [SMALL_STATE(636)] = 14440,
  [SMALL_STATE(637)] = 14447,
  [SMALL_STATE(638)] = 14454,
  [SMALL_STATE(639)] = 14461,
  [SMALL_STATE(640)] = 14468,
  [SMALL_STATE(641)] = 14475,
  [SMALL_STATE(642)] = 14482,
  [SMALL_STATE(643)] = 14489,
  [SMALL_STATE(644)] = 14496,
  [SMALL_STATE(645)] = 14503,
  [SMALL_STATE(646)] = 14510,
  [SMALL_STATE(647)] = 14517,
  [SMALL_STATE(648)] = 14524,
  [SMALL_STATE(649)] = 14531,
  [SMALL_STATE(650)] = 14538,
  [SMALL_STATE(651)] = 14545,
  [SMALL_STATE(652)] = 14552,
  [SMALL_STATE(653)] = 14559,
  [SMALL_STATE(654)] = 14566,
  [SMALL_STATE(655)] = 14573,
  [SMALL_STATE(656)] = 14580,
  [SMALL_STATE(657)] = 14587,
  [SMALL_STATE(658)] = 14594,
  [SMALL_STATE(659)] = 14601,
  [SMALL_STATE(660)] = 14608,
  [SMALL_STATE(661)] = 14615,
  [SMALL_STATE(662)] = 14622,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(559),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(557),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(555),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(554),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(553),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(552),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(551),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(550),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(549),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(548),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(547),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(546),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(545),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(520),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(105),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(104),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(523),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(524),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(103),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(534),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(538),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(343),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(102),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(97),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(96),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(95),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(536),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(348),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(83),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(84),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(85),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(86),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(87),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(88),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(89),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(90),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(91),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(81),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(347),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(346),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(537),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(82),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(22),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(22),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compressed_option, 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compressed_option, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_as_is_option, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_as_is_option, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proxy_option, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proxy_option, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(263),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(606),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(401),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(435),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(444),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(425),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(422),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(421),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(420),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(61),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(61),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(54),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(54),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(64),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(60),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(60),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(280),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(588),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(398),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_filter, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_filter, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_date_filter, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_date_filter, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_filter, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_filter, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encode_filter, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encode_filter, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_decode_filter, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_decode_filter, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_escape_filter, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_escape_filter, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_unescape_filter, 1),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_unescape_filter, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_int_filter, 1),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_int_filter, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_days_after_now_filter, 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_days_after_now_filter, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_days_before_now_filter, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_days_before_now_filter, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decode_filter, 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decode_filter, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(428),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(430),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_query, 1),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_query, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md5_query, 1),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md5_query, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha256_query, 1),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sha256_query, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_query, 1),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_query, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_query, 1),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_query, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_query, 1),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_query, 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_query, 1),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_query, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(107),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(107),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [834] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(518),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(336),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(171),
  [843] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(172),
  [846] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(173),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(174),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(175),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(176),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(177),
  [861] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(178),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(179),
  [867] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(180),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(377),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(330),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(515),
  [879] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(181),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(157),
  [927] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(329),
  [930] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(157),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [959] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(141),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(55),
  [969] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(55),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(157),
  [987] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(157),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(144),
  [997] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(144),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [1042] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(599),
  [1045] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(633),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2),
  [1050] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(246),
  [1053] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(277),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(402),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2),
  [1063] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(246),
  [1066] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(277),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(402),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [1086] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(378),
  [1089] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(234),
  [1092] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(399),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [1119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(250),
  [1122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(310),
  [1125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(477),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(255),
  [1139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(244),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [1144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(256),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(400),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(263),
  [1177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(606),
  [1180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(401),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(246),
  [1188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(277),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(286),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2),
  [1204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(568),
  [1207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(405),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [1212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(280),
  [1215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(588),
  [1218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(398),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(282),
  [1226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(619),
  [1229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(410),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [1248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(412),
  [1251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(295),
  [1254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(407),
  [1257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(424),
  [1260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(284),
  [1263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(396),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [1278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(251),
  [1281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(375),
  [1284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(406),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(245),
  [1294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(244),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(256),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2), SHIFT_REPEAT(248),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(250),
  [1320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(310),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2),
  [1335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 2),
  [1339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(287),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2),
  [1344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(378),
  [1347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(234),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1),
  [1362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(261),
  [1373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(606),
  [1376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1),
  [1382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1),
  [1384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [1392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(286),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(568),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(270),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1),
  [1429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1),
  [1433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [1437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(281),
  [1440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(619),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2),
  [1447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1),
  [1449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2),
  [1461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(412),
  [1464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(288),
  [1467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(289),
  [1470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(588),
  [1473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(656),
  [1476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2),
  [1478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(482),
  [1481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 3),
  [1485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(424),
  [1488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(292),
  [1491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3),
  [1495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3),
  [1499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1),
  [1505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1),
  [1511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6),
  [1515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3),
  [1519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3),
  [1523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [1531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [1539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1),
  [1543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1),
  [1545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2),
  [1557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2),
  [1559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(323),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(325),
  [1567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(325),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2),
  [1588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2), SHIFT_REPEAT(600),
  [1591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3),
  [1593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2),
  [1595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2),
  [1597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2),
  [1601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2), SHIFT_REPEAT(483),
  [1604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2),
  [1608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [1618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2),
  [1620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [1626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexdigit, 1),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1),
  [1630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_text, 1),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text, 1),
  [1640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(320),
  [1643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(320),
  [1646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(320),
  [1649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(320),
  [1652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [1660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6),
  [1662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2),
  [1676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(154),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [1705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2),
  [1709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2),
  [1719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3),
  [1729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1),
  [1735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [1757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(333),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [1764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_text, 1),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3),
  [1792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3),
  [1794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [1796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [1798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3),
  [1800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [1830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_contenttype, 1),
  [1836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_contenttype, 1),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2),
  [1840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2),
  [1842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2),
  [1844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2),
  [1846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2),
  [1848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2),
  [1850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2),
  [1852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2),
  [1854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1),
  [1856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2),
  [1860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2),
  [1862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2),
  [1866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2),
  [1868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1),
  [1872] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [1880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4),
  [1882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4),
  [1884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3),
  [1886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [1888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2),
  [1898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2),
  [1900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2),
  [1904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2),
  [1906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2),
  [1908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [1912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4),
  [1914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2),
  [1916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2),
  [1918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [1920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [1922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6),
  [1924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4),
  [1932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [1936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2),
  [1938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2),
  [1940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3),
  [1942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3),
  [1944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2),
  [1946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [1948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3),
  [1960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4),
  [1974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [2010] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4),
  [2012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [2016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [2018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [2020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [2022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [2024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1),
  [2026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1),
  [2028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [2030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [2032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_predicate, 1),
  [2034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_predicate, 1),
  [2036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_predicate, 1),
  [2038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_predicate, 1),
  [2040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_predicate, 1),
  [2042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_predicate, 1),
  [2044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_predicate, 1),
  [2046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_predicate, 1),
  [2048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_predicate, 1),
  [2050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_predicate, 1),
  [2052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exist_predicate, 1),
  [2054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exist_predicate, 1),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [2062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2),
  [2064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [2070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3),
  [2072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [2074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1),
  [2076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1),
  [2078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1),
  [2080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [2082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5),
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

TS_PUBLIC const TSLanguage *tree_sitter_hurl() {
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
