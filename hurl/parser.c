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
#define STATE_COUNT 610
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 322
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
  anon_sym_null = 35,
  anon_sym_COLON2 = 36,
  anon_sym_file_COMMA = 37,
  anon_sym_SEMI = 38,
  aux_sym_file_value_token1 = 39,
  anon_sym_cacert = 40,
  anon_sym_compressed = 41,
  anon_sym_location = 42,
  anon_sym_insecure = 43,
  anon_sym_max_DASHredirs = 44,
  anon_sym_path_DASHas_DASHis = 45,
  anon_sym_proxy = 46,
  anon_sym_retry = 47,
  anon_sym_retry_DASHinterval = 48,
  anon_sym_retry_DASHmax_DASHcount = 49,
  anon_sym_variable = 50,
  anon_sym_verbose = 51,
  anon_sym_very_DASHverbose = 52,
  anon_sym_EQ = 53,
  anon_sym_status = 54,
  anon_sym_url = 55,
  anon_sym_body = 56,
  anon_sym_duration = 57,
  anon_sym_bytes = 58,
  anon_sym_sha256 = 59,
  anon_sym_md5 = 60,
  anon_sym_header = 61,
  anon_sym_cookie = 62,
  anon_sym_xpath = 63,
  anon_sym_jsonpath = 64,
  anon_sym_regex = 65,
  anon_sym_not = 66,
  anon_sym_exists = 67,
  anon_sym_isInteger = 68,
  anon_sym_isFloat = 69,
  anon_sym_isBoolean = 70,
  anon_sym_isString = 71,
  anon_sym_isCollection = 72,
  anon_sym_equals = 73,
  anon_sym_EQ_EQ = 74,
  anon_sym_notEquals = 75,
  anon_sym_BANG_EQ = 76,
  anon_sym_greaterThan = 77,
  anon_sym_GT = 78,
  anon_sym_greaterThanOrEquals = 79,
  anon_sym_GT_EQ = 80,
  anon_sym_lessThan = 81,
  anon_sym_LT = 82,
  anon_sym_lessThanOrEquals = 83,
  anon_sym_LT_EQ = 84,
  anon_sym_startsWith = 85,
  anon_sym_endsWith = 86,
  anon_sym_contains = 87,
  anon_sym_matches = 88,
  anon_sym_includes = 89,
  anon_sym_LT_QMARK = 90,
  aux_sym_xml_prolog_tag_token1 = 91,
  anon_sym_QMARK_GT = 92,
  aux_sym_xml_open_tag_token1 = 93,
  anon_sym_LT_SLASH = 94,
  aux_sym_xml_close_tag_token1 = 95,
  anon_sym_base64_COMMA = 96,
  aux_sym_oneline_base64_token1 = 97,
  anon_sym_hex_COMMA = 98,
  anon_sym_DQUOTE = 99,
  sym_quoted_string_text = 100,
  anon_sym_BSLASH = 101,
  aux_sym_invalid_quoted_string_escaped_char_token1 = 102,
  anon_sym_b = 103,
  anon_sym_f = 104,
  anon_sym_n = 105,
  anon_sym_r = 106,
  anon_sym_t = 107,
  anon_sym_u = 108,
  sym_key_string_text = 109,
  anon_sym_BSLASH2 = 110,
  aux_sym_key_string_escaped_char_token1 = 111,
  aux_sym_value_string_text_token1 = 112,
  anon_sym_POUND = 113,
  aux_sym_oneline_string_token1 = 114,
  anon_sym_BQUOTE = 115,
  aux_sym_oneline_string_text_token1 = 116,
  aux_sym_oneline_string_text_token2 = 117,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 118,
  anon_sym_base64 = 119,
  anon_sym_hex = 120,
  anon_sym_json = 121,
  anon_sym_xml = 122,
  anon_sym_graphql = 123,
  aux_sym_multiline_string_type_token1 = 124,
  aux_sym__multiline_string_text_token1 = 125,
  anon_sym_LBRACE = 126,
  sym_filename_text = 127,
  aux_sym_filename_escaped_char_token1 = 128,
  anon_sym_RBRACE = 129,
  anon_sym_COMMA = 130,
  anon_sym_LBRACK = 131,
  anon_sym_RBRACK = 132,
  sym_json_string_text = 133,
  anon_sym_LBRACE_LBRACE = 134,
  anon_sym_RBRACE_RBRACE = 135,
  aux_sym_variable_name_token1 = 136,
  aux_sym_variable_name_token2 = 137,
  anon_sym_count = 138,
  anon_sym_urlEncode = 139,
  anon_sym_urlDecode = 140,
  anon_sym_toInt = 141,
  anon_sym_htmlEscape = 142,
  anon_sym_htmlUnescape = 143,
  anon_sym_daysAfterNow = 144,
  anon_sym_daysBeforeNow = 145,
  anon_sym_decode = 146,
  anon_sym_format = 147,
  anon_sym_toDate = 148,
  anon_sym_nth = 149,
  anon_sym_replace = 150,
  anon_sym_split = 151,
  anon_sym_true = 152,
  anon_sym_false = 153,
  sym__alphanum = 154,
  sym_digit = 155,
  sym_hexdigit = 156,
  anon_sym_DOT = 157,
  anon_sym_e = 158,
  anon_sym_E = 159,
  anon_sym_PLUS = 160,
  anon_sym_DASH = 161,
  sym_comment = 162,
  anon_sym_SLASH = 163,
  sym_regex_text = 164,
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
  sym_capture = 190,
  sym_assert = 191,
  sym_option = 192,
  sym_ca_certificate_option = 193,
  sym_compressed_option = 194,
  sym_follow_redirect_option = 195,
  sym_insecure_option = 196,
  sym_max_redirs_option = 197,
  sym_path_as_is_option = 198,
  sym_proxy_option = 199,
  sym_retry_option = 200,
  sym_retry_interval_option = 201,
  sym_retry_max_count_option = 202,
  sym_variable_option = 203,
  sym_verbose_option = 204,
  sym_very_verbose_option = 205,
  sym_variable_definition = 206,
  sym_variable_value = 207,
  sym_query = 208,
  sym_header_query = 209,
  sym_cookie_query = 210,
  sym_xpath_query = 211,
  sym_jsonpath_query = 212,
  sym_regex_query = 213,
  sym_variable_query = 214,
  sym_predicate = 215,
  sym_predicate_func = 216,
  sym_equal_predicate = 217,
  sym_not_equal_predicate = 218,
  sym_greater_predicate = 219,
  sym_greater_or_equal_predicate = 220,
  sym_less_predicate = 221,
  sym_less_or_equal_predicate = 222,
  sym_start_with_predicate = 223,
  sym_end_with_predicate = 224,
  sym_contain_predicate = 225,
  sym_match_predicate = 226,
  sym_include_predicate = 227,
  sym_predicate_value = 228,
  sym_bytes = 229,
  sym_xml = 230,
  sym_xml_prolog_tag = 231,
  sym_xml_tag = 232,
  sym_xml_open_tag = 233,
  sym_xml_close_tag = 234,
  sym_oneline_base64 = 235,
  sym_oneline_file = 236,
  sym_oneline_hex = 237,
  sym_quoted_string = 238,
  sym_quoted_string_content = 239,
  sym_invalid_quoted_string_escaped_char = 240,
  sym_quoted_string_escaped_char = 241,
  sym_key_string = 242,
  sym_key_string_content = 243,
  sym_key_string_escaped_char = 244,
  sym_value_string = 245,
  sym_value_string_content = 246,
  sym_value_string_text = 247,
  sym_value_string_escaped_char = 248,
  sym_oneline_string = 249,
  sym_oneline_string_content = 250,
  sym_oneline_string_text = 251,
  sym_oneline_string_escaped_char = 252,
  sym_multiline_string = 253,
  sym_multiline_string_type = 254,
  sym_multiline_string_content = 255,
  sym__multiline_string_text = 256,
  sym_multiline_string_escaped_char = 257,
  sym_filename = 258,
  sym_filename_content = 259,
  sym_filename_escaped_char = 260,
  sym_unicode_char = 261,
  sym_json_value = 262,
  sym_json_object = 263,
  sym_json_key_value = 264,
  sym_json_key_string = 265,
  sym_json_array = 266,
  sym_json_string = 267,
  sym_json_string_content = 268,
  sym_json_string_escaped_char = 269,
  sym_json_number = 270,
  sym_template = 271,
  sym_expr = 272,
  sym_variable_name = 273,
  sym_filter = 274,
  sym_regex_filter = 275,
  sym_nth_filter = 276,
  sym_replace_filter = 277,
  sym_split_filter = 278,
  sym_xpath_filter = 279,
  sym_boolean = 280,
  sym_integer = 281,
  sym_float = 282,
  sym_fraction = 283,
  sym_exponent = 284,
  sym_regex = 285,
  sym_regex_content = 286,
  sym_regex_escaped_char = 287,
  aux_sym_hurl_file_repeat1 = 288,
  aux_sym_hurl_file_repeat2 = 289,
  aux_sym__comment_or_new_line_repeat1 = 290,
  aux_sym_request_repeat1 = 291,
  aux_sym_request_repeat2 = 292,
  aux_sym_response_repeat1 = 293,
  aux_sym_query_string_params_section_repeat1 = 294,
  aux_sym_multipart_form_data_section_repeat1 = 295,
  aux_sym_captures_section_repeat1 = 296,
  aux_sym_asserts_section_repeat1 = 297,
  aux_sym_options_section_repeat1 = 298,
  aux_sym_capture_repeat1 = 299,
  aux_sym_xml_repeat1 = 300,
  aux_sym_xml_tag_repeat1 = 301,
  aux_sym_oneline_hex_repeat1 = 302,
  aux_sym_quoted_string_repeat1 = 303,
  aux_sym_quoted_string_content_repeat1 = 304,
  aux_sym_key_string_repeat1 = 305,
  aux_sym_key_string_content_repeat1 = 306,
  aux_sym_value_string_repeat1 = 307,
  aux_sym_value_string_content_repeat1 = 308,
  aux_sym_value_string_text_repeat1 = 309,
  aux_sym_oneline_string_repeat1 = 310,
  aux_sym_oneline_string_content_repeat1 = 311,
  aux_sym_multiline_string_repeat1 = 312,
  aux_sym_multiline_string_content_repeat1 = 313,
  aux_sym__multiline_string_text_repeat1 = 314,
  aux_sym_filename_repeat1 = 315,
  aux_sym_filename_content_repeat1 = 316,
  aux_sym_json_object_repeat1 = 317,
  aux_sym_json_array_repeat1 = 318,
  aux_sym_json_string_repeat1 = 319,
  aux_sym_integer_repeat1 = 320,
  aux_sym_regex_content_repeat1 = 321,
  anon_alias_sym_json_key_string = 322,
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
  [anon_sym_null] = "null",
  [anon_sym_COLON2] = ":",
  [anon_sym_file_COMMA] = "file,",
  [anon_sym_SEMI] = ";",
  [aux_sym_file_value_token1] = "file_value_token1",
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
  [anon_sym_body] = "body",
  [anon_sym_duration] = "duration",
  [anon_sym_bytes] = "bytes",
  [anon_sym_sha256] = "sha256",
  [anon_sym_md5] = "md5",
  [anon_sym_header] = "header",
  [anon_sym_cookie] = "cookie",
  [anon_sym_xpath] = "xpath",
  [anon_sym_jsonpath] = "jsonpath",
  [anon_sym_regex] = "regex",
  [anon_sym_not] = "not",
  [anon_sym_exists] = "exists",
  [anon_sym_isInteger] = "isInteger",
  [anon_sym_isFloat] = "isFloat",
  [anon_sym_isBoolean] = "isBoolean",
  [anon_sym_isString] = "isString",
  [anon_sym_isCollection] = "isCollection",
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
  [anon_sym_includes] = "includes",
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
  [sym_quoted_string_text] = "quoted_string_text",
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
  [sym_json_string_text] = "json_string_text",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_variable_name_token1] = "variable_name_token1",
  [aux_sym_variable_name_token2] = "variable_name_token2",
  [anon_sym_count] = "count",
  [anon_sym_urlEncode] = "urlEncode",
  [anon_sym_urlDecode] = "urlDecode",
  [anon_sym_toInt] = "toInt",
  [anon_sym_htmlEscape] = "htmlEscape",
  [anon_sym_htmlUnescape] = "htmlUnescape",
  [anon_sym_daysAfterNow] = "daysAfterNow",
  [anon_sym_daysBeforeNow] = "daysBeforeNow",
  [anon_sym_decode] = "decode",
  [anon_sym_format] = "format",
  [anon_sym_toDate] = "toDate",
  [anon_sym_nth] = "nth",
  [anon_sym_replace] = "replace",
  [anon_sym_split] = "split",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__alphanum] = "_alphanum",
  [sym_digit] = "digit",
  [sym_hexdigit] = "hexdigit",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [anon_sym_SLASH] = "/",
  [sym_regex_text] = "regex_text",
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
  [sym_header_query] = "header_query",
  [sym_cookie_query] = "cookie_query",
  [sym_xpath_query] = "xpath_query",
  [sym_jsonpath_query] = "jsonpath_query",
  [sym_regex_query] = "regex_query",
  [sym_variable_query] = "variable_query",
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
  [sym_include_predicate] = "include_predicate",
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
  [sym_json_string_escaped_char] = "json_string_escaped_char",
  [sym_json_number] = "json_number",
  [sym_template] = "template",
  [sym_expr] = "expr",
  [sym_variable_name] = "variable_name",
  [sym_filter] = "filter",
  [sym_regex_filter] = "regex_filter",
  [sym_nth_filter] = "nth_filter",
  [sym_replace_filter] = "replace_filter",
  [sym_split_filter] = "split_filter",
  [sym_xpath_filter] = "xpath_filter",
  [sym_boolean] = "boolean",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_fraction] = "fraction",
  [sym_exponent] = "exponent",
  [sym_regex] = "regex",
  [sym_regex_content] = "regex_content",
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
  [anon_sym_null] = anon_sym_null,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_file_COMMA] = anon_sym_file_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_file_value_token1] = aux_sym_file_value_token1,
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
  [anon_sym_body] = anon_sym_body,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_sha256] = anon_sym_sha256,
  [anon_sym_md5] = anon_sym_md5,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_cookie] = anon_sym_cookie,
  [anon_sym_xpath] = anon_sym_xpath,
  [anon_sym_jsonpath] = anon_sym_jsonpath,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_isInteger] = anon_sym_isInteger,
  [anon_sym_isFloat] = anon_sym_isFloat,
  [anon_sym_isBoolean] = anon_sym_isBoolean,
  [anon_sym_isString] = anon_sym_isString,
  [anon_sym_isCollection] = anon_sym_isCollection,
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
  [anon_sym_includes] = anon_sym_includes,
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
  [sym_quoted_string_text] = sym_quoted_string_text,
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
  [sym_json_string_text] = sym_json_string_text,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_variable_name_token1] = aux_sym_variable_name_token1,
  [aux_sym_variable_name_token2] = aux_sym_variable_name_token2,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_urlEncode] = anon_sym_urlEncode,
  [anon_sym_urlDecode] = anon_sym_urlDecode,
  [anon_sym_toInt] = anon_sym_toInt,
  [anon_sym_htmlEscape] = anon_sym_htmlEscape,
  [anon_sym_htmlUnescape] = anon_sym_htmlUnescape,
  [anon_sym_daysAfterNow] = anon_sym_daysAfterNow,
  [anon_sym_daysBeforeNow] = anon_sym_daysBeforeNow,
  [anon_sym_decode] = anon_sym_decode,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_toDate] = anon_sym_toDate,
  [anon_sym_nth] = anon_sym_nth,
  [anon_sym_replace] = anon_sym_replace,
  [anon_sym_split] = anon_sym_split,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym__alphanum] = sym__alphanum,
  [sym_digit] = sym_digit,
  [sym_hexdigit] = sym_hexdigit,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_regex_text] = sym_regex_text,
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
  [sym_header_query] = sym_header_query,
  [sym_cookie_query] = sym_cookie_query,
  [sym_xpath_query] = sym_xpath_query,
  [sym_jsonpath_query] = sym_jsonpath_query,
  [sym_regex_query] = sym_regex_query,
  [sym_variable_query] = sym_variable_query,
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
  [sym_include_predicate] = sym_include_predicate,
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
  [sym_json_string_escaped_char] = sym_json_string_escaped_char,
  [sym_json_number] = sym_json_number,
  [sym_template] = sym_template,
  [sym_expr] = sym_expr,
  [sym_variable_name] = sym_variable_name,
  [sym_filter] = sym_filter,
  [sym_regex_filter] = sym_regex_filter,
  [sym_nth_filter] = sym_nth_filter,
  [sym_replace_filter] = sym_replace_filter,
  [sym_split_filter] = sym_split_filter,
  [sym_xpath_filter] = sym_xpath_filter,
  [sym_boolean] = sym_boolean,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_fraction] = sym_fraction,
  [sym_exponent] = sym_exponent,
  [sym_regex] = sym_regex,
  [sym_regex_content] = sym_regex_content,
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
  [anon_sym_null] = {
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
  [aux_sym_file_value_token1] = {
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
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
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
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cookie] = {
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
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
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
  [anon_sym_includes] = {
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
  [sym_quoted_string_text] = {
    .visible = true,
    .named = true,
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
  [sym_json_string_text] = {
    .visible = true,
    .named = true,
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
  [anon_sym_toInt] = {
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
  [anon_sym_toDate] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym__alphanum] = {
    .visible = false,
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
  [sym_regex_text] = {
    .visible = true,
    .named = true,
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
  [sym_header_query] = {
    .visible = true,
    .named = true,
  },
  [sym_cookie_query] = {
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
  [sym_include_predicate] = {
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
  [sym_xpath_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [52] = 18,
  [53] = 53,
  [54] = 19,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 19,
  [60] = 18,
  [61] = 61,
  [62] = 40,
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
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 18,
  [88] = 19,
  [89] = 89,
  [90] = 90,
  [91] = 63,
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
  [102] = 58,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 57,
  [112] = 61,
  [113] = 53,
  [114] = 53,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 19,
  [125] = 18,
  [126] = 126,
  [127] = 127,
  [128] = 106,
  [129] = 129,
  [130] = 129,
  [131] = 131,
  [132] = 132,
  [133] = 127,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 80,
  [139] = 81,
  [140] = 71,
  [141] = 82,
  [142] = 69,
  [143] = 70,
  [144] = 72,
  [145] = 85,
  [146] = 86,
  [147] = 74,
  [148] = 78,
  [149] = 75,
  [150] = 150,
  [151] = 83,
  [152] = 79,
  [153] = 153,
  [154] = 154,
  [155] = 73,
  [156] = 154,
  [157] = 77,
  [158] = 76,
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
  [169] = 164,
  [170] = 170,
  [171] = 165,
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
  [183] = 178,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 176,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 179,
  [195] = 189,
  [196] = 196,
  [197] = 196,
  [198] = 179,
  [199] = 192,
  [200] = 189,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 207,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 209,
  [214] = 214,
  [215] = 180,
  [216] = 184,
  [217] = 201,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 57,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 61,
  [227] = 227,
  [228] = 228,
  [229] = 227,
  [230] = 230,
  [231] = 230,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 220,
  [239] = 239,
  [240] = 220,
  [241] = 224,
  [242] = 242,
  [243] = 224,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 234,
  [248] = 246,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 232,
  [256] = 230,
  [257] = 242,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 260,
  [264] = 260,
  [265] = 246,
  [266] = 18,
  [267] = 260,
  [268] = 222,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 219,
  [273] = 273,
  [274] = 249,
  [275] = 275,
  [276] = 262,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 19,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 260,
  [286] = 262,
  [287] = 287,
  [288] = 288,
  [289] = 260,
  [290] = 249,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 249,
  [296] = 296,
  [297] = 297,
  [298] = 260,
  [299] = 299,
  [300] = 260,
  [301] = 260,
  [302] = 302,
  [303] = 303,
  [304] = 269,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 284,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 237,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 284,
  [324] = 324,
  [325] = 325,
  [326] = 269,
  [327] = 260,
  [328] = 328,
  [329] = 249,
  [330] = 328,
  [331] = 331,
  [332] = 291,
  [333] = 303,
  [334] = 334,
  [335] = 306,
  [336] = 336,
  [337] = 320,
  [338] = 260,
  [339] = 250,
  [340] = 334,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 345,
  [347] = 347,
  [348] = 348,
  [349] = 345,
  [350] = 345,
  [351] = 351,
  [352] = 345,
  [353] = 353,
  [354] = 345,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 345,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 345,
  [368] = 345,
  [369] = 345,
  [370] = 370,
  [371] = 371,
  [372] = 345,
  [373] = 373,
  [374] = 343,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 373,
  [386] = 386,
  [387] = 387,
  [388] = 345,
  [389] = 384,
  [390] = 383,
  [391] = 260,
  [392] = 382,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 387,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 377,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 291,
  [420] = 370,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 397,
  [434] = 306,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 437,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 445,
  [456] = 456,
  [457] = 443,
  [458] = 458,
  [459] = 446,
  [460] = 441,
  [461] = 439,
  [462] = 447,
  [463] = 458,
  [464] = 458,
  [465] = 254,
  [466] = 466,
  [467] = 466,
  [468] = 444,
  [469] = 454,
  [470] = 466,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 342,
  [475] = 475,
  [476] = 259,
  [477] = 477,
  [478] = 407,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 408,
  [483] = 483,
  [484] = 484,
  [485] = 331,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
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
  [518] = 428,
  [519] = 519,
  [520] = 251,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 427,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 473,
  [536] = 536,
  [537] = 537,
  [538] = 293,
  [539] = 539,
  [540] = 540,
  [541] = 432,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 431,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 477,
  [555] = 555,
  [556] = 539,
  [557] = 557,
  [558] = 405,
  [559] = 403,
  [560] = 239,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 533,
  [566] = 473,
  [567] = 563,
  [568] = 533,
  [569] = 563,
  [570] = 533,
  [571] = 563,
  [572] = 533,
  [573] = 533,
  [574] = 533,
  [575] = 533,
  [576] = 533,
  [577] = 533,
  [578] = 533,
  [579] = 579,
  [580] = 514,
  [581] = 581,
  [582] = 582,
  [583] = 521,
  [584] = 547,
  [585] = 563,
  [586] = 547,
  [587] = 587,
  [588] = 547,
  [589] = 589,
  [590] = 547,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 543,
  [596] = 596,
  [597] = 533,
  [598] = 525,
  [599] = 525,
  [600] = 525,
  [601] = 525,
  [602] = 513,
  [603] = 513,
  [604] = 513,
  [605] = 513,
  [606] = 483,
  [607] = 483,
  [608] = 483,
  [609] = 483,
};

static TSCharacterRange extras_character_set_1[] = {
  {'\t', '\t'}, {0x0b, '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200b}, {0x202f, 0x202f}, {0x205f, 0x2060},
  {0x3000, 0x3000}, {0xfeff, 0xfeff},
};

static TSCharacterRange extras_character_set_2[] = {
  {'\t', '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200b}, {0x202f, 0x202f}, {0x205f, 0x2060}, {0x3000, 0x3000},
  {0xfeff, 0xfeff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '!', 60,
        '"', 711,
        '#', 900,
        '*', 616,
        '+', 990,
        ',', 947,
        '-', 991,
        '.', 985,
        '/', 994,
        ':', 633,
        ';', 638,
        '<', 684,
        '=', 654,
        '>', 680,
        '?', 62,
        'E', 989,
        '[', 949,
        '\\', 892,
        ']', 954,
        '`', 903,
        'b', 720,
        'e', 986,
        'f', 721,
        'n', 722,
        'r', 723,
        't', 724,
        'u', 725,
        '{', 940,
        '}', 946,
        'a', 963,
        'c', 963,
        'd', 963,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(963);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(509);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 513,
        '#', 993,
        '.', 985,
        'E', 988,
        'c', 338,
        'd', 101,
        'e', 986,
        'f', 339,
        'h', 446,
        'n', 447,
        'r', 188,
        's', 347,
        't', 314,
        'u', 377,
        'x', 353,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == ':') ADVANCE(633);
      if (lookahead == '\\') ADVANCE(892);
      if (lookahead == '{') ADVANCE(499);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(5);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == 'f') ADVANCE(896);
      if (lookahead == 'n') ADVANCE(898);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead == '{') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(895);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(895);
      if (lookahead != 0) ADVANCE(895);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '{') ADVANCE(899);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(895);
      if (lookahead != 0) ADVANCE(895);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(993);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(993);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(6);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(35);
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == '<') ADVANCE(685);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '{') ADVANCE(899);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(895);
      if (lookahead != 0) ADVANCE(895);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == ' ') SKIP(9);
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '{') ADVANCE(942);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(944);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == ' ') SKIP(9);
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(716);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(944);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '`') ADVANCE(903);
      if (lookahead == '{') ADVANCE(940);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(936);
      if (lookahead != 0) ADVANCE(938);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(36);
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '{') ADVANCE(899);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(895);
      if (lookahead != 0) ADVANCE(895);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '`') ADVANCE(902);
      if (lookahead == '{') ADVANCE(906);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(905);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '`') ADVANCE(902);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(905);
      if (lookahead != 0) ADVANCE(904);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '#') ADVANCE(992);
      if (lookahead == '/') ADVANCE(994);
      if (lookahead == '\\') ADVANCE(716);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(995);
      if (lookahead != 0) ADVANCE(996);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '#') ADVANCE(993);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(998);
      if (lookahead != 0) ADVANCE(997);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(708);
      if (lookahead == '#') ADVANCE(993);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(16);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '#') ADVANCE(935);
      if (lookahead == 'b') ADVANCE(920);
      if (lookahead == 'g') ADVANCE(931);
      if (lookahead == 'h') ADVANCE(921);
      if (lookahead == 'j') ADVANCE(932);
      if (lookahead == 'x') ADVANCE(926);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(916);
      if (lookahead != 0) ADVANCE(935);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '!', 60,
        '#', 993,
        ',', 947,
        '.', 985,
        ':', 636,
        '<', 686,
        '=', 61,
        '>', 680,
        'E', 988,
        ']', 954,
        'c', 317,
        'd', 101,
        'e', 987,
        'f', 339,
        'g', 386,
        'h', 446,
        'i', 298,
        'l', 216,
        'm', 126,
        'n', 332,
        'r', 188,
        's', 348,
        't', 314,
        'u', 377,
        'x', 353,
        '{', 939,
        '}', 500,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(18);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '"', 711,
        '#', 993,
        ',', 947,
        '<', 687,
        '=', 653,
        '>', 679,
        '\\', 892,
        'f', 806,
        'n', 883,
        't', 856,
        '{', 499,
        '}', 946,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(20);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '"', 711,
        '#', 993,
        ',', 947,
        '<', 687,
        '=', 653,
        '>', 679,
        'f', 95,
        'n', 472,
        't', 370,
        '}', 946,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(20);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '"', 711,
        '#', 993,
        '\\', 716,
        '`', 902,
        'b', 720,
        'f', 721,
        'n', 722,
        'r', 723,
        't', 724,
        'u', 725,
      );
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') ADVANCE(712);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '{') ADVANCE(714);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(713);
      if (lookahead != 0) ADVANCE(715);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '"', 711,
        '#', 719,
        '\\', 716,
        'b', 720,
        'f', 721,
        'n', 722,
        'r', 723,
        't', 724,
        'u', 725,
      );
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r') SKIP(23);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(718);
      if (lookahead != 0) ADVANCE(717);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(711);
      if (lookahead == '#') ADVANCE(958);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '{') ADVANCE(957);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(956);
      if (lookahead != 0) ADVANCE(955);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(893);
      if (lookahead == '#') ADVANCE(894);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(38);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '#', 900,
        ',', 945,
        ';', 638,
        '\\', 716,
        '`', 902,
        'b', 720,
        'f', 721,
        'n', 722,
        'r', 723,
        't', 724,
        'u', 725,
      );
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(26);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '#', 993,
        '*', 616,
        '=', 653,
        'c', 338,
        'd', 101,
        'f', 339,
        'h', 446,
        'n', 447,
        'r', 188,
        's', 347,
        't', 314,
        'u', 377,
        'x', 353,
        '}', 500,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(27);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '#', 993,
        ',', 947,
        '.', 985,
        ':', 636,
        'E', 988,
        ']', 954,
        'b', 319,
        'c', 336,
        'd', 477,
        'e', 986,
        'h', 209,
        'j', 414,
        'm', 160,
        'r', 190,
        's', 236,
        'u', 371,
        'v', 112,
        'x', 353,
        '}', 946,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == ':') ADVANCE(633);
      if (lookahead == '\\') ADVANCE(892);
      if (lookahead == '{') ADVANCE(499);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == ':') ADVANCE(636);
      if (lookahead == '\\') ADVANCE(892);
      if (lookahead == '{') ADVANCE(499);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == ':') ADVANCE(636);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == ';') ADVANCE(638);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '{') ADVANCE(942);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(33);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(943);
      if (lookahead != 0) ADVANCE(944);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == ';') ADVANCE(638);
      if (lookahead == '\\') ADVANCE(716);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(33);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(943);
      if (lookahead != 0) ADVANCE(944);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == ';') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(984);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(34);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == '<') ADVANCE(685);
      if (lookahead == '\\') ADVANCE(716);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(716);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(36);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(993);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(963);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(993);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(696);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(698);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(700);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(702);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(704);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(706);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(909);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(907);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(612);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '2') ADVANCE(611);
      END_STATE();
    case 44:
      if (lookahead == ',') ADVANCE(710);
      END_STATE();
    case 45:
      if (lookahead == ',') ADVANCE(637);
      END_STATE();
    case 46:
      if (lookahead == ',') ADVANCE(707);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(486);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(609);
      if (lookahead == '1') ADVANCE(610);
      END_STATE();
    case 54:
      if (lookahead == '2') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == '5') ADVANCE(661);
      END_STATE();
    case 57:
      if (lookahead == '5') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == '6') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(660);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(677);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(675);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(699);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(221);
      if (lookahead == 'B') ADVANCE(194);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(473);
      END_STATE();
    case 65:
      if (lookahead == 'B') ADVANCE(331);
      if (lookahead == 'C') ADVANCE(329);
      if (lookahead == 'F') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(306);
      if (lookahead == 'S') ADVANCE(457);
      END_STATE();
    case 66:
      if (lookahead == 'D') ADVANCE(109);
      END_STATE();
    case 67:
      if (lookahead == 'D') ADVANCE(219);
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 68:
      if (lookahead == 'D') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(302);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(426);
      if (lookahead == 'U') ADVANCE(307);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(357);
      END_STATE();
    case 72:
      if (lookahead == 'F') ADVANCE(334);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(316);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(320);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'P') ADVANCE(134);
      END_STATE();
    case 77:
      if (lookahead == 'S') ADVANCE(452);
      END_STATE();
    case 78:
      if (lookahead == 'T') ADVANCE(237);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(238);
      END_STATE();
    case 80:
      if (lookahead == 'W') ADVANCE(255);
      END_STATE();
    case 81:
      if (lookahead == 'W') ADVANCE(256);
      END_STATE();
    case 82:
      if (lookahead == ']') ADVANCE(629);
      END_STATE();
    case 83:
      if (lookahead == ']') ADVANCE(625);
      END_STATE();
    case 84:
      if (lookahead == ']') ADVANCE(631);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(627);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(617);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(621);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(623);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(619);
      END_STATE();
    case 90:
      if (lookahead == '`') ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(92);
      if (lookahead != 0) ADVANCE(901);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(910);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 'y') ADVANCE(462);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(413);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 143:
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(270);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(342);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(464);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(641);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(495);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(973);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(975);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(977);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(966);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(969);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(970);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 221:
      if (lookahead == 'f') ADVANCE(465);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(343);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(672);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(272);
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(664);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(665);
      END_STATE();
    case 231:
      if (lookahead == 'h') ADVANCE(976);
      END_STATE();
    case 232:
      if (lookahead == 'h') ADVANCE(691);
      END_STATE();
    case 233:
      if (lookahead == 'h') ADVANCE(690);
      END_STATE();
    case 234:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 235:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 236:
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 259:
      if (lookahead == 'k') ADVANCE(242);
      END_STATE();
    case 260:
      if (lookahead == 'k') ADVANCE(248);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(634);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(648);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 282:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 283:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(416);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(417);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(658);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(642);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(671);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(678);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'q') ADVANCE(479);
      if (lookahead == 'x') ADVANCE(254);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 'y') ADVANCE(462);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(481);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 345:
      if (lookahead == 'p') ADVANCE(440);
      END_STATE();
    case 346:
      if (lookahead == 'p') ADVANCE(442);
      END_STATE();
    case 347:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 348:
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 349:
      if (lookahead == 'p') ADVANCE(381);
      END_STATE();
    case 350:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 351:
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 352:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 353:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 354:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 355:
      if (lookahead == 'q') ADVANCE(482);
      END_STATE();
    case 356:
      if (lookahead == 'q') ADVANCE(483);
      END_STATE();
    case 357:
      if (lookahead == 'q') ADVANCE(484);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(662);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(669);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(659);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(655);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(644);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(645);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(674);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(693);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(692);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(676);
      END_STATE();
    case 407:
      if (lookahead == 's') ADVANCE(688);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(681);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(965);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(978);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(968);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(640);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(974);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(649);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(667);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 469:
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 470:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 471:
      if (lookahead == 'u') ADVANCE(387);
      END_STATE();
    case 472:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 473:
      if (lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 474:
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 475:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 476:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 477:
      if (lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 478:
      if (lookahead == 'u') ADVANCE(395);
      END_STATE();
    case 479:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 480:
      if (lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 481:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 482:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 483:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 485:
      if (lookahead == 'v') ADVANCE(118);
      END_STATE();
    case 486:
      if (lookahead == 'v') ADVANCE(205);
      END_STATE();
    case 487:
      if (lookahead == 'w') ADVANCE(971);
      END_STATE();
    case 488:
      if (lookahead == 'w') ADVANCE(972);
      END_STATE();
    case 489:
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 490:
      if (lookahead == 'x') ADVANCE(666);
      END_STATE();
    case 491:
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 492:
      if (lookahead == 'x') ADVANCE(496);
      END_STATE();
    case 493:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 494:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 495:
      if (lookahead == 'y') ADVANCE(657);
      END_STATE();
    case 496:
      if (lookahead == 'y') ADVANCE(646);
      END_STATE();
    case 497:
      if (lookahead == 'y') ADVANCE(647);
      END_STATE();
    case 498:
      if (lookahead == 'y') ADVANCE(396);
      END_STATE();
    case 499:
      if (lookahead == '{') ADVANCE(959);
      END_STATE();
    case 500:
      if (lookahead == '}') ADVANCE(962);
      END_STATE();
    case 501:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '\n', 513,
        '"', 711,
        '#', 993,
        '.', 985,
        '<', 687,
        'C', 591,
        'D', 559,
        'G', 560,
        'H', 562,
        'L', 572,
        'O', 595,
        'P', 550,
        'T', 597,
        'U', 584,
        'V', 573,
        '[', 950,
        '`', 91,
        'b', 117,
        'c', 336,
        'd', 477,
        'f', 96,
        'h', 170,
        'j', 414,
        'm', 160,
        'n', 472,
        'r', 190,
        's', 236,
        't', 370,
        'u', 371,
        'v', 112,
        'x', 353,
        '{', 940,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(502);
      END_STATE();
    case 502:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '\n', 513,
        '"', 711,
        '#', 993,
        '.', 985,
        '<', 687,
        'C', 591,
        'D', 559,
        'G', 560,
        'H', 562,
        'L', 572,
        'O', 595,
        'P', 550,
        'T', 597,
        'U', 584,
        'V', 573,
        '[', 950,
        '`', 91,
        'b', 117,
        'c', 336,
        'd', 477,
        'f', 96,
        'h', 170,
        'j', 414,
        'm', 160,
        'n', 472,
        'r', 190,
        's', 236,
        't', 370,
        'u', 371,
        'v', 112,
        'x', 353,
        '{', 939,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(502);
      END_STATE();
    case 503:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '\n', 513,
        '"', 711,
        '#', 993,
        '<', 687,
        'C', 591,
        'D', 559,
        'G', 560,
        'H', 561,
        'L', 572,
        'O', 595,
        'P', 550,
        'T', 597,
        'U', 584,
        'V', 573,
        '[', 952,
        '`', 91,
        'b', 116,
        'c', 99,
        'd', 101,
        'f', 97,
        'h', 193,
        'i', 301,
        'l', 322,
        'm', 104,
        'n', 448,
        'p', 119,
        'r', 177,
        's', 347,
        't', 315,
        'u', 377,
        'v', 113,
        'x', 353,
        '{', 940,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(504);
      END_STATE();
    case 504:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '\n', 513,
        '"', 711,
        '#', 993,
        '<', 687,
        'C', 591,
        'D', 559,
        'G', 560,
        'H', 561,
        'L', 572,
        'O', 595,
        'P', 550,
        'T', 597,
        'U', 584,
        'V', 573,
        '[', 952,
        '`', 91,
        'b', 116,
        'c', 99,
        'd', 101,
        'f', 97,
        'h', 193,
        'i', 301,
        'l', 322,
        'm', 104,
        'n', 448,
        'p', 119,
        'r', 177,
        's', 347,
        't', 315,
        'u', 377,
        'v', 113,
        'x', 353,
        '{', 939,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(504);
      END_STATE();
    case 505:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '\n', 513,
        '"', 711,
        '#', 993,
        '<', 687,
        'C', 591,
        'D', 559,
        'G', 560,
        'H', 561,
        'L', 572,
        'O', 595,
        'P', 550,
        'T', 597,
        'U', 584,
        'V', 573,
        '[', 952,
        '`', 91,
        'b', 116,
        'f', 96,
        'h', 192,
        'n', 472,
        't', 370,
        '{', 939,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(505);
      END_STATE();
    case 506:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '\n', 513,
        '"', 711,
        '#', 993,
        '<', 687,
        'C', 591,
        'D', 559,
        'G', 560,
        'H', 562,
        'L', 572,
        'O', 595,
        'P', 550,
        'T', 597,
        'U', 584,
        'V', 573,
        '[', 950,
        '`', 91,
        'b', 116,
        'f', 96,
        'h', 192,
        'n', 472,
        't', 370,
        '{', 939,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(506);
      END_STATE();
    case 507:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '\n', 513,
        '"', 711,
        '#', 993,
        '<', 687,
        'C', 775,
        'D', 743,
        'G', 744,
        'H', 745,
        'L', 758,
        'O', 781,
        'P', 734,
        'T', 784,
        'U', 769,
        'V', 757,
        '[', 953,
        '\\', 892,
        '`', 91,
        'b', 804,
        'f', 805,
        'h', 817,
        'n', 883,
        't', 856,
        '{', 940,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(505);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 508:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '\n', 513,
        '"', 711,
        '#', 993,
        '<', 687,
        'C', 775,
        'D', 743,
        'G', 744,
        'H', 746,
        'L', 758,
        'O', 781,
        'P', 734,
        'T', 784,
        'U', 769,
        'V', 757,
        '[', 951,
        '\\', 892,
        '`', 91,
        'b', 804,
        'f', 805,
        'h', 817,
        'n', 883,
        't', 856,
        '{', 940,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(506);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= ']') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 509:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '!', 60,
        '"', 711,
        '#', 900,
        '*', 616,
        '+', 990,
        ',', 947,
        '-', 991,
        '.', 985,
        '/', 994,
        ':', 636,
        ';', 638,
        '<', 684,
        '=', 654,
        '>', 680,
        '?', 62,
        'E', 989,
        '[', 949,
        '\\', 716,
        ']', 954,
        '`', 903,
        'b', 720,
        'e', 986,
        'f', 721,
        'n', 722,
        'r', 723,
        't', 724,
        'u', 725,
        '{', 939,
        '}', 946,
        'a', 963,
        'c', 963,
        'd', 963,
      );
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(963);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(509);
      END_STATE();
    case 510:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '!', 60,
        '"', 711,
        '#', 993,
        '+', 990,
        ',', 947,
        '-', 991,
        '/', 994,
        ':', 633,
        ';', 638,
        '<', 686,
        '=', 61,
        '>', 680,
        '?', 62,
        '[', 948,
        ']', 954,
        '`', 90,
        'b', 116,
        'c', 317,
        'd', 101,
        'e', 299,
        'f', 97,
        'g', 386,
        'h', 193,
        'i', 298,
        'l', 216,
        'm', 126,
        'n', 333,
        'r', 188,
        's', 348,
        't', 315,
        'u', 377,
        'x', 353,
        '{', 940,
        '}', 500,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(511);
      END_STATE();
    case 511:
      if (eof) ADVANCE(512);
      ADVANCE_MAP(
        '!', 60,
        '"', 711,
        '#', 993,
        '+', 990,
        ',', 947,
        '-', 991,
        '/', 994,
        ':', 636,
        ';', 638,
        '<', 686,
        '=', 61,
        '>', 680,
        '?', 62,
        '[', 948,
        ']', 954,
        '`', 90,
        'b', 116,
        'c', 317,
        'd', 101,
        'e', 299,
        'f', 97,
        'g', 386,
        'h', 193,
        'i', 298,
        'l', 216,
        'm', 126,
        'n', 333,
        'r', 188,
        's', 348,
        't', 315,
        'u', 377,
        'x', 353,
        '{', 939,
        '}', 500,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (set_contains(extras_character_set_2, 9, lookahead)) SKIP(511);
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
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(941);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(515);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(936);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(516);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(916);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_LINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_UNLINK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_PURGE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_LOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_UNLOCK);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_PROPFIND);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_VIEW);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
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
      if (lookahead == '/') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_HTTP);
      if (lookahead == '/') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_file_COMMA);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_file_value_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_cacert);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_compressed);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_insecure);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_max_DASHredirs);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_path_DASHas_DASHis);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_proxy);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_retry);
      if (lookahead == '-') ADVANCE(258);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_retry_DASHinterval);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_retry_DASHmax_DASHcount);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_very_DASHverbose);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(675);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_sha256);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_md5);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_cookie);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_jsonpath);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'E') ADVANCE(355);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_isInteger);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_isFloat);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_isBoolean);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_isString);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_isCollection);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_notEquals);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_greaterThan);
      if (lookahead == 'O') ADVANCE(391);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(682);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_greaterThanOrEquals);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_lessThan);
      if (lookahead == 'O') ADVANCE(364);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(703);
      if (lookahead == '=') ADVANCE(689);
      if (lookahead == '?') ADVANCE(695);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(703);
      if (lookahead == '?') ADVANCE(695);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(689);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(695);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_lessThanOrEquals);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_startsWith);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_endsWith);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_includes);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '\n') ADVANCE(698);
      if (lookahead == '?') ADVANCE(993);
      if (lookahead != 0) ADVANCE(696);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead == '#') ADVANCE(696);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_xml_prolog_tag_token1);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '\n') ADVANCE(702);
      if (lookahead == '>') ADVANCE(993);
      if (lookahead != 0) ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead == '#') ADVANCE(700);
      if (lookahead == '>') ADVANCE(702);
      if (lookahead == '/' ||
          lookahead == '?') ADVANCE(702);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(701);
      if (lookahead != 0) ADVANCE(702);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_xml_open_tag_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(702);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '/' ||
          lookahead == '>') ADVANCE(993);
      if (lookahead != 0) ADVANCE(704);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead == '#') ADVANCE(704);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_xml_close_tag_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_base64_COMMA);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n') ADVANCE(708);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_oneline_base64_token1);
      if (lookahead == '\n' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_hex_COMMA);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '\n') ADVANCE(715);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(993);
      if (lookahead != 0) ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '#') ADVANCE(712);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(715);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead == '{') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(715);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_quoted_string_text);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead == '#') ADVANCE(719);
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == 'f') ADVANCE(721);
      if (lookahead == 'n') ADVANCE(722);
      if (lookahead == 'r') ADVANCE(723);
      if (lookahead == 't') ADVANCE(724);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != '\t' &&
          lookahead != '\f' &&
          lookahead != '\r') ADVANCE(718);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != 't' &&
          lookahead != 'u') ADVANCE(717);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_invalid_quoted_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(710);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ',') ADVANCE(707);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '4') ADVANCE(728);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '6') ADVANCE(729);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(740);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(738);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(884);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'A') ADVANCE(793);
      if (lookahead == 'O') ADVANCE(787);
      if (lookahead == 'R') ADVANCE(776);
      if (lookahead == 'U') ADVANCE(783);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(756);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(765);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(749);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'C') ADVANCE(790);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'D') ADVANCE(811);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(766);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(731);
      if (lookahead == 'T') ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(731);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(739);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'E') ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(760);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'F') ADVANCE(849);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'G') ADVANCE(748);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'H') ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(747);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(768);
      if (lookahead == 'O') ADVANCE(736);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(772);
      if (lookahead == 'O') ADVANCE(737);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(771);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'I') ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'K') ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(752);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'L') ADVANCE(759);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(762);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(741);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(764);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(774);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'N') ADVANCE(751);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(779);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'O') ADVANCE(770);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(753);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(809);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'P') ADVANCE(815);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'R') ADVANCE(732);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(530);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(880);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'S') ADVANCE(789);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(761);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(735);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'T') ADVANCE(750);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'W') ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(626);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(630);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == ']') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(866);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(837);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(837);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(863);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(841);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(855);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(858);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(800);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(851);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'a') ADVANCE(862);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'c') ADVANCE(733);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(888);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(730);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(980);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(860);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'e') ADVANCE(871);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'g') ADVANCE(782);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'h') ADVANCE(798);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(852);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(846);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'k') ADVANCE(832);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(821);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(834);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(868);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'l') ADVANCE(877);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(780);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(742);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(867);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'm') ADVANCE(869);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(826);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'n') ADVANCE(865);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(833);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(844);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(853);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(845);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'o') ADVANCE(857);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(876);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(879);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'p') ADVANCE(810);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(839);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(889);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(808);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(886);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(840);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(830);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(881);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(825);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'r') ADVANCE(814);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(828);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(796);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(797);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(818);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(799);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(820);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(802);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(803);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(824);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 's') ADVANCE(872);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(827);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(754);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(831);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(829);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(812);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(887);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 't') ADVANCE(870);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(822);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(836);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(874);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(838);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(819);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'u') ADVANCE(861);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'x') ADVANCE(726);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == 'y') ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_key_string_text);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_key_string_text);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_key_string_escaped_char_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_value_string_text_token1);
      if (lookahead == '{') ADVANCE(959);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_oneline_string_token1);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(92);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '`') ADVANCE(902);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(905);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(904);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token1);
      if (lookahead == '{') ADVANCE(959);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead == '#') ADVANCE(909);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(907);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_oneline_string_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_hex);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_graphql);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '\n') ADVANCE(516);
      if (lookahead == '#') ADVANCE(935);
      if (lookahead == 'b') ADVANCE(920);
      if (lookahead == 'g') ADVANCE(931);
      if (lookahead == 'h') ADVANCE(921);
      if (lookahead == 'j') ADVANCE(932);
      if (lookahead == 'x') ADVANCE(926);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(916);
      if (lookahead != 0) ADVANCE(935);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '4') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == '6') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'a') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'e') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'h') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'l') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'm') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'n') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'o') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'p') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'q') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'r') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 's') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead == 'x') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_multiline_string_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(935);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '#') ADVANCE(937);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(938);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(938);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(959);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '\n') ADVANCE(514);
      if ((set_contains(extras_character_set_2, 9, lookahead)) &&
          lookahead != ' ') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(944);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead == '{') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(944);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_filename_text);
      if ((set_contains(extras_character_set_1, 10, lookahead)) &&
          lookahead != ' ') ADVANCE(943);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(944);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_filename_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(944);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_filename_escaped_char_token1);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(409);
      if (lookahead == 'B') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(129);
      if (lookahead == 'F') ADVANCE(311);
      if (lookahead == 'M') ADVANCE(469);
      if (lookahead == 'O') ADVANCE(345);
      if (lookahead == 'Q') ADVANCE(470);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(409);
      if (lookahead == 'C') ADVANCE(128);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(873);
      if (lookahead == 'C') ADVANCE(813);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(318);
      if (lookahead == 'F') ADVANCE(311);
      if (lookahead == 'M') ADVANCE(469);
      if (lookahead == 'O') ADVANCE(345);
      if (lookahead == 'Q') ADVANCE(470);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(807);
      if (lookahead == 'C') ADVANCE(848);
      if (lookahead == 'F') ADVANCE(847);
      if (lookahead == 'M') ADVANCE(885);
      if (lookahead == 'O') ADVANCE(850);
      if (lookahead == 'Q') ADVANCE(882);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_json_string_text);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead == '#') ADVANCE(958);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(955);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead == '{') ADVANCE(959);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_json_string_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(944);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(715);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_variable_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_urlEncode);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_urlDecode);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_toInt);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_daysAfterNow);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_daysBeforeNow);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_decode);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_toDate);
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
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(891);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_hexdigit);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'q') ADVANCE(479);
      if (lookahead == 'x') ADVANCE(254);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_E);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(992);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(993);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead == '#') ADVANCE(992);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(995);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(996);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_regex_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(996);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(993);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(998);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(997);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 501},
  [2] = {.lex_state = 507},
  [3] = {.lex_state = 507},
  [4] = {.lex_state = 507},
  [5] = {.lex_state = 507},
  [6] = {.lex_state = 503},
  [7] = {.lex_state = 503},
  [8] = {.lex_state = 503},
  [9] = {.lex_state = 503},
  [10] = {.lex_state = 503},
  [11] = {.lex_state = 503},
  [12] = {.lex_state = 508},
  [13] = {.lex_state = 508},
  [14] = {.lex_state = 501},
  [15] = {.lex_state = 501},
  [16] = {.lex_state = 510},
  [17] = {.lex_state = 510},
  [18] = {.lex_state = 503},
  [19] = {.lex_state = 503},
  [20] = {.lex_state = 503},
  [21] = {.lex_state = 503},
  [22] = {.lex_state = 503},
  [23] = {.lex_state = 503},
  [24] = {.lex_state = 503},
  [25] = {.lex_state = 503},
  [26] = {.lex_state = 503},
  [27] = {.lex_state = 503},
  [28] = {.lex_state = 503},
  [29] = {.lex_state = 503},
  [30] = {.lex_state = 501},
  [31] = {.lex_state = 503},
  [32] = {.lex_state = 503},
  [33] = {.lex_state = 503},
  [34] = {.lex_state = 501},
  [35] = {.lex_state = 501},
  [36] = {.lex_state = 503},
  [37] = {.lex_state = 503},
  [38] = {.lex_state = 507},
  [39] = {.lex_state = 507},
  [40] = {.lex_state = 507},
  [41] = {.lex_state = 507},
  [42] = {.lex_state = 507},
  [43] = {.lex_state = 507},
  [44] = {.lex_state = 507},
  [45] = {.lex_state = 507},
  [46] = {.lex_state = 507},
  [47] = {.lex_state = 507},
  [48] = {.lex_state = 507},
  [49] = {.lex_state = 507},
  [50] = {.lex_state = 507},
  [51] = {.lex_state = 503},
  [52] = {.lex_state = 501},
  [53] = {.lex_state = 507},
  [54] = {.lex_state = 501},
  [55] = {.lex_state = 501},
  [56] = {.lex_state = 501},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 510},
  [59] = {.lex_state = 507},
  [60] = {.lex_state = 507},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 508},
  [63] = {.lex_state = 507},
  [64] = {.lex_state = 508},
  [65] = {.lex_state = 508},
  [66] = {.lex_state = 508},
  [67] = {.lex_state = 503},
  [68] = {.lex_state = 503},
  [69] = {.lex_state = 510},
  [70] = {.lex_state = 510},
  [71] = {.lex_state = 510},
  [72] = {.lex_state = 510},
  [73] = {.lex_state = 510},
  [74] = {.lex_state = 510},
  [75] = {.lex_state = 510},
  [76] = {.lex_state = 510},
  [77] = {.lex_state = 510},
  [78] = {.lex_state = 510},
  [79] = {.lex_state = 510},
  [80] = {.lex_state = 510},
  [81] = {.lex_state = 510},
  [82] = {.lex_state = 510},
  [83] = {.lex_state = 510},
  [84] = {.lex_state = 501},
  [85] = {.lex_state = 510},
  [86] = {.lex_state = 510},
  [87] = {.lex_state = 508},
  [88] = {.lex_state = 508},
  [89] = {.lex_state = 508},
  [90] = {.lex_state = 508},
  [91] = {.lex_state = 508},
  [92] = {.lex_state = 501},
  [93] = {.lex_state = 510},
  [94] = {.lex_state = 503},
  [95] = {.lex_state = 503},
  [96] = {.lex_state = 503},
  [97] = {.lex_state = 503},
  [98] = {.lex_state = 501},
  [99] = {.lex_state = 501},
  [100] = {.lex_state = 503},
  [101] = {.lex_state = 501},
  [102] = {.lex_state = 503},
  [103] = {.lex_state = 503},
  [104] = {.lex_state = 510},
  [105] = {.lex_state = 503},
  [106] = {.lex_state = 503},
  [107] = {.lex_state = 510},
  [108] = {.lex_state = 503},
  [109] = {.lex_state = 501},
  [110] = {.lex_state = 501},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 501},
  [114] = {.lex_state = 501},
  [115] = {.lex_state = 510},
  [116] = {.lex_state = 510},
  [117] = {.lex_state = 501},
  [118] = {.lex_state = 501},
  [119] = {.lex_state = 510},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 28},
  [123] = {.lex_state = 501},
  [124] = {.lex_state = 501},
  [125] = {.lex_state = 501},
  [126] = {.lex_state = 501},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 501},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 501},
  [132] = {.lex_state = 501},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 501},
  [135] = {.lex_state = 501},
  [136] = {.lex_state = 27},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 503},
  [139] = {.lex_state = 503},
  [140] = {.lex_state = 503},
  [141] = {.lex_state = 503},
  [142] = {.lex_state = 503},
  [143] = {.lex_state = 503},
  [144] = {.lex_state = 503},
  [145] = {.lex_state = 503},
  [146] = {.lex_state = 503},
  [147] = {.lex_state = 503},
  [148] = {.lex_state = 503},
  [149] = {.lex_state = 503},
  [150] = {.lex_state = 510},
  [151] = {.lex_state = 503},
  [152] = {.lex_state = 503},
  [153] = {.lex_state = 510},
  [154] = {.lex_state = 510},
  [155] = {.lex_state = 503},
  [156] = {.lex_state = 510},
  [157] = {.lex_state = 503},
  [158] = {.lex_state = 503},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 29},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 22},
  [177] = {.lex_state = 22},
  [178] = {.lex_state = 22},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 22},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 32},
  [186] = {.lex_state = 32},
  [187] = {.lex_state = 22},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 29},
  [190] = {.lex_state = 29},
  [191] = {.lex_state = 29},
  [192] = {.lex_state = 32},
  [193] = {.lex_state = 23},
  [194] = {.lex_state = 30},
  [195] = {.lex_state = 30},
  [196] = {.lex_state = 32},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 26},
  [202] = {.lex_state = 17},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 21},
  [206] = {.lex_state = 24},
  [207] = {.lex_state = 24},
  [208] = {.lex_state = 24},
  [209] = {.lex_state = 24},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 24},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 26},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 29},
  [221] = {.lex_state = 28},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 29},
  [225] = {.lex_state = 22},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 19},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 19},
  [230] = {.lex_state = 28},
  [231] = {.lex_state = 28},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 510},
  [234] = {.lex_state = 32},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 510},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 30},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 30},
  [242] = {.lex_state = 14},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 510},
  [245] = {.lex_state = 510},
  [246] = {.lex_state = 28},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 28},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 26},
  [253] = {.lex_state = 510},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 32},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 510},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 7},
  [261] = {.lex_state = 19},
  [262] = {.lex_state = 28},
  [263] = {.lex_state = 29},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 29},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 14},
  [276] = {.lex_state = 28},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 10},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 2},
  [282] = {.lex_state = 501},
  [283] = {.lex_state = 19},
  [284] = {.lex_state = 510},
  [285] = {.lex_state = 24},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 12},
  [289] = {.lex_state = 12},
  [290] = {.lex_state = 22},
  [291] = {.lex_state = 28},
  [292] = {.lex_state = 501},
  [293] = {.lex_state = 28},
  [294] = {.lex_state = 24},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 510},
  [298] = {.lex_state = 22},
  [299] = {.lex_state = 501},
  [300] = {.lex_state = 30},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 501},
  [303] = {.lex_state = 510},
  [304] = {.lex_state = 30},
  [305] = {.lex_state = 501},
  [306] = {.lex_state = 28},
  [307] = {.lex_state = 501},
  [308] = {.lex_state = 22},
  [309] = {.lex_state = 22},
  [310] = {.lex_state = 501},
  [311] = {.lex_state = 501},
  [312] = {.lex_state = 510},
  [313] = {.lex_state = 501},
  [314] = {.lex_state = 24},
  [315] = {.lex_state = 501},
  [316] = {.lex_state = 501},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 501},
  [319] = {.lex_state = 22},
  [320] = {.lex_state = 510},
  [321] = {.lex_state = 501},
  [322] = {.lex_state = 510},
  [323] = {.lex_state = 510},
  [324] = {.lex_state = 501},
  [325] = {.lex_state = 501},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 32},
  [328] = {.lex_state = 8},
  [329] = {.lex_state = 12},
  [330] = {.lex_state = 32},
  [331] = {.lex_state = 28},
  [332] = {.lex_state = 510},
  [333] = {.lex_state = 510},
  [334] = {.lex_state = 510},
  [335] = {.lex_state = 510},
  [336] = {.lex_state = 24},
  [337] = {.lex_state = 510},
  [338] = {.lex_state = 4},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 510},
  [341] = {.lex_state = 12},
  [342] = {.lex_state = 28},
  [343] = {.lex_state = 510},
  [344] = {.lex_state = 501},
  [345] = {.lex_state = 37},
  [346] = {.lex_state = 37},
  [347] = {.lex_state = 501},
  [348] = {.lex_state = 501},
  [349] = {.lex_state = 37},
  [350] = {.lex_state = 37},
  [351] = {.lex_state = 501},
  [352] = {.lex_state = 37},
  [353] = {.lex_state = 501},
  [354] = {.lex_state = 37},
  [355] = {.lex_state = 501},
  [356] = {.lex_state = 501},
  [357] = {.lex_state = 501},
  [358] = {.lex_state = 501},
  [359] = {.lex_state = 501},
  [360] = {.lex_state = 501},
  [361] = {.lex_state = 501},
  [362] = {.lex_state = 501},
  [363] = {.lex_state = 37},
  [364] = {.lex_state = 501},
  [365] = {.lex_state = 501},
  [366] = {.lex_state = 501},
  [367] = {.lex_state = 37},
  [368] = {.lex_state = 37},
  [369] = {.lex_state = 37},
  [370] = {.lex_state = 510},
  [371] = {.lex_state = 501},
  [372] = {.lex_state = 37},
  [373] = {.lex_state = 26},
  [374] = {.lex_state = 510},
  [375] = {.lex_state = 501},
  [376] = {.lex_state = 501},
  [377] = {.lex_state = 19},
  [378] = {.lex_state = 501},
  [379] = {.lex_state = 501},
  [380] = {.lex_state = 14},
  [381] = {.lex_state = 501},
  [382] = {.lex_state = 510},
  [383] = {.lex_state = 19},
  [384] = {.lex_state = 19},
  [385] = {.lex_state = 26},
  [386] = {.lex_state = 34},
  [387] = {.lex_state = 501},
  [388] = {.lex_state = 37},
  [389] = {.lex_state = 19},
  [390] = {.lex_state = 19},
  [391] = {.lex_state = 28},
  [392] = {.lex_state = 510},
  [393] = {.lex_state = 501},
  [394] = {.lex_state = 501},
  [395] = {.lex_state = 501},
  [396] = {.lex_state = 501},
  [397] = {.lex_state = 501},
  [398] = {.lex_state = 501},
  [399] = {.lex_state = 501},
  [400] = {.lex_state = 501},
  [401] = {.lex_state = 34},
  [402] = {.lex_state = 501},
  [403] = {.lex_state = 28},
  [404] = {.lex_state = 501},
  [405] = {.lex_state = 28},
  [406] = {.lex_state = 19},
  [407] = {.lex_state = 28},
  [408] = {.lex_state = 28},
  [409] = {.lex_state = 510},
  [410] = {.lex_state = 510},
  [411] = {.lex_state = 501},
  [412] = {.lex_state = 37},
  [413] = {.lex_state = 510},
  [414] = {.lex_state = 510},
  [415] = {.lex_state = 510},
  [416] = {.lex_state = 510},
  [417] = {.lex_state = 501},
  [418] = {.lex_state = 510},
  [419] = {.lex_state = 501},
  [420] = {.lex_state = 510},
  [421] = {.lex_state = 27},
  [422] = {.lex_state = 510},
  [423] = {.lex_state = 510},
  [424] = {.lex_state = 510},
  [425] = {.lex_state = 510},
  [426] = {.lex_state = 501},
  [427] = {.lex_state = 28},
  [428] = {.lex_state = 28},
  [429] = {.lex_state = 34},
  [430] = {.lex_state = 19},
  [431] = {.lex_state = 28},
  [432] = {.lex_state = 28},
  [433] = {.lex_state = 501},
  [434] = {.lex_state = 501},
  [435] = {.lex_state = 19},
  [436] = {.lex_state = 510},
  [437] = {.lex_state = 510},
  [438] = {.lex_state = 510},
  [439] = {.lex_state = 18},
  [440] = {.lex_state = 6},
  [441] = {.lex_state = 510},
  [442] = {.lex_state = 6},
  [443] = {.lex_state = 510},
  [444] = {.lex_state = 510},
  [445] = {.lex_state = 510},
  [446] = {.lex_state = 510},
  [447] = {.lex_state = 510},
  [448] = {.lex_state = 510},
  [449] = {.lex_state = 19},
  [450] = {.lex_state = 510},
  [451] = {.lex_state = 27},
  [452] = {.lex_state = 18},
  [453] = {.lex_state = 18},
  [454] = {.lex_state = 510},
  [455] = {.lex_state = 510},
  [456] = {.lex_state = 510},
  [457] = {.lex_state = 510},
  [458] = {.lex_state = 510},
  [459] = {.lex_state = 510},
  [460] = {.lex_state = 510},
  [461] = {.lex_state = 18},
  [462] = {.lex_state = 510},
  [463] = {.lex_state = 510},
  [464] = {.lex_state = 510},
  [465] = {.lex_state = 19},
  [466] = {.lex_state = 510},
  [467] = {.lex_state = 510},
  [468] = {.lex_state = 510},
  [469] = {.lex_state = 510},
  [470] = {.lex_state = 510},
  [471] = {.lex_state = 18},
  [472] = {.lex_state = 501},
  [473] = {.lex_state = 25},
  [474] = {.lex_state = 501},
  [475] = {.lex_state = 501},
  [476] = {.lex_state = 501},
  [477] = {.lex_state = 19},
  [478] = {.lex_state = 501},
  [479] = {.lex_state = 19},
  [480] = {.lex_state = 501},
  [481] = {.lex_state = 501},
  [482] = {.lex_state = 501},
  [483] = {.lex_state = 34},
  [484] = {.lex_state = 501},
  [485] = {.lex_state = 501},
  [486] = {.lex_state = 501},
  [487] = {.lex_state = 501},
  [488] = {.lex_state = 34},
  [489] = {.lex_state = 501},
  [490] = {.lex_state = 501},
  [491] = {.lex_state = 501},
  [492] = {.lex_state = 501},
  [493] = {.lex_state = 501},
  [494] = {.lex_state = 501},
  [495] = {.lex_state = 18},
  [496] = {.lex_state = 18},
  [497] = {.lex_state = 18},
  [498] = {.lex_state = 18},
  [499] = {.lex_state = 18},
  [500] = {.lex_state = 18},
  [501] = {.lex_state = 18},
  [502] = {.lex_state = 18},
  [503] = {.lex_state = 18},
  [504] = {.lex_state = 18},
  [505] = {.lex_state = 18},
  [506] = {.lex_state = 18},
  [507] = {.lex_state = 18},
  [508] = {.lex_state = 501},
  [509] = {.lex_state = 501},
  [510] = {.lex_state = 501},
  [511] = {.lex_state = 510},
  [512] = {.lex_state = 501},
  [513] = {.lex_state = 34},
  [514] = {.lex_state = 39},
  [515] = {.lex_state = 501},
  [516] = {.lex_state = 501},
  [517] = {.lex_state = 501},
  [518] = {.lex_state = 501},
  [519] = {.lex_state = 40},
  [520] = {.lex_state = 501},
  [521] = {.lex_state = 41},
  [522] = {.lex_state = 501},
  [523] = {.lex_state = 510},
  [524] = {.lex_state = 501},
  [525] = {.lex_state = 34},
  [526] = {.lex_state = 18},
  [527] = {.lex_state = 18},
  [528] = {.lex_state = 501},
  [529] = {.lex_state = 501},
  [530] = {.lex_state = 501},
  [531] = {.lex_state = 501},
  [532] = {.lex_state = 15},
  [533] = {.lex_state = 510},
  [534] = {.lex_state = 42},
  [535] = {.lex_state = 25},
  [536] = {.lex_state = 501},
  [537] = {.lex_state = 34},
  [538] = {.lex_state = 501},
  [539] = {.lex_state = 510},
  [540] = {.lex_state = 501},
  [541] = {.lex_state = 501},
  [542] = {.lex_state = 501},
  [543] = {.lex_state = 510},
  [544] = {.lex_state = 501},
  [545] = {.lex_state = 501},
  [546] = {.lex_state = 501},
  [547] = {.lex_state = 34},
  [548] = {.lex_state = 510},
  [549] = {.lex_state = 19},
  [550] = {.lex_state = 510},
  [551] = {.lex_state = 16},
  [552] = {.lex_state = 34},
  [553] = {.lex_state = 501},
  [554] = {.lex_state = 19},
  [555] = {.lex_state = 501},
  [556] = {.lex_state = 510},
  [557] = {.lex_state = 501},
  [558] = {.lex_state = 501},
  [559] = {.lex_state = 501},
  [560] = {.lex_state = 501},
  [561] = {.lex_state = 501},
  [562] = {.lex_state = 501},
  [563] = {.lex_state = 19},
  [564] = {.lex_state = 501},
  [565] = {.lex_state = 510},
  [566] = {.lex_state = 25},
  [567] = {.lex_state = 19},
  [568] = {.lex_state = 510},
  [569] = {.lex_state = 19},
  [570] = {.lex_state = 510},
  [571] = {.lex_state = 19},
  [572] = {.lex_state = 510},
  [573] = {.lex_state = 510},
  [574] = {.lex_state = 510},
  [575] = {.lex_state = 510},
  [576] = {.lex_state = 510},
  [577] = {.lex_state = 510},
  [578] = {.lex_state = 510},
  [579] = {.lex_state = 510},
  [580] = {.lex_state = 39},
  [581] = {.lex_state = 18},
  [582] = {.lex_state = 501},
  [583] = {.lex_state = 41},
  [584] = {.lex_state = 34},
  [585] = {.lex_state = 19},
  [586] = {.lex_state = 34},
  [587] = {.lex_state = 501},
  [588] = {.lex_state = 34},
  [589] = {.lex_state = 964},
  [590] = {.lex_state = 34},
  [591] = {.lex_state = 501},
  [592] = {.lex_state = 501},
  [593] = {.lex_state = 501},
  [594] = {.lex_state = 501},
  [595] = {.lex_state = 510},
  [596] = {.lex_state = 34},
  [597] = {.lex_state = 510},
  [598] = {.lex_state = 34},
  [599] = {.lex_state = 34},
  [600] = {.lex_state = 34},
  [601] = {.lex_state = 34},
  [602] = {.lex_state = 34},
  [603] = {.lex_state = 34},
  [604] = {.lex_state = 34},
  [605] = {.lex_state = 34},
  [606] = {.lex_state = 34},
  [607] = {.lex_state = 34},
  [608] = {.lex_state = 34},
  [609] = {.lex_state = 34},
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
    [sym__alphanum] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_hexdigit] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_hurl_file] = STATE(523),
    [sym_entry] = STATE(99),
    [sym__comment_or_new_line] = STATE(101),
    [sym_request] = STATE(94),
    [sym_method] = STATE(160),
    [aux_sym_hurl_file_repeat1] = STATE(99),
    [aux_sym_hurl_file_repeat2] = STATE(101),
    [aux_sym__comment_or_new_line_repeat1] = STATE(54),
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
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(67),
    [sym_query_string_params_section] = STATE(67),
    [sym_form_params_section] = STATE(67),
    [sym_multipart_form_data_section] = STATE(67),
    [sym_cookies_section] = STATE(67),
    [sym_options_section] = STATE(67),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_hurl_file_repeat2] = STATE(53),
    [aux_sym__comment_or_new_line_repeat1] = STATE(59),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
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
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(63),
  },
  [3] = {
    [sym__comment_or_new_line] = STATE(53),
    [sym_header] = STATE(5),
    [sym_body] = STATE(103),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(67),
    [sym_query_string_params_section] = STATE(67),
    [sym_form_params_section] = STATE(67),
    [sym_multipart_form_data_section] = STATE(67),
    [sym_cookies_section] = STATE(67),
    [sym_options_section] = STATE(67),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_hurl_file_repeat2] = STATE(53),
    [aux_sym__comment_or_new_line_repeat1] = STATE(59),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
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
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(63),
  },
  [4] = {
    [sym_header] = STATE(40),
    [sym_body] = STATE(105),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(67),
    [sym_query_string_params_section] = STATE(67),
    [sym_form_params_section] = STATE(67),
    [sym_multipart_form_data_section] = STATE(67),
    [sym_cookies_section] = STATE(67),
    [sym_options_section] = STATE(67),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat1] = STATE(40),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
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
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(71),
  },
  [5] = {
    [sym_header] = STATE(40),
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(67),
    [sym_query_string_params_section] = STATE(67),
    [sym_form_params_section] = STATE(67),
    [sym_multipart_form_data_section] = STATE(67),
    [sym_cookies_section] = STATE(67),
    [sym_options_section] = STATE(67),
    [sym_key_value] = STATE(399),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat1] = STATE(40),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
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
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(17),
  },
  [6] = {
    [sym_body] = STATE(105),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(67),
    [sym_query_string_params_section] = STATE(67),
    [sym_form_params_section] = STATE(67),
    [sym_multipart_form_data_section] = STATE(67),
    [sym_cookies_section] = STATE(67),
    [sym_options_section] = STATE(67),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(546),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_integer_repeat1] = STATE(112),
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
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(71),
  },
  [7] = {
    [sym_body] = STATE(100),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(67),
    [sym_query_string_params_section] = STATE(67),
    [sym_form_params_section] = STATE(67),
    [sym_multipart_form_data_section] = STATE(67),
    [sym_cookies_section] = STATE(67),
    [sym_options_section] = STATE(67),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(546),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_integer_repeat1] = STATE(112),
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
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(17),
  },
  [8] = {
    [sym_body] = STATE(108),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(67),
    [sym_query_string_params_section] = STATE(67),
    [sym_form_params_section] = STATE(67),
    [sym_multipart_form_data_section] = STATE(67),
    [sym_cookies_section] = STATE(67),
    [sym_options_section] = STATE(67),
    [sym_bytes] = STATE(397),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(546),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_GET] = ACTIONS(75),
    [anon_sym_HEAD] = ACTIONS(75),
    [anon_sym_POST] = ACTIONS(75),
    [anon_sym_PUT] = ACTIONS(75),
    [anon_sym_DELETE] = ACTIONS(75),
    [anon_sym_CONNECT] = ACTIONS(75),
    [anon_sym_OPTIONS] = ACTIONS(75),
    [anon_sym_TRACE] = ACTIONS(75),
    [anon_sym_PATCH] = ACTIONS(75),
    [anon_sym_LINK] = ACTIONS(75),
    [anon_sym_UNLINK] = ACTIONS(75),
    [anon_sym_PURGE] = ACTIONS(75),
    [anon_sym_LOCK] = ACTIONS(75),
    [anon_sym_UNLOCK] = ACTIONS(75),
    [anon_sym_PROPFIND] = ACTIONS(75),
    [anon_sym_VIEW] = ACTIONS(75),
    [aux_sym_method_token1] = ACTIONS(75),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(75),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(75),
    [anon_sym_HTTP_SLASH2] = ACTIONS(75),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(75),
    [anon_sym_HTTP] = ACTIONS(75),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(25),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(75),
  },
  [9] = {
    [sym_option] = STATE(10),
    [sym_ca_certificate_option] = STATE(20),
    [sym_compressed_option] = STATE(20),
    [sym_follow_redirect_option] = STATE(20),
    [sym_insecure_option] = STATE(20),
    [sym_max_redirs_option] = STATE(20),
    [sym_path_as_is_option] = STATE(20),
    [sym_proxy_option] = STATE(20),
    [sym_retry_option] = STATE(20),
    [sym_retry_interval_option] = STATE(20),
    [sym_retry_max_count_option] = STATE(20),
    [sym_variable_option] = STATE(20),
    [sym_verbose_option] = STATE(20),
    [sym_very_verbose_option] = STATE(20),
    [aux_sym_options_section_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_GET] = ACTIONS(79),
    [anon_sym_HEAD] = ACTIONS(79),
    [anon_sym_POST] = ACTIONS(79),
    [anon_sym_PUT] = ACTIONS(79),
    [anon_sym_DELETE] = ACTIONS(79),
    [anon_sym_CONNECT] = ACTIONS(79),
    [anon_sym_OPTIONS] = ACTIONS(79),
    [anon_sym_TRACE] = ACTIONS(79),
    [anon_sym_PATCH] = ACTIONS(79),
    [anon_sym_LINK] = ACTIONS(79),
    [anon_sym_UNLINK] = ACTIONS(79),
    [anon_sym_PURGE] = ACTIONS(79),
    [anon_sym_LOCK] = ACTIONS(79),
    [anon_sym_UNLOCK] = ACTIONS(79),
    [anon_sym_PROPFIND] = ACTIONS(79),
    [anon_sym_VIEW] = ACTIONS(79),
    [aux_sym_method_token1] = ACTIONS(79),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(79),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(79),
    [anon_sym_HTTP_SLASH2] = ACTIONS(79),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(79),
    [anon_sym_HTTP] = ACTIONS(79),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(79),
    [anon_sym_null] = ACTIONS(79),
    [anon_sym_file_COMMA] = ACTIONS(79),
    [anon_sym_cacert] = ACTIONS(81),
    [anon_sym_compressed] = ACTIONS(83),
    [anon_sym_location] = ACTIONS(85),
    [anon_sym_insecure] = ACTIONS(87),
    [anon_sym_max_DASHredirs] = ACTIONS(89),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(91),
    [anon_sym_proxy] = ACTIONS(93),
    [anon_sym_retry] = ACTIONS(95),
    [anon_sym_retry_DASHinterval] = ACTIONS(97),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(99),
    [anon_sym_variable] = ACTIONS(101),
    [anon_sym_verbose] = ACTIONS(103),
    [anon_sym_very_DASHverbose] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_QMARK] = ACTIONS(79),
    [anon_sym_base64_COMMA] = ACTIONS(79),
    [anon_sym_hex_COMMA] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [aux_sym_oneline_string_token1] = ACTIONS(79),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(79),
    [sym_digit] = ACTIONS(79),
    [sym_comment] = ACTIONS(79),
  },
  [10] = {
    [sym_option] = STATE(11),
    [sym_ca_certificate_option] = STATE(20),
    [sym_compressed_option] = STATE(20),
    [sym_follow_redirect_option] = STATE(20),
    [sym_insecure_option] = STATE(20),
    [sym_max_redirs_option] = STATE(20),
    [sym_path_as_is_option] = STATE(20),
    [sym_proxy_option] = STATE(20),
    [sym_retry_option] = STATE(20),
    [sym_retry_interval_option] = STATE(20),
    [sym_retry_max_count_option] = STATE(20),
    [sym_variable_option] = STATE(20),
    [sym_verbose_option] = STATE(20),
    [sym_very_verbose_option] = STATE(20),
    [aux_sym_options_section_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_GET] = ACTIONS(109),
    [anon_sym_HEAD] = ACTIONS(109),
    [anon_sym_POST] = ACTIONS(109),
    [anon_sym_PUT] = ACTIONS(109),
    [anon_sym_DELETE] = ACTIONS(109),
    [anon_sym_CONNECT] = ACTIONS(109),
    [anon_sym_OPTIONS] = ACTIONS(109),
    [anon_sym_TRACE] = ACTIONS(109),
    [anon_sym_PATCH] = ACTIONS(109),
    [anon_sym_LINK] = ACTIONS(109),
    [anon_sym_UNLINK] = ACTIONS(109),
    [anon_sym_PURGE] = ACTIONS(109),
    [anon_sym_LOCK] = ACTIONS(109),
    [anon_sym_UNLOCK] = ACTIONS(109),
    [anon_sym_PROPFIND] = ACTIONS(109),
    [anon_sym_VIEW] = ACTIONS(109),
    [aux_sym_method_token1] = ACTIONS(109),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(109),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(109),
    [anon_sym_HTTP_SLASH2] = ACTIONS(109),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(109),
    [anon_sym_HTTP] = ACTIONS(109),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [anon_sym_file_COMMA] = ACTIONS(109),
    [anon_sym_cacert] = ACTIONS(81),
    [anon_sym_compressed] = ACTIONS(83),
    [anon_sym_location] = ACTIONS(85),
    [anon_sym_insecure] = ACTIONS(87),
    [anon_sym_max_DASHredirs] = ACTIONS(89),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(91),
    [anon_sym_proxy] = ACTIONS(93),
    [anon_sym_retry] = ACTIONS(95),
    [anon_sym_retry_DASHinterval] = ACTIONS(97),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(99),
    [anon_sym_variable] = ACTIONS(101),
    [anon_sym_verbose] = ACTIONS(103),
    [anon_sym_very_DASHverbose] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_LT_QMARK] = ACTIONS(109),
    [anon_sym_base64_COMMA] = ACTIONS(109),
    [anon_sym_hex_COMMA] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [aux_sym_oneline_string_token1] = ACTIONS(109),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_digit] = ACTIONS(109),
    [sym_comment] = ACTIONS(109),
  },
  [11] = {
    [sym_option] = STATE(11),
    [sym_ca_certificate_option] = STATE(20),
    [sym_compressed_option] = STATE(20),
    [sym_follow_redirect_option] = STATE(20),
    [sym_insecure_option] = STATE(20),
    [sym_max_redirs_option] = STATE(20),
    [sym_path_as_is_option] = STATE(20),
    [sym_proxy_option] = STATE(20),
    [sym_retry_option] = STATE(20),
    [sym_retry_interval_option] = STATE(20),
    [sym_retry_max_count_option] = STATE(20),
    [sym_variable_option] = STATE(20),
    [sym_verbose_option] = STATE(20),
    [sym_very_verbose_option] = STATE(20),
    [aux_sym_options_section_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_GET] = ACTIONS(113),
    [anon_sym_HEAD] = ACTIONS(113),
    [anon_sym_POST] = ACTIONS(113),
    [anon_sym_PUT] = ACTIONS(113),
    [anon_sym_DELETE] = ACTIONS(113),
    [anon_sym_CONNECT] = ACTIONS(113),
    [anon_sym_OPTIONS] = ACTIONS(113),
    [anon_sym_TRACE] = ACTIONS(113),
    [anon_sym_PATCH] = ACTIONS(113),
    [anon_sym_LINK] = ACTIONS(113),
    [anon_sym_UNLINK] = ACTIONS(113),
    [anon_sym_PURGE] = ACTIONS(113),
    [anon_sym_LOCK] = ACTIONS(113),
    [anon_sym_UNLOCK] = ACTIONS(113),
    [anon_sym_PROPFIND] = ACTIONS(113),
    [anon_sym_VIEW] = ACTIONS(113),
    [aux_sym_method_token1] = ACTIONS(113),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(113),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(113),
    [anon_sym_HTTP_SLASH2] = ACTIONS(113),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(113),
    [anon_sym_HTTP] = ACTIONS(113),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(113),
    [anon_sym_null] = ACTIONS(113),
    [anon_sym_file_COMMA] = ACTIONS(113),
    [anon_sym_cacert] = ACTIONS(115),
    [anon_sym_compressed] = ACTIONS(118),
    [anon_sym_location] = ACTIONS(121),
    [anon_sym_insecure] = ACTIONS(124),
    [anon_sym_max_DASHredirs] = ACTIONS(127),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(130),
    [anon_sym_proxy] = ACTIONS(133),
    [anon_sym_retry] = ACTIONS(136),
    [anon_sym_retry_DASHinterval] = ACTIONS(139),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(142),
    [anon_sym_variable] = ACTIONS(145),
    [anon_sym_verbose] = ACTIONS(148),
    [anon_sym_very_DASHverbose] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_LT_QMARK] = ACTIONS(113),
    [anon_sym_base64_COMMA] = ACTIONS(113),
    [anon_sym_hex_COMMA] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [aux_sym_oneline_string_token1] = ACTIONS(113),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [sym_digit] = ACTIONS(113),
    [sym_comment] = ACTIONS(113),
  },
  [12] = {
    [sym_header] = STATE(13),
    [sym_body] = STATE(131),
    [sym_response_section] = STATE(14),
    [sym_captures_section] = STATE(92),
    [sym_asserts_section] = STATE(92),
    [sym_key_value] = STATE(387),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat1] = STATE(13),
    [aux_sym_response_repeat1] = STATE(14),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_LF] = ACTIONS(154),
    [anon_sym_GET] = ACTIONS(156),
    [anon_sym_HEAD] = ACTIONS(156),
    [anon_sym_POST] = ACTIONS(156),
    [anon_sym_PUT] = ACTIONS(156),
    [anon_sym_DELETE] = ACTIONS(156),
    [anon_sym_CONNECT] = ACTIONS(156),
    [anon_sym_OPTIONS] = ACTIONS(156),
    [anon_sym_TRACE] = ACTIONS(156),
    [anon_sym_PATCH] = ACTIONS(156),
    [anon_sym_LINK] = ACTIONS(156),
    [anon_sym_UNLINK] = ACTIONS(156),
    [anon_sym_PURGE] = ACTIONS(156),
    [anon_sym_LOCK] = ACTIONS(156),
    [anon_sym_UNLOCK] = ACTIONS(156),
    [anon_sym_PROPFIND] = ACTIONS(156),
    [anon_sym_VIEW] = ACTIONS(156),
    [aux_sym_method_token1] = ACTIONS(156),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(160),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(156),
  },
  [13] = {
    [sym_header] = STATE(62),
    [sym_body] = STATE(126),
    [sym_response_section] = STATE(15),
    [sym_captures_section] = STATE(92),
    [sym_asserts_section] = STATE(92),
    [sym_key_value] = STATE(387),
    [sym_bytes] = STATE(433),
    [sym_xml] = STATE(508),
    [sym_xml_prolog_tag] = STATE(261),
    [sym_xml_tag] = STATE(510),
    [sym_xml_open_tag] = STATE(127),
    [sym_oneline_base64] = STATE(508),
    [sym_oneline_file] = STATE(508),
    [sym_oneline_hex] = STATE(508),
    [sym_key_string] = STATE(511),
    [sym_key_string_content] = STATE(189),
    [sym_key_string_escaped_char] = STATE(224),
    [sym_oneline_string] = STATE(508),
    [sym_multiline_string] = STATE(508),
    [sym_json_value] = STATE(508),
    [sym_json_object] = STATE(546),
    [sym_json_array] = STATE(546),
    [sym_json_string] = STATE(546),
    [sym_json_number] = STATE(546),
    [sym_template] = STATE(270),
    [sym_boolean] = STATE(546),
    [sym_integer] = STATE(256),
    [aux_sym_request_repeat1] = STATE(62),
    [aux_sym_response_repeat1] = STATE(15),
    [aux_sym_xml_repeat1] = STATE(261),
    [aux_sym_key_string_repeat1] = STATE(189),
    [aux_sym_key_string_content_repeat1] = STATE(224),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_GET] = ACTIONS(164),
    [anon_sym_HEAD] = ACTIONS(164),
    [anon_sym_POST] = ACTIONS(164),
    [anon_sym_PUT] = ACTIONS(164),
    [anon_sym_DELETE] = ACTIONS(164),
    [anon_sym_CONNECT] = ACTIONS(164),
    [anon_sym_OPTIONS] = ACTIONS(164),
    [anon_sym_TRACE] = ACTIONS(164),
    [anon_sym_PATCH] = ACTIONS(164),
    [anon_sym_LINK] = ACTIONS(164),
    [anon_sym_UNLINK] = ACTIONS(164),
    [anon_sym_PURGE] = ACTIONS(164),
    [anon_sym_LOCK] = ACTIONS(164),
    [anon_sym_UNLOCK] = ACTIONS(164),
    [anon_sym_PROPFIND] = ACTIONS(164),
    [anon_sym_VIEW] = ACTIONS(164),
    [aux_sym_method_token1] = ACTIONS(164),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(158),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(160),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_file_COMMA] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_LT_QMARK] = ACTIONS(37),
    [anon_sym_base64_COMMA] = ACTIONS(39),
    [anon_sym_hex_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_key_string_text] = ACTIONS(45),
    [anon_sym_BSLASH2] = ACTIONS(47),
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(164),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      anon_sym_file_COMMA,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      anon_sym_base64_COMMA,
    ACTIONS(41), 1,
      anon_sym_hex_COMMA,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_oneline_string_token1,
    ACTIONS(51), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(158), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(160), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(126), 1,
      sym_body,
    STATE(127), 1,
      sym_xml_open_tag,
    STATE(256), 1,
      sym_integer,
    STATE(433), 1,
      sym_bytes,
    STATE(510), 1,
      sym_xml_tag,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(84), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(92), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(261), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(546), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(508), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(164), 18,
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
  [121] = 29,
    ACTIONS(31), 1,
      anon_sym_null,
    ACTIONS(33), 1,
      anon_sym_file_COMMA,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_QMARK,
    ACTIONS(39), 1,
      anon_sym_base64_COMMA,
    ACTIONS(41), 1,
      anon_sym_hex_COMMA,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_oneline_string_token1,
    ACTIONS(51), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(158), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(160), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(127), 1,
      sym_xml_open_tag,
    STATE(135), 1,
      sym_body,
    STATE(256), 1,
      sym_integer,
    STATE(433), 1,
      sym_bytes,
    STATE(510), 1,
      sym_xml_tag,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(84), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(92), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(261), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(546), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(508), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(168), 18,
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
  [242] = 25,
    ACTIONS(170), 1,
      anon_sym_xpath,
    ACTIONS(172), 1,
      anon_sym_regex,
    ACTIONS(174), 1,
      anon_sym_not,
    ACTIONS(190), 1,
      anon_sym_startsWith,
    ACTIONS(192), 1,
      anon_sym_endsWith,
    ACTIONS(194), 1,
      anon_sym_contains,
    ACTIONS(196), 1,
      anon_sym_matches,
    ACTIONS(198), 1,
      anon_sym_includes,
    ACTIONS(202), 1,
      anon_sym_nth,
    ACTIONS(204), 1,
      anon_sym_replace,
    ACTIONS(206), 1,
      anon_sym_split,
    ACTIONS(208), 1,
      sym_comment,
    STATE(366), 1,
      sym_predicate,
    STATE(591), 1,
      sym_predicate_func,
    ACTIONS(178), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(180), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(182), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(184), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(186), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(188), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(17), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(176), 6,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
    ACTIONS(200), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(593), 11,
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
      sym_include_predicate,
  [354] = 25,
    ACTIONS(170), 1,
      anon_sym_xpath,
    ACTIONS(172), 1,
      anon_sym_regex,
    ACTIONS(174), 1,
      anon_sym_not,
    ACTIONS(190), 1,
      anon_sym_startsWith,
    ACTIONS(192), 1,
      anon_sym_endsWith,
    ACTIONS(194), 1,
      anon_sym_contains,
    ACTIONS(196), 1,
      anon_sym_matches,
    ACTIONS(198), 1,
      anon_sym_includes,
    ACTIONS(202), 1,
      anon_sym_nth,
    ACTIONS(204), 1,
      anon_sym_replace,
    ACTIONS(206), 1,
      anon_sym_split,
    ACTIONS(208), 1,
      sym_comment,
    STATE(411), 1,
      sym_predicate,
    STATE(591), 1,
      sym_predicate_func,
    ACTIONS(178), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(180), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(182), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(184), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(186), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(188), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    STATE(58), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(176), 6,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
    ACTIONS(200), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    STATE(593), 11,
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
      sym_include_predicate,
  [466] = 5,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(217), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(215), 55,
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
      anon_sym_null,
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
      sym_digit,
  [537] = 5,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(226), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 55,
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
      anon_sym_null,
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
      sym_digit,
  [608] = 2,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(230), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [672] = 2,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(234), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [736] = 2,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(238), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [800] = 2,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(242), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [864] = 2,
    ACTIONS(244), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(246), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [928] = 2,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(250), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [992] = 2,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1056] = 2,
    ACTIONS(256), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1120] = 2,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(262), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1184] = 2,
    ACTIONS(264), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(266), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1248] = 12,
    ACTIONS(272), 1,
      anon_sym_variable,
    ACTIONS(278), 1,
      anon_sym_header,
    ACTIONS(281), 1,
      anon_sym_cookie,
    ACTIONS(284), 1,
      anon_sym_xpath,
    ACTIONS(287), 1,
      anon_sym_jsonpath,
    ACTIONS(290), 1,
      anon_sym_regex,
    STATE(16), 1,
      sym_query,
    STATE(30), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(268), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(82), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(275), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(270), 34,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1332] = 2,
    ACTIONS(293), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(295), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1396] = 2,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1460] = 2,
    ACTIONS(301), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(303), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1524] = 12,
    ACTIONS(309), 1,
      anon_sym_variable,
    ACTIONS(313), 1,
      anon_sym_header,
    ACTIONS(315), 1,
      anon_sym_cookie,
    ACTIONS(317), 1,
      anon_sym_xpath,
    ACTIONS(319), 1,
      anon_sym_jsonpath,
    ACTIONS(321), 1,
      anon_sym_regex,
    STATE(16), 1,
      sym_query,
    STATE(30), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(82), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(311), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(307), 34,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1608] = 12,
    ACTIONS(309), 1,
      anon_sym_variable,
    ACTIONS(313), 1,
      anon_sym_header,
    ACTIONS(315), 1,
      anon_sym_cookie,
    ACTIONS(317), 1,
      anon_sym_xpath,
    ACTIONS(319), 1,
      anon_sym_jsonpath,
    ACTIONS(321), 1,
      anon_sym_regex,
    STATE(16), 1,
      sym_query,
    STATE(34), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(323), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(82), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(311), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(325), 34,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1692] = 2,
    ACTIONS(327), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(329), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1756] = 2,
    ACTIONS(331), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(333), 56,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1820] = 10,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(436), 1,
      sym_key_string,
    STATE(542), 1,
      sym_multipart_form_data_param,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(509), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(337), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1898] = 10,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(436), 1,
      sym_key_string,
    STATE(542), 1,
      sym_multipart_form_data_param,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(509), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(343), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [1976] = 10,
    ACTIONS(349), 1,
      sym_key_string_text,
    ACTIONS(352), 1,
      anon_sym_BSLASH2,
    ACTIONS(355), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(399), 1,
      sym_key_value,
    STATE(511), 1,
      sym_key_string,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(40), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(347), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2054] = 10,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(436), 1,
      sym_key_string,
    STATE(542), 1,
      sym_multipart_form_data_param,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(509), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(360), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2132] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(364), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2206] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(368), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2280] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2354] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(376), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2428] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(380), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2502] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(382), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(384), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2576] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(388), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2650] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(392), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2724] = 9,
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    ACTIONS(394), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(396), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2798] = 10,
    ACTIONS(402), 1,
      anon_sym_LBRACKBasicAuth_RBRACK,
    ACTIONS(405), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(408), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(411), 1,
      anon_sym_LBRACKMultipartFormData_RBRACK,
    ACTIONS(414), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(417), 1,
      anon_sym_LBRACKOptions_RBRACK,
    STATE(51), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(398), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(67), 6,
      sym_basic_auth_section,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_multipart_form_data_section,
      sym_cookies_section,
      sym_options_section,
    ACTIONS(400), 37,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [2873] = 5,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(423), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(215), 46,
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
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
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
      sym_digit,
  [2935] = 6,
    ACTIONS(428), 1,
      anon_sym_LF,
    ACTIONS(433), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(53), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(426), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(431), 43,
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
      anon_sym_null,
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
      sym_digit,
  [2999] = 5,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(438), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 46,
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
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
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
      sym_digit,
  [3061] = 2,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(442), 47,
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
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
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
      sym_digit,
      sym_comment,
  [3116] = 2,
    ACTIONS(444), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(446), 47,
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
      anon_sym_null,
      anon_sym_file_COMMA,
      anon_sym_variable,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
      anon_sym_header,
      anon_sym_cookie,
      anon_sym_xpath,
      anon_sym_jsonpath,
      anon_sym_regex,
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
      sym_digit,
      sym_comment,
  [3171] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_digit,
    STATE(57), 1,
      aux_sym_integer_repeat1,
    ACTIONS(450), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(448), 40,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_E,
  [3231] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_xpath,
    ACTIONS(458), 1,
      anon_sym_regex,
    ACTIONS(468), 1,
      anon_sym_nth,
    ACTIONS(471), 1,
      anon_sym_replace,
    ACTIONS(474), 1,
      anon_sym_split,
    STATE(58), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(461), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(465), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
    ACTIONS(463), 20,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
  [3303] = 5,
    ACTIONS(477), 1,
      anon_sym_LF,
    ACTIONS(479), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 43,
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
      anon_sym_null,
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
      sym_digit,
  [3363] = 5,
    ACTIONS(481), 1,
      anon_sym_LF,
    ACTIONS(484), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(215), 43,
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
      anon_sym_null,
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
      sym_digit,
  [3423] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_digit,
    STATE(57), 1,
      aux_sym_integer_repeat1,
    ACTIONS(489), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(487), 40,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_E,
  [3483] = 10,
    ACTIONS(349), 1,
      sym_key_string_text,
    ACTIONS(352), 1,
      anon_sym_BSLASH2,
    ACTIONS(355), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(387), 1,
      sym_key_value,
    STATE(511), 1,
      sym_key_string,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(62), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(347), 34,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [3552] = 2,
    ACTIONS(493), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(495), 44,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [3605] = 9,
    ACTIONS(501), 1,
      sym_key_string_text,
    ACTIONS(503), 1,
      anon_sym_BSLASH2,
    ACTIONS(505), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(581), 1,
      sym_key_string,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(65), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(195), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(499), 34,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [3671] = 9,
    ACTIONS(501), 1,
      sym_key_string_text,
    ACTIONS(503), 1,
      anon_sym_BSLASH2,
    ACTIONS(505), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(581), 1,
      sym_key_string,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(66), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(195), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(509), 34,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [3737] = 9,
    ACTIONS(515), 1,
      sym_key_string_text,
    ACTIONS(518), 1,
      anon_sym_BSLASH2,
    ACTIONS(521), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(581), 1,
      sym_key_string,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(66), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(195), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(513), 34,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [3803] = 2,
    ACTIONS(524), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(526), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [3854] = 2,
    ACTIONS(528), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(530), 43,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [3905] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(534), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(532), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [3955] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(538), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(536), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4005] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(542), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(540), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4055] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(546), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(544), 37,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4105] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(550), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(548), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4154] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(554), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(552), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4203] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(558), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(556), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4252] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(562), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(560), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4301] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(566), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(564), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4350] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(570), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(568), 36,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4399] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(574), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(572), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4447] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(578), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(576), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4495] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(582), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(580), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4543] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(586), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(584), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4591] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(590), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(588), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4639] = 6,
    ACTIONS(596), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(599), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(84), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(92), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(592), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(594), 32,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [4693] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(604), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(602), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4741] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(608), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(606), 35,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
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
      anon_sym_includes,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [4789] = 5,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(613), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(215), 34,
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
      anon_sym_null,
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
      sym_digit,
  [4840] = 5,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 34,
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
      anon_sym_null,
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
      sym_digit,
  [4891] = 2,
    ACTIONS(620), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(622), 35,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [4935] = 2,
    ACTIONS(624), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 35,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [4979] = 2,
    ACTIONS(493), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(495), 35,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [5023] = 2,
    ACTIONS(628), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(630), 34,
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
      anon_sym_null,
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
      sym_digit,
      sym_comment,
  [5065] = 15,
    ACTIONS(190), 1,
      anon_sym_startsWith,
    ACTIONS(192), 1,
      anon_sym_endsWith,
    ACTIONS(194), 1,
      anon_sym_contains,
    ACTIONS(196), 1,
      anon_sym_matches,
    ACTIONS(198), 1,
      anon_sym_includes,
    ACTIONS(208), 1,
      sym_comment,
    STATE(524), 1,
      sym_predicate_func,
    ACTIONS(178), 2,
      anon_sym_equals,
      anon_sym_EQ_EQ,
    ACTIONS(180), 2,
      anon_sym_notEquals,
      anon_sym_BANG_EQ,
    ACTIONS(182), 2,
      anon_sym_greaterThan,
      anon_sym_GT,
    ACTIONS(184), 2,
      anon_sym_greaterThanOrEquals,
      anon_sym_GT_EQ,
    ACTIONS(186), 2,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(188), 2,
      anon_sym_lessThanOrEquals,
      anon_sym_LT_EQ,
    ACTIONS(176), 6,
      anon_sym_exists,
      anon_sym_isInteger,
      anon_sym_isFloat,
      anon_sym_isBoolean,
      anon_sym_isString,
      anon_sym_isCollection,
    STATE(593), 11,
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
      sym_include_predicate,
  [5132] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(117), 1,
      sym_response,
    STATE(132), 1,
      sym__comment_or_new_line,
    STATE(421), 1,
      sym_version,
    ACTIONS(636), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(634), 17,
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
  [5180] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(118), 1,
      sym_response,
    STATE(123), 1,
      sym__comment_or_new_line,
    STATE(421), 1,
      sym_version,
    ACTIONS(636), 5,
      anon_sym_HTTP_SLASH1_DOT0,
      anon_sym_HTTP_SLASH1_DOT1,
      anon_sym_HTTP_SLASH2,
      anon_sym_HTTP_SLASH_STAR,
      anon_sym_HTTP,
    ACTIONS(640), 17,
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
  [5228] = 12,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      anon_sym_xpath,
    ACTIONS(646), 1,
      anon_sym_regex,
    ACTIONS(650), 1,
      anon_sym_nth,
    ACTIONS(652), 1,
      anon_sym_replace,
    ACTIONS(654), 1,
      anon_sym_split,
    ACTIONS(656), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(89), 1,
      sym__comment_or_new_line,
    STATE(102), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(147), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(648), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [5280] = 12,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      anon_sym_xpath,
    ACTIONS(646), 1,
      anon_sym_regex,
    ACTIONS(650), 1,
      anon_sym_nth,
    ACTIONS(652), 1,
      anon_sym_replace,
    ACTIONS(654), 1,
      anon_sym_split,
    ACTIONS(656), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(90), 1,
      sym__comment_or_new_line,
    STATE(96), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(147), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(648), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [5332] = 9,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 1,
      anon_sym_LF,
    ACTIONS(666), 1,
      sym_comment,
    STATE(94), 1,
      sym_request,
    STATE(124), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(98), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(110), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(663), 17,
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
  [5378] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(669), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(94), 1,
      sym_request,
    STATE(160), 1,
      sym_method,
    STATE(98), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(109), 2,
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
  [5424] = 2,
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
  [5454] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(669), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(95), 1,
      sym_request,
    STATE(160), 1,
      sym_method,
    STATE(113), 2,
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
  [5496] = 10,
    ACTIONS(461), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_LF,
    ACTIONS(671), 1,
      anon_sym_xpath,
    ACTIONS(674), 1,
      anon_sym_regex,
    ACTIONS(680), 1,
      anon_sym_nth,
    ACTIONS(683), 1,
      anon_sym_replace,
    ACTIONS(686), 1,
      anon_sym_split,
    STATE(102), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(147), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(677), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [5542] = 2,
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
  [5572] = 10,
    ACTIONS(170), 1,
      anon_sym_xpath,
    ACTIONS(172), 1,
      anon_sym_regex,
    ACTIONS(202), 1,
      anon_sym_nth,
    ACTIONS(204), 1,
      anon_sym_replace,
    ACTIONS(206), 1,
      anon_sym_split,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(107), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(200), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [5618] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(75), 23,
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
  [5648] = 2,
    ACTIONS(691), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(693), 23,
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
  [5678] = 10,
    ACTIONS(170), 1,
      anon_sym_xpath,
    ACTIONS(172), 1,
      anon_sym_regex,
    ACTIONS(202), 1,
      anon_sym_nth,
    ACTIONS(204), 1,
      anon_sym_replace,
    ACTIONS(206), 1,
      anon_sym_split,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(58), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(74), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(200), 11,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
  [5724] = 2,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(699), 23,
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
  [5754] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(701), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(95), 1,
      sym_request,
    STATE(160), 1,
      sym_method,
    STATE(113), 2,
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
  [5796] = 7,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      sym_comment,
    STATE(95), 1,
      sym_request,
    STATE(124), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(114), 2,
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
  [5835] = 4,
    ACTIONS(448), 1,
      anon_sym_LF,
    ACTIONS(707), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    ACTIONS(450), 20,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [5867] = 4,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(710), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    ACTIONS(489), 20,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [5899] = 6,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
    ACTIONS(712), 1,
      anon_sym_LF,
    ACTIONS(715), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(113), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(431), 17,
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
  [5935] = 5,
    ACTIONS(718), 1,
      anon_sym_LF,
    ACTIONS(721), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(114), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(431), 17,
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
  [5968] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_null,
    ACTIONS(726), 1,
      anon_sym_file_COMMA,
    ACTIONS(728), 1,
      anon_sym_base64_COMMA,
    ACTIONS(730), 1,
      anon_sym_hex_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(395), 1,
      sym_integer,
    STATE(515), 1,
      sym_predicate_value,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(472), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [6019] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_null,
    ACTIONS(726), 1,
      anon_sym_file_COMMA,
    ACTIONS(728), 1,
      anon_sym_base64_COMMA,
    ACTIONS(730), 1,
      anon_sym_hex_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(395), 1,
      sym_integer,
    STATE(516), 1,
      sym_predicate_value,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(472), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [6070] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(123), 1,
      sym__comment_or_new_line,
    ACTIONS(640), 17,
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
  [6105] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(740), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(134), 1,
      sym__comment_or_new_line,
    ACTIONS(742), 17,
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
  [6140] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_null,
    ACTIONS(726), 1,
      anon_sym_file_COMMA,
    ACTIONS(728), 1,
      anon_sym_base64_COMMA,
    ACTIONS(730), 1,
      anon_sym_hex_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(734), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(395), 1,
      sym_integer,
    STATE(522), 1,
      sym_predicate_value,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(472), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [6191] = 13,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(746), 1,
      anon_sym_null,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    STATE(426), 1,
      sym_integer,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(744), 2,
      anon_sym_LF,
      sym_comment,
    STATE(169), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(475), 3,
      sym_value_string,
      sym_boolean,
      sym_float,
  [6239] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(754), 1,
      anon_sym_null,
    ACTIONS(756), 1,
      sym_key_string_text,
    ACTIONS(758), 1,
      anon_sym_BSLASH2,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(417), 1,
      sym_integer,
    STATE(582), 1,
      sym_variable_value,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(243), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(200), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(587), 4,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_float,
  [6289] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_variable,
    ACTIONS(764), 1,
      anon_sym_header,
    ACTIONS(766), 1,
      anon_sym_cookie,
    ACTIONS(768), 1,
      anon_sym_xpath,
    ACTIONS(770), 1,
      anon_sym_jsonpath,
    ACTIONS(772), 1,
      anon_sym_regex,
    STATE(97), 1,
      sym_query,
    STATE(141), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(762), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
  [6331] = 2,
    ACTIONS(740), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(742), 18,
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
  [6356] = 4,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(776), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(224), 17,
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
  [6385] = 4,
    ACTIONS(778), 1,
      anon_sym_LF,
    ACTIONS(781), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(215), 17,
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
  [6414] = 2,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(168), 18,
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
  [6439] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(786), 1,
      anon_sym_LT_SLASH,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(133), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(520), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(130), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6486] = 2,
    ACTIONS(691), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(693), 18,
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
  [6511] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(794), 1,
      anon_sym_LT_SLASH,
    STATE(133), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(259), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(137), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6558] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(786), 1,
      anon_sym_LT_SLASH,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(133), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(476), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(137), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6605] = 2,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(164), 18,
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
  [6630] = 2,
    ACTIONS(638), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(640), 18,
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
  [6655] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(784), 1,
      anon_sym_LT_QMARK,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(792), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(794), 1,
      anon_sym_LT_SLASH,
    STATE(133), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(251), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(129), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6702] = 2,
    ACTIONS(796), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(798), 18,
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
  [6727] = 2,
    ACTIONS(800), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(802), 18,
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
  [6752] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(804), 18,
      anon_sym_EQ,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_RBRACE_RBRACE,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
  [6776] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_LT,
    ACTIONS(809), 1,
      anon_sym_LT_QMARK,
    ACTIONS(812), 1,
      anon_sym_LT_SLASH,
    ACTIONS(814), 1,
      anon_sym_BSLASH,
    ACTIONS(817), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(820), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(133), 1,
      sym_xml_open_tag,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(137), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6820] = 2,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [6843] = 2,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [6866] = 2,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(542), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [6889] = 2,
    ACTIONS(584), 1,
      anon_sym_LF,
    ACTIONS(586), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [6912] = 2,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(534), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [6935] = 2,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(538), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [6958] = 2,
    ACTIONS(544), 1,
      anon_sym_LF,
    ACTIONS(546), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [6981] = 2,
    ACTIONS(602), 1,
      anon_sym_LF,
    ACTIONS(604), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7004] = 2,
    ACTIONS(606), 1,
      anon_sym_LF,
    ACTIONS(608), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7027] = 2,
    ACTIONS(552), 1,
      anon_sym_LF,
    ACTIONS(554), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7050] = 2,
    ACTIONS(568), 1,
      anon_sym_LF,
    ACTIONS(570), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7073] = 2,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(558), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7096] = 12,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      sym_digit,
    STATE(226), 1,
      aux_sym_integer_repeat1,
    STATE(230), 1,
      sym_integer,
    STATE(449), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7139] = 2,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(590), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7162] = 2,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7185] = 12,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      sym_digit,
    STATE(61), 1,
      aux_sym_integer_repeat1,
    STATE(231), 1,
      sym_integer,
    STATE(448), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7228] = 12,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      sym_digit,
    STATE(61), 1,
      aux_sym_integer_repeat1,
    STATE(231), 1,
      sym_integer,
    STATE(382), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7271] = 2,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(550), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7294] = 12,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_null,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
    ACTIONS(831), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      sym_digit,
    STATE(61), 1,
      aux_sym_integer_repeat1,
    STATE(231), 1,
      sym_integer,
    STATE(392), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(431), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7337] = 2,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(566), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7360] = 2,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(562), 17,
      anon_sym_xpath,
      anon_sym_regex,
      anon_sym_count,
      anon_sym_urlEncode,
      anon_sym_urlDecode,
      anon_sym_toInt,
      anon_sym_htmlEscape,
      anon_sym_htmlUnescape,
      anon_sym_daysAfterNow,
      anon_sym_daysBeforeNow,
      anon_sym_decode,
      anon_sym_format,
      anon_sym_toDate,
      anon_sym_nth,
      anon_sym_replace,
      anon_sym_split,
      sym_comment,
  [7383] = 13,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(38), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(282), 1,
      sym_multipart_form_data_param,
    STATE(321), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(436), 1,
      sym_key_string,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(509), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7427] = 10,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    STATE(299), 1,
      sym_value_string,
    ACTIONS(63), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    STATE(169), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7464] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(324), 1,
      sym_key_value,
    STATE(325), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(511), 1,
      sym_key_string,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7504] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(49), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(316), 1,
      sym_key_value,
    STATE(318), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(511), 1,
      sym_key_string,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7544] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(313), 1,
      sym_key_value,
    STATE(315), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(511), 1,
      sym_key_string,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    STATE(165), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(841), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [7611] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_BSLASH,
    ACTIONS(850), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(853), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(845), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(165), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(184), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7642] = 9,
    ACTIONS(858), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      sym_filename_text,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
    STATE(362), 1,
      sym_filename,
    ACTIONS(856), 2,
      anon_sym_LF,
      sym_comment,
    STATE(247), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(199), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [7674] = 9,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(436), 1,
      sym_key_string,
    STATE(542), 1,
      sym_multipart_form_data_param,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(509), 2,
      sym_key_value,
      sym_file_param,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7706] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_LF,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(868), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(870), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(174), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7735] = 7,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(841), 2,
      anon_sym_LF,
      sym_comment,
    STATE(171), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7762] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(752), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    STATE(356), 1,
      sym_value_string,
    STATE(169), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7791] = 7,
    ACTIONS(874), 1,
      anon_sym_BSLASH,
    ACTIONS(877), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(880), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(845), 2,
      anon_sym_LF,
      sym_comment,
    STATE(171), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(216), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7818] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(870), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(883), 1,
      anon_sym_LF,
    ACTIONS(885), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(174), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7847] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(870), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(883), 1,
      anon_sym_LF,
    ACTIONS(885), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(168), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7876] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_LF,
    ACTIONS(890), 1,
      anon_sym_BSLASH,
    ACTIONS(893), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(895), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(898), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(174), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7905] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(870), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(901), 1,
      anon_sym_LF,
    ACTIONS(903), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(172), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(214), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7934] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_DQUOTE,
    ACTIONS(907), 1,
      sym_quoted_string_text,
    ACTIONS(909), 1,
      anon_sym_BSLASH,
    ACTIONS(911), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(178), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(225), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7960] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_DQUOTE,
    ACTIONS(915), 1,
      sym_quoted_string_text,
    ACTIONS(918), 1,
      anon_sym_BSLASH,
    ACTIONS(921), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(177), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(225), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7986] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_quoted_string_text,
    ACTIONS(909), 1,
      anon_sym_BSLASH,
    ACTIONS(911), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(924), 1,
      anon_sym_DQUOTE,
    STATE(177), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(225), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8012] = 8,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COLON,
    ACTIONS(928), 1,
      anon_sym_COLON2,
    ACTIONS(930), 1,
      sym_key_string_text,
    ACTIONS(933), 1,
      anon_sym_BSLASH2,
    ACTIONS(936), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(179), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8040] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_BSLASH,
    ACTIONS(944), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(947), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(939), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(180), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8066] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_BSLASH,
    ACTIONS(951), 1,
      anon_sym_BQUOTE,
    ACTIONS(953), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(955), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(182), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(218), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8092] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_BSLASH,
    ACTIONS(953), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(955), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(957), 1,
      anon_sym_BQUOTE,
    STATE(188), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(218), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8118] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_quoted_string_text,
    ACTIONS(909), 1,
      anon_sym_BSLASH,
    ACTIONS(911), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(959), 1,
      anon_sym_DQUOTE,
    STATE(177), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(225), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8144] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_BSLASH,
    ACTIONS(790), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(963), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(222), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(961), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(180), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8170] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_SEMI,
    ACTIONS(967), 1,
      anon_sym_BSLASH,
    ACTIONS(969), 1,
      sym_filename_text,
    ACTIONS(971), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(550), 1,
      sym_filename,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(192), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8198] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_BSLASH,
    ACTIONS(969), 1,
      sym_filename_text,
    ACTIONS(971), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(973), 1,
      anon_sym_SEMI,
    STATE(579), 1,
      sym_filename,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(192), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8226] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_quoted_string_text,
    ACTIONS(909), 1,
      anon_sym_BSLASH,
    ACTIONS(911), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(975), 1,
      anon_sym_DQUOTE,
    STATE(183), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(225), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8252] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_BSLASH,
    ACTIONS(980), 1,
      anon_sym_BQUOTE,
    ACTIONS(982), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(985), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(188), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(218), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8278] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    ACTIONS(988), 1,
      anon_sym_COLON,
    ACTIONS(990), 1,
      anon_sym_COLON2,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(179), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8306] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(511), 1,
      sym_key_string,
    STATE(594), 1,
      sym_key_value,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8334] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(396), 1,
      sym_key_value,
    STATE(511), 1,
      sym_key_string,
    STATE(224), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(189), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8362] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_BSLASH,
    ACTIONS(969), 1,
      sym_filename_text,
    ACTIONS(971), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(992), 1,
      anon_sym_SEMI,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(196), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(998), 1,
      anon_sym_u,
    ACTIONS(994), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8406] = 7,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_COLON2,
    ACTIONS(1000), 1,
      sym_key_string_text,
    ACTIONS(1003), 1,
      anon_sym_BSLASH2,
    ACTIONS(1006), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8431] = 7,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_BSLASH2,
    ACTIONS(505), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(988), 1,
      anon_sym_COLON2,
    ACTIONS(1009), 1,
      sym_key_string_text,
    STATE(241), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(194), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8456] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_SEMI,
    ACTIONS(1013), 1,
      anon_sym_BSLASH,
    ACTIONS(1016), 1,
      sym_filename_text,
    ACTIONS(1019), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(234), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(196), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8481] = 6,
    ACTIONS(1022), 1,
      anon_sym_BSLASH,
    ACTIONS(1025), 1,
      sym_filename_text,
    ACTIONS(1028), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1011), 2,
      anon_sym_LF,
      sym_comment,
    STATE(247), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(197), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8504] = 7,
    ACTIONS(926), 1,
      anon_sym_LF,
    ACTIONS(928), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym_key_string_text,
    ACTIONS(1034), 1,
      anon_sym_BSLASH2,
    ACTIONS(1037), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(243), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8529] = 6,
    ACTIONS(858), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      sym_filename_text,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(992), 2,
      anon_sym_LF,
      sym_comment,
    STATE(247), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(197), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8552] = 7,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(758), 1,
      anon_sym_BSLASH2,
    ACTIONS(988), 1,
      anon_sym_LF,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym_key_string_text,
    STATE(243), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(198), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_u,
    ACTIONS(1046), 1,
      anon_sym_POUND,
    ACTIONS(1042), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_LF,
    STATE(530), 1,
      sym_multiline_string_type,
    ACTIONS(1050), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [8613] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_LF,
    ACTIONS(1055), 1,
      anon_sym_BSLASH,
    ACTIONS(1058), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1060), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1063), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(203), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(211), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1067), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1065), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8657] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_u,
    ACTIONS(1071), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8673] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_DQUOTE,
    ACTIONS(1077), 1,
      anon_sym_BSLASH,
    ACTIONS(1080), 1,
      sym_json_string_text,
    ACTIONS(1083), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(314), 1,
      sym_json_string_escaped_char,
    STATE(206), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8697] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_DQUOTE,
    ACTIONS(1088), 1,
      anon_sym_BSLASH,
    ACTIONS(1090), 1,
      sym_json_string_text,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(314), 1,
      sym_json_string_escaped_char,
    STATE(206), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8721] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_BSLASH,
    ACTIONS(1090), 1,
      sym_json_string_text,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1094), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      sym_json_string_escaped_char,
    STATE(206), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8745] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_BSLASH,
    ACTIONS(1090), 1,
      sym_json_string_text,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1096), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      sym_json_string_escaped_char,
    STATE(208), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8769] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_u,
    ACTIONS(1098), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [8785] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(211), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1104), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1102), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(204), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1111), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1109), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8825] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_BSLASH,
    ACTIONS(1090), 1,
      sym_json_string_text,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1115), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      sym_json_string_escaped_char,
    STATE(207), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(203), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1117), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8867] = 6,
    ACTIONS(947), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1121), 1,
      anon_sym_BSLASH,
    ACTIONS(1124), 1,
      aux_sym_value_string_text_token1,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(939), 2,
      anon_sym_LF,
      sym_comment,
    STATE(215), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8889] = 6,
    ACTIONS(748), 1,
      anon_sym_BSLASH,
    ACTIONS(750), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(963), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(961), 2,
      anon_sym_LF,
      sym_comment,
    STATE(215), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_u,
    ACTIONS(1131), 1,
      anon_sym_POUND,
    ACTIONS(1127), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1133), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(223), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1142), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1137), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [8965] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_COLON2,
    ACTIONS(1148), 1,
      sym_key_string_text,
    ACTIONS(1151), 1,
      anon_sym_BSLASH2,
    ACTIONS(1144), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [8986] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1154), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(448), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9003] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1161), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(219), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1157), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [9022] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_BSLASH,
    ACTIONS(1166), 1,
      anon_sym_BQUOTE,
    ACTIONS(1168), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1171), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(223), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [9043] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_COLON2,
    STATE(220), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1173), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9060] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_BSLASH,
    ACTIONS(1179), 1,
      sym_quoted_string_text,
    ACTIONS(1177), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(228), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9079] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(487), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9096] = 8,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_json_object_repeat1,
    STATE(384), 1,
      sym_json_key_value,
    STATE(526), 1,
      sym_json_string,
    STATE(527), 1,
      sym_json_key_string,
  [9121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_quoted_string_text,
    ACTIONS(1192), 1,
      anon_sym_BSLASH,
    ACTIONS(1187), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(228), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9140] = 8,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1195), 1,
      anon_sym_RBRACE,
    STATE(389), 1,
      sym_json_key_value,
    STATE(390), 1,
      aux_sym_json_object_repeat1,
    STATE(526), 1,
      sym_json_string,
    STATE(527), 1,
      sym_json_key_string,
  [9165] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_DOT,
    STATE(276), 1,
      sym_fraction,
    STATE(428), 1,
      sym_exponent,
    ACTIONS(1197), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(1201), 2,
      anon_sym_e,
      anon_sym_E,
  [9186] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_DOT,
    STATE(262), 1,
      sym_fraction,
    STATE(428), 1,
      sym_exponent,
    ACTIONS(1197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1205), 2,
      anon_sym_e,
      anon_sym_E,
  [9207] = 4,
    ACTIONS(1209), 1,
      anon_sym_BSLASH,
    ACTIONS(1212), 1,
      sym_filename_text,
    STATE(232), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1207), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9223] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(402), 1,
      sym_integer,
    STATE(493), 2,
      sym_quoted_string,
      sym_float,
  [9243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(255), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1215), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1217), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9271] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_base64_COMMA,
    ACTIONS(730), 1,
      anon_sym_hex_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(486), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [9289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1221), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9303] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1225), 1,
      sym_key_string_text,
    ACTIONS(1228), 1,
      anon_sym_BSLASH2,
    ACTIONS(1144), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(238), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [9321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1231), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9335] = 5,
    ACTIONS(1146), 1,
      sym_comment,
    ACTIONS(1235), 1,
      sym_key_string_text,
    ACTIONS(1238), 1,
      anon_sym_BSLASH2,
    ACTIONS(1144), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(240), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [9353] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(238), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1173), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_BSLASH,
    ACTIONS(1243), 1,
      anon_sym_SLASH,
    ACTIONS(1245), 1,
      sym_regex_text,
    STATE(556), 1,
      sym_regex_content,
    STATE(271), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9387] = 3,
    ACTIONS(1175), 1,
      sym_comment,
    STATE(240), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1173), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9401] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(404), 1,
      sym_integer,
    STATE(489), 2,
      sym_quoted_string,
      sym_float,
  [9421] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_base64_COMMA,
    ACTIONS(730), 1,
      anon_sym_hex_COMMA,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(487), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [9439] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_digit,
    STATE(57), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1247), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [9455] = 2,
    STATE(232), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1215), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9467] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1247), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_e,
      anon_sym_E,
  [9483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1249), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1253), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1257), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      anon_sym_u,
    ACTIONS(1265), 1,
      anon_sym_POUND,
    ACTIONS(1261), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [9541] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(400), 1,
      sym_integer,
    STATE(494), 2,
      sym_quoted_string,
      sym_float,
  [9561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1267), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9575] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_BSLASH,
    ACTIONS(1274), 1,
      sym_filename_text,
    ACTIONS(1207), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(255), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [9593] = 6,
    ACTIONS(1197), 1,
      anon_sym_LF,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1281), 1,
      sym_comment,
    STATE(286), 1,
      sym_fraction,
    STATE(518), 1,
      sym_exponent,
    ACTIONS(1279), 2,
      anon_sym_e,
      anon_sym_E,
  [9613] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_BSLASH,
    ACTIONS(1245), 1,
      sym_regex_text,
    ACTIONS(1283), 1,
      anon_sym_SLASH,
    STATE(539), 1,
      sym_regex_content,
    STATE(271), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9633] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(398), 1,
      sym_integer,
    STATE(512), 2,
      sym_quoted_string,
      sym_float,
  [9653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1285), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9681] = 6,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_LT_QMARK,
    STATE(127), 1,
      sym_xml_open_tag,
    STATE(517), 1,
      sym_xml_tag,
    STATE(283), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9701] = 4,
    ACTIONS(208), 1,
      sym_comment,
    STATE(342), 1,
      sym_exponent,
    ACTIONS(1205), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1295), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9716] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_COLON2,
    ACTIONS(1291), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9742] = 4,
    ACTIONS(710), 1,
      sym_digit,
    ACTIONS(1247), 1,
      anon_sym_LF,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1297), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [9757] = 4,
    ACTIONS(1299), 1,
      anon_sym_LF,
    ACTIONS(1302), 1,
      sym_comment,
    STATE(266), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(210), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9772] = 2,
    ACTIONS(1289), 1,
      sym_comment,
    ACTIONS(1291), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9783] = 4,
    ACTIONS(1161), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 1,
      aux_sym_value_string_text_token1,
    STATE(272), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1157), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [9798] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_COLON2,
    ACTIONS(1307), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9811] = 3,
    ACTIONS(1311), 1,
      anon_sym_LF,
    ACTIONS(1315), 1,
      sym_comment,
    ACTIONS(1313), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_BSLASH,
    ACTIONS(1317), 1,
      anon_sym_SLASH,
    ACTIONS(1319), 1,
      sym_regex_text,
    STATE(275), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9841] = 4,
    ACTIONS(1142), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1321), 1,
      aux_sym_value_string_text_token1,
    STATE(272), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1137), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [9856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1326), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1324), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1249), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_BSLASH,
    ACTIONS(1331), 1,
      anon_sym_SLASH,
    ACTIONS(1333), 1,
      sym_regex_text,
    STATE(275), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9901] = 4,
    ACTIONS(208), 1,
      sym_comment,
    STATE(342), 1,
      sym_exponent,
    ACTIONS(1201), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1295), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1336), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1340), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1324), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1326), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1324), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1342), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9972] = 4,
    ACTIONS(1346), 1,
      anon_sym_LF,
    ACTIONS(1348), 1,
      sym_comment,
    STATE(266), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(220), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9987] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(41), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(305), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10003] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_LT,
    ACTIONS(1352), 1,
      anon_sym_LT_QMARK,
    STATE(283), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [10017] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1355), 1,
      sym_digit,
    STATE(434), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10043] = 4,
    ACTIONS(1295), 1,
      anon_sym_LF,
    ACTIONS(1359), 1,
      sym_comment,
    STATE(474), 1,
      sym_exponent,
    ACTIONS(1279), 2,
      anon_sym_e,
      anon_sym_E,
  [10057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1361), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1365), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10103] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1369), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10117] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10133] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1371), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1373), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10155] = 2,
    ACTIONS(1251), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1249), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10165] = 2,
    ACTIONS(1379), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1377), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10175] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    STATE(435), 1,
      sym_json_key_value,
    STATE(526), 1,
      sym_json_string,
    STATE(527), 1,
      sym_json_key_string,
  [10191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10201] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [10215] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1291), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10225] = 1,
    ACTIONS(1289), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10233] = 5,
    ACTIONS(1381), 1,
      anon_sym_LF,
    ACTIONS(1384), 1,
      sym_comment,
    STATE(167), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(302), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10249] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      anon_sym_SLASH,
    STATE(79), 2,
      sym_quoted_string,
      sym_regex,
  [10263] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1307), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10273] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(302), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10289] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym_digit,
    STATE(221), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1391), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10303] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(48), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10339] = 5,
    ACTIONS(1397), 1,
      anon_sym_LF,
    ACTIONS(1400), 1,
      sym_comment,
    STATE(190), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10355] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(50), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10371] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1403), 1,
      sym_digit,
    STATE(335), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10385] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(311), 1,
      aux_sym_query_string_params_section_repeat1,
  [10401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1407), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10413] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10429] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(307), 1,
      aux_sym_query_string_params_section_repeat1,
  [10445] = 2,
    ACTIONS(1223), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1221), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10455] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10481] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(1413), 1,
      anon_sym_SLASH,
    STATE(155), 2,
      sym_quoted_string,
      sym_regex,
  [10495] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(41), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(302), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10511] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(1413), 1,
      anon_sym_SLASH,
    STATE(480), 2,
      sym_quoted_string,
      sym_regex,
  [10525] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1415), 1,
      sym_digit,
    STATE(306), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1417), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10539] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(292), 1,
      aux_sym_query_string_params_section_repeat1,
  [10555] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(310), 1,
      aux_sym_query_string_params_section_repeat1,
  [10571] = 2,
    ACTIONS(1309), 1,
      sym_comment,
    ACTIONS(1307), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10591] = 1,
    ACTIONS(1419), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1249), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10621] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1421), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10631] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_digit,
    STATE(57), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1369), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10645] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    ACTIONS(1413), 1,
      anon_sym_SLASH,
    STATE(152), 2,
      sym_quoted_string,
      sym_regex,
  [10659] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      anon_sym_SLASH,
    STATE(469), 2,
      sym_quoted_string,
      sym_regex,
  [10673] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_digit,
    STATE(57), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1391), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1423), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10699] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      anon_sym_SLASH,
    STATE(73), 2,
      sym_quoted_string,
      sym_regex,
  [10713] = 2,
    ACTIONS(1291), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1289), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10723] = 2,
    ACTIONS(1255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1253), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10733] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      anon_sym_SLASH,
    STATE(454), 2,
      sym_quoted_string,
      sym_regex,
  [10747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1427), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10759] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1431), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10768] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1435), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_json_array_repeat1,
  [10781] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(37), 1,
      sym__comment_or_new_line,
  [10794] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(578), 1,
      sym_expr,
  [10807] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(577), 1,
      sym_expr,
  [10820] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(21), 1,
      sym__comment_or_new_line,
  [10833] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 1,
      sym__comment_or_new_line,
  [10846] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(576), 1,
      sym_expr,
  [10859] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(575), 1,
      sym_expr,
  [10872] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(26), 1,
      sym__comment_or_new_line,
  [10885] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(574), 1,
      sym_expr,
  [10898] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 1,
      sym__comment_or_new_line,
  [10911] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(573), 1,
      sym_expr,
  [10924] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(33), 1,
      sym__comment_or_new_line,
  [10937] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(22), 1,
      sym__comment_or_new_line,
  [10950] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(23), 1,
      sym__comment_or_new_line,
  [10963] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(24), 1,
      sym__comment_or_new_line,
  [10976] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(25), 1,
      sym__comment_or_new_line,
  [10989] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(27), 1,
      sym__comment_or_new_line,
  [11002] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
  [11015] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(29), 1,
      sym__comment_or_new_line,
  [11028] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(572), 1,
      sym_expr,
  [11041] = 4,
    ACTIONS(1441), 1,
      anon_sym_LF,
    ACTIONS(1443), 1,
      sym_comment,
    STATE(191), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11054] = 4,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(555), 1,
      sym__comment_or_new_line,
  [11067] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(55), 1,
      sym__comment_or_new_line,
  [11080] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(570), 1,
      sym_expr,
  [11093] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(568), 1,
      sym_expr,
  [11106] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(565), 1,
      sym_expr,
  [11119] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_digit,
    STATE(61), 1,
      aux_sym_integer_repeat1,
    STATE(76), 1,
      sym_integer,
  [11132] = 4,
    ACTIONS(1441), 1,
      anon_sym_LF,
    ACTIONS(1443), 1,
      sym_comment,
    STATE(163), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11145] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(533), 1,
      sym_expr,
  [11158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      anon_sym_POUND,
    ACTIONS(1445), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [11169] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1449), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_json_array_repeat1,
  [11182] = 4,
    ACTIONS(1441), 1,
      anon_sym_LF,
    ACTIONS(1443), 1,
      sym_comment,
    STATE(162), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11195] = 4,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      sym_comment,
    STATE(12), 1,
      sym__comment_or_new_line,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11208] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1451), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      aux_sym_json_object_repeat1,
  [11221] = 4,
    ACTIONS(1441), 1,
      anon_sym_LF,
    ACTIONS(1443), 1,
      sym_comment,
    STATE(159), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11234] = 4,
    ACTIONS(1441), 1,
      anon_sym_LF,
    ACTIONS(1443), 1,
      sym_comment,
    STATE(161), 1,
      sym__comment_or_new_line,
    STATE(281), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      sym_regex_text,
  [11256] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym__comment_or_new_line,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11269] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1455), 1,
      anon_sym_RBRACK,
    STATE(374), 1,
      aux_sym_json_array_repeat1,
  [11282] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1457), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      aux_sym_json_object_repeat1,
  [11295] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1457), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      aux_sym_json_object_repeat1,
  [11308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_POUND,
    ACTIONS(1459), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [11319] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_SEMI,
    ACTIONS(1465), 1,
      sym_hexdigit,
    STATE(401), 1,
      aux_sym_oneline_hex_repeat1,
  [11332] = 4,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(91), 1,
      sym__comment_or_new_line,
  [11345] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    STATE(597), 1,
      sym_expr,
  [11358] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1467), 1,
      anon_sym_RBRACE,
    STATE(406), 1,
      aux_sym_json_object_repeat1,
  [11371] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1467), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      aux_sym_json_object_repeat1,
  [11384] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1291), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11393] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1469), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      aux_sym_json_array_repeat1,
  [11406] = 4,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      sym_comment,
    STATE(64), 1,
      sym__comment_or_new_line,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11419] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(35), 1,
      sym__comment_or_new_line,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11432] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1471), 1,
      anon_sym_LF,
    ACTIONS(1473), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11445] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(68), 1,
      sym__comment_or_new_line,
  [11458] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(106), 1,
      sym__comment_or_new_line,
  [11471] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1475), 1,
      anon_sym_LF,
    ACTIONS(1477), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11484] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(63), 1,
      sym__comment_or_new_line,
  [11497] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1479), 1,
      anon_sym_LF,
    ACTIONS(1481), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11510] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_SEMI,
    ACTIONS(1485), 1,
      sym_hexdigit,
    STATE(401), 1,
      aux_sym_oneline_hex_repeat1,
  [11523] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1488), 1,
      anon_sym_LF,
    ACTIONS(1490), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11536] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1492), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11545] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1494), 1,
      anon_sym_LF,
    ACTIONS(1496), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11558] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1498), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11567] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COMMA,
    ACTIONS(1500), 1,
      anon_sym_RBRACE,
    STATE(430), 1,
      aux_sym_json_object_repeat1,
  [11580] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1502), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11589] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1504), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11598] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(348), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11609] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(347), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11620] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(56), 1,
      sym__comment_or_new_line,
  [11633] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      aux_sym_variable_name_token1,
    STATE(344), 1,
      sym_variable_definition,
    STATE(479), 1,
      sym_variable_name,
  [11646] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(351), 1,
      sym_integer,
  [11659] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(353), 1,
      sym_integer,
  [11672] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(355), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11683] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(357), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11694] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1506), 1,
      anon_sym_LF,
    ACTIONS(1508), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11707] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(358), 1,
      sym_integer,
  [11720] = 4,
    ACTIONS(710), 1,
      sym_digit,
    ACTIONS(1369), 1,
      anon_sym_LF,
    ACTIONS(1510), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_integer_repeat1,
  [11733] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(158), 1,
      sym_integer,
  [11746] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(376), 1,
      sym_status,
    ACTIONS(1512), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11757] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(359), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11768] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(360), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11779] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1514), 1,
      anon_sym_COMMA,
    ACTIONS(1517), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_json_array_repeat1,
  [11792] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(361), 1,
      sym_boolean,
    ACTIONS(736), 2,
      anon_sym_true,
      anon_sym_false,
  [11803] = 4,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    ACTIONS(1519), 1,
      anon_sym_LF,
    ACTIONS(1521), 1,
      sym_comment,
    STATE(564), 1,
      sym_fraction,
  [11816] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1523), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11825] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1295), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11834] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1525), 1,
      anon_sym_SEMI,
    ACTIONS(1527), 1,
      sym_hexdigit,
    STATE(386), 1,
      aux_sym_oneline_hex_repeat1,
  [11847] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1529), 1,
      anon_sym_RBRACE,
    ACTIONS(1531), 1,
      anon_sym_COMMA,
    STATE(430), 1,
      aux_sym_json_object_repeat1,
  [11860] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1311), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11869] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1534), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11878] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(128), 1,
      sym__comment_or_new_line,
  [11891] = 4,
    ACTIONS(710), 1,
      sym_digit,
    ACTIONS(1391), 1,
      anon_sym_LF,
    ACTIONS(1536), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_integer_repeat1,
  [11904] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1529), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11912] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_COLON,
    ACTIONS(1540), 1,
      anon_sym_COLON2,
  [11922] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym_quoted_string,
  [11932] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(481), 1,
      sym_quoted_string,
  [11942] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_LBRACE,
    STATE(339), 1,
      sym_unicode_char,
  [11952] = 3,
    ACTIONS(1544), 1,
      anon_sym_LF,
    ACTIONS(1546), 1,
      aux_sym_file_value_token1,
    ACTIONS(1548), 1,
      sym_comment,
  [11962] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_quoted_string,
  [11972] = 3,
    ACTIONS(1550), 1,
      anon_sym_LF,
    ACTIONS(1552), 1,
      aux_sym_file_value_token1,
    ACTIONS(1554), 1,
      sym_comment,
  [11982] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_quoted_string,
  [11992] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_quoted_string,
  [12002] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      sym_quoted_string,
  [12012] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      sym_quoted_string,
  [12022] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_quoted_string,
  [12032] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1517), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12040] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1556), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12048] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_quoted_string,
  [12058] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1558), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [12066] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_LBRACE,
    STATE(280), 1,
      sym_unicode_char,
  [12076] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_LBRACE,
    STATE(319), 1,
      sym_unicode_char,
  [12086] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(148), 1,
      sym_quoted_string,
  [12096] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_quoted_string,
  [12106] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_file_COMMA,
    STATE(365), 1,
      sym_file_value,
  [12116] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_quoted_string,
  [12126] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1566), 1,
      sym_digit,
    STATE(246), 1,
      aux_sym_integer_repeat1,
  [12136] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_quoted_string,
  [12146] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      sym_quoted_string,
  [12156] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_LBRACE,
    STATE(250), 1,
      sym_unicode_char,
  [12166] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_quoted_string,
  [12176] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1570), 1,
      sym_digit,
    STATE(265), 1,
      aux_sym_integer_repeat1,
  [12186] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1572), 1,
      sym_digit,
    STATE(248), 1,
      aux_sym_integer_repeat1,
  [12196] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_LT,
    ACTIONS(1269), 1,
      anon_sym_LT_QMARK,
  [12206] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1574), 1,
      sym_digit,
    STATE(419), 1,
      aux_sym_integer_repeat1,
  [12216] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1576), 1,
      sym_digit,
    STATE(332), 1,
      aux_sym_integer_repeat1,
  [12226] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_quoted_string,
  [12236] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_quoted_string,
  [12246] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1578), 1,
      sym_digit,
    STATE(291), 1,
      aux_sym_integer_repeat1,
  [12256] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      sym_unicode_char,
  [12266] = 2,
    ACTIONS(1471), 1,
      anon_sym_LF,
    ACTIONS(1473), 1,
      sym_comment,
  [12273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      aux_sym_key_string_escaped_char_token1,
  [12280] = 2,
    ACTIONS(1431), 1,
      anon_sym_LF,
    ACTIONS(1584), 1,
      sym_comment,
  [12287] = 2,
    ACTIONS(1519), 1,
      anon_sym_LF,
    ACTIONS(1521), 1,
      sym_comment,
  [12294] = 2,
    ACTIONS(1285), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_LF,
  [12301] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_GT,
  [12308] = 2,
    ACTIONS(1502), 1,
      anon_sym_LF,
    ACTIONS(1588), 1,
      sym_comment,
  [12315] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_EQ,
  [12322] = 2,
    ACTIONS(1592), 1,
      anon_sym_LF,
    ACTIONS(1594), 1,
      sym_comment,
  [12329] = 2,
    ACTIONS(1596), 1,
      anon_sym_LF,
    ACTIONS(1598), 1,
      sym_comment,
  [12336] = 2,
    ACTIONS(1504), 1,
      anon_sym_LF,
    ACTIONS(1600), 1,
      sym_comment,
  [12343] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1602), 1,
      sym_hexdigit,
  [12350] = 2,
    ACTIONS(1604), 1,
      anon_sym_LF,
    ACTIONS(1606), 1,
      sym_comment,
  [12357] = 2,
    ACTIONS(1421), 1,
      anon_sym_LF,
    ACTIONS(1608), 1,
      sym_comment,
  [12364] = 2,
    ACTIONS(1610), 1,
      anon_sym_LF,
    ACTIONS(1612), 1,
      sym_comment,
  [12371] = 2,
    ACTIONS(1614), 1,
      anon_sym_LF,
    ACTIONS(1616), 1,
      sym_comment,
  [12378] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1618), 1,
      sym_hexdigit,
  [12385] = 2,
    ACTIONS(1494), 1,
      anon_sym_LF,
    ACTIONS(1496), 1,
      sym_comment,
  [12392] = 2,
    ACTIONS(1620), 1,
      anon_sym_LF,
    ACTIONS(1622), 1,
      sym_comment,
  [12399] = 2,
    ACTIONS(1624), 1,
      anon_sym_LF,
    ACTIONS(1626), 1,
      sym_comment,
  [12406] = 2,
    ACTIONS(1628), 1,
      anon_sym_LF,
    ACTIONS(1630), 1,
      sym_comment,
  [12413] = 2,
    ACTIONS(1488), 1,
      anon_sym_LF,
    ACTIONS(1490), 1,
      sym_comment,
  [12420] = 2,
    ACTIONS(1479), 1,
      anon_sym_LF,
    ACTIONS(1481), 1,
      sym_comment,
  [12427] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_COLON2,
  [12434] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_COLON2,
  [12441] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_COLON2,
  [12448] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_COLON2,
  [12455] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1640), 1,
      anon_sym_COLON2,
  [12462] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_COLON2,
  [12469] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_COLON2,
  [12476] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1646), 1,
      anon_sym_COLON2,
  [12483] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_COLON2,
  [12490] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_COLON2,
  [12497] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1652), 1,
      anon_sym_COLON2,
  [12504] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1654), 1,
      anon_sym_COLON2,
  [12511] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_COLON2,
  [12518] = 2,
    ACTIONS(1658), 1,
      anon_sym_LF,
    ACTIONS(1660), 1,
      sym_comment,
  [12525] = 2,
    ACTIONS(1662), 1,
      anon_sym_LF,
    ACTIONS(1664), 1,
      sym_comment,
  [12532] = 2,
    ACTIONS(1666), 1,
      anon_sym_LF,
    ACTIONS(1668), 1,
      sym_comment,
  [12539] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_COLON,
  [12546] = 2,
    ACTIONS(1475), 1,
      anon_sym_LF,
    ACTIONS(1477), 1,
      sym_comment,
  [12553] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1670), 1,
      sym_hexdigit,
  [12560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      aux_sym_xml_prolog_tag_token1,
  [12567] = 2,
    ACTIONS(1674), 1,
      anon_sym_LF,
    ACTIONS(1676), 1,
      sym_comment,
  [12574] = 2,
    ACTIONS(1678), 1,
      anon_sym_LF,
    ACTIONS(1680), 1,
      sym_comment,
  [12581] = 2,
    ACTIONS(1682), 1,
      anon_sym_LF,
    ACTIONS(1684), 1,
      sym_comment,
  [12588] = 2,
    ACTIONS(1295), 1,
      anon_sym_LF,
    ACTIONS(1359), 1,
      sym_comment,
  [12595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      aux_sym_xml_open_tag_token1,
  [12602] = 2,
    ACTIONS(1257), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_LF,
  [12609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      aux_sym_xml_close_tag_token1,
  [12616] = 2,
    ACTIONS(1690), 1,
      anon_sym_LF,
    ACTIONS(1692), 1,
      sym_comment,
  [12623] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1694), 1,
      ts_builtin_sym_end,
  [12630] = 2,
    ACTIONS(1696), 1,
      anon_sym_LF,
    ACTIONS(1698), 1,
      sym_comment,
  [12637] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1700), 1,
      sym_hexdigit,
  [12644] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1702), 1,
      anon_sym_COLON2,
  [12651] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1704), 1,
      anon_sym_COLON2,
  [12658] = 2,
    ACTIONS(1706), 1,
      anon_sym_LF,
    ACTIONS(1708), 1,
      sym_comment,
  [12665] = 2,
    ACTIONS(1523), 1,
      anon_sym_LF,
    ACTIONS(1710), 1,
      sym_comment,
  [12672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1712), 1,
      anon_sym_LF,
  [12679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      anon_sym_LF,
  [12686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1716), 1,
      aux_sym_regex_escaped_char_token1,
  [12693] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1718), 1,
      anon_sym_RBRACE_RBRACE,
  [12700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1720), 1,
      aux_sym_oneline_string_text_token2,
  [12707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1722), 1,
      aux_sym_key_string_escaped_char_token1,
  [12714] = 2,
    ACTIONS(1724), 1,
      anon_sym_LF,
    ACTIONS(1726), 1,
      sym_comment,
  [12721] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1728), 1,
      sym_hexdigit,
  [12728] = 2,
    ACTIONS(1371), 1,
      anon_sym_LF,
    ACTIONS(1730), 1,
      sym_comment,
  [12735] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1732), 1,
      anon_sym_SLASH,
  [12742] = 2,
    ACTIONS(1734), 1,
      anon_sym_LF,
    ACTIONS(1736), 1,
      sym_comment,
  [12749] = 2,
    ACTIONS(1534), 1,
      anon_sym_LF,
    ACTIONS(1738), 1,
      sym_comment,
  [12756] = 2,
    ACTIONS(1740), 1,
      anon_sym_LF,
    ACTIONS(1742), 1,
      sym_comment,
  [12763] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1744), 1,
      anon_sym_QMARK_GT,
  [12770] = 2,
    ACTIONS(1746), 1,
      anon_sym_LF,
    ACTIONS(1748), 1,
      sym_comment,
  [12777] = 2,
    ACTIONS(1750), 1,
      anon_sym_LF,
    ACTIONS(1752), 1,
      sym_comment,
  [12784] = 2,
    ACTIONS(1311), 1,
      anon_sym_LF,
    ACTIONS(1315), 1,
      sym_comment,
  [12791] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1754), 1,
      sym_hexdigit,
  [12798] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1756), 1,
      anon_sym_SEMI,
  [12805] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1758), 1,
      anon_sym_GT,
  [12812] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1760), 1,
      anon_sym_SEMI,
  [12819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1762), 1,
      aux_sym_oneline_base64_token1,
  [12826] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1764), 1,
      sym_hexdigit,
  [12833] = 2,
    ACTIONS(1766), 1,
      anon_sym_LF,
    ACTIONS(1768), 1,
      sym_comment,
  [12840] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1770), 1,
      anon_sym_GT,
  [12847] = 2,
    ACTIONS(1772), 1,
      anon_sym_LF,
    ACTIONS(1774), 1,
      sym_comment,
  [12854] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1776), 1,
      anon_sym_SLASH,
  [12861] = 2,
    ACTIONS(1778), 1,
      anon_sym_LF,
    ACTIONS(1780), 1,
      sym_comment,
  [12868] = 2,
    ACTIONS(1498), 1,
      anon_sym_LF,
    ACTIONS(1782), 1,
      sym_comment,
  [12875] = 2,
    ACTIONS(1492), 1,
      anon_sym_LF,
    ACTIONS(1784), 1,
      sym_comment,
  [12882] = 2,
    ACTIONS(1231), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_LF,
  [12889] = 2,
    ACTIONS(1786), 1,
      anon_sym_LF,
    ACTIONS(1788), 1,
      sym_comment,
  [12896] = 2,
    ACTIONS(1790), 1,
      anon_sym_LF,
    ACTIONS(1792), 1,
      sym_comment,
  [12903] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1794), 1,
      anon_sym_RBRACE,
  [12910] = 2,
    ACTIONS(1796), 1,
      anon_sym_LF,
    ACTIONS(1798), 1,
      sym_comment,
  [12917] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1800), 1,
      anon_sym_RBRACE_RBRACE,
  [12924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1802), 1,
      aux_sym_key_string_escaped_char_token1,
  [12931] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1804), 1,
      anon_sym_RBRACE,
  [12938] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1806), 1,
      anon_sym_RBRACE_RBRACE,
  [12945] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1808), 1,
      anon_sym_RBRACE,
  [12952] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_RBRACE_RBRACE,
  [12959] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1812), 1,
      anon_sym_RBRACE,
  [12966] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1814), 1,
      anon_sym_RBRACE_RBRACE,
  [12973] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1816), 1,
      anon_sym_RBRACE_RBRACE,
  [12980] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_RBRACE_RBRACE,
  [12987] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1820), 1,
      anon_sym_RBRACE_RBRACE,
  [12994] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1822), 1,
      anon_sym_RBRACE_RBRACE,
  [13001] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1824), 1,
      anon_sym_RBRACE_RBRACE,
  [13008] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1826), 1,
      anon_sym_RBRACE_RBRACE,
  [13015] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1828), 1,
      anon_sym_SEMI,
  [13022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1830), 1,
      aux_sym_xml_prolog_tag_token1,
  [13029] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1832), 1,
      anon_sym_COLON2,
  [13036] = 2,
    ACTIONS(1834), 1,
      anon_sym_LF,
    ACTIONS(1836), 1,
      sym_comment,
  [13043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1838), 1,
      aux_sym_xml_close_tag_token1,
  [13050] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1840), 1,
      sym_hexdigit,
  [13057] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1842), 1,
      anon_sym_RBRACE,
  [13064] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1844), 1,
      sym_hexdigit,
  [13071] = 2,
    ACTIONS(1506), 1,
      anon_sym_LF,
    ACTIONS(1508), 1,
      sym_comment,
  [13078] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1846), 1,
      sym_hexdigit,
  [13085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1848), 1,
      aux_sym_variable_name_token2,
  [13092] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1850), 1,
      sym_hexdigit,
  [13099] = 2,
    ACTIONS(1852), 1,
      anon_sym_LF,
    ACTIONS(1854), 1,
      sym_comment,
  [13106] = 2,
    ACTIONS(1544), 1,
      anon_sym_LF,
    ACTIONS(1548), 1,
      sym_comment,
  [13113] = 2,
    ACTIONS(1856), 1,
      anon_sym_LF,
    ACTIONS(1858), 1,
      sym_comment,
  [13120] = 2,
    ACTIONS(1860), 1,
      anon_sym_LF,
    ACTIONS(1862), 1,
      sym_comment,
  [13127] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1864), 1,
      anon_sym_QMARK_GT,
  [13134] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1866), 1,
      sym_hexdigit,
  [13141] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1868), 1,
      anon_sym_RBRACE_RBRACE,
  [13148] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1870), 1,
      sym_hexdigit,
  [13155] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1872), 1,
      sym_hexdigit,
  [13162] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1874), 1,
      sym_hexdigit,
  [13169] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1876), 1,
      sym_hexdigit,
  [13176] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1878), 1,
      sym_hexdigit,
  [13183] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1880), 1,
      sym_hexdigit,
  [13190] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1882), 1,
      sym_hexdigit,
  [13197] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1884), 1,
      sym_hexdigit,
  [13204] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1886), 1,
      sym_hexdigit,
  [13211] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1888), 1,
      sym_hexdigit,
  [13218] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1890), 1,
      sym_hexdigit,
  [13225] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1892), 1,
      sym_hexdigit,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 121,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 354,
  [SMALL_STATE(18)] = 466,
  [SMALL_STATE(19)] = 537,
  [SMALL_STATE(20)] = 608,
  [SMALL_STATE(21)] = 672,
  [SMALL_STATE(22)] = 736,
  [SMALL_STATE(23)] = 800,
  [SMALL_STATE(24)] = 864,
  [SMALL_STATE(25)] = 928,
  [SMALL_STATE(26)] = 992,
  [SMALL_STATE(27)] = 1056,
  [SMALL_STATE(28)] = 1120,
  [SMALL_STATE(29)] = 1184,
  [SMALL_STATE(30)] = 1248,
  [SMALL_STATE(31)] = 1332,
  [SMALL_STATE(32)] = 1396,
  [SMALL_STATE(33)] = 1460,
  [SMALL_STATE(34)] = 1524,
  [SMALL_STATE(35)] = 1608,
  [SMALL_STATE(36)] = 1692,
  [SMALL_STATE(37)] = 1756,
  [SMALL_STATE(38)] = 1820,
  [SMALL_STATE(39)] = 1898,
  [SMALL_STATE(40)] = 1976,
  [SMALL_STATE(41)] = 2054,
  [SMALL_STATE(42)] = 2132,
  [SMALL_STATE(43)] = 2206,
  [SMALL_STATE(44)] = 2280,
  [SMALL_STATE(45)] = 2354,
  [SMALL_STATE(46)] = 2428,
  [SMALL_STATE(47)] = 2502,
  [SMALL_STATE(48)] = 2576,
  [SMALL_STATE(49)] = 2650,
  [SMALL_STATE(50)] = 2724,
  [SMALL_STATE(51)] = 2798,
  [SMALL_STATE(52)] = 2873,
  [SMALL_STATE(53)] = 2935,
  [SMALL_STATE(54)] = 2999,
  [SMALL_STATE(55)] = 3061,
  [SMALL_STATE(56)] = 3116,
  [SMALL_STATE(57)] = 3171,
  [SMALL_STATE(58)] = 3231,
  [SMALL_STATE(59)] = 3303,
  [SMALL_STATE(60)] = 3363,
  [SMALL_STATE(61)] = 3423,
  [SMALL_STATE(62)] = 3483,
  [SMALL_STATE(63)] = 3552,
  [SMALL_STATE(64)] = 3605,
  [SMALL_STATE(65)] = 3671,
  [SMALL_STATE(66)] = 3737,
  [SMALL_STATE(67)] = 3803,
  [SMALL_STATE(68)] = 3854,
  [SMALL_STATE(69)] = 3905,
  [SMALL_STATE(70)] = 3955,
  [SMALL_STATE(71)] = 4005,
  [SMALL_STATE(72)] = 4055,
  [SMALL_STATE(73)] = 4105,
  [SMALL_STATE(74)] = 4154,
  [SMALL_STATE(75)] = 4203,
  [SMALL_STATE(76)] = 4252,
  [SMALL_STATE(77)] = 4301,
  [SMALL_STATE(78)] = 4350,
  [SMALL_STATE(79)] = 4399,
  [SMALL_STATE(80)] = 4447,
  [SMALL_STATE(81)] = 4495,
  [SMALL_STATE(82)] = 4543,
  [SMALL_STATE(83)] = 4591,
  [SMALL_STATE(84)] = 4639,
  [SMALL_STATE(85)] = 4693,
  [SMALL_STATE(86)] = 4741,
  [SMALL_STATE(87)] = 4789,
  [SMALL_STATE(88)] = 4840,
  [SMALL_STATE(89)] = 4891,
  [SMALL_STATE(90)] = 4935,
  [SMALL_STATE(91)] = 4979,
  [SMALL_STATE(92)] = 5023,
  [SMALL_STATE(93)] = 5065,
  [SMALL_STATE(94)] = 5132,
  [SMALL_STATE(95)] = 5180,
  [SMALL_STATE(96)] = 5228,
  [SMALL_STATE(97)] = 5280,
  [SMALL_STATE(98)] = 5332,
  [SMALL_STATE(99)] = 5378,
  [SMALL_STATE(100)] = 5424,
  [SMALL_STATE(101)] = 5454,
  [SMALL_STATE(102)] = 5496,
  [SMALL_STATE(103)] = 5542,
  [SMALL_STATE(104)] = 5572,
  [SMALL_STATE(105)] = 5618,
  [SMALL_STATE(106)] = 5648,
  [SMALL_STATE(107)] = 5678,
  [SMALL_STATE(108)] = 5724,
  [SMALL_STATE(109)] = 5754,
  [SMALL_STATE(110)] = 5796,
  [SMALL_STATE(111)] = 5835,
  [SMALL_STATE(112)] = 5867,
  [SMALL_STATE(113)] = 5899,
  [SMALL_STATE(114)] = 5935,
  [SMALL_STATE(115)] = 5968,
  [SMALL_STATE(116)] = 6019,
  [SMALL_STATE(117)] = 6070,
  [SMALL_STATE(118)] = 6105,
  [SMALL_STATE(119)] = 6140,
  [SMALL_STATE(120)] = 6191,
  [SMALL_STATE(121)] = 6239,
  [SMALL_STATE(122)] = 6289,
  [SMALL_STATE(123)] = 6331,
  [SMALL_STATE(124)] = 6356,
  [SMALL_STATE(125)] = 6385,
  [SMALL_STATE(126)] = 6414,
  [SMALL_STATE(127)] = 6439,
  [SMALL_STATE(128)] = 6486,
  [SMALL_STATE(129)] = 6511,
  [SMALL_STATE(130)] = 6558,
  [SMALL_STATE(131)] = 6605,
  [SMALL_STATE(132)] = 6630,
  [SMALL_STATE(133)] = 6655,
  [SMALL_STATE(134)] = 6702,
  [SMALL_STATE(135)] = 6727,
  [SMALL_STATE(136)] = 6752,
  [SMALL_STATE(137)] = 6776,
  [SMALL_STATE(138)] = 6820,
  [SMALL_STATE(139)] = 6843,
  [SMALL_STATE(140)] = 6866,
  [SMALL_STATE(141)] = 6889,
  [SMALL_STATE(142)] = 6912,
  [SMALL_STATE(143)] = 6935,
  [SMALL_STATE(144)] = 6958,
  [SMALL_STATE(145)] = 6981,
  [SMALL_STATE(146)] = 7004,
  [SMALL_STATE(147)] = 7027,
  [SMALL_STATE(148)] = 7050,
  [SMALL_STATE(149)] = 7073,
  [SMALL_STATE(150)] = 7096,
  [SMALL_STATE(151)] = 7139,
  [SMALL_STATE(152)] = 7162,
  [SMALL_STATE(153)] = 7185,
  [SMALL_STATE(154)] = 7228,
  [SMALL_STATE(155)] = 7271,
  [SMALL_STATE(156)] = 7294,
  [SMALL_STATE(157)] = 7337,
  [SMALL_STATE(158)] = 7360,
  [SMALL_STATE(159)] = 7383,
  [SMALL_STATE(160)] = 7427,
  [SMALL_STATE(161)] = 7464,
  [SMALL_STATE(162)] = 7504,
  [SMALL_STATE(163)] = 7544,
  [SMALL_STATE(164)] = 7584,
  [SMALL_STATE(165)] = 7611,
  [SMALL_STATE(166)] = 7642,
  [SMALL_STATE(167)] = 7674,
  [SMALL_STATE(168)] = 7706,
  [SMALL_STATE(169)] = 7735,
  [SMALL_STATE(170)] = 7762,
  [SMALL_STATE(171)] = 7791,
  [SMALL_STATE(172)] = 7818,
  [SMALL_STATE(173)] = 7847,
  [SMALL_STATE(174)] = 7876,
  [SMALL_STATE(175)] = 7905,
  [SMALL_STATE(176)] = 7934,
  [SMALL_STATE(177)] = 7960,
  [SMALL_STATE(178)] = 7986,
  [SMALL_STATE(179)] = 8012,
  [SMALL_STATE(180)] = 8040,
  [SMALL_STATE(181)] = 8066,
  [SMALL_STATE(182)] = 8092,
  [SMALL_STATE(183)] = 8118,
  [SMALL_STATE(184)] = 8144,
  [SMALL_STATE(185)] = 8170,
  [SMALL_STATE(186)] = 8198,
  [SMALL_STATE(187)] = 8226,
  [SMALL_STATE(188)] = 8252,
  [SMALL_STATE(189)] = 8278,
  [SMALL_STATE(190)] = 8306,
  [SMALL_STATE(191)] = 8334,
  [SMALL_STATE(192)] = 8362,
  [SMALL_STATE(193)] = 8387,
  [SMALL_STATE(194)] = 8406,
  [SMALL_STATE(195)] = 8431,
  [SMALL_STATE(196)] = 8456,
  [SMALL_STATE(197)] = 8481,
  [SMALL_STATE(198)] = 8504,
  [SMALL_STATE(199)] = 8529,
  [SMALL_STATE(200)] = 8552,
  [SMALL_STATE(201)] = 8577,
  [SMALL_STATE(202)] = 8595,
  [SMALL_STATE(203)] = 8613,
  [SMALL_STATE(204)] = 8637,
  [SMALL_STATE(205)] = 8657,
  [SMALL_STATE(206)] = 8673,
  [SMALL_STATE(207)] = 8697,
  [SMALL_STATE(208)] = 8721,
  [SMALL_STATE(209)] = 8745,
  [SMALL_STATE(210)] = 8769,
  [SMALL_STATE(211)] = 8785,
  [SMALL_STATE(212)] = 8805,
  [SMALL_STATE(213)] = 8825,
  [SMALL_STATE(214)] = 8849,
  [SMALL_STATE(215)] = 8867,
  [SMALL_STATE(216)] = 8889,
  [SMALL_STATE(217)] = 8911,
  [SMALL_STATE(218)] = 8929,
  [SMALL_STATE(219)] = 8946,
  [SMALL_STATE(220)] = 8965,
  [SMALL_STATE(221)] = 8986,
  [SMALL_STATE(222)] = 9003,
  [SMALL_STATE(223)] = 9022,
  [SMALL_STATE(224)] = 9043,
  [SMALL_STATE(225)] = 9060,
  [SMALL_STATE(226)] = 9079,
  [SMALL_STATE(227)] = 9096,
  [SMALL_STATE(228)] = 9121,
  [SMALL_STATE(229)] = 9140,
  [SMALL_STATE(230)] = 9165,
  [SMALL_STATE(231)] = 9186,
  [SMALL_STATE(232)] = 9207,
  [SMALL_STATE(233)] = 9223,
  [SMALL_STATE(234)] = 9243,
  [SMALL_STATE(235)] = 9257,
  [SMALL_STATE(236)] = 9271,
  [SMALL_STATE(237)] = 9289,
  [SMALL_STATE(238)] = 9303,
  [SMALL_STATE(239)] = 9321,
  [SMALL_STATE(240)] = 9335,
  [SMALL_STATE(241)] = 9353,
  [SMALL_STATE(242)] = 9367,
  [SMALL_STATE(243)] = 9387,
  [SMALL_STATE(244)] = 9401,
  [SMALL_STATE(245)] = 9421,
  [SMALL_STATE(246)] = 9439,
  [SMALL_STATE(247)] = 9455,
  [SMALL_STATE(248)] = 9467,
  [SMALL_STATE(249)] = 9483,
  [SMALL_STATE(250)] = 9497,
  [SMALL_STATE(251)] = 9511,
  [SMALL_STATE(252)] = 9525,
  [SMALL_STATE(253)] = 9541,
  [SMALL_STATE(254)] = 9561,
  [SMALL_STATE(255)] = 9575,
  [SMALL_STATE(256)] = 9593,
  [SMALL_STATE(257)] = 9613,
  [SMALL_STATE(258)] = 9633,
  [SMALL_STATE(259)] = 9653,
  [SMALL_STATE(260)] = 9667,
  [SMALL_STATE(261)] = 9681,
  [SMALL_STATE(262)] = 9701,
  [SMALL_STATE(263)] = 9716,
  [SMALL_STATE(264)] = 9729,
  [SMALL_STATE(265)] = 9742,
  [SMALL_STATE(266)] = 9757,
  [SMALL_STATE(267)] = 9772,
  [SMALL_STATE(268)] = 9783,
  [SMALL_STATE(269)] = 9798,
  [SMALL_STATE(270)] = 9811,
  [SMALL_STATE(271)] = 9824,
  [SMALL_STATE(272)] = 9841,
  [SMALL_STATE(273)] = 9856,
  [SMALL_STATE(274)] = 9871,
  [SMALL_STATE(275)] = 9884,
  [SMALL_STATE(276)] = 9901,
  [SMALL_STATE(277)] = 9916,
  [SMALL_STATE(278)] = 9929,
  [SMALL_STATE(279)] = 9944,
  [SMALL_STATE(280)] = 9959,
  [SMALL_STATE(281)] = 9972,
  [SMALL_STATE(282)] = 9987,
  [SMALL_STATE(283)] = 10003,
  [SMALL_STATE(284)] = 10017,
  [SMALL_STATE(285)] = 10031,
  [SMALL_STATE(286)] = 10043,
  [SMALL_STATE(287)] = 10057,
  [SMALL_STATE(288)] = 10069,
  [SMALL_STATE(289)] = 10081,
  [SMALL_STATE(290)] = 10093,
  [SMALL_STATE(291)] = 10103,
  [SMALL_STATE(292)] = 10117,
  [SMALL_STATE(293)] = 10133,
  [SMALL_STATE(294)] = 10143,
  [SMALL_STATE(295)] = 10155,
  [SMALL_STATE(296)] = 10165,
  [SMALL_STATE(297)] = 10175,
  [SMALL_STATE(298)] = 10191,
  [SMALL_STATE(299)] = 10201,
  [SMALL_STATE(300)] = 10215,
  [SMALL_STATE(301)] = 10225,
  [SMALL_STATE(302)] = 10233,
  [SMALL_STATE(303)] = 10249,
  [SMALL_STATE(304)] = 10263,
  [SMALL_STATE(305)] = 10273,
  [SMALL_STATE(306)] = 10289,
  [SMALL_STATE(307)] = 10303,
  [SMALL_STATE(308)] = 10319,
  [SMALL_STATE(309)] = 10329,
  [SMALL_STATE(310)] = 10339,
  [SMALL_STATE(311)] = 10355,
  [SMALL_STATE(312)] = 10371,
  [SMALL_STATE(313)] = 10385,
  [SMALL_STATE(314)] = 10401,
  [SMALL_STATE(315)] = 10413,
  [SMALL_STATE(316)] = 10429,
  [SMALL_STATE(317)] = 10445,
  [SMALL_STATE(318)] = 10455,
  [SMALL_STATE(319)] = 10471,
  [SMALL_STATE(320)] = 10481,
  [SMALL_STATE(321)] = 10495,
  [SMALL_STATE(322)] = 10511,
  [SMALL_STATE(323)] = 10525,
  [SMALL_STATE(324)] = 10539,
  [SMALL_STATE(325)] = 10555,
  [SMALL_STATE(326)] = 10571,
  [SMALL_STATE(327)] = 10581,
  [SMALL_STATE(328)] = 10591,
  [SMALL_STATE(329)] = 10599,
  [SMALL_STATE(330)] = 10611,
  [SMALL_STATE(331)] = 10621,
  [SMALL_STATE(332)] = 10631,
  [SMALL_STATE(333)] = 10645,
  [SMALL_STATE(334)] = 10659,
  [SMALL_STATE(335)] = 10673,
  [SMALL_STATE(336)] = 10687,
  [SMALL_STATE(337)] = 10699,
  [SMALL_STATE(338)] = 10713,
  [SMALL_STATE(339)] = 10723,
  [SMALL_STATE(340)] = 10733,
  [SMALL_STATE(341)] = 10747,
  [SMALL_STATE(342)] = 10759,
  [SMALL_STATE(343)] = 10768,
  [SMALL_STATE(344)] = 10781,
  [SMALL_STATE(345)] = 10794,
  [SMALL_STATE(346)] = 10807,
  [SMALL_STATE(347)] = 10820,
  [SMALL_STATE(348)] = 10833,
  [SMALL_STATE(349)] = 10846,
  [SMALL_STATE(350)] = 10859,
  [SMALL_STATE(351)] = 10872,
  [SMALL_STATE(352)] = 10885,
  [SMALL_STATE(353)] = 10898,
  [SMALL_STATE(354)] = 10911,
  [SMALL_STATE(355)] = 10924,
  [SMALL_STATE(356)] = 10937,
  [SMALL_STATE(357)] = 10950,
  [SMALL_STATE(358)] = 10963,
  [SMALL_STATE(359)] = 10976,
  [SMALL_STATE(360)] = 10989,
  [SMALL_STATE(361)] = 11002,
  [SMALL_STATE(362)] = 11015,
  [SMALL_STATE(363)] = 11028,
  [SMALL_STATE(364)] = 11041,
  [SMALL_STATE(365)] = 11054,
  [SMALL_STATE(366)] = 11067,
  [SMALL_STATE(367)] = 11080,
  [SMALL_STATE(368)] = 11093,
  [SMALL_STATE(369)] = 11106,
  [SMALL_STATE(370)] = 11119,
  [SMALL_STATE(371)] = 11132,
  [SMALL_STATE(372)] = 11145,
  [SMALL_STATE(373)] = 11158,
  [SMALL_STATE(374)] = 11169,
  [SMALL_STATE(375)] = 11182,
  [SMALL_STATE(376)] = 11195,
  [SMALL_STATE(377)] = 11208,
  [SMALL_STATE(378)] = 11221,
  [SMALL_STATE(379)] = 11234,
  [SMALL_STATE(380)] = 11247,
  [SMALL_STATE(381)] = 11256,
  [SMALL_STATE(382)] = 11269,
  [SMALL_STATE(383)] = 11282,
  [SMALL_STATE(384)] = 11295,
  [SMALL_STATE(385)] = 11308,
  [SMALL_STATE(386)] = 11319,
  [SMALL_STATE(387)] = 11332,
  [SMALL_STATE(388)] = 11345,
  [SMALL_STATE(389)] = 11358,
  [SMALL_STATE(390)] = 11371,
  [SMALL_STATE(391)] = 11384,
  [SMALL_STATE(392)] = 11393,
  [SMALL_STATE(393)] = 11406,
  [SMALL_STATE(394)] = 11419,
  [SMALL_STATE(395)] = 11432,
  [SMALL_STATE(396)] = 11445,
  [SMALL_STATE(397)] = 11458,
  [SMALL_STATE(398)] = 11471,
  [SMALL_STATE(399)] = 11484,
  [SMALL_STATE(400)] = 11497,
  [SMALL_STATE(401)] = 11510,
  [SMALL_STATE(402)] = 11523,
  [SMALL_STATE(403)] = 11536,
  [SMALL_STATE(404)] = 11545,
  [SMALL_STATE(405)] = 11558,
  [SMALL_STATE(406)] = 11567,
  [SMALL_STATE(407)] = 11580,
  [SMALL_STATE(408)] = 11589,
  [SMALL_STATE(409)] = 11598,
  [SMALL_STATE(410)] = 11609,
  [SMALL_STATE(411)] = 11620,
  [SMALL_STATE(412)] = 11633,
  [SMALL_STATE(413)] = 11646,
  [SMALL_STATE(414)] = 11659,
  [SMALL_STATE(415)] = 11672,
  [SMALL_STATE(416)] = 11683,
  [SMALL_STATE(417)] = 11694,
  [SMALL_STATE(418)] = 11707,
  [SMALL_STATE(419)] = 11720,
  [SMALL_STATE(420)] = 11733,
  [SMALL_STATE(421)] = 11746,
  [SMALL_STATE(422)] = 11757,
  [SMALL_STATE(423)] = 11768,
  [SMALL_STATE(424)] = 11779,
  [SMALL_STATE(425)] = 11792,
  [SMALL_STATE(426)] = 11803,
  [SMALL_STATE(427)] = 11816,
  [SMALL_STATE(428)] = 11825,
  [SMALL_STATE(429)] = 11834,
  [SMALL_STATE(430)] = 11847,
  [SMALL_STATE(431)] = 11860,
  [SMALL_STATE(432)] = 11869,
  [SMALL_STATE(433)] = 11878,
  [SMALL_STATE(434)] = 11891,
  [SMALL_STATE(435)] = 11904,
  [SMALL_STATE(436)] = 11912,
  [SMALL_STATE(437)] = 11922,
  [SMALL_STATE(438)] = 11932,
  [SMALL_STATE(439)] = 11942,
  [SMALL_STATE(440)] = 11952,
  [SMALL_STATE(441)] = 11962,
  [SMALL_STATE(442)] = 11972,
  [SMALL_STATE(443)] = 11982,
  [SMALL_STATE(444)] = 11992,
  [SMALL_STATE(445)] = 12002,
  [SMALL_STATE(446)] = 12012,
  [SMALL_STATE(447)] = 12022,
  [SMALL_STATE(448)] = 12032,
  [SMALL_STATE(449)] = 12040,
  [SMALL_STATE(450)] = 12048,
  [SMALL_STATE(451)] = 12058,
  [SMALL_STATE(452)] = 12066,
  [SMALL_STATE(453)] = 12076,
  [SMALL_STATE(454)] = 12086,
  [SMALL_STATE(455)] = 12096,
  [SMALL_STATE(456)] = 12106,
  [SMALL_STATE(457)] = 12116,
  [SMALL_STATE(458)] = 12126,
  [SMALL_STATE(459)] = 12136,
  [SMALL_STATE(460)] = 12146,
  [SMALL_STATE(461)] = 12156,
  [SMALL_STATE(462)] = 12166,
  [SMALL_STATE(463)] = 12176,
  [SMALL_STATE(464)] = 12186,
  [SMALL_STATE(465)] = 12196,
  [SMALL_STATE(466)] = 12206,
  [SMALL_STATE(467)] = 12216,
  [SMALL_STATE(468)] = 12226,
  [SMALL_STATE(469)] = 12236,
  [SMALL_STATE(470)] = 12246,
  [SMALL_STATE(471)] = 12256,
  [SMALL_STATE(472)] = 12266,
  [SMALL_STATE(473)] = 12273,
  [SMALL_STATE(474)] = 12280,
  [SMALL_STATE(475)] = 12287,
  [SMALL_STATE(476)] = 12294,
  [SMALL_STATE(477)] = 12301,
  [SMALL_STATE(478)] = 12308,
  [SMALL_STATE(479)] = 12315,
  [SMALL_STATE(480)] = 12322,
  [SMALL_STATE(481)] = 12329,
  [SMALL_STATE(482)] = 12336,
  [SMALL_STATE(483)] = 12343,
  [SMALL_STATE(484)] = 12350,
  [SMALL_STATE(485)] = 12357,
  [SMALL_STATE(486)] = 12364,
  [SMALL_STATE(487)] = 12371,
  [SMALL_STATE(488)] = 12378,
  [SMALL_STATE(489)] = 12385,
  [SMALL_STATE(490)] = 12392,
  [SMALL_STATE(491)] = 12399,
  [SMALL_STATE(492)] = 12406,
  [SMALL_STATE(493)] = 12413,
  [SMALL_STATE(494)] = 12420,
  [SMALL_STATE(495)] = 12427,
  [SMALL_STATE(496)] = 12434,
  [SMALL_STATE(497)] = 12441,
  [SMALL_STATE(498)] = 12448,
  [SMALL_STATE(499)] = 12455,
  [SMALL_STATE(500)] = 12462,
  [SMALL_STATE(501)] = 12469,
  [SMALL_STATE(502)] = 12476,
  [SMALL_STATE(503)] = 12483,
  [SMALL_STATE(504)] = 12490,
  [SMALL_STATE(505)] = 12497,
  [SMALL_STATE(506)] = 12504,
  [SMALL_STATE(507)] = 12511,
  [SMALL_STATE(508)] = 12518,
  [SMALL_STATE(509)] = 12525,
  [SMALL_STATE(510)] = 12532,
  [SMALL_STATE(511)] = 12539,
  [SMALL_STATE(512)] = 12546,
  [SMALL_STATE(513)] = 12553,
  [SMALL_STATE(514)] = 12560,
  [SMALL_STATE(515)] = 12567,
  [SMALL_STATE(516)] = 12574,
  [SMALL_STATE(517)] = 12581,
  [SMALL_STATE(518)] = 12588,
  [SMALL_STATE(519)] = 12595,
  [SMALL_STATE(520)] = 12602,
  [SMALL_STATE(521)] = 12609,
  [SMALL_STATE(522)] = 12616,
  [SMALL_STATE(523)] = 12623,
  [SMALL_STATE(524)] = 12630,
  [SMALL_STATE(525)] = 12637,
  [SMALL_STATE(526)] = 12644,
  [SMALL_STATE(527)] = 12651,
  [SMALL_STATE(528)] = 12658,
  [SMALL_STATE(529)] = 12665,
  [SMALL_STATE(530)] = 12672,
  [SMALL_STATE(531)] = 12679,
  [SMALL_STATE(532)] = 12686,
  [SMALL_STATE(533)] = 12693,
  [SMALL_STATE(534)] = 12700,
  [SMALL_STATE(535)] = 12707,
  [SMALL_STATE(536)] = 12714,
  [SMALL_STATE(537)] = 12721,
  [SMALL_STATE(538)] = 12728,
  [SMALL_STATE(539)] = 12735,
  [SMALL_STATE(540)] = 12742,
  [SMALL_STATE(541)] = 12749,
  [SMALL_STATE(542)] = 12756,
  [SMALL_STATE(543)] = 12763,
  [SMALL_STATE(544)] = 12770,
  [SMALL_STATE(545)] = 12777,
  [SMALL_STATE(546)] = 12784,
  [SMALL_STATE(547)] = 12791,
  [SMALL_STATE(548)] = 12798,
  [SMALL_STATE(549)] = 12805,
  [SMALL_STATE(550)] = 12812,
  [SMALL_STATE(551)] = 12819,
  [SMALL_STATE(552)] = 12826,
  [SMALL_STATE(553)] = 12833,
  [SMALL_STATE(554)] = 12840,
  [SMALL_STATE(555)] = 12847,
  [SMALL_STATE(556)] = 12854,
  [SMALL_STATE(557)] = 12861,
  [SMALL_STATE(558)] = 12868,
  [SMALL_STATE(559)] = 12875,
  [SMALL_STATE(560)] = 12882,
  [SMALL_STATE(561)] = 12889,
  [SMALL_STATE(562)] = 12896,
  [SMALL_STATE(563)] = 12903,
  [SMALL_STATE(564)] = 12910,
  [SMALL_STATE(565)] = 12917,
  [SMALL_STATE(566)] = 12924,
  [SMALL_STATE(567)] = 12931,
  [SMALL_STATE(568)] = 12938,
  [SMALL_STATE(569)] = 12945,
  [SMALL_STATE(570)] = 12952,
  [SMALL_STATE(571)] = 12959,
  [SMALL_STATE(572)] = 12966,
  [SMALL_STATE(573)] = 12973,
  [SMALL_STATE(574)] = 12980,
  [SMALL_STATE(575)] = 12987,
  [SMALL_STATE(576)] = 12994,
  [SMALL_STATE(577)] = 13001,
  [SMALL_STATE(578)] = 13008,
  [SMALL_STATE(579)] = 13015,
  [SMALL_STATE(580)] = 13022,
  [SMALL_STATE(581)] = 13029,
  [SMALL_STATE(582)] = 13036,
  [SMALL_STATE(583)] = 13043,
  [SMALL_STATE(584)] = 13050,
  [SMALL_STATE(585)] = 13057,
  [SMALL_STATE(586)] = 13064,
  [SMALL_STATE(587)] = 13071,
  [SMALL_STATE(588)] = 13078,
  [SMALL_STATE(589)] = 13085,
  [SMALL_STATE(590)] = 13092,
  [SMALL_STATE(591)] = 13099,
  [SMALL_STATE(592)] = 13106,
  [SMALL_STATE(593)] = 13113,
  [SMALL_STATE(594)] = 13120,
  [SMALL_STATE(595)] = 13127,
  [SMALL_STATE(596)] = 13134,
  [SMALL_STATE(597)] = 13141,
  [SMALL_STATE(598)] = 13148,
  [SMALL_STATE(599)] = 13155,
  [SMALL_STATE(600)] = 13162,
  [SMALL_STATE(601)] = 13169,
  [SMALL_STATE(602)] = 13176,
  [SMALL_STATE(603)] = 13183,
  [SMALL_STATE(604)] = 13190,
  [SMALL_STATE(605)] = 13197,
  [SMALL_STATE(606)] = 13204,
  [SMALL_STATE(607)] = 13211,
  [SMALL_STATE(608)] = 13218,
  [SMALL_STATE(609)] = 13225,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(506),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(503),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(500),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(455),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(364),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(371),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(375),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(378),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(379),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(381),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(59),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(59),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(296),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1, 0, 0),
  [671] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(54),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(54),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [781] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2, 0, 0),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(580),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0),
  [814] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [817] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [847] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(354),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [874] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [877] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [887] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [895] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [915] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [918] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [921] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [941] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [944] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [977] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0),
  [982] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(534),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [1013] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [1016] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [1019] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [1022] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [1025] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [1031] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [1034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1052] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [1055] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1060] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2, 0, 0),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 2, 0, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [1077] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [1080] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [1083] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0),
  [1104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0),
  [1109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1, 0, 0),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1, 0, 0),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [1124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [1154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [1166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(534),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0),
  [1189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [1192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1, 0, 0),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(385),
  [1212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [1215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [1231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [1238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(566),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [1274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2, 0, 0),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [1302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [1305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1, 0, 0),
  [1317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1, 0, 0),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0),
  [1333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0),
  [1352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2, 0, 0),
  [1361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3, 0, 0),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3, 0, 0),
  [1365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2, 0, 0),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2, 0, 0),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1, 0, 0),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [1381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [1384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2, 0, 0),
  [1393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2, 0, 0),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2, 0, 0),
  [1397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [1400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3, 0, 0),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2, 0, 0),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2, 0, 0),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3, 0, 0),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0),
  [1485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, 0, 0),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, 0, 0),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3, 0, 0),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 0),
  [1521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 0),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0),
  [1531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [1536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2, 0, 0),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3, 0, 0),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3, 0, 0),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2, 0, 0),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2, 0, 0),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 0),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3, 0, 0),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3, 0, 0),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3, 0, 0),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3, 0, 0),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [1660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1, 0, 0),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1, 0, 0),
  [1668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1, 0, 0),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2, 0, 0),
  [1684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2, 0, 0),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1694] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [1698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2, 0, 0),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, 0, 1),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2, 0, 0),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1, 0, 0),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2, 0, 0),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [1742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [1768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4, 0, 0),
  [1774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4, 0, 0),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4, 0, 0),
  [1784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4, 0, 0),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4, 0, 0),
  [1788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4, 0, 0),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [1798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [1854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
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

TS_PUBLIC const TSLanguage *tree_sitter_hurl(void) {
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
