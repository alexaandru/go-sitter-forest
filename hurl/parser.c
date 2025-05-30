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
#define SYMBOL_COUNT 321
#define ALIAS_COUNT 1
#define TOKEN_COUNT 165
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
  sym_digit = 154,
  sym_hexdigit = 155,
  anon_sym_DOT = 156,
  anon_sym_e = 157,
  anon_sym_E = 158,
  anon_sym_PLUS = 159,
  anon_sym_DASH = 160,
  sym_comment = 161,
  anon_sym_SLASH = 162,
  sym_regex_text = 163,
  aux_sym_regex_escaped_char_token1 = 164,
  sym_hurl_file = 165,
  sym_entry = 166,
  sym__comment_or_new_line = 167,
  sym_request = 168,
  sym_response = 169,
  sym_method = 170,
  sym_version = 171,
  sym_status = 172,
  sym_header = 173,
  sym_body = 174,
  sym_request_section = 175,
  sym_response_section = 176,
  sym_basic_auth_section = 177,
  sym_query_string_params_section = 178,
  sym_form_params_section = 179,
  sym_multipart_form_data_section = 180,
  sym_cookies_section = 181,
  sym_captures_section = 182,
  sym_asserts_section = 183,
  sym_options_section = 184,
  sym_key_value = 185,
  sym_multipart_form_data_param = 186,
  sym_file_param = 187,
  sym_file_value = 188,
  sym_capture = 189,
  sym_assert = 190,
  sym_option = 191,
  sym_ca_certificate_option = 192,
  sym_compressed_option = 193,
  sym_follow_redirect_option = 194,
  sym_insecure_option = 195,
  sym_max_redirs_option = 196,
  sym_path_as_is_option = 197,
  sym_proxy_option = 198,
  sym_retry_option = 199,
  sym_retry_interval_option = 200,
  sym_retry_max_count_option = 201,
  sym_variable_option = 202,
  sym_verbose_option = 203,
  sym_very_verbose_option = 204,
  sym_variable_definition = 205,
  sym_variable_value = 206,
  sym_query = 207,
  sym_header_query = 208,
  sym_cookie_query = 209,
  sym_xpath_query = 210,
  sym_jsonpath_query = 211,
  sym_regex_query = 212,
  sym_variable_query = 213,
  sym_predicate = 214,
  sym_predicate_func = 215,
  sym_equal_predicate = 216,
  sym_not_equal_predicate = 217,
  sym_greater_predicate = 218,
  sym_greater_or_equal_predicate = 219,
  sym_less_predicate = 220,
  sym_less_or_equal_predicate = 221,
  sym_start_with_predicate = 222,
  sym_end_with_predicate = 223,
  sym_contain_predicate = 224,
  sym_match_predicate = 225,
  sym_include_predicate = 226,
  sym_predicate_value = 227,
  sym_bytes = 228,
  sym_xml = 229,
  sym_xml_prolog_tag = 230,
  sym_xml_tag = 231,
  sym_xml_open_tag = 232,
  sym_xml_close_tag = 233,
  sym_oneline_base64 = 234,
  sym_oneline_file = 235,
  sym_oneline_hex = 236,
  sym_quoted_string = 237,
  sym_quoted_string_content = 238,
  sym_invalid_quoted_string_escaped_char = 239,
  sym_quoted_string_escaped_char = 240,
  sym_key_string = 241,
  sym_key_string_content = 242,
  sym_key_string_escaped_char = 243,
  sym_value_string = 244,
  sym_value_string_content = 245,
  sym_value_string_text = 246,
  sym_value_string_escaped_char = 247,
  sym_oneline_string = 248,
  sym_oneline_string_content = 249,
  sym_oneline_string_text = 250,
  sym_oneline_string_escaped_char = 251,
  sym_multiline_string = 252,
  sym_multiline_string_type = 253,
  sym_multiline_string_content = 254,
  sym__multiline_string_text = 255,
  sym_multiline_string_escaped_char = 256,
  sym_filename = 257,
  sym_filename_content = 258,
  sym_filename_escaped_char = 259,
  sym_unicode_char = 260,
  sym_json_value = 261,
  sym_json_object = 262,
  sym_json_key_value = 263,
  sym_json_key_string = 264,
  sym_json_array = 265,
  sym_json_string = 266,
  sym_json_string_content = 267,
  sym_json_string_escaped_char = 268,
  sym_json_number = 269,
  sym_template = 270,
  sym_expr = 271,
  sym_variable_name = 272,
  sym_filter = 273,
  sym_regex_filter = 274,
  sym_nth_filter = 275,
  sym_replace_filter = 276,
  sym_split_filter = 277,
  sym_xpath_filter = 278,
  sym_boolean = 279,
  sym_integer = 280,
  sym_float = 281,
  sym_fraction = 282,
  sym_exponent = 283,
  sym_regex = 284,
  sym_regex_content = 285,
  sym_regex_escaped_char = 286,
  aux_sym_hurl_file_repeat1 = 287,
  aux_sym_hurl_file_repeat2 = 288,
  aux_sym__comment_or_new_line_repeat1 = 289,
  aux_sym_request_repeat1 = 290,
  aux_sym_request_repeat2 = 291,
  aux_sym_response_repeat1 = 292,
  aux_sym_query_string_params_section_repeat1 = 293,
  aux_sym_multipart_form_data_section_repeat1 = 294,
  aux_sym_captures_section_repeat1 = 295,
  aux_sym_asserts_section_repeat1 = 296,
  aux_sym_options_section_repeat1 = 297,
  aux_sym_capture_repeat1 = 298,
  aux_sym_xml_repeat1 = 299,
  aux_sym_xml_tag_repeat1 = 300,
  aux_sym_oneline_hex_repeat1 = 301,
  aux_sym_quoted_string_repeat1 = 302,
  aux_sym_quoted_string_content_repeat1 = 303,
  aux_sym_key_string_repeat1 = 304,
  aux_sym_key_string_content_repeat1 = 305,
  aux_sym_value_string_repeat1 = 306,
  aux_sym_value_string_content_repeat1 = 307,
  aux_sym_value_string_text_repeat1 = 308,
  aux_sym_oneline_string_repeat1 = 309,
  aux_sym_oneline_string_content_repeat1 = 310,
  aux_sym_multiline_string_repeat1 = 311,
  aux_sym_multiline_string_content_repeat1 = 312,
  aux_sym__multiline_string_text_repeat1 = 313,
  aux_sym_filename_repeat1 = 314,
  aux_sym_filename_content_repeat1 = 315,
  aux_sym_json_object_repeat1 = 316,
  aux_sym_json_array_repeat1 = 317,
  aux_sym_json_string_repeat1 = 318,
  aux_sym_integer_repeat1 = 319,
  aux_sym_regex_content_repeat1 = 320,
  anon_alias_sym_json_key_string = 321,
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
  [52] = 19,
  [53] = 18,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 18,
  [59] = 19,
  [60] = 60,
  [61] = 61,
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
  [87] = 19,
  [88] = 18,
  [89] = 89,
  [90] = 90,
  [91] = 62,
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
  [107] = 61,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 60,
  [112] = 57,
  [113] = 54,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 54,
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
  [131] = 108,
  [132] = 19,
  [133] = 18,
  [134] = 127,
  [135] = 129,
  [136] = 136,
  [137] = 137,
  [138] = 83,
  [139] = 85,
  [140] = 140,
  [141] = 78,
  [142] = 142,
  [143] = 143,
  [144] = 76,
  [145] = 73,
  [146] = 75,
  [147] = 74,
  [148] = 70,
  [149] = 69,
  [150] = 77,
  [151] = 80,
  [152] = 71,
  [153] = 72,
  [154] = 81,
  [155] = 84,
  [156] = 82,
  [157] = 86,
  [158] = 143,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 164,
  [169] = 169,
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
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 177,
  [191] = 189,
  [192] = 192,
  [193] = 176,
  [194] = 186,
  [195] = 195,
  [196] = 192,
  [197] = 176,
  [198] = 195,
  [199] = 186,
  [200] = 200,
  [201] = 201,
  [202] = 201,
  [203] = 203,
  [204] = 204,
  [205] = 182,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 178,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 210,
  [216] = 204,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 57,
  [226] = 60,
  [227] = 219,
  [228] = 228,
  [229] = 229,
  [230] = 222,
  [231] = 231,
  [232] = 221,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 219,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 229,
  [243] = 229,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 221,
  [250] = 250,
  [251] = 244,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 235,
  [256] = 256,
  [257] = 257,
  [258] = 234,
  [259] = 259,
  [260] = 240,
  [261] = 261,
  [262] = 262,
  [263] = 250,
  [264] = 264,
  [265] = 265,
  [266] = 224,
  [267] = 267,
  [268] = 231,
  [269] = 269,
  [270] = 250,
  [271] = 271,
  [272] = 272,
  [273] = 244,
  [274] = 274,
  [275] = 271,
  [276] = 276,
  [277] = 277,
  [278] = 245,
  [279] = 18,
  [280] = 19,
  [281] = 250,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 261,
  [287] = 250,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 245,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 274,
  [309] = 309,
  [310] = 271,
  [311] = 304,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 245,
  [317] = 250,
  [318] = 274,
  [319] = 309,
  [320] = 320,
  [321] = 313,
  [322] = 314,
  [323] = 250,
  [324] = 250,
  [325] = 245,
  [326] = 326,
  [327] = 309,
  [328] = 250,
  [329] = 250,
  [330] = 250,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 288,
  [336] = 336,
  [337] = 337,
  [338] = 326,
  [339] = 339,
  [340] = 289,
  [341] = 246,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 313,
  [381] = 347,
  [382] = 382,
  [383] = 353,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 314,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 250,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 364,
  [409] = 409,
  [410] = 410,
  [411] = 358,
  [412] = 412,
  [413] = 382,
  [414] = 384,
  [415] = 412,
  [416] = 416,
  [417] = 342,
  [418] = 373,
  [419] = 419,
  [420] = 420,
  [421] = 368,
  [422] = 422,
  [423] = 423,
  [424] = 368,
  [425] = 368,
  [426] = 368,
  [427] = 368,
  [428] = 368,
  [429] = 368,
  [430] = 368,
  [431] = 368,
  [432] = 368,
  [433] = 368,
  [434] = 434,
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
  [448] = 441,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 450,
  [453] = 441,
  [454] = 454,
  [455] = 450,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 454,
  [460] = 451,
  [461] = 439,
  [462] = 462,
  [463] = 463,
  [464] = 436,
  [465] = 440,
  [466] = 442,
  [467] = 444,
  [468] = 445,
  [469] = 446,
  [470] = 239,
  [471] = 471,
  [472] = 472,
  [473] = 370,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 233,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 253,
  [486] = 374,
  [487] = 487,
  [488] = 488,
  [489] = 372,
  [490] = 307,
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
  [505] = 312,
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
  [518] = 361,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 357,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 483,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 375,
  [540] = 540,
  [541] = 541,
  [542] = 540,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 345,
  [548] = 548,
  [549] = 369,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 478,
  [554] = 554,
  [555] = 508,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 532,
  [561] = 561,
  [562] = 559,
  [563] = 563,
  [564] = 532,
  [565] = 483,
  [566] = 559,
  [567] = 532,
  [568] = 559,
  [569] = 532,
  [570] = 559,
  [571] = 532,
  [572] = 532,
  [573] = 532,
  [574] = 532,
  [575] = 532,
  [576] = 532,
  [577] = 532,
  [578] = 578,
  [579] = 474,
  [580] = 580,
  [581] = 581,
  [582] = 480,
  [583] = 482,
  [584] = 584,
  [585] = 482,
  [586] = 586,
  [587] = 482,
  [588] = 588,
  [589] = 482,
  [590] = 590,
  [591] = 346,
  [592] = 592,
  [593] = 593,
  [594] = 237,
  [595] = 595,
  [596] = 596,
  [597] = 496,
  [598] = 496,
  [599] = 496,
  [600] = 496,
  [601] = 588,
  [602] = 588,
  [603] = 588,
  [604] = 588,
  [605] = 584,
  [606] = 584,
  [607] = 584,
  [608] = 584,
  [609] = 609,
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
      if (lookahead == '#') ADVANCE(704);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(706);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(909);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(907);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(700);
      if (set_contains(extras_character_set_2, 9, lookahead)) ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(702);
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
  [20] = {.lex_state = 501},
  [21] = {.lex_state = 501},
  [22] = {.lex_state = 503},
  [23] = {.lex_state = 503},
  [24] = {.lex_state = 501},
  [25] = {.lex_state = 503},
  [26] = {.lex_state = 503},
  [27] = {.lex_state = 503},
  [28] = {.lex_state = 503},
  [29] = {.lex_state = 503},
  [30] = {.lex_state = 503},
  [31] = {.lex_state = 503},
  [32] = {.lex_state = 503},
  [33] = {.lex_state = 503},
  [34] = {.lex_state = 503},
  [35] = {.lex_state = 503},
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
  [53] = {.lex_state = 501},
  [54] = {.lex_state = 507},
  [55] = {.lex_state = 501},
  [56] = {.lex_state = 501},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 507},
  [59] = {.lex_state = 507},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 510},
  [62] = {.lex_state = 507},
  [63] = {.lex_state = 508},
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
  [79] = {.lex_state = 501},
  [80] = {.lex_state = 510},
  [81] = {.lex_state = 510},
  [82] = {.lex_state = 510},
  [83] = {.lex_state = 510},
  [84] = {.lex_state = 510},
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
  [96] = {.lex_state = 501},
  [97] = {.lex_state = 501},
  [98] = {.lex_state = 503},
  [99] = {.lex_state = 503},
  [100] = {.lex_state = 501},
  [101] = {.lex_state = 503},
  [102] = {.lex_state = 501},
  [103] = {.lex_state = 510},
  [104] = {.lex_state = 503},
  [105] = {.lex_state = 503},
  [106] = {.lex_state = 503},
  [107] = {.lex_state = 503},
  [108] = {.lex_state = 503},
  [109] = {.lex_state = 510},
  [110] = {.lex_state = 501},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 501},
  [114] = {.lex_state = 510},
  [115] = {.lex_state = 501},
  [116] = {.lex_state = 510},
  [117] = {.lex_state = 510},
  [118] = {.lex_state = 501},
  [119] = {.lex_state = 501},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 28},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 501},
  [124] = {.lex_state = 501},
  [125] = {.lex_state = 501},
  [126] = {.lex_state = 501},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 501},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 501},
  [131] = {.lex_state = 501},
  [132] = {.lex_state = 501},
  [133] = {.lex_state = 501},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 27},
  [138] = {.lex_state = 503},
  [139] = {.lex_state = 503},
  [140] = {.lex_state = 510},
  [141] = {.lex_state = 503},
  [142] = {.lex_state = 510},
  [143] = {.lex_state = 510},
  [144] = {.lex_state = 503},
  [145] = {.lex_state = 503},
  [146] = {.lex_state = 503},
  [147] = {.lex_state = 503},
  [148] = {.lex_state = 503},
  [149] = {.lex_state = 503},
  [150] = {.lex_state = 503},
  [151] = {.lex_state = 503},
  [152] = {.lex_state = 503},
  [153] = {.lex_state = 503},
  [154] = {.lex_state = 503},
  [155] = {.lex_state = 503},
  [156] = {.lex_state = 503},
  [157] = {.lex_state = 503},
  [158] = {.lex_state = 510},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 29},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 22},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 29},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 32},
  [184] = {.lex_state = 32},
  [185] = {.lex_state = 22},
  [186] = {.lex_state = 29},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 22},
  [190] = {.lex_state = 22},
  [191] = {.lex_state = 22},
  [192] = {.lex_state = 32},
  [193] = {.lex_state = 30},
  [194] = {.lex_state = 30},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 32},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 23},
  [201] = {.lex_state = 24},
  [202] = {.lex_state = 24},
  [203] = {.lex_state = 24},
  [204] = {.lex_state = 24},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 21},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 26},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 21},
  [215] = {.lex_state = 26},
  [216] = {.lex_state = 24},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 28},
  [220] = {.lex_state = 22},
  [221] = {.lex_state = 29},
  [222] = {.lex_state = 19},
  [223] = {.lex_state = 22},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 28},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 28},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 29},
  [230] = {.lex_state = 19},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 7},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 32},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 32},
  [241] = {.lex_state = 510},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 30},
  [244] = {.lex_state = 28},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 19},
  [248] = {.lex_state = 510},
  [249] = {.lex_state = 30},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 28},
  [252] = {.lex_state = 510},
  [253] = {.lex_state = 7},
  [254] = {.lex_state = 510},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 510},
  [257] = {.lex_state = 510},
  [258] = {.lex_state = 14},
  [259] = {.lex_state = 26},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 14},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 28},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 29},
  [275] = {.lex_state = 28},
  [276] = {.lex_state = 14},
  [277] = {.lex_state = 2},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 29},
  [282] = {.lex_state = 12},
  [283] = {.lex_state = 22},
  [284] = {.lex_state = 22},
  [285] = {.lex_state = 19},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 510},
  [289] = {.lex_state = 510},
  [290] = {.lex_state = 501},
  [291] = {.lex_state = 501},
  [292] = {.lex_state = 510},
  [293] = {.lex_state = 501},
  [294] = {.lex_state = 501},
  [295] = {.lex_state = 501},
  [296] = {.lex_state = 22},
  [297] = {.lex_state = 501},
  [298] = {.lex_state = 501},
  [299] = {.lex_state = 501},
  [300] = {.lex_state = 501},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 32},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 12},
  [307] = {.lex_state = 28},
  [308] = {.lex_state = 30},
  [309] = {.lex_state = 510},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 8},
  [312] = {.lex_state = 28},
  [313] = {.lex_state = 510},
  [314] = {.lex_state = 510},
  [315] = {.lex_state = 24},
  [316] = {.lex_state = 12},
  [317] = {.lex_state = 32},
  [318] = {.lex_state = 2},
  [319] = {.lex_state = 510},
  [320] = {.lex_state = 12},
  [321] = {.lex_state = 28},
  [322] = {.lex_state = 28},
  [323] = {.lex_state = 24},
  [324] = {.lex_state = 12},
  [325] = {.lex_state = 22},
  [326] = {.lex_state = 510},
  [327] = {.lex_state = 510},
  [328] = {.lex_state = 22},
  [329] = {.lex_state = 30},
  [330] = {.lex_state = 8},
  [331] = {.lex_state = 501},
  [332] = {.lex_state = 501},
  [333] = {.lex_state = 510},
  [334] = {.lex_state = 501},
  [335] = {.lex_state = 510},
  [336] = {.lex_state = 501},
  [337] = {.lex_state = 501},
  [338] = {.lex_state = 510},
  [339] = {.lex_state = 501},
  [340] = {.lex_state = 510},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 19},
  [343] = {.lex_state = 501},
  [344] = {.lex_state = 27},
  [345] = {.lex_state = 28},
  [346] = {.lex_state = 28},
  [347] = {.lex_state = 501},
  [348] = {.lex_state = 34},
  [349] = {.lex_state = 501},
  [350] = {.lex_state = 501},
  [351] = {.lex_state = 510},
  [352] = {.lex_state = 501},
  [353] = {.lex_state = 510},
  [354] = {.lex_state = 510},
  [355] = {.lex_state = 501},
  [356] = {.lex_state = 501},
  [357] = {.lex_state = 28},
  [358] = {.lex_state = 26},
  [359] = {.lex_state = 501},
  [360] = {.lex_state = 37},
  [361] = {.lex_state = 28},
  [362] = {.lex_state = 510},
  [363] = {.lex_state = 501},
  [364] = {.lex_state = 501},
  [365] = {.lex_state = 510},
  [366] = {.lex_state = 510},
  [367] = {.lex_state = 19},
  [368] = {.lex_state = 37},
  [369] = {.lex_state = 28},
  [370] = {.lex_state = 28},
  [371] = {.lex_state = 501},
  [372] = {.lex_state = 28},
  [373] = {.lex_state = 510},
  [374] = {.lex_state = 28},
  [375] = {.lex_state = 28},
  [376] = {.lex_state = 34},
  [377] = {.lex_state = 14},
  [378] = {.lex_state = 501},
  [379] = {.lex_state = 510},
  [380] = {.lex_state = 501},
  [381] = {.lex_state = 501},
  [382] = {.lex_state = 19},
  [383] = {.lex_state = 510},
  [384] = {.lex_state = 510},
  [385] = {.lex_state = 501},
  [386] = {.lex_state = 501},
  [387] = {.lex_state = 501},
  [388] = {.lex_state = 501},
  [389] = {.lex_state = 34},
  [390] = {.lex_state = 501},
  [391] = {.lex_state = 510},
  [392] = {.lex_state = 510},
  [393] = {.lex_state = 510},
  [394] = {.lex_state = 510},
  [395] = {.lex_state = 501},
  [396] = {.lex_state = 510},
  [397] = {.lex_state = 501},
  [398] = {.lex_state = 501},
  [399] = {.lex_state = 28},
  [400] = {.lex_state = 501},
  [401] = {.lex_state = 501},
  [402] = {.lex_state = 501},
  [403] = {.lex_state = 501},
  [404] = {.lex_state = 501},
  [405] = {.lex_state = 501},
  [406] = {.lex_state = 501},
  [407] = {.lex_state = 501},
  [408] = {.lex_state = 501},
  [409] = {.lex_state = 501},
  [410] = {.lex_state = 501},
  [411] = {.lex_state = 26},
  [412] = {.lex_state = 19},
  [413] = {.lex_state = 19},
  [414] = {.lex_state = 510},
  [415] = {.lex_state = 19},
  [416] = {.lex_state = 501},
  [417] = {.lex_state = 19},
  [418] = {.lex_state = 510},
  [419] = {.lex_state = 501},
  [420] = {.lex_state = 501},
  [421] = {.lex_state = 37},
  [422] = {.lex_state = 501},
  [423] = {.lex_state = 501},
  [424] = {.lex_state = 37},
  [425] = {.lex_state = 37},
  [426] = {.lex_state = 37},
  [427] = {.lex_state = 37},
  [428] = {.lex_state = 37},
  [429] = {.lex_state = 37},
  [430] = {.lex_state = 37},
  [431] = {.lex_state = 37},
  [432] = {.lex_state = 37},
  [433] = {.lex_state = 37},
  [434] = {.lex_state = 501},
  [435] = {.lex_state = 27},
  [436] = {.lex_state = 510},
  [437] = {.lex_state = 18},
  [438] = {.lex_state = 18},
  [439] = {.lex_state = 510},
  [440] = {.lex_state = 510},
  [441] = {.lex_state = 510},
  [442] = {.lex_state = 510},
  [443] = {.lex_state = 510},
  [444] = {.lex_state = 510},
  [445] = {.lex_state = 510},
  [446] = {.lex_state = 510},
  [447] = {.lex_state = 19},
  [448] = {.lex_state = 510},
  [449] = {.lex_state = 6},
  [450] = {.lex_state = 510},
  [451] = {.lex_state = 510},
  [452] = {.lex_state = 510},
  [453] = {.lex_state = 510},
  [454] = {.lex_state = 18},
  [455] = {.lex_state = 510},
  [456] = {.lex_state = 18},
  [457] = {.lex_state = 19},
  [458] = {.lex_state = 510},
  [459] = {.lex_state = 18},
  [460] = {.lex_state = 510},
  [461] = {.lex_state = 510},
  [462] = {.lex_state = 6},
  [463] = {.lex_state = 510},
  [464] = {.lex_state = 510},
  [465] = {.lex_state = 510},
  [466] = {.lex_state = 510},
  [467] = {.lex_state = 510},
  [468] = {.lex_state = 510},
  [469] = {.lex_state = 510},
  [470] = {.lex_state = 19},
  [471] = {.lex_state = 510},
  [472] = {.lex_state = 501},
  [473] = {.lex_state = 501},
  [474] = {.lex_state = 39},
  [475] = {.lex_state = 510},
  [476] = {.lex_state = 501},
  [477] = {.lex_state = 501},
  [478] = {.lex_state = 19},
  [479] = {.lex_state = 501},
  [480] = {.lex_state = 40},
  [481] = {.lex_state = 501},
  [482] = {.lex_state = 34},
  [483] = {.lex_state = 25},
  [484] = {.lex_state = 501},
  [485] = {.lex_state = 501},
  [486] = {.lex_state = 501},
  [487] = {.lex_state = 18},
  [488] = {.lex_state = 18},
  [489] = {.lex_state = 501},
  [490] = {.lex_state = 501},
  [491] = {.lex_state = 18},
  [492] = {.lex_state = 18},
  [493] = {.lex_state = 18},
  [494] = {.lex_state = 501},
  [495] = {.lex_state = 18},
  [496] = {.lex_state = 34},
  [497] = {.lex_state = 501},
  [498] = {.lex_state = 501},
  [499] = {.lex_state = 41},
  [500] = {.lex_state = 18},
  [501] = {.lex_state = 18},
  [502] = {.lex_state = 34},
  [503] = {.lex_state = 34},
  [504] = {.lex_state = 501},
  [505] = {.lex_state = 501},
  [506] = {.lex_state = 15},
  [507] = {.lex_state = 510},
  [508] = {.lex_state = 510},
  [509] = {.lex_state = 18},
  [510] = {.lex_state = 18},
  [511] = {.lex_state = 501},
  [512] = {.lex_state = 501},
  [513] = {.lex_state = 501},
  [514] = {.lex_state = 501},
  [515] = {.lex_state = 510},
  [516] = {.lex_state = 501},
  [517] = {.lex_state = 501},
  [518] = {.lex_state = 501},
  [519] = {.lex_state = 501},
  [520] = {.lex_state = 19},
  [521] = {.lex_state = 501},
  [522] = {.lex_state = 501},
  [523] = {.lex_state = 501},
  [524] = {.lex_state = 501},
  [525] = {.lex_state = 501},
  [526] = {.lex_state = 501},
  [527] = {.lex_state = 501},
  [528] = {.lex_state = 501},
  [529] = {.lex_state = 501},
  [530] = {.lex_state = 501},
  [531] = {.lex_state = 964},
  [532] = {.lex_state = 510},
  [533] = {.lex_state = 501},
  [534] = {.lex_state = 25},
  [535] = {.lex_state = 501},
  [536] = {.lex_state = 18},
  [537] = {.lex_state = 34},
  [538] = {.lex_state = 19},
  [539] = {.lex_state = 501},
  [540] = {.lex_state = 510},
  [541] = {.lex_state = 501},
  [542] = {.lex_state = 510},
  [543] = {.lex_state = 501},
  [544] = {.lex_state = 16},
  [545] = {.lex_state = 501},
  [546] = {.lex_state = 501},
  [547] = {.lex_state = 501},
  [548] = {.lex_state = 501},
  [549] = {.lex_state = 501},
  [550] = {.lex_state = 501},
  [551] = {.lex_state = 18},
  [552] = {.lex_state = 18},
  [553] = {.lex_state = 19},
  [554] = {.lex_state = 18},
  [555] = {.lex_state = 510},
  [556] = {.lex_state = 501},
  [557] = {.lex_state = 510},
  [558] = {.lex_state = 501},
  [559] = {.lex_state = 19},
  [560] = {.lex_state = 510},
  [561] = {.lex_state = 501},
  [562] = {.lex_state = 19},
  [563] = {.lex_state = 18},
  [564] = {.lex_state = 510},
  [565] = {.lex_state = 25},
  [566] = {.lex_state = 19},
  [567] = {.lex_state = 510},
  [568] = {.lex_state = 19},
  [569] = {.lex_state = 510},
  [570] = {.lex_state = 19},
  [571] = {.lex_state = 510},
  [572] = {.lex_state = 510},
  [573] = {.lex_state = 510},
  [574] = {.lex_state = 510},
  [575] = {.lex_state = 510},
  [576] = {.lex_state = 510},
  [577] = {.lex_state = 510},
  [578] = {.lex_state = 18},
  [579] = {.lex_state = 39},
  [580] = {.lex_state = 510},
  [581] = {.lex_state = 501},
  [582] = {.lex_state = 40},
  [583] = {.lex_state = 34},
  [584] = {.lex_state = 34},
  [585] = {.lex_state = 34},
  [586] = {.lex_state = 501},
  [587] = {.lex_state = 34},
  [588] = {.lex_state = 34},
  [589] = {.lex_state = 34},
  [590] = {.lex_state = 501},
  [591] = {.lex_state = 501},
  [592] = {.lex_state = 34},
  [593] = {.lex_state = 42},
  [594] = {.lex_state = 501},
  [595] = {.lex_state = 501},
  [596] = {.lex_state = 501},
  [597] = {.lex_state = 34},
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
  [609] = {.lex_state = 501},
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
    [sym_hurl_file] = STATE(580),
    [sym_entry] = STATE(96),
    [sym__comment_or_new_line] = STATE(102),
    [sym_request] = STATE(95),
    [sym_method] = STATE(160),
    [aux_sym_hurl_file_repeat1] = STATE(96),
    [aux_sym_hurl_file_repeat2] = STATE(102),
    [aux_sym__comment_or_new_line_repeat1] = STATE(53),
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
    [sym__comment_or_new_line] = STATE(54),
    [sym_header] = STATE(4),
    [sym_body] = STATE(101),
    [sym_request_section] = STATE(7),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_key_value] = STATE(364),
    [sym_bytes] = STATE(381),
    [sym_xml] = STATE(494),
    [sym_xml_prolog_tag] = STATE(247),
    [sym_xml_tag] = STATE(497),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(494),
    [sym_oneline_file] = STATE(494),
    [sym_oneline_hex] = STATE(494),
    [sym_key_string] = STATE(507),
    [sym_key_string_content] = STATE(186),
    [sym_key_string_escaped_char] = STATE(221),
    [sym_oneline_string] = STATE(494),
    [sym_multiline_string] = STATE(494),
    [sym_json_value] = STATE(494),
    [sym_json_object] = STATE(547),
    [sym_json_array] = STATE(547),
    [sym_json_string] = STATE(547),
    [sym_json_number] = STATE(547),
    [sym_template] = STATE(277),
    [sym_boolean] = STATE(547),
    [sym_integer] = STATE(236),
    [aux_sym_hurl_file_repeat2] = STATE(54),
    [aux_sym__comment_or_new_line_repeat1] = STATE(58),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_xml_repeat1] = STATE(247),
    [aux_sym_key_string_repeat1] = STATE(186),
    [aux_sym_key_string_content_repeat1] = STATE(221),
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
    [sym__comment_or_new_line] = STATE(54),
    [sym_header] = STATE(5),
    [sym_body] = STATE(105),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_key_value] = STATE(364),
    [sym_bytes] = STATE(381),
    [sym_xml] = STATE(494),
    [sym_xml_prolog_tag] = STATE(247),
    [sym_xml_tag] = STATE(497),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(494),
    [sym_oneline_file] = STATE(494),
    [sym_oneline_hex] = STATE(494),
    [sym_key_string] = STATE(507),
    [sym_key_string_content] = STATE(186),
    [sym_key_string_escaped_char] = STATE(221),
    [sym_oneline_string] = STATE(494),
    [sym_multiline_string] = STATE(494),
    [sym_json_value] = STATE(494),
    [sym_json_object] = STATE(547),
    [sym_json_array] = STATE(547),
    [sym_json_string] = STATE(547),
    [sym_json_number] = STATE(547),
    [sym_template] = STATE(277),
    [sym_boolean] = STATE(547),
    [sym_integer] = STATE(236),
    [aux_sym_hurl_file_repeat2] = STATE(54),
    [aux_sym__comment_or_new_line_repeat1] = STATE(58),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(247),
    [aux_sym_key_string_repeat1] = STATE(186),
    [aux_sym_key_string_content_repeat1] = STATE(221),
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
    [sym_header] = STATE(41),
    [sym_body] = STATE(105),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_key_value] = STATE(364),
    [sym_bytes] = STATE(381),
    [sym_xml] = STATE(494),
    [sym_xml_prolog_tag] = STATE(247),
    [sym_xml_tag] = STATE(497),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(494),
    [sym_oneline_file] = STATE(494),
    [sym_oneline_hex] = STATE(494),
    [sym_key_string] = STATE(507),
    [sym_key_string_content] = STATE(186),
    [sym_key_string_escaped_char] = STATE(221),
    [sym_oneline_string] = STATE(494),
    [sym_multiline_string] = STATE(494),
    [sym_json_value] = STATE(494),
    [sym_json_object] = STATE(547),
    [sym_json_array] = STATE(547),
    [sym_json_string] = STATE(547),
    [sym_json_number] = STATE(547),
    [sym_template] = STATE(277),
    [sym_boolean] = STATE(547),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat1] = STATE(41),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(247),
    [aux_sym_key_string_repeat1] = STATE(186),
    [aux_sym_key_string_content_repeat1] = STATE(221),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(65),
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
    [sym_comment] = ACTIONS(67),
  },
  [5] = {
    [sym_header] = STATE(41),
    [sym_body] = STATE(106),
    [sym_request_section] = STATE(6),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_key_value] = STATE(364),
    [sym_bytes] = STATE(381),
    [sym_xml] = STATE(494),
    [sym_xml_prolog_tag] = STATE(247),
    [sym_xml_tag] = STATE(497),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(494),
    [sym_oneline_file] = STATE(494),
    [sym_oneline_hex] = STATE(494),
    [sym_key_string] = STATE(507),
    [sym_key_string_content] = STATE(186),
    [sym_key_string_escaped_char] = STATE(221),
    [sym_oneline_string] = STATE(494),
    [sym_multiline_string] = STATE(494),
    [sym_json_value] = STATE(494),
    [sym_json_object] = STATE(547),
    [sym_json_array] = STATE(547),
    [sym_json_string] = STATE(547),
    [sym_json_number] = STATE(547),
    [sym_template] = STATE(277),
    [sym_boolean] = STATE(547),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat1] = STATE(41),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_xml_repeat1] = STATE(247),
    [aux_sym_key_string_repeat1] = STATE(186),
    [aux_sym_key_string_content_repeat1] = STATE(221),
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
  [6] = {
    [sym_body] = STATE(104),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_bytes] = STATE(381),
    [sym_xml] = STATE(494),
    [sym_xml_prolog_tag] = STATE(247),
    [sym_xml_tag] = STATE(497),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(494),
    [sym_oneline_file] = STATE(494),
    [sym_oneline_hex] = STATE(494),
    [sym_oneline_string] = STATE(494),
    [sym_multiline_string] = STATE(494),
    [sym_json_value] = STATE(494),
    [sym_json_object] = STATE(547),
    [sym_json_array] = STATE(547),
    [sym_json_string] = STATE(547),
    [sym_json_number] = STATE(547),
    [sym_template] = STATE(547),
    [sym_boolean] = STATE(547),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(247),
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
  [7] = {
    [sym_body] = STATE(105),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_bytes] = STATE(381),
    [sym_xml] = STATE(494),
    [sym_xml_prolog_tag] = STATE(247),
    [sym_xml_tag] = STATE(497),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(494),
    [sym_oneline_file] = STATE(494),
    [sym_oneline_hex] = STATE(494),
    [sym_oneline_string] = STATE(494),
    [sym_multiline_string] = STATE(494),
    [sym_json_value] = STATE(494),
    [sym_json_object] = STATE(547),
    [sym_json_array] = STATE(547),
    [sym_json_string] = STATE(547),
    [sym_json_number] = STATE(547),
    [sym_template] = STATE(547),
    [sym_boolean] = STATE(547),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(247),
    [aux_sym_integer_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(65),
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
    [aux_sym_oneline_string_token1] = ACTIONS(49),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [sym_digit] = ACTIONS(61),
    [sym_comment] = ACTIONS(67),
  },
  [8] = {
    [sym_body] = STATE(106),
    [sym_request_section] = STATE(51),
    [sym_basic_auth_section] = STATE(68),
    [sym_query_string_params_section] = STATE(68),
    [sym_form_params_section] = STATE(68),
    [sym_multipart_form_data_section] = STATE(68),
    [sym_cookies_section] = STATE(68),
    [sym_options_section] = STATE(68),
    [sym_bytes] = STATE(381),
    [sym_xml] = STATE(494),
    [sym_xml_prolog_tag] = STATE(247),
    [sym_xml_tag] = STATE(497),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(494),
    [sym_oneline_file] = STATE(494),
    [sym_oneline_hex] = STATE(494),
    [sym_oneline_string] = STATE(494),
    [sym_multiline_string] = STATE(494),
    [sym_json_value] = STATE(494),
    [sym_json_object] = STATE(547),
    [sym_json_array] = STATE(547),
    [sym_json_string] = STATE(547),
    [sym_json_number] = STATE(547),
    [sym_template] = STATE(547),
    [sym_boolean] = STATE(547),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat2] = STATE(51),
    [aux_sym_xml_repeat1] = STATE(247),
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
  [9] = {
    [sym_option] = STATE(10),
    [sym_ca_certificate_option] = STATE(23),
    [sym_compressed_option] = STATE(23),
    [sym_follow_redirect_option] = STATE(23),
    [sym_insecure_option] = STATE(23),
    [sym_max_redirs_option] = STATE(23),
    [sym_path_as_is_option] = STATE(23),
    [sym_proxy_option] = STATE(23),
    [sym_retry_option] = STATE(23),
    [sym_retry_interval_option] = STATE(23),
    [sym_retry_max_count_option] = STATE(23),
    [sym_variable_option] = STATE(23),
    [sym_verbose_option] = STATE(23),
    [sym_very_verbose_option] = STATE(23),
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
    [sym_ca_certificate_option] = STATE(23),
    [sym_compressed_option] = STATE(23),
    [sym_follow_redirect_option] = STATE(23),
    [sym_insecure_option] = STATE(23),
    [sym_max_redirs_option] = STATE(23),
    [sym_path_as_is_option] = STATE(23),
    [sym_proxy_option] = STATE(23),
    [sym_retry_option] = STATE(23),
    [sym_retry_interval_option] = STATE(23),
    [sym_retry_max_count_option] = STATE(23),
    [sym_variable_option] = STATE(23),
    [sym_verbose_option] = STATE(23),
    [sym_very_verbose_option] = STATE(23),
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
    [sym_ca_certificate_option] = STATE(23),
    [sym_compressed_option] = STATE(23),
    [sym_follow_redirect_option] = STATE(23),
    [sym_insecure_option] = STATE(23),
    [sym_max_redirs_option] = STATE(23),
    [sym_path_as_is_option] = STATE(23),
    [sym_proxy_option] = STATE(23),
    [sym_retry_option] = STATE(23),
    [sym_retry_interval_option] = STATE(23),
    [sym_retry_max_count_option] = STATE(23),
    [sym_variable_option] = STATE(23),
    [sym_verbose_option] = STATE(23),
    [sym_very_verbose_option] = STATE(23),
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
    [sym_header] = STATE(63),
    [sym_body] = STATE(123),
    [sym_response_section] = STATE(15),
    [sym_captures_section] = STATE(92),
    [sym_asserts_section] = STATE(92),
    [sym_key_value] = STATE(408),
    [sym_bytes] = STATE(347),
    [sym_xml] = STATE(494),
    [sym_xml_prolog_tag] = STATE(247),
    [sym_xml_tag] = STATE(497),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(494),
    [sym_oneline_file] = STATE(494),
    [sym_oneline_hex] = STATE(494),
    [sym_key_string] = STATE(507),
    [sym_key_string_content] = STATE(186),
    [sym_key_string_escaped_char] = STATE(221),
    [sym_oneline_string] = STATE(494),
    [sym_multiline_string] = STATE(494),
    [sym_json_value] = STATE(494),
    [sym_json_object] = STATE(547),
    [sym_json_array] = STATE(547),
    [sym_json_string] = STATE(547),
    [sym_json_number] = STATE(547),
    [sym_template] = STATE(277),
    [sym_boolean] = STATE(547),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat1] = STATE(63),
    [aux_sym_response_repeat1] = STATE(15),
    [aux_sym_xml_repeat1] = STATE(247),
    [aux_sym_key_string_repeat1] = STATE(186),
    [aux_sym_key_string_content_repeat1] = STATE(221),
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
    [sym_header] = STATE(12),
    [sym_body] = STATE(128),
    [sym_response_section] = STATE(14),
    [sym_captures_section] = STATE(92),
    [sym_asserts_section] = STATE(92),
    [sym_key_value] = STATE(408),
    [sym_bytes] = STATE(347),
    [sym_xml] = STATE(494),
    [sym_xml_prolog_tag] = STATE(247),
    [sym_xml_tag] = STATE(497),
    [sym_xml_open_tag] = STATE(129),
    [sym_oneline_base64] = STATE(494),
    [sym_oneline_file] = STATE(494),
    [sym_oneline_hex] = STATE(494),
    [sym_key_string] = STATE(507),
    [sym_key_string_content] = STATE(186),
    [sym_key_string_escaped_char] = STATE(221),
    [sym_oneline_string] = STATE(494),
    [sym_multiline_string] = STATE(494),
    [sym_json_value] = STATE(494),
    [sym_json_object] = STATE(547),
    [sym_json_array] = STATE(547),
    [sym_json_string] = STATE(547),
    [sym_json_number] = STATE(547),
    [sym_template] = STATE(277),
    [sym_boolean] = STATE(547),
    [sym_integer] = STATE(236),
    [aux_sym_request_repeat1] = STATE(12),
    [aux_sym_response_repeat1] = STATE(14),
    [aux_sym_xml_repeat1] = STATE(247),
    [aux_sym_key_string_repeat1] = STATE(186),
    [aux_sym_key_string_content_repeat1] = STATE(221),
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
    STATE(123), 1,
      sym_body,
    STATE(129), 1,
      sym_xml_open_tag,
    STATE(236), 1,
      sym_integer,
    STATE(347), 1,
      sym_bytes,
    STATE(497), 1,
      sym_xml_tag,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(79), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(92), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(247), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(547), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(494), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    ACTIONS(156), 18,
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
    STATE(126), 1,
      sym_body,
    STATE(129), 1,
      sym_xml_open_tag,
    STATE(236), 1,
      sym_integer,
    STATE(347), 1,
      sym_bytes,
    STATE(497), 1,
      sym_xml_tag,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(79), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(92), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(247), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(547), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
    STATE(494), 7,
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
    STATE(397), 1,
      sym_predicate,
    STATE(550), 1,
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
    STATE(78), 5,
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
    STATE(481), 11,
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
    STATE(419), 1,
      sym_predicate,
    STATE(550), 1,
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
    STATE(61), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(78), 5,
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
    STATE(481), 11,
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
    ACTIONS(216), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(214), 55,
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
    ACTIONS(220), 1,
      anon_sym_LF,
    ACTIONS(225), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(223), 55,
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
  [608] = 12,
    ACTIONS(232), 1,
      anon_sym_variable,
    ACTIONS(236), 1,
      anon_sym_header,
    ACTIONS(238), 1,
      anon_sym_cookie,
    ACTIONS(240), 1,
      anon_sym_xpath,
    ACTIONS(242), 1,
      anon_sym_jsonpath,
    ACTIONS(244), 1,
      anon_sym_regex,
    STATE(16), 1,
      sym_query,
    STATE(21), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(80), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(234), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(230), 34,
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
  [692] = 12,
    ACTIONS(232), 1,
      anon_sym_variable,
    ACTIONS(236), 1,
      anon_sym_header,
    ACTIONS(238), 1,
      anon_sym_cookie,
    ACTIONS(240), 1,
      anon_sym_xpath,
    ACTIONS(242), 1,
      anon_sym_jsonpath,
    ACTIONS(244), 1,
      anon_sym_regex,
    STATE(16), 1,
      sym_query,
    STATE(24), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(246), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(80), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(234), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(248), 34,
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
  [776] = 2,
    ACTIONS(250), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(252), 56,
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
  [840] = 2,
    ACTIONS(254), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(256), 56,
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
  [904] = 12,
    ACTIONS(262), 1,
      anon_sym_variable,
    ACTIONS(268), 1,
      anon_sym_header,
    ACTIONS(271), 1,
      anon_sym_cookie,
    ACTIONS(274), 1,
      anon_sym_xpath,
    ACTIONS(277), 1,
      anon_sym_jsonpath,
    ACTIONS(280), 1,
      anon_sym_regex,
    STATE(16), 1,
      sym_query,
    STATE(24), 2,
      sym_assert,
      aux_sym_asserts_section_repeat1,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(80), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(265), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
    ACTIONS(260), 34,
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
  [988] = 2,
    ACTIONS(283), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(285), 56,
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
  [1052] = 2,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(289), 56,
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
  [1116] = 2,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(293), 56,
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
  [1180] = 2,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(297), 56,
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
  [1244] = 2,
    ACTIONS(299), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(301), 56,
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
  [1308] = 2,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(305), 56,
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
  [1372] = 2,
    ACTIONS(307), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(309), 56,
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
  [1436] = 2,
    ACTIONS(311), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(313), 56,
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
  [1500] = 2,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(317), 56,
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
  [1564] = 2,
    ACTIONS(319), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(321), 56,
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
  [1628] = 2,
    ACTIONS(323), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(325), 56,
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
    STATE(471), 1,
      sym_key_string,
    STATE(543), 1,
      sym_multipart_form_data_param,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(477), 2,
      sym_key_value,
      sym_file_param,
    STATE(186), 3,
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
    STATE(471), 1,
      sym_key_string,
    STATE(543), 1,
      sym_multipart_form_data_param,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(477), 2,
      sym_key_value,
      sym_file_param,
    STATE(186), 3,
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
    ACTIONS(45), 1,
      sym_key_string_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(471), 1,
      sym_key_string,
    STATE(543), 1,
      sym_multipart_form_data_param,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(477), 2,
      sym_key_value,
      sym_file_param,
    STATE(186), 3,
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
    ACTIONS(353), 1,
      sym_key_string_text,
    ACTIONS(356), 1,
      anon_sym_BSLASH2,
    ACTIONS(359), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(364), 1,
      sym_key_value,
    STATE(507), 1,
      sym_key_string,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(41), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(351), 43,
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
    STATE(507), 1,
      sym_key_string,
    STATE(522), 1,
      sym_key_value,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
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
    STATE(507), 1,
      sym_key_string,
    STATE(522), 1,
      sym_key_value,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
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
    STATE(507), 1,
      sym_key_string,
    STATE(522), 1,
      sym_key_value,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
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
    STATE(507), 1,
      sym_key_string,
    STATE(522), 1,
      sym_key_value,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
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
    STATE(507), 1,
      sym_key_string,
    STATE(522), 1,
      sym_key_value,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
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
    STATE(507), 1,
      sym_key_string,
    STATE(522), 1,
      sym_key_value,
    ACTIONS(382), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
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
    STATE(507), 1,
      sym_key_string,
    STATE(522), 1,
      sym_key_value,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
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
    STATE(507), 1,
      sym_key_string,
    STATE(522), 1,
      sym_key_value,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
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
    STATE(507), 1,
      sym_key_string,
    STATE(522), 1,
      sym_key_value,
    ACTIONS(394), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
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
    STATE(68), 6,
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
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(223), 46,
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
  [2935] = 5,
    ACTIONS(426), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(214), 46,
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
  [2997] = 6,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(437), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(54), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(430), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(435), 43,
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
    STATE(60), 1,
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
  [3231] = 5,
    ACTIONS(454), 1,
      anon_sym_LF,
    ACTIONS(456), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(214), 43,
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
  [3291] = 5,
    ACTIONS(458), 1,
      anon_sym_LF,
    ACTIONS(461), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(218), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(223), 43,
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
  [3351] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_digit,
    STATE(60), 1,
      aux_sym_integer_repeat1,
    ACTIONS(466), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(464), 40,
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
  [3411] = 11,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_xpath,
    ACTIONS(474), 1,
      anon_sym_regex,
    ACTIONS(484), 1,
      anon_sym_nth,
    ACTIONS(487), 1,
      anon_sym_replace,
    ACTIONS(490), 1,
      anon_sym_split,
    STATE(61), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(477), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(78), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(481), 11,
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
    ACTIONS(479), 20,
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
  [3483] = 2,
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
  [3536] = 10,
    ACTIONS(353), 1,
      sym_key_string_text,
    ACTIONS(356), 1,
      anon_sym_BSLASH2,
    ACTIONS(359), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(408), 1,
      sym_key_value,
    STATE(507), 1,
      sym_key_string,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(63), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(351), 34,
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
  [3605] = 9,
    ACTIONS(501), 1,
      sym_key_string_text,
    ACTIONS(503), 1,
      anon_sym_BSLASH2,
    ACTIONS(505), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(509), 1,
      sym_key_string,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(66), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(249), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(194), 3,
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
    STATE(509), 1,
      sym_key_string,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(64), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(249), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(194), 3,
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
    STATE(509), 1,
      sym_key_string,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(66), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(249), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(194), 3,
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
  [4399] = 6,
    ACTIONS(576), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(579), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(79), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(92), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(572), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(574), 32,
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
  [4453] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(584), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(582), 35,
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
  [4501] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(588), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(586), 35,
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
  [4549] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(592), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(590), 35,
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
  [4597] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(596), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(594), 35,
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
  [4645] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(600), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(598), 35,
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
    ACTIONS(218), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(223), 34,
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
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(214), 34,
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
    STATE(511), 1,
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
    STATE(481), 11,
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
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(115), 1,
      sym_response,
    STATE(124), 1,
      sym__comment_or_new_line,
    STATE(344), 1,
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
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(119), 1,
      sym_response,
    STATE(130), 1,
      sym__comment_or_new_line,
    STATE(344), 1,
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
  [5228] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(95), 1,
      sym_request,
    STATE(160), 1,
      sym_method,
    STATE(97), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(100), 2,
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
  [5274] = 9,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
    ACTIONS(646), 1,
      anon_sym_LF,
    ACTIONS(652), 1,
      sym_comment,
    STATE(95), 1,
      sym_request,
    STATE(133), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(97), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(110), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(649), 17,
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
  [5320] = 12,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 1,
      anon_sym_xpath,
    ACTIONS(659), 1,
      anon_sym_regex,
    ACTIONS(663), 1,
      anon_sym_nth,
    ACTIONS(665), 1,
      anon_sym_replace,
    ACTIONS(667), 1,
      anon_sym_split,
    ACTIONS(669), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(90), 1,
      sym__comment_or_new_line,
    STATE(107), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(141), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(661), 11,
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
  [5372] = 12,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 1,
      anon_sym_xpath,
    ACTIONS(659), 1,
      anon_sym_regex,
    ACTIONS(663), 1,
      anon_sym_nth,
    ACTIONS(665), 1,
      anon_sym_replace,
    ACTIONS(667), 1,
      anon_sym_split,
    ACTIONS(669), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(89), 1,
      sym__comment_or_new_line,
    STATE(98), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(141), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(661), 11,
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
  [5424] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(671), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(94), 1,
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
  [5466] = 2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(67), 23,
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
  [5496] = 8,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(94), 1,
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
  [5538] = 10,
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
    ACTIONS(673), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(61), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(78), 5,
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
  [5584] = 2,
    ACTIONS(675), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(677), 23,
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
  [5614] = 2,
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
  [5644] = 2,
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
  [5674] = 10,
    ACTIONS(477), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(679), 1,
      anon_sym_xpath,
    ACTIONS(682), 1,
      anon_sym_regex,
    ACTIONS(688), 1,
      anon_sym_nth,
    ACTIONS(691), 1,
      anon_sym_replace,
    ACTIONS(694), 1,
      anon_sym_split,
    STATE(107), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(141), 5,
      sym_regex_filter,
      sym_nth_filter,
      sym_replace_filter,
      sym_split_filter,
      sym_xpath_filter,
    ACTIONS(685), 11,
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
  [5720] = 2,
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
  [5750] = 10,
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
    ACTIONS(701), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(103), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(78), 5,
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
  [5796] = 7,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      sym_comment,
    STATE(94), 1,
      sym_request,
    STATE(133), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(160), 1,
      sym_method,
    STATE(118), 2,
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
    ACTIONS(464), 1,
      anon_sym_LF,
    ACTIONS(707), 1,
      sym_digit,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    ACTIONS(466), 20,
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
    ACTIONS(448), 1,
      anon_sym_LF,
    ACTIONS(710), 1,
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
  [5899] = 6,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
    ACTIONS(712), 1,
      anon_sym_LF,
    ACTIONS(715), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(113), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(435), 17,
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
  [5935] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_null,
    ACTIONS(720), 1,
      anon_sym_file_COMMA,
    ACTIONS(722), 1,
      anon_sym_base64_COMMA,
    ACTIONS(724), 1,
      anon_sym_hex_COMMA,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(728), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(732), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(406), 1,
      sym_integer,
    STATE(516), 1,
      sym_predicate_value,
    ACTIONS(730), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(512), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [5986] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(734), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(125), 1,
      sym__comment_or_new_line,
    ACTIONS(736), 17,
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
  [6021] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_null,
    ACTIONS(720), 1,
      anon_sym_file_COMMA,
    ACTIONS(722), 1,
      anon_sym_base64_COMMA,
    ACTIONS(724), 1,
      anon_sym_hex_COMMA,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(728), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(732), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(406), 1,
      sym_integer,
    STATE(535), 1,
      sym_predicate_value,
    ACTIONS(730), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(512), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [6072] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_null,
    ACTIONS(720), 1,
      anon_sym_file_COMMA,
    ACTIONS(722), 1,
      anon_sym_base64_COMMA,
    ACTIONS(724), 1,
      anon_sym_hex_COMMA,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(728), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(732), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(406), 1,
      sym_integer,
    STATE(513), 1,
      sym_predicate_value,
    ACTIONS(730), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(512), 8,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_float,
  [6123] = 5,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(741), 1,
      sym_comment,
    STATE(133), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(118), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(435), 17,
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
  [6156] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(124), 1,
      sym__comment_or_new_line,
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
  [6191] = 14,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(744), 1,
      anon_sym_null,
    ACTIONS(746), 1,
      sym_key_string_text,
    ACTIONS(748), 1,
      anon_sym_BSLASH2,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(422), 1,
      sym_integer,
    STATE(546), 1,
      sym_variable_value,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(199), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(545), 4,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_float,
  [6241] = 10,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_variable,
    ACTIONS(754), 1,
      anon_sym_header,
    ACTIONS(756), 1,
      anon_sym_cookie,
    ACTIONS(758), 1,
      anon_sym_xpath,
    ACTIONS(760), 1,
      anon_sym_jsonpath,
    ACTIONS(762), 1,
      anon_sym_regex,
    STATE(99), 1,
      sym_query,
    STATE(151), 6,
      sym_header_query,
      sym_cookie_query,
      sym_xpath_query,
      sym_jsonpath_query,
      sym_regex_query,
      sym_variable_query,
    ACTIONS(752), 7,
      anon_sym_status,
      anon_sym_url,
      anon_sym_body,
      anon_sym_duration,
      anon_sym_bytes,
      anon_sym_sha256,
      anon_sym_md5,
  [6283] = 13,
    ACTIONS(61), 1,
      sym_digit,
    ACTIONS(766), 1,
      anon_sym_null,
    ACTIONS(768), 1,
      anon_sym_BSLASH,
    ACTIONS(770), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(772), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(266), 1,
      aux_sym_value_string_text_repeat1,
    STATE(378), 1,
      sym_integer,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(764), 2,
      anon_sym_LF,
      sym_comment,
    STATE(168), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(484), 3,
      sym_value_string,
      sym_boolean,
      sym_float,
  [6331] = 2,
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
  [6356] = 2,
    ACTIONS(734), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(736), 18,
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
  [6381] = 2,
    ACTIONS(774), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(776), 18,
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
  [6406] = 2,
    ACTIONS(778), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(780), 18,
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
  [6431] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(782), 1,
      anon_sym_LT_QMARK,
    ACTIONS(784), 1,
      anon_sym_LT_SLASH,
    ACTIONS(786), 1,
      anon_sym_BSLASH,
    ACTIONS(788), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(790), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(135), 1,
      sym_xml_open_tag,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(233), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(178), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(136), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6478] = 2,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(156), 18,
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
  [6503] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(782), 1,
      anon_sym_LT_QMARK,
    ACTIONS(786), 1,
      anon_sym_BSLASH,
    ACTIONS(788), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(790), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(792), 1,
      anon_sym_LT_SLASH,
    STATE(135), 1,
      sym_xml_open_tag,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(485), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(178), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(134), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6550] = 2,
    ACTIONS(632), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(634), 18,
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
  [6575] = 2,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(699), 18,
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
  [6600] = 4,
    ACTIONS(794), 1,
      anon_sym_LF,
    ACTIONS(797), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(223), 17,
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
  [6629] = 4,
    ACTIONS(800), 1,
      anon_sym_LF,
    ACTIONS(802), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(214), 17,
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
  [6658] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(782), 1,
      anon_sym_LT_QMARK,
    ACTIONS(786), 1,
      anon_sym_BSLASH,
    ACTIONS(788), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(790), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(792), 1,
      anon_sym_LT_SLASH,
    STATE(135), 1,
      sym_xml_open_tag,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(479), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(178), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(136), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6705] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(782), 1,
      anon_sym_LT_QMARK,
    ACTIONS(784), 1,
      anon_sym_LT_SLASH,
    ACTIONS(786), 1,
      anon_sym_BSLASH,
    ACTIONS(788), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(790), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(135), 1,
      sym_xml_open_tag,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(253), 1,
      sym_xml_close_tag,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(178), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(127), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6752] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_LT,
    ACTIONS(807), 1,
      anon_sym_LT_QMARK,
    ACTIONS(810), 1,
      anon_sym_LT_SLASH,
    ACTIONS(812), 1,
      anon_sym_BSLASH,
    ACTIONS(815), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(818), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(135), 1,
      sym_xml_open_tag,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(164), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(178), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(136), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6796] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(821), 18,
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
  [6820] = 2,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(596), 17,
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
  [6866] = 12,
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
    STATE(219), 1,
      sym_integer,
    STATE(225), 1,
      aux_sym_integer_repeat1,
    STATE(457), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(345), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [6909] = 2,
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
  [6932] = 12,
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
    STATE(57), 1,
      aux_sym_integer_repeat1,
    STATE(227), 1,
      sym_integer,
    STATE(458), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(345), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [6975] = 12,
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
    STATE(57), 1,
      aux_sym_integer_repeat1,
    STATE(227), 1,
      sym_integer,
    STATE(384), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(345), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
  [7018] = 2,
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
  [7041] = 2,
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
  [7064] = 2,
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
  [7087] = 2,
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
  [7110] = 2,
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
  [7133] = 2,
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
  [7156] = 2,
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
  [7179] = 2,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 17,
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
  [7202] = 2,
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
  [7225] = 2,
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
  [7248] = 2,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(588), 17,
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
  [7271] = 2,
    ACTIONS(598), 1,
      anon_sym_LF,
    ACTIONS(600), 17,
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
  [7294] = 2,
    ACTIONS(590), 1,
      anon_sym_LF,
    ACTIONS(592), 17,
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
  [7317] = 2,
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
  [7340] = 12,
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
    STATE(57), 1,
      aux_sym_integer_repeat1,
    STATE(227), 1,
      sym_integer,
    STATE(414), 1,
      sym_json_value,
    ACTIONS(833), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(345), 6,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
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
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(297), 1,
      sym_multipart_form_data_param,
    STATE(298), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(471), 1,
      sym_key_string,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(477), 2,
      sym_key_value,
      sym_file_param,
    STATE(186), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7427] = 10,
    ACTIONS(768), 1,
      anon_sym_BSLASH,
    ACTIONS(770), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(772), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(266), 1,
      aux_sym_value_string_text_repeat1,
    STATE(295), 1,
      sym_value_string,
    ACTIONS(63), 2,
      anon_sym_LF,
      sym_comment,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    STATE(168), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
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
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(290), 1,
      sym_key_value,
    STATE(291), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(507), 1,
      sym_key_string,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
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
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(293), 1,
      sym_key_value,
    STATE(294), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(507), 1,
      sym_key_string,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
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
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(299), 1,
      sym_key_value,
    STATE(300), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(507), 1,
      sym_key_string,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    STATE(165), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(178), 3,
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
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(845), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(165), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(178), 3,
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
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(22), 1,
      sym__comment_or_new_line,
    STATE(403), 1,
      sym_filename,
    ACTIONS(856), 2,
      anon_sym_LF,
      sym_comment,
    STATE(260), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(196), 3,
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
    STATE(471), 1,
      sym_key_string,
    STATE(543), 1,
      sym_multipart_form_data_param,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(477), 2,
      sym_key_value,
      sym_file_param,
    STATE(186), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7706] = 7,
    ACTIONS(768), 1,
      anon_sym_BSLASH,
    ACTIONS(770), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(772), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(266), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(841), 2,
      anon_sym_LF,
      sym_comment,
    STATE(171), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7733] = 8,
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
    STATE(173), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(213), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7762] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(870), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(874), 1,
      anon_sym_LF,
    ACTIONS(876), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(175), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(213), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7791] = 7,
    ACTIONS(878), 1,
      anon_sym_BSLASH,
    ACTIONS(881), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(884), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(266), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(845), 2,
      anon_sym_LF,
      sym_comment,
    STATE(171), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7818] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_BSLASH,
    ACTIONS(770), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(772), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(266), 1,
      aux_sym_value_string_text_repeat1,
    STATE(343), 1,
      sym_value_string,
    STATE(168), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(211), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [7847] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_BSLASH,
    ACTIONS(870), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(874), 1,
      anon_sym_LF,
    ACTIONS(876), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(174), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(213), 3,
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
    STATE(213), 3,
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
    STATE(174), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(213), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [7934] = 8,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_COLON,
    ACTIONS(907), 1,
      anon_sym_COLON2,
    ACTIONS(909), 1,
      sym_key_string_text,
    ACTIONS(912), 1,
      anon_sym_BSLASH2,
    ACTIONS(915), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(176), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [7962] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_DQUOTE,
    ACTIONS(920), 1,
      sym_quoted_string_text,
    ACTIONS(922), 1,
      anon_sym_BSLASH,
    ACTIONS(924), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(185), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(220), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [7988] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_BSLASH,
    ACTIONS(788), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(928), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(926), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(182), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8014] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(507), 1,
      sym_key_string,
    STATE(522), 1,
      sym_key_value,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8042] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    STATE(386), 1,
      sym_key_value,
    STATE(507), 1,
      sym_key_string,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(186), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8070] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_BSLASH,
    ACTIONS(932), 1,
      anon_sym_BQUOTE,
    ACTIONS(934), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(936), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(188), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(218), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8096] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_BSLASH,
    ACTIONS(943), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(946), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(938), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(182), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8122] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    ACTIONS(950), 1,
      anon_sym_BSLASH,
    ACTIONS(952), 1,
      sym_filename_text,
    ACTIONS(954), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(515), 1,
      sym_filename,
    STATE(240), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(192), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8150] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_BSLASH,
    ACTIONS(952), 1,
      sym_filename_text,
    ACTIONS(954), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(956), 1,
      anon_sym_SEMI,
    STATE(475), 1,
      sym_filename,
    STATE(240), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(192), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8178] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_DQUOTE,
    ACTIONS(960), 1,
      sym_quoted_string_text,
    ACTIONS(963), 1,
      anon_sym_BSLASH,
    ACTIONS(966), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(185), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(220), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8204] = 8,
    ACTIONS(47), 1,
      anon_sym_BSLASH2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      sym_key_string_text,
    ACTIONS(969), 1,
      anon_sym_COLON,
    ACTIONS(971), 1,
      anon_sym_COLON2,
    STATE(221), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(176), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8232] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_BSLASH,
    ACTIONS(934), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(936), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(973), 1,
      anon_sym_BQUOTE,
    STATE(181), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(218), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8258] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_BSLASH,
    ACTIONS(978), 1,
      anon_sym_BQUOTE,
    ACTIONS(980), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(983), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(188), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(218), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8284] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_quoted_string_text,
    ACTIONS(922), 1,
      anon_sym_BSLASH,
    ACTIONS(924), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    STATE(190), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(220), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8310] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_quoted_string_text,
    ACTIONS(922), 1,
      anon_sym_BSLASH,
    ACTIONS(924), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(988), 1,
      anon_sym_DQUOTE,
    STATE(185), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(220), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8336] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_quoted_string_text,
    ACTIONS(922), 1,
      anon_sym_BSLASH,
    ACTIONS(924), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    STATE(177), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(220), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8362] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_BSLASH,
    ACTIONS(952), 1,
      sym_filename_text,
    ACTIONS(954), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(992), 1,
      anon_sym_SEMI,
    STATE(240), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(198), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8387] = 7,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_COLON2,
    ACTIONS(994), 1,
      sym_key_string_text,
    ACTIONS(997), 1,
      anon_sym_BSLASH2,
    ACTIONS(1000), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(249), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(193), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8412] = 7,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_BSLASH2,
    ACTIONS(505), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(969), 1,
      anon_sym_COLON2,
    ACTIONS(1003), 1,
      sym_key_string_text,
    STATE(249), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(193), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8437] = 6,
    ACTIONS(1007), 1,
      anon_sym_BSLASH,
    ACTIONS(1010), 1,
      sym_filename_text,
    ACTIONS(1013), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1005), 2,
      anon_sym_LF,
      sym_comment,
    STATE(260), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(195), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8460] = 6,
    ACTIONS(858), 1,
      anon_sym_BSLASH,
    ACTIONS(860), 1,
      sym_filename_text,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(992), 2,
      anon_sym_LF,
      sym_comment,
    STATE(260), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(195), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8483] = 7,
    ACTIONS(905), 1,
      anon_sym_LF,
    ACTIONS(907), 1,
      sym_comment,
    ACTIONS(1016), 1,
      sym_key_string_text,
    ACTIONS(1019), 1,
      anon_sym_BSLASH2,
    ACTIONS(1022), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(197), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8508] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_SEMI,
    ACTIONS(1025), 1,
      anon_sym_BSLASH,
    ACTIONS(1028), 1,
      sym_filename_text,
    ACTIONS(1031), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(240), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(198), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8533] = 7,
    ACTIONS(57), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(748), 1,
      anon_sym_BSLASH2,
    ACTIONS(969), 1,
      anon_sym_LF,
    ACTIONS(971), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym_key_string_text,
    STATE(232), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(197), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1040), 1,
      anon_sym_u,
    ACTIONS(1036), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8577] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_DQUOTE,
    ACTIONS(1044), 1,
      anon_sym_BSLASH,
    ACTIONS(1046), 1,
      sym_json_string_text,
    ACTIONS(1048), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(315), 1,
      sym_json_string_escaped_char,
    STATE(203), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8601] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_BSLASH,
    ACTIONS(1046), 1,
      sym_json_string_text,
    ACTIONS(1048), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1050), 1,
      anon_sym_DQUOTE,
    STATE(315), 1,
      sym_json_string_escaped_char,
    STATE(203), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8625] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
    ACTIONS(1054), 1,
      anon_sym_BSLASH,
    ACTIONS(1057), 1,
      sym_json_string_text,
    ACTIONS(1060), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(315), 1,
      sym_json_string_escaped_char,
    STATE(203), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8649] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_BSLASH,
    ACTIONS(1046), 1,
      sym_json_string_text,
    ACTIONS(1048), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1063), 1,
      anon_sym_DQUOTE,
    STATE(315), 1,
      sym_json_string_escaped_char,
    STATE(201), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8673] = 6,
    ACTIONS(946), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1065), 1,
      anon_sym_BSLASH,
    ACTIONS(1068), 1,
      aux_sym_value_string_text_token1,
    STATE(266), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(938), 2,
      anon_sym_LF,
      sym_comment,
    STATE(205), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8695] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_u,
    ACTIONS(1071), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [8711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(208), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1077), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1075), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(209), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1083), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1081), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8751] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(209), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1089), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1087), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_u,
    ACTIONS(1098), 1,
      anon_sym_POUND,
    ACTIONS(1094), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8789] = 6,
    ACTIONS(768), 1,
      anon_sym_BSLASH,
    ACTIONS(770), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(928), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(266), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(926), 2,
      anon_sym_LF,
      sym_comment,
    STATE(205), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8811] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_LF,
    ACTIONS(1103), 1,
      anon_sym_BSLASH,
    ACTIONS(1106), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1108), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1111), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(212), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(212), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
    ACTIONS(1113), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [8853] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_u,
    ACTIONS(1117), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_u,
    ACTIONS(1125), 1,
      anon_sym_POUND,
    ACTIONS(1121), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [8887] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_BSLASH,
    ACTIONS(1046), 1,
      sym_json_string_text,
    ACTIONS(1048), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1127), 1,
      anon_sym_DQUOTE,
    STATE(315), 1,
      sym_json_string_escaped_char,
    STATE(202), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [8911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_LF,
    STATE(521), 1,
      sym_multiline_string_type,
    ACTIONS(1131), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [8929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1133), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(228), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8946] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    STATE(275), 1,
      sym_fraction,
    STATE(361), 1,
      sym_exponent,
    ACTIONS(1137), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(1141), 2,
      anon_sym_e,
      anon_sym_E,
  [8967] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_BSLASH,
    ACTIONS(1145), 1,
      sym_quoted_string_text,
    ACTIONS(1143), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(223), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8986] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_COLON2,
    STATE(229), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1147), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9003] = 8,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(1151), 1,
      anon_sym_RBRACE,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_json_object_repeat1,
    STATE(415), 1,
      sym_json_key_value,
    STATE(487), 1,
      sym_json_string,
    STATE(563), 1,
      sym_json_key_string,
  [9028] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      sym_quoted_string_text,
    ACTIONS(1160), 1,
      anon_sym_BSLASH,
    ACTIONS(1155), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(223), 3,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9047] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1167), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(231), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1163), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [9066] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1169), 1,
      sym_digit,
    STATE(226), 1,
      aux_sym_integer_repeat1,
    ACTIONS(448), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9083] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1171), 1,
      sym_digit,
    STATE(226), 1,
      aux_sym_integer_repeat1,
    ACTIONS(464), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9100] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_DOT,
    STATE(271), 1,
      sym_fraction,
    STATE(361), 1,
      sym_exponent,
    ACTIONS(1137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1176), 2,
      anon_sym_e,
      anon_sym_E,
  [9121] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      anon_sym_BSLASH,
    ACTIONS(1181), 1,
      anon_sym_BQUOTE,
    ACTIONS(1183), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1186), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(228), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [9142] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_COLON2,
    ACTIONS(1192), 1,
      sym_key_string_text,
    ACTIONS(1195), 1,
      anon_sym_BSLASH2,
    ACTIONS(1188), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(229), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [9163] = 8,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1198), 1,
      anon_sym_RBRACE,
    STATE(412), 1,
      sym_json_key_value,
    STATE(413), 1,
      aux_sym_json_object_repeat1,
    STATE(487), 1,
      sym_json_string,
    STATE(563), 1,
      sym_json_key_string,
  [9188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1205), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(231), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1200), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [9207] = 3,
    ACTIONS(1149), 1,
      sym_comment,
    STATE(242), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1147), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1207), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9235] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_BSLASH,
    ACTIONS(1213), 1,
      anon_sym_SLASH,
    ACTIONS(1215), 1,
      sym_regex_text,
    STATE(508), 1,
      sym_regex_content,
    STATE(276), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9255] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_BSLASH,
    ACTIONS(1222), 1,
      sym_filename_text,
    ACTIONS(1217), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(235), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [9273] = 6,
    ACTIONS(1137), 1,
      anon_sym_LF,
    ACTIONS(1225), 1,
      anon_sym_DOT,
    ACTIONS(1229), 1,
      sym_comment,
    STATE(310), 1,
      sym_fraction,
    STATE(518), 1,
      sym_exponent,
    ACTIONS(1227), 2,
      anon_sym_e,
      anon_sym_E,
  [9293] = 3,
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
  [9307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1235), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1239), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(235), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1243), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [9349] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(407), 1,
      sym_integer,
    STATE(517), 2,
      sym_quoted_string,
      sym_float,
  [9369] = 5,
    ACTIONS(1190), 1,
      sym_comment,
    ACTIONS(1245), 1,
      sym_key_string_text,
    ACTIONS(1248), 1,
      anon_sym_BSLASH2,
    ACTIONS(1188), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(242), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [9387] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1251), 1,
      sym_key_string_text,
    ACTIONS(1254), 1,
      anon_sym_BSLASH2,
    ACTIONS(1188), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(243), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [9405] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1169), 1,
      sym_digit,
    STATE(226), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1257), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_e,
      anon_sym_E,
  [9421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1259), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1263), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9449] = 6,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_LT_QMARK,
    STATE(129), 1,
      sym_xml_open_tag,
    STATE(581), 1,
      sym_xml_tag,
    STATE(285), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [9469] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(409), 1,
      sym_integer,
    STATE(519), 2,
      sym_quoted_string,
      sym_float,
  [9489] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(243), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1147), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1269), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9517] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_digit,
    STATE(60), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1257), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [9533] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_base64_COMMA,
    ACTIONS(724), 1,
      anon_sym_hex_COMMA,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(529), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [9551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1273), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9565] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(410), 1,
      sym_integer,
    STATE(523), 2,
      sym_quoted_string,
      sym_float,
  [9585] = 4,
    ACTIONS(1277), 1,
      anon_sym_BSLASH,
    ACTIONS(1280), 1,
      sym_filename_text,
    STATE(255), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1217), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9601] = 6,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(416), 1,
      sym_integer,
    STATE(526), 2,
      sym_quoted_string,
      sym_float,
  [9621] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_base64_COMMA,
    ACTIONS(724), 1,
      anon_sym_hex_COMMA,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(528), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [9639] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_BSLASH,
    ACTIONS(1215), 1,
      sym_regex_text,
    ACTIONS(1283), 1,
      anon_sym_SLASH,
    STATE(555), 1,
      sym_regex_content,
    STATE(276), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_u,
    ACTIONS(1289), 1,
      anon_sym_POUND,
    ACTIONS(1285), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [9675] = 2,
    STATE(255), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1243), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [9687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1291), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [9701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1299), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1295), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1269), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1301), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1299), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1295), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9757] = 4,
    ACTIONS(1167), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1305), 1,
      aux_sym_value_string_text_token1,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1163), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [9772] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_BSLASH,
    ACTIONS(1310), 1,
      anon_sym_SLASH,
    ACTIONS(1312), 1,
      sym_regex_text,
    STATE(267), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9789] = 4,
    ACTIONS(1205), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1315), 1,
      aux_sym_value_string_text_token1,
    STATE(268), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1200), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [9804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1318), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9817] = 2,
    ACTIONS(1269), 1,
      sym_comment,
    ACTIONS(1271), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9828] = 4,
    ACTIONS(208), 1,
      sym_comment,
    STATE(372), 1,
      sym_exponent,
    ACTIONS(1176), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1322), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1299), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1295), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [9858] = 4,
    ACTIONS(710), 1,
      sym_digit,
    ACTIONS(1257), 1,
      anon_sym_LF,
    STATE(111), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1324), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [9873] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_COLON2,
    ACTIONS(1326), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9886] = 4,
    ACTIONS(208), 1,
      sym_comment,
    STATE(372), 1,
      sym_exponent,
    ACTIONS(1141), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1322), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9901] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_BSLASH,
    ACTIONS(1330), 1,
      anon_sym_SLASH,
    ACTIONS(1332), 1,
      sym_regex_text,
    STATE(267), 2,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9918] = 3,
    ACTIONS(1334), 1,
      anon_sym_LF,
    ACTIONS(1338), 1,
      sym_comment,
    ACTIONS(1336), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1259), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9944] = 4,
    ACTIONS(1340), 1,
      anon_sym_LF,
    ACTIONS(1342), 1,
      sym_comment,
    STATE(280), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(210), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9959] = 4,
    ACTIONS(1344), 1,
      anon_sym_LF,
    ACTIONS(1347), 1,
      sym_comment,
    STATE(280), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(218), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9974] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_COLON2,
    ACTIONS(1271), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1350), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [9999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10019] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_LT,
    ACTIONS(1360), 1,
      anon_sym_LT_QMARK,
    STATE(285), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [10033] = 2,
    ACTIONS(1293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1291), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10043] = 2,
    ACTIONS(1271), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1269), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10053] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    ACTIONS(1365), 1,
      anon_sym_SLASH,
    STATE(73), 2,
      sym_quoted_string,
      sym_regex,
  [10067] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    ACTIONS(1365), 1,
      anon_sym_SLASH,
    STATE(436), 2,
      sym_quoted_string,
      sym_regex,
  [10081] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(331), 1,
      aux_sym_query_string_params_section_repeat1,
  [10097] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(332), 1,
      aux_sym_query_string_params_section_repeat1,
  [10113] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(1367), 1,
      anon_sym_SLASH,
    STATE(472), 2,
      sym_quoted_string,
      sym_regex,
  [10127] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(48), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(334), 1,
      aux_sym_query_string_params_section_repeat1,
  [10143] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(48), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(332), 1,
      aux_sym_query_string_params_section_repeat1,
  [10159] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(3), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [10173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10183] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(40), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(336), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10199] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(40), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(337), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10215] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(50), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(339), 1,
      aux_sym_query_string_params_section_repeat1,
  [10231] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(50), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(332), 1,
      aux_sym_query_string_params_section_repeat1,
  [10247] = 2,
    ACTIONS(1261), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1259), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1371), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10269] = 2,
    ACTIONS(1377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1375), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1381), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1385), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10313] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1389), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10323] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1326), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10333] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1391), 1,
      sym_digit,
    STATE(313), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1393), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10347] = 4,
    ACTIONS(1322), 1,
      anon_sym_LF,
    ACTIONS(1395), 1,
      sym_comment,
    STATE(489), 1,
      sym_exponent,
    ACTIONS(1227), 2,
      anon_sym_e,
      anon_sym_E,
  [10361] = 1,
    ACTIONS(1379), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10369] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1397), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10379] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_digit,
    STATE(60), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1399), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10393] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_digit,
    STATE(60), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1401), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1403), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1259), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10441] = 2,
    ACTIONS(1328), 1,
      sym_comment,
    ACTIONS(1326), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10451] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1407), 1,
      sym_digit,
    STATE(321), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1409), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1411), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10477] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1169), 1,
      sym_digit,
    STATE(226), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1399), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10491] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1169), 1,
      sym_digit,
    STATE(226), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1401), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1269), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_json_string_text,
  [10517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1269), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10539] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    ACTIONS(1365), 1,
      anon_sym_SLASH,
    STATE(85), 2,
      sym_quoted_string,
      sym_regex,
  [10553] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1415), 1,
      sym_digit,
    STATE(380), 1,
      aux_sym_integer_repeat1,
    ACTIONS(1417), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 4,
      anon_sym_DQUOTE,
      sym_quoted_string_text,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10577] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1271), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10587] = 1,
    ACTIONS(1269), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10595] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(332), 1,
      aux_sym_query_string_params_section_repeat1,
  [10611] = 5,
    ACTIONS(1419), 1,
      anon_sym_LF,
    ACTIONS(1422), 1,
      sym_comment,
    STATE(179), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(332), 1,
      aux_sym_query_string_params_section_repeat1,
  [10627] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
    STATE(447), 1,
      sym_json_key_value,
    STATE(487), 1,
      sym_json_string,
    STATE(563), 1,
      sym_json_key_string,
  [10643] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(332), 1,
      aux_sym_query_string_params_section_repeat1,
  [10659] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(1367), 1,
      anon_sym_SLASH,
    STATE(145), 2,
      sym_quoted_string,
      sym_regex,
  [10673] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(39), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(337), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10689] = 5,
    ACTIONS(1425), 1,
      anon_sym_LF,
    ACTIONS(1428), 1,
      sym_comment,
    STATE(167), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(337), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [10705] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    ACTIONS(1367), 1,
      anon_sym_SLASH,
    STATE(139), 2,
      sym_quoted_string,
      sym_regex,
  [10719] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(332), 1,
      aux_sym_query_string_params_section_repeat1,
  [10735] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    ACTIONS(1365), 1,
      anon_sym_SLASH,
    STATE(464), 2,
      sym_quoted_string,
      sym_regex,
  [10749] = 2,
    ACTIONS(1265), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1263), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [10759] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1431), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      aux_sym_json_object_repeat1,
  [10772] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 1,
      sym__comment_or_new_line,
  [10785] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(350), 1,
      sym_status,
    ACTIONS(1435), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [10796] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1334), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10805] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1437), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10814] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(131), 1,
      sym__comment_or_new_line,
  [10827] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1439), 1,
      anon_sym_SEMI,
    ACTIONS(1441), 1,
      sym_hexdigit,
    STATE(348), 1,
      aux_sym_oneline_hex_repeat1,
  [10840] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
  [10853] = 4,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(669), 1,
      sym_comment,
    STATE(13), 1,
      sym__comment_or_new_line,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
  [10866] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(355), 1,
      sym_integer,
  [10879] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(33), 1,
      sym__comment_or_new_line,
  [10892] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(146), 1,
      sym_integer,
  [10905] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(404), 1,
      sym_boolean,
    ACTIONS(730), 2,
      anon_sym_true,
      anon_sym_false,
  [10916] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(34), 1,
      sym__comment_or_new_line,
  [10929] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(35), 1,
      sym__comment_or_new_line,
  [10942] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1444), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      anon_sym_POUND,
    ACTIONS(1446), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [10962] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 1,
      sym__comment_or_new_line,
  [10975] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(356), 1,
      sym_variable_definition,
    STATE(520), 1,
      sym_variable_name,
  [10988] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1322), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10997] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(359), 1,
      sym_boolean,
    ACTIONS(730), 2,
      anon_sym_true,
      anon_sym_false,
  [11008] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(37), 1,
      sym__comment_or_new_line,
  [11021] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(62), 1,
      sym__comment_or_new_line,
  [11034] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(352), 1,
      sym_integer,
  [11047] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(405), 1,
      sym_boolean,
    ACTIONS(730), 2,
      anon_sym_true,
      anon_sym_false,
  [11058] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_RBRACE,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_json_object_repeat1,
  [11071] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(560), 1,
      sym_expr,
  [11084] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1457), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11093] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1459), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11102] = 4,
    ACTIONS(1461), 1,
      anon_sym_LF,
    ACTIONS(1463), 1,
      sym_comment,
    STATE(161), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11115] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1465), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11124] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    ACTIONS(1469), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_json_array_repeat1,
  [11137] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1471), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11146] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1473), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11155] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_SEMI,
    ACTIONS(1477), 1,
      sym_hexdigit,
    STATE(348), 1,
      aux_sym_oneline_hex_repeat1,
  [11168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      sym_regex_text,
  [11177] = 4,
    ACTIONS(1225), 1,
      anon_sym_DOT,
    ACTIONS(1481), 1,
      anon_sym_LF,
    ACTIONS(1483), 1,
      sym_comment,
    STATE(527), 1,
      sym_fraction,
  [11190] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(363), 1,
      sym_boolean,
    ACTIONS(730), 2,
      anon_sym_true,
      anon_sym_false,
  [11201] = 4,
    ACTIONS(710), 1,
      sym_digit,
    ACTIONS(1399), 1,
      anon_sym_LF,
    ACTIONS(1485), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_integer_repeat1,
  [11214] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(108), 1,
      sym__comment_or_new_line,
  [11227] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1487), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      aux_sym_json_object_repeat1,
  [11240] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_digit,
    STATE(57), 1,
      aux_sym_integer_repeat1,
    STATE(75), 1,
      sym_integer,
  [11253] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    ACTIONS(1489), 1,
      anon_sym_RBRACK,
    STATE(373), 1,
      aux_sym_json_array_repeat1,
  [11266] = 4,
    ACTIONS(1461), 1,
      anon_sym_LF,
    ACTIONS(1463), 1,
      sym_comment,
    STATE(180), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11279] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(67), 1,
      sym__comment_or_new_line,
  [11292] = 4,
    ACTIONS(1461), 1,
      anon_sym_LF,
    ACTIONS(1463), 1,
      sym_comment,
    STATE(162), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11305] = 4,
    ACTIONS(1461), 1,
      anon_sym_LF,
    ACTIONS(1463), 1,
      sym_comment,
    STATE(159), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11318] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1491), 1,
      anon_sym_SEMI,
    ACTIONS(1493), 1,
      sym_hexdigit,
    STATE(376), 1,
      aux_sym_oneline_hex_repeat1,
  [11331] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(30), 1,
      sym__comment_or_new_line,
  [11344] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(420), 1,
      sym_boolean,
    ACTIONS(730), 2,
      anon_sym_true,
      anon_sym_false,
  [11355] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_digit,
    STATE(112), 1,
      aux_sym_integer_repeat1,
    STATE(423), 1,
      sym_integer,
  [11368] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(349), 1,
      sym_boolean,
    ACTIONS(730), 2,
      anon_sym_true,
      anon_sym_false,
  [11379] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_COMMA,
    ACTIONS(1498), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_json_array_repeat1,
  [11392] = 4,
    ACTIONS(710), 1,
      sym_digit,
    ACTIONS(1401), 1,
      anon_sym_LF,
    ACTIONS(1500), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_integer_repeat1,
  [11405] = 3,
    ACTIONS(208), 1,
      sym_comment,
    STATE(390), 1,
      sym_boolean,
    ACTIONS(730), 2,
      anon_sym_true,
      anon_sym_false,
  [11416] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(56), 1,
      sym__comment_or_new_line,
  [11429] = 4,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      sym_comment,
    STATE(133), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(476), 1,
      sym__comment_or_new_line,
  [11442] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1271), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11451] = 4,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(669), 1,
      sym_comment,
    STATE(65), 1,
      sym__comment_or_new_line,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11464] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(20), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11477] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym__comment_or_new_line,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11490] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(25), 1,
      sym__comment_or_new_line,
  [11503] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(26), 1,
      sym__comment_or_new_line,
  [11516] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(27), 1,
      sym__comment_or_new_line,
  [11529] = 4,
    ACTIONS(1225), 1,
      anon_sym_DOT,
    ACTIONS(1502), 1,
      anon_sym_LF,
    ACTIONS(1504), 1,
      sym_comment,
    STATE(527), 1,
      sym_fraction,
  [11542] = 4,
    ACTIONS(1225), 1,
      anon_sym_DOT,
    ACTIONS(1506), 1,
      anon_sym_LF,
    ACTIONS(1508), 1,
      sym_comment,
    STATE(527), 1,
      sym_fraction,
  [11555] = 4,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(669), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(91), 1,
      sym__comment_or_new_line,
  [11568] = 4,
    ACTIONS(1225), 1,
      anon_sym_DOT,
    ACTIONS(1510), 1,
      anon_sym_LF,
    ACTIONS(1512), 1,
      sym_comment,
    STATE(527), 1,
      sym_fraction,
  [11581] = 4,
    ACTIONS(1225), 1,
      anon_sym_DOT,
    ACTIONS(1514), 1,
      anon_sym_LF,
    ACTIONS(1516), 1,
      sym_comment,
    STATE(527), 1,
      sym_fraction,
  [11594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 1,
      anon_sym_POUND,
    ACTIONS(1518), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [11605] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RBRACE,
    STATE(417), 1,
      aux_sym_json_object_repeat1,
  [11618] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      aux_sym_json_object_repeat1,
  [11631] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    ACTIONS(1524), 1,
      anon_sym_RBRACK,
    STATE(418), 1,
      aux_sym_json_array_repeat1,
  [11644] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1487), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      aux_sym_json_object_repeat1,
  [11657] = 4,
    ACTIONS(1225), 1,
      anon_sym_DOT,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
    STATE(527), 1,
      sym_fraction,
  [11670] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1530), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      aux_sym_json_object_repeat1,
  [11683] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1467), 1,
      anon_sym_COMMA,
    ACTIONS(1532), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      aux_sym_json_array_repeat1,
  [11696] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(55), 1,
      sym__comment_or_new_line,
  [11709] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
  [11722] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(532), 1,
      sym_expr,
  [11735] = 4,
    ACTIONS(1225), 1,
      anon_sym_DOT,
    ACTIONS(1534), 1,
      anon_sym_LF,
    ACTIONS(1536), 1,
      sym_comment,
    STATE(527), 1,
      sym_fraction,
  [11748] = 4,
    ACTIONS(856), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(29), 1,
      sym__comment_or_new_line,
  [11761] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(564), 1,
      sym_expr,
  [11774] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(567), 1,
      sym_expr,
  [11787] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(569), 1,
      sym_expr,
  [11800] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(571), 1,
      sym_expr,
  [11813] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(572), 1,
      sym_expr,
  [11826] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(573), 1,
      sym_expr,
  [11839] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(574), 1,
      sym_expr,
  [11852] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(575), 1,
      sym_expr,
  [11865] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(576), 1,
      sym_expr,
  [11878] = 4,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1450), 1,
      aux_sym_variable_name_token1,
    STATE(109), 1,
      sym_variable_name,
    STATE(577), 1,
      sym_expr,
  [11891] = 4,
    ACTIONS(1461), 1,
      anon_sym_LF,
    ACTIONS(1463), 1,
      sym_comment,
    STATE(163), 1,
      sym__comment_or_new_line,
    STATE(279), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11904] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1538), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [11912] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_quoted_string,
  [11922] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1540), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym_unicode_char,
  [11932] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_LBRACE,
    STATE(320), 1,
      sym_unicode_char,
  [11942] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_quoted_string,
  [11952] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym_quoted_string,
  [11962] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1544), 1,
      sym_digit,
    STATE(251), 1,
      aux_sym_integer_repeat1,
  [11972] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_quoted_string,
  [11982] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(530), 1,
      sym_quoted_string,
  [11992] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym_quoted_string,
  [12002] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_quoted_string,
  [12012] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_quoted_string,
  [12022] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1452), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12030] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1546), 1,
      sym_digit,
    STATE(273), 1,
      aux_sym_integer_repeat1,
  [12040] = 3,
    ACTIONS(1548), 1,
      anon_sym_LF,
    ACTIONS(1550), 1,
      aux_sym_file_value_token1,
    ACTIONS(1552), 1,
      sym_comment,
  [12050] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1554), 1,
      sym_digit,
    STATE(314), 1,
      aux_sym_integer_repeat1,
  [12060] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_quoted_string,
  [12070] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1556), 1,
      sym_digit,
    STATE(395), 1,
      aux_sym_integer_repeat1,
  [12080] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1558), 1,
      sym_digit,
    STATE(244), 1,
      aux_sym_integer_repeat1,
  [12090] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_LBRACE,
    STATE(286), 1,
      sym_unicode_char,
  [12100] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1562), 1,
      sym_digit,
    STATE(322), 1,
      aux_sym_integer_repeat1,
  [12110] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_LBRACE,
    STATE(296), 1,
      sym_unicode_char,
  [12120] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1566), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12128] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1498), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12136] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_LBRACE,
    STATE(261), 1,
      sym_unicode_char,
  [12146] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(144), 1,
      sym_quoted_string,
  [12156] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(147), 1,
      sym_quoted_string,
  [12166] = 3,
    ACTIONS(1570), 1,
      anon_sym_LF,
    ACTIONS(1572), 1,
      aux_sym_file_value_token1,
    ACTIONS(1574), 1,
      sym_comment,
  [12176] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_file_COMMA,
    STATE(398), 1,
      sym_file_value,
  [12186] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      sym_quoted_string,
  [12196] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_quoted_string,
  [12206] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      sym_quoted_string,
  [12216] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_quoted_string,
  [12226] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_quoted_string,
  [12236] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_quoted_string,
  [12246] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_LT,
    ACTIONS(1241), 1,
      anon_sym_LT_QMARK,
  [12256] = 3,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_COLON,
    ACTIONS(1580), 1,
      anon_sym_COLON2,
  [12266] = 2,
    ACTIONS(1582), 1,
      anon_sym_LF,
    ACTIONS(1584), 1,
      sym_comment,
  [12273] = 2,
    ACTIONS(1459), 1,
      anon_sym_LF,
    ACTIONS(1586), 1,
      sym_comment,
  [12280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      aux_sym_xml_prolog_tag_token1,
  [12287] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_SEMI,
  [12294] = 2,
    ACTIONS(1592), 1,
      anon_sym_LF,
    ACTIONS(1594), 1,
      sym_comment,
  [12301] = 2,
    ACTIONS(1596), 1,
      anon_sym_LF,
    ACTIONS(1598), 1,
      sym_comment,
  [12308] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1600), 1,
      anon_sym_GT,
  [12315] = 2,
    ACTIONS(1207), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_LF,
  [12322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      aux_sym_xml_close_tag_token1,
  [12329] = 2,
    ACTIONS(1604), 1,
      anon_sym_LF,
    ACTIONS(1606), 1,
      sym_comment,
  [12336] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1608), 1,
      sym_hexdigit,
  [12343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 1,
      aux_sym_key_string_escaped_char_token1,
  [12350] = 2,
    ACTIONS(1481), 1,
      anon_sym_LF,
    ACTIONS(1483), 1,
      sym_comment,
  [12357] = 2,
    ACTIONS(1273), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_LF,
  [12364] = 2,
    ACTIONS(1471), 1,
      anon_sym_LF,
    ACTIONS(1612), 1,
      sym_comment,
  [12371] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_COLON2,
  [12378] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_COLON2,
  [12385] = 2,
    ACTIONS(1465), 1,
      anon_sym_LF,
    ACTIONS(1618), 1,
      sym_comment,
  [12392] = 2,
    ACTIONS(1389), 1,
      anon_sym_LF,
    ACTIONS(1620), 1,
      sym_comment,
  [12399] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_COLON2,
  [12406] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_COLON2,
  [12413] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1626), 1,
      anon_sym_COLON2,
  [12420] = 2,
    ACTIONS(1628), 1,
      anon_sym_LF,
    ACTIONS(1630), 1,
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
      sym_hexdigit,
  [12441] = 2,
    ACTIONS(1636), 1,
      anon_sym_LF,
    ACTIONS(1638), 1,
      sym_comment,
  [12448] = 2,
    ACTIONS(1640), 1,
      anon_sym_LF,
    ACTIONS(1642), 1,
      sym_comment,
  [12455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      aux_sym_oneline_string_text_token2,
  [12462] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1646), 1,
      anon_sym_COLON2,
  [12469] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_COLON2,
  [12476] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1650), 1,
      sym_hexdigit,
  [12483] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1652), 1,
      sym_hexdigit,
  [12490] = 2,
    ACTIONS(1654), 1,
      anon_sym_LF,
    ACTIONS(1656), 1,
      sym_comment,
  [12497] = 2,
    ACTIONS(1397), 1,
      anon_sym_LF,
    ACTIONS(1658), 1,
      sym_comment,
  [12504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1660), 1,
      aux_sym_regex_escaped_char_token1,
  [12511] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_COLON,
  [12518] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1662), 1,
      anon_sym_SLASH,
  [12525] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_COLON2,
  [12532] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_COLON2,
  [12539] = 2,
    ACTIONS(1668), 1,
      anon_sym_LF,
    ACTIONS(1670), 1,
      sym_comment,
  [12546] = 2,
    ACTIONS(1502), 1,
      anon_sym_LF,
    ACTIONS(1504), 1,
      sym_comment,
  [12553] = 2,
    ACTIONS(1672), 1,
      anon_sym_LF,
    ACTIONS(1674), 1,
      sym_comment,
  [12560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_LF,
  [12567] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1678), 1,
      anon_sym_SEMI,
  [12574] = 2,
    ACTIONS(1680), 1,
      anon_sym_LF,
    ACTIONS(1682), 1,
      sym_comment,
  [12581] = 2,
    ACTIONS(1506), 1,
      anon_sym_LF,
    ACTIONS(1508), 1,
      sym_comment,
  [12588] = 2,
    ACTIONS(1322), 1,
      anon_sym_LF,
    ACTIONS(1395), 1,
      sym_comment,
  [12595] = 2,
    ACTIONS(1510), 1,
      anon_sym_LF,
    ACTIONS(1512), 1,
      sym_comment,
  [12602] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_EQ,
  [12609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      anon_sym_LF,
  [12616] = 2,
    ACTIONS(1688), 1,
      anon_sym_LF,
    ACTIONS(1690), 1,
      sym_comment,
  [12623] = 2,
    ACTIONS(1514), 1,
      anon_sym_LF,
    ACTIONS(1516), 1,
      sym_comment,
  [12630] = 2,
    ACTIONS(1444), 1,
      anon_sym_LF,
    ACTIONS(1692), 1,
      sym_comment,
  [12637] = 2,
    ACTIONS(1694), 1,
      anon_sym_LF,
    ACTIONS(1696), 1,
      sym_comment,
  [12644] = 2,
    ACTIONS(1526), 1,
      anon_sym_LF,
    ACTIONS(1528), 1,
      sym_comment,
  [12651] = 2,
    ACTIONS(1698), 1,
      anon_sym_LF,
    ACTIONS(1700), 1,
      sym_comment,
  [12658] = 2,
    ACTIONS(1702), 1,
      anon_sym_LF,
    ACTIONS(1704), 1,
      sym_comment,
  [12665] = 2,
    ACTIONS(1706), 1,
      anon_sym_LF,
    ACTIONS(1708), 1,
      sym_comment,
  [12672] = 2,
    ACTIONS(1710), 1,
      anon_sym_LF,
    ACTIONS(1712), 1,
      sym_comment,
  [12679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      aux_sym_variable_name_token2,
  [12686] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1716), 1,
      anon_sym_RBRACE_RBRACE,
  [12693] = 2,
    ACTIONS(1718), 1,
      anon_sym_LF,
    ACTIONS(1720), 1,
      sym_comment,
  [12700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1722), 1,
      aux_sym_key_string_escaped_char_token1,
  [12707] = 2,
    ACTIONS(1724), 1,
      anon_sym_LF,
    ACTIONS(1726), 1,
      sym_comment,
  [12714] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1728), 1,
      anon_sym_COLON2,
  [12721] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1730), 1,
      sym_hexdigit,
  [12728] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1732), 1,
      anon_sym_GT,
  [12735] = 2,
    ACTIONS(1473), 1,
      anon_sym_LF,
    ACTIONS(1734), 1,
      sym_comment,
  [12742] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1736), 1,
      anon_sym_QMARK_GT,
  [12749] = 2,
    ACTIONS(1570), 1,
      anon_sym_LF,
    ACTIONS(1574), 1,
      sym_comment,
  [12756] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1738), 1,
      anon_sym_QMARK_GT,
  [12763] = 2,
    ACTIONS(1740), 1,
      anon_sym_LF,
    ACTIONS(1742), 1,
      sym_comment,
  [12770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1744), 1,
      aux_sym_oneline_base64_token1,
  [12777] = 2,
    ACTIONS(1534), 1,
      anon_sym_LF,
    ACTIONS(1536), 1,
      sym_comment,
  [12784] = 2,
    ACTIONS(1746), 1,
      anon_sym_LF,
    ACTIONS(1748), 1,
      sym_comment,
  [12791] = 2,
    ACTIONS(1334), 1,
      anon_sym_LF,
    ACTIONS(1338), 1,
      sym_comment,
  [12798] = 2,
    ACTIONS(1750), 1,
      anon_sym_LF,
    ACTIONS(1752), 1,
      sym_comment,
  [12805] = 2,
    ACTIONS(1457), 1,
      anon_sym_LF,
    ACTIONS(1754), 1,
      sym_comment,
  [12812] = 2,
    ACTIONS(1756), 1,
      anon_sym_LF,
    ACTIONS(1758), 1,
      sym_comment,
  [12819] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1760), 1,
      anon_sym_COLON2,
  [12826] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1762), 1,
      anon_sym_COLON2,
  [12833] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1764), 1,
      anon_sym_GT,
  [12840] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1766), 1,
      anon_sym_COLON2,
  [12847] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1768), 1,
      anon_sym_SLASH,
  [12854] = 2,
    ACTIONS(1770), 1,
      anon_sym_LF,
    ACTIONS(1772), 1,
      sym_comment,
  [12861] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1774), 1,
      anon_sym_SEMI,
  [12868] = 2,
    ACTIONS(1776), 1,
      anon_sym_LF,
    ACTIONS(1778), 1,
      sym_comment,
  [12875] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1780), 1,
      anon_sym_RBRACE,
  [12882] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1782), 1,
      anon_sym_RBRACE_RBRACE,
  [12889] = 2,
    ACTIONS(1784), 1,
      anon_sym_LF,
    ACTIONS(1786), 1,
      sym_comment,
  [12896] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1788), 1,
      anon_sym_RBRACE,
  [12903] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1790), 1,
      anon_sym_COLON2,
  [12910] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1792), 1,
      anon_sym_RBRACE_RBRACE,
  [12917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1794), 1,
      aux_sym_key_string_escaped_char_token1,
  [12924] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1796), 1,
      anon_sym_RBRACE,
  [12931] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1798), 1,
      anon_sym_RBRACE_RBRACE,
  [12938] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1800), 1,
      anon_sym_RBRACE,
  [12945] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1802), 1,
      anon_sym_RBRACE_RBRACE,
  [12952] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1804), 1,
      anon_sym_RBRACE,
  [12959] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1806), 1,
      anon_sym_RBRACE_RBRACE,
  [12966] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1808), 1,
      anon_sym_RBRACE_RBRACE,
  [12973] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_RBRACE_RBRACE,
  [12980] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1812), 1,
      anon_sym_RBRACE_RBRACE,
  [12987] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1814), 1,
      anon_sym_RBRACE_RBRACE,
  [12994] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1816), 1,
      anon_sym_RBRACE_RBRACE,
  [13001] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_RBRACE_RBRACE,
  [13008] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1820), 1,
      anon_sym_COLON2,
  [13015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1822), 1,
      aux_sym_xml_prolog_tag_token1,
  [13022] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1824), 1,
      ts_builtin_sym_end,
  [13029] = 2,
    ACTIONS(1826), 1,
      anon_sym_LF,
    ACTIONS(1828), 1,
      sym_comment,
  [13036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1830), 1,
      aux_sym_xml_close_tag_token1,
  [13043] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1832), 1,
      sym_hexdigit,
  [13050] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1834), 1,
      sym_hexdigit,
  [13057] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1836), 1,
      sym_hexdigit,
  [13064] = 2,
    ACTIONS(1838), 1,
      anon_sym_LF,
    ACTIONS(1840), 1,
      sym_comment,
  [13071] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1842), 1,
      sym_hexdigit,
  [13078] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1844), 1,
      sym_hexdigit,
  [13085] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1846), 1,
      sym_hexdigit,
  [13092] = 2,
    ACTIONS(1848), 1,
      anon_sym_LF,
    ACTIONS(1850), 1,
      sym_comment,
  [13099] = 2,
    ACTIONS(1437), 1,
      anon_sym_LF,
    ACTIONS(1852), 1,
      sym_comment,
  [13106] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1854), 1,
      sym_hexdigit,
  [13113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1856), 1,
      aux_sym_xml_open_tag_token1,
  [13120] = 2,
    ACTIONS(1231), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_LF,
  [13127] = 2,
    ACTIONS(1858), 1,
      anon_sym_LF,
    ACTIONS(1860), 1,
      sym_comment,
  [13134] = 2,
    ACTIONS(1862), 1,
      anon_sym_LF,
    ACTIONS(1864), 1,
      sym_comment,
  [13141] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1866), 1,
      sym_hexdigit,
  [13148] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1868), 1,
      sym_hexdigit,
  [13155] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1870), 1,
      sym_hexdigit,
  [13162] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1872), 1,
      sym_hexdigit,
  [13169] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1874), 1,
      sym_hexdigit,
  [13176] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1876), 1,
      sym_hexdigit,
  [13183] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1878), 1,
      sym_hexdigit,
  [13190] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1880), 1,
      sym_hexdigit,
  [13197] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1882), 1,
      sym_hexdigit,
  [13204] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1884), 1,
      sym_hexdigit,
  [13211] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1886), 1,
      sym_hexdigit,
  [13218] = 2,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(1888), 1,
      sym_hexdigit,
  [13225] = 2,
    ACTIONS(1890), 1,
      anon_sym_LF,
    ACTIONS(1892), 1,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 121,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 354,
  [SMALL_STATE(18)] = 466,
  [SMALL_STATE(19)] = 537,
  [SMALL_STATE(20)] = 608,
  [SMALL_STATE(21)] = 692,
  [SMALL_STATE(22)] = 776,
  [SMALL_STATE(23)] = 840,
  [SMALL_STATE(24)] = 904,
  [SMALL_STATE(25)] = 988,
  [SMALL_STATE(26)] = 1052,
  [SMALL_STATE(27)] = 1116,
  [SMALL_STATE(28)] = 1180,
  [SMALL_STATE(29)] = 1244,
  [SMALL_STATE(30)] = 1308,
  [SMALL_STATE(31)] = 1372,
  [SMALL_STATE(32)] = 1436,
  [SMALL_STATE(33)] = 1500,
  [SMALL_STATE(34)] = 1564,
  [SMALL_STATE(35)] = 1628,
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
  [SMALL_STATE(54)] = 2997,
  [SMALL_STATE(55)] = 3061,
  [SMALL_STATE(56)] = 3116,
  [SMALL_STATE(57)] = 3171,
  [SMALL_STATE(58)] = 3231,
  [SMALL_STATE(59)] = 3291,
  [SMALL_STATE(60)] = 3351,
  [SMALL_STATE(61)] = 3411,
  [SMALL_STATE(62)] = 3483,
  [SMALL_STATE(63)] = 3536,
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
  [SMALL_STATE(80)] = 4453,
  [SMALL_STATE(81)] = 4501,
  [SMALL_STATE(82)] = 4549,
  [SMALL_STATE(83)] = 4597,
  [SMALL_STATE(84)] = 4645,
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
  [SMALL_STATE(97)] = 5274,
  [SMALL_STATE(98)] = 5320,
  [SMALL_STATE(99)] = 5372,
  [SMALL_STATE(100)] = 5424,
  [SMALL_STATE(101)] = 5466,
  [SMALL_STATE(102)] = 5496,
  [SMALL_STATE(103)] = 5538,
  [SMALL_STATE(104)] = 5584,
  [SMALL_STATE(105)] = 5614,
  [SMALL_STATE(106)] = 5644,
  [SMALL_STATE(107)] = 5674,
  [SMALL_STATE(108)] = 5720,
  [SMALL_STATE(109)] = 5750,
  [SMALL_STATE(110)] = 5796,
  [SMALL_STATE(111)] = 5835,
  [SMALL_STATE(112)] = 5867,
  [SMALL_STATE(113)] = 5899,
  [SMALL_STATE(114)] = 5935,
  [SMALL_STATE(115)] = 5986,
  [SMALL_STATE(116)] = 6021,
  [SMALL_STATE(117)] = 6072,
  [SMALL_STATE(118)] = 6123,
  [SMALL_STATE(119)] = 6156,
  [SMALL_STATE(120)] = 6191,
  [SMALL_STATE(121)] = 6241,
  [SMALL_STATE(122)] = 6283,
  [SMALL_STATE(123)] = 6331,
  [SMALL_STATE(124)] = 6356,
  [SMALL_STATE(125)] = 6381,
  [SMALL_STATE(126)] = 6406,
  [SMALL_STATE(127)] = 6431,
  [SMALL_STATE(128)] = 6478,
  [SMALL_STATE(129)] = 6503,
  [SMALL_STATE(130)] = 6550,
  [SMALL_STATE(131)] = 6575,
  [SMALL_STATE(132)] = 6600,
  [SMALL_STATE(133)] = 6629,
  [SMALL_STATE(134)] = 6658,
  [SMALL_STATE(135)] = 6705,
  [SMALL_STATE(136)] = 6752,
  [SMALL_STATE(137)] = 6796,
  [SMALL_STATE(138)] = 6820,
  [SMALL_STATE(139)] = 6843,
  [SMALL_STATE(140)] = 6866,
  [SMALL_STATE(141)] = 6909,
  [SMALL_STATE(142)] = 6932,
  [SMALL_STATE(143)] = 6975,
  [SMALL_STATE(144)] = 7018,
  [SMALL_STATE(145)] = 7041,
  [SMALL_STATE(146)] = 7064,
  [SMALL_STATE(147)] = 7087,
  [SMALL_STATE(148)] = 7110,
  [SMALL_STATE(149)] = 7133,
  [SMALL_STATE(150)] = 7156,
  [SMALL_STATE(151)] = 7179,
  [SMALL_STATE(152)] = 7202,
  [SMALL_STATE(153)] = 7225,
  [SMALL_STATE(154)] = 7248,
  [SMALL_STATE(155)] = 7271,
  [SMALL_STATE(156)] = 7294,
  [SMALL_STATE(157)] = 7317,
  [SMALL_STATE(158)] = 7340,
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
  [SMALL_STATE(169)] = 7733,
  [SMALL_STATE(170)] = 7762,
  [SMALL_STATE(171)] = 7791,
  [SMALL_STATE(172)] = 7818,
  [SMALL_STATE(173)] = 7847,
  [SMALL_STATE(174)] = 7876,
  [SMALL_STATE(175)] = 7905,
  [SMALL_STATE(176)] = 7934,
  [SMALL_STATE(177)] = 7962,
  [SMALL_STATE(178)] = 7988,
  [SMALL_STATE(179)] = 8014,
  [SMALL_STATE(180)] = 8042,
  [SMALL_STATE(181)] = 8070,
  [SMALL_STATE(182)] = 8096,
  [SMALL_STATE(183)] = 8122,
  [SMALL_STATE(184)] = 8150,
  [SMALL_STATE(185)] = 8178,
  [SMALL_STATE(186)] = 8204,
  [SMALL_STATE(187)] = 8232,
  [SMALL_STATE(188)] = 8258,
  [SMALL_STATE(189)] = 8284,
  [SMALL_STATE(190)] = 8310,
  [SMALL_STATE(191)] = 8336,
  [SMALL_STATE(192)] = 8362,
  [SMALL_STATE(193)] = 8387,
  [SMALL_STATE(194)] = 8412,
  [SMALL_STATE(195)] = 8437,
  [SMALL_STATE(196)] = 8460,
  [SMALL_STATE(197)] = 8483,
  [SMALL_STATE(198)] = 8508,
  [SMALL_STATE(199)] = 8533,
  [SMALL_STATE(200)] = 8558,
  [SMALL_STATE(201)] = 8577,
  [SMALL_STATE(202)] = 8601,
  [SMALL_STATE(203)] = 8625,
  [SMALL_STATE(204)] = 8649,
  [SMALL_STATE(205)] = 8673,
  [SMALL_STATE(206)] = 8695,
  [SMALL_STATE(207)] = 8711,
  [SMALL_STATE(208)] = 8731,
  [SMALL_STATE(209)] = 8751,
  [SMALL_STATE(210)] = 8771,
  [SMALL_STATE(211)] = 8789,
  [SMALL_STATE(212)] = 8811,
  [SMALL_STATE(213)] = 8835,
  [SMALL_STATE(214)] = 8853,
  [SMALL_STATE(215)] = 8869,
  [SMALL_STATE(216)] = 8887,
  [SMALL_STATE(217)] = 8911,
  [SMALL_STATE(218)] = 8929,
  [SMALL_STATE(219)] = 8946,
  [SMALL_STATE(220)] = 8967,
  [SMALL_STATE(221)] = 8986,
  [SMALL_STATE(222)] = 9003,
  [SMALL_STATE(223)] = 9028,
  [SMALL_STATE(224)] = 9047,
  [SMALL_STATE(225)] = 9066,
  [SMALL_STATE(226)] = 9083,
  [SMALL_STATE(227)] = 9100,
  [SMALL_STATE(228)] = 9121,
  [SMALL_STATE(229)] = 9142,
  [SMALL_STATE(230)] = 9163,
  [SMALL_STATE(231)] = 9188,
  [SMALL_STATE(232)] = 9207,
  [SMALL_STATE(233)] = 9221,
  [SMALL_STATE(234)] = 9235,
  [SMALL_STATE(235)] = 9255,
  [SMALL_STATE(236)] = 9273,
  [SMALL_STATE(237)] = 9293,
  [SMALL_STATE(238)] = 9307,
  [SMALL_STATE(239)] = 9321,
  [SMALL_STATE(240)] = 9335,
  [SMALL_STATE(241)] = 9349,
  [SMALL_STATE(242)] = 9369,
  [SMALL_STATE(243)] = 9387,
  [SMALL_STATE(244)] = 9405,
  [SMALL_STATE(245)] = 9421,
  [SMALL_STATE(246)] = 9435,
  [SMALL_STATE(247)] = 9449,
  [SMALL_STATE(248)] = 9469,
  [SMALL_STATE(249)] = 9489,
  [SMALL_STATE(250)] = 9503,
  [SMALL_STATE(251)] = 9517,
  [SMALL_STATE(252)] = 9533,
  [SMALL_STATE(253)] = 9551,
  [SMALL_STATE(254)] = 9565,
  [SMALL_STATE(255)] = 9585,
  [SMALL_STATE(256)] = 9601,
  [SMALL_STATE(257)] = 9621,
  [SMALL_STATE(258)] = 9639,
  [SMALL_STATE(259)] = 9659,
  [SMALL_STATE(260)] = 9675,
  [SMALL_STATE(261)] = 9687,
  [SMALL_STATE(262)] = 9701,
  [SMALL_STATE(263)] = 9716,
  [SMALL_STATE(264)] = 9729,
  [SMALL_STATE(265)] = 9742,
  [SMALL_STATE(266)] = 9757,
  [SMALL_STATE(267)] = 9772,
  [SMALL_STATE(268)] = 9789,
  [SMALL_STATE(269)] = 9804,
  [SMALL_STATE(270)] = 9817,
  [SMALL_STATE(271)] = 9828,
  [SMALL_STATE(272)] = 9843,
  [SMALL_STATE(273)] = 9858,
  [SMALL_STATE(274)] = 9873,
  [SMALL_STATE(275)] = 9886,
  [SMALL_STATE(276)] = 9901,
  [SMALL_STATE(277)] = 9918,
  [SMALL_STATE(278)] = 9931,
  [SMALL_STATE(279)] = 9944,
  [SMALL_STATE(280)] = 9959,
  [SMALL_STATE(281)] = 9974,
  [SMALL_STATE(282)] = 9987,
  [SMALL_STATE(283)] = 9999,
  [SMALL_STATE(284)] = 10009,
  [SMALL_STATE(285)] = 10019,
  [SMALL_STATE(286)] = 10033,
  [SMALL_STATE(287)] = 10043,
  [SMALL_STATE(288)] = 10053,
  [SMALL_STATE(289)] = 10067,
  [SMALL_STATE(290)] = 10081,
  [SMALL_STATE(291)] = 10097,
  [SMALL_STATE(292)] = 10113,
  [SMALL_STATE(293)] = 10127,
  [SMALL_STATE(294)] = 10143,
  [SMALL_STATE(295)] = 10159,
  [SMALL_STATE(296)] = 10173,
  [SMALL_STATE(297)] = 10183,
  [SMALL_STATE(298)] = 10199,
  [SMALL_STATE(299)] = 10215,
  [SMALL_STATE(300)] = 10231,
  [SMALL_STATE(301)] = 10247,
  [SMALL_STATE(302)] = 10257,
  [SMALL_STATE(303)] = 10269,
  [SMALL_STATE(304)] = 10279,
  [SMALL_STATE(305)] = 10289,
  [SMALL_STATE(306)] = 10301,
  [SMALL_STATE(307)] = 10313,
  [SMALL_STATE(308)] = 10323,
  [SMALL_STATE(309)] = 10333,
  [SMALL_STATE(310)] = 10347,
  [SMALL_STATE(311)] = 10361,
  [SMALL_STATE(312)] = 10369,
  [SMALL_STATE(313)] = 10379,
  [SMALL_STATE(314)] = 10393,
  [SMALL_STATE(315)] = 10407,
  [SMALL_STATE(316)] = 10419,
  [SMALL_STATE(317)] = 10431,
  [SMALL_STATE(318)] = 10441,
  [SMALL_STATE(319)] = 10451,
  [SMALL_STATE(320)] = 10465,
  [SMALL_STATE(321)] = 10477,
  [SMALL_STATE(322)] = 10491,
  [SMALL_STATE(323)] = 10505,
  [SMALL_STATE(324)] = 10517,
  [SMALL_STATE(325)] = 10529,
  [SMALL_STATE(326)] = 10539,
  [SMALL_STATE(327)] = 10553,
  [SMALL_STATE(328)] = 10567,
  [SMALL_STATE(329)] = 10577,
  [SMALL_STATE(330)] = 10587,
  [SMALL_STATE(331)] = 10595,
  [SMALL_STATE(332)] = 10611,
  [SMALL_STATE(333)] = 10627,
  [SMALL_STATE(334)] = 10643,
  [SMALL_STATE(335)] = 10659,
  [SMALL_STATE(336)] = 10673,
  [SMALL_STATE(337)] = 10689,
  [SMALL_STATE(338)] = 10705,
  [SMALL_STATE(339)] = 10719,
  [SMALL_STATE(340)] = 10735,
  [SMALL_STATE(341)] = 10749,
  [SMALL_STATE(342)] = 10759,
  [SMALL_STATE(343)] = 10772,
  [SMALL_STATE(344)] = 10785,
  [SMALL_STATE(345)] = 10796,
  [SMALL_STATE(346)] = 10805,
  [SMALL_STATE(347)] = 10814,
  [SMALL_STATE(348)] = 10827,
  [SMALL_STATE(349)] = 10840,
  [SMALL_STATE(350)] = 10853,
  [SMALL_STATE(351)] = 10866,
  [SMALL_STATE(352)] = 10879,
  [SMALL_STATE(353)] = 10892,
  [SMALL_STATE(354)] = 10905,
  [SMALL_STATE(355)] = 10916,
  [SMALL_STATE(356)] = 10929,
  [SMALL_STATE(357)] = 10942,
  [SMALL_STATE(358)] = 10951,
  [SMALL_STATE(359)] = 10962,
  [SMALL_STATE(360)] = 10975,
  [SMALL_STATE(361)] = 10988,
  [SMALL_STATE(362)] = 10997,
  [SMALL_STATE(363)] = 11008,
  [SMALL_STATE(364)] = 11021,
  [SMALL_STATE(365)] = 11034,
  [SMALL_STATE(366)] = 11047,
  [SMALL_STATE(367)] = 11058,
  [SMALL_STATE(368)] = 11071,
  [SMALL_STATE(369)] = 11084,
  [SMALL_STATE(370)] = 11093,
  [SMALL_STATE(371)] = 11102,
  [SMALL_STATE(372)] = 11115,
  [SMALL_STATE(373)] = 11124,
  [SMALL_STATE(374)] = 11137,
  [SMALL_STATE(375)] = 11146,
  [SMALL_STATE(376)] = 11155,
  [SMALL_STATE(377)] = 11168,
  [SMALL_STATE(378)] = 11177,
  [SMALL_STATE(379)] = 11190,
  [SMALL_STATE(380)] = 11201,
  [SMALL_STATE(381)] = 11214,
  [SMALL_STATE(382)] = 11227,
  [SMALL_STATE(383)] = 11240,
  [SMALL_STATE(384)] = 11253,
  [SMALL_STATE(385)] = 11266,
  [SMALL_STATE(386)] = 11279,
  [SMALL_STATE(387)] = 11292,
  [SMALL_STATE(388)] = 11305,
  [SMALL_STATE(389)] = 11318,
  [SMALL_STATE(390)] = 11331,
  [SMALL_STATE(391)] = 11344,
  [SMALL_STATE(392)] = 11355,
  [SMALL_STATE(393)] = 11368,
  [SMALL_STATE(394)] = 11379,
  [SMALL_STATE(395)] = 11392,
  [SMALL_STATE(396)] = 11405,
  [SMALL_STATE(397)] = 11416,
  [SMALL_STATE(398)] = 11429,
  [SMALL_STATE(399)] = 11442,
  [SMALL_STATE(400)] = 11451,
  [SMALL_STATE(401)] = 11464,
  [SMALL_STATE(402)] = 11477,
  [SMALL_STATE(403)] = 11490,
  [SMALL_STATE(404)] = 11503,
  [SMALL_STATE(405)] = 11516,
  [SMALL_STATE(406)] = 11529,
  [SMALL_STATE(407)] = 11542,
  [SMALL_STATE(408)] = 11555,
  [SMALL_STATE(409)] = 11568,
  [SMALL_STATE(410)] = 11581,
  [SMALL_STATE(411)] = 11594,
  [SMALL_STATE(412)] = 11605,
  [SMALL_STATE(413)] = 11618,
  [SMALL_STATE(414)] = 11631,
  [SMALL_STATE(415)] = 11644,
  [SMALL_STATE(416)] = 11657,
  [SMALL_STATE(417)] = 11670,
  [SMALL_STATE(418)] = 11683,
  [SMALL_STATE(419)] = 11696,
  [SMALL_STATE(420)] = 11709,
  [SMALL_STATE(421)] = 11722,
  [SMALL_STATE(422)] = 11735,
  [SMALL_STATE(423)] = 11748,
  [SMALL_STATE(424)] = 11761,
  [SMALL_STATE(425)] = 11774,
  [SMALL_STATE(426)] = 11787,
  [SMALL_STATE(427)] = 11800,
  [SMALL_STATE(428)] = 11813,
  [SMALL_STATE(429)] = 11826,
  [SMALL_STATE(430)] = 11839,
  [SMALL_STATE(431)] = 11852,
  [SMALL_STATE(432)] = 11865,
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
  [SMALL_STATE(448)] = 12030,
  [SMALL_STATE(449)] = 12040,
  [SMALL_STATE(450)] = 12050,
  [SMALL_STATE(451)] = 12060,
  [SMALL_STATE(452)] = 12070,
  [SMALL_STATE(453)] = 12080,
  [SMALL_STATE(454)] = 12090,
  [SMALL_STATE(455)] = 12100,
  [SMALL_STATE(456)] = 12110,
  [SMALL_STATE(457)] = 12120,
  [SMALL_STATE(458)] = 12128,
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
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(500),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(536),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(551),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(552),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(554),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2, 0, 0), SHIFT_REPEAT(578),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compressed_option, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_as_is_option, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proxy_option, 4, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(385),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(371),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(387),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(388),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(434),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(402),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(58),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(58),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(534),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2, 0, 0),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(353),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 0),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(133),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2, 0, 0), SHIFT_REPEAT(133),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 4, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 4, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [804] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(593),
  [807] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(579),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0),
  [812] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [815] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0),
  [847] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(428),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [878] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [881] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [887] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [895] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [909] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [912] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [943] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [960] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [963] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [966] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(431),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1, 0, 0),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [975] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0),
  [980] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1, 0, 0),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(534),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0),
  [1007] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(411),
  [1010] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [1013] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [1019] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(565),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [1025] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [1031] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [1054] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [1057] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1065] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [1068] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1, 0, 0),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1, 0, 0),
  [1081] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2, 0, 0),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 2, 0, 0),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0),
  [1089] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2, 0, 0),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [1103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2, 0, 0),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1, 0, 0),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1, 0, 0),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1, 0, 0),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0),
  [1157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [1160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1, 0, 0),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2, 0, 0),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0),
  [1192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [1195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0),
  [1219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [1222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1, 0, 0),
  [1231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3, 0, 0),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 3, 0, 0),
  [1239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3, 0, 0),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1, 0, 0),
  [1245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [1248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(565),
  [1251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [1254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(534),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6, 0, 0),
  [1263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2, 0, 0),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3, 0, 0),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [1277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(411),
  [1280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2, 0, 0),
  [1305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(506),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0),
  [1312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [1315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3, 0, 0),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2, 0, 0),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2, 0, 0),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2, 0, 0),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1, 0, 0),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1, 0, 0),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1, 0, 0),
  [1338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1, 0, 0),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [1347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2, 0, 0),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2, 0, 0),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2, 0, 0),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2, 0, 0),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0),
  [1360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3, 0, 0),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6, 0, 0),
  [1375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1, 0, 0),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [1379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2, 0, 0),
  [1381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2, 0, 0),
  [1385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2, 0, 0),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2, 0, 0),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2, 0, 0),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2, 0, 0),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3, 0, 0),
  [1403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1, 0, 0),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3, 0, 0),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3, 0, 0),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [1422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [1425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [1428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0),
  [1441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0),
  [1454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, 0, 0),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3, 0, 0),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, 0, 0),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2, 0, 0),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 0),
  [1483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 0),
  [1485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2, 0, 0),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, 0, 0),
  [1500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3, 0, 0),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1, 0, 0),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2, 0, 0),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2, 0, 0),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2, 0, 0),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2, 0, 0),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1, 0, 0),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2, 0, 0),
  [1550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2, 0, 0),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 0),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3, 0, 0),
  [1572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3, 0, 0),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2, 0, 0),
  [1586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3, 0, 0),
  [1588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4, 0, 0),
  [1594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4, 0, 0),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1, 0, 0),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1, 0, 0),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4, 0, 0),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, 0, 1),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3, 0, 0),
  [1620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2, 0, 0),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1, 0, 0),
  [1630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1, 0, 0),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1, 0, 0),
  [1638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1, 0, 0),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2, 0, 0),
  [1644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6, 0, 0),
  [1658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3, 0, 0),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2, 0, 0),
  [1670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2, 0, 0),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2, 0, 0),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1, 0, 0),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2, 0, 0),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2, 0, 0),
  [1692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2, 0, 0),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [1700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2, 0, 0),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2, 0, 0),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2, 0, 0),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3, 0, 0),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2, 0, 0),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4, 0, 0),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [1742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2, 0, 0),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2, 0, 0),
  [1754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3, 0, 0),
  [1756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1, 0, 0),
  [1758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1, 0, 0),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4, 0, 0),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3, 0, 0),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4, 0, 0),
  [1786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4, 0, 0),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1824] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2, 0, 0),
  [1828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2, 0, 0),
  [1830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3, 0, 0),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [1850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [1852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2, 0, 0),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3, 0, 0),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5, 0, 0),
  [1892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5, 0, 0),
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
