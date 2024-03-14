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
#define STATE_COUNT 656
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
  [53] = 23,
  [54] = 54,
  [55] = 21,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 21,
  [61] = 23,
  [62] = 62,
  [63] = 63,
  [64] = 39,
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
  [107] = 21,
  [108] = 23,
  [109] = 63,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 22,
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
  [128] = 57,
  [129] = 129,
  [130] = 130,
  [131] = 58,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 62,
  [136] = 123,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 138,
  [143] = 141,
  [144] = 144,
  [145] = 139,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 88,
  [153] = 84,
  [154] = 80,
  [155] = 74,
  [156] = 82,
  [157] = 83,
  [158] = 87,
  [159] = 85,
  [160] = 86,
  [161] = 89,
  [162] = 91,
  [163] = 76,
  [164] = 79,
  [165] = 90,
  [166] = 81,
  [167] = 77,
  [168] = 71,
  [169] = 73,
  [170] = 78,
  [171] = 94,
  [172] = 96,
  [173] = 101,
  [174] = 100,
  [175] = 99,
  [176] = 105,
  [177] = 92,
  [178] = 98,
  [179] = 72,
  [180] = 70,
  [181] = 95,
  [182] = 97,
  [183] = 93,
  [184] = 106,
  [185] = 104,
  [186] = 102,
  [187] = 187,
  [188] = 188,
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
  [199] = 192,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 193,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 201,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 210,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 218,
  [226] = 226,
  [227] = 227,
  [228] = 223,
  [229] = 227,
  [230] = 218,
  [231] = 210,
  [232] = 221,
  [233] = 224,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 217,
  [241] = 241,
  [242] = 214,
  [243] = 243,
  [244] = 244,
  [245] = 57,
  [246] = 246,
  [247] = 58,
  [248] = 248,
  [249] = 237,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 250,
  [255] = 251,
  [256] = 256,
  [257] = 253,
  [258] = 258,
  [259] = 259,
  [260] = 256,
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
  [273] = 258,
  [274] = 274,
  [275] = 275,
  [276] = 251,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 267,
  [281] = 274,
  [282] = 282,
  [283] = 283,
  [284] = 258,
  [285] = 267,
  [286] = 279,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 62,
  [291] = 291,
  [292] = 292,
  [293] = 250,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 268,
  [298] = 298,
  [299] = 295,
  [300] = 252,
  [301] = 301,
  [302] = 54,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 295,
  [307] = 298,
  [308] = 303,
  [309] = 294,
  [310] = 23,
  [311] = 21,
  [312] = 261,
  [313] = 270,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 268,
  [319] = 268,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 303,
  [331] = 331,
  [332] = 332,
  [333] = 294,
  [334] = 334,
  [335] = 335,
  [336] = 271,
  [337] = 337,
  [338] = 304,
  [339] = 332,
  [340] = 340,
  [341] = 341,
  [342] = 335,
  [343] = 343,
  [344] = 344,
  [345] = 268,
  [346] = 269,
  [347] = 298,
  [348] = 348,
  [349] = 322,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 270,
  [355] = 355,
  [356] = 343,
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
  [369] = 344,
  [370] = 270,
  [371] = 371,
  [372] = 268,
  [373] = 268,
  [374] = 374,
  [375] = 268,
  [376] = 268,
  [377] = 377,
  [378] = 304,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 270,
  [383] = 268,
  [384] = 384,
  [385] = 385,
  [386] = 268,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 268,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 402,
  [407] = 399,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 388,
  [418] = 418,
  [419] = 419,
  [420] = 420,
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
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 393,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 401,
  [444] = 444,
  [445] = 395,
  [446] = 400,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 433,
  [453] = 388,
  [454] = 388,
  [455] = 455,
  [456] = 456,
  [457] = 351,
  [458] = 458,
  [459] = 459,
  [460] = 388,
  [461] = 403,
  [462] = 462,
  [463] = 400,
  [464] = 464,
  [465] = 393,
  [466] = 466,
  [467] = 388,
  [468] = 388,
  [469] = 469,
  [470] = 449,
  [471] = 388,
  [472] = 472,
  [473] = 473,
  [474] = 448,
  [475] = 475,
  [476] = 388,
  [477] = 388,
  [478] = 388,
  [479] = 479,
  [480] = 388,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 484,
  [486] = 484,
  [487] = 484,
  [488] = 488,
  [489] = 488,
  [490] = 488,
  [491] = 491,
  [492] = 488,
  [493] = 491,
  [494] = 491,
  [495] = 491,
  [496] = 491,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 503,
  [506] = 503,
  [507] = 503,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 510,
  [515] = 508,
  [516] = 513,
  [517] = 512,
  [518] = 511,
  [519] = 519,
  [520] = 520,
  [521] = 484,
  [522] = 503,
  [523] = 523,
  [524] = 524,
  [525] = 509,
  [526] = 520,
  [527] = 483,
  [528] = 287,
  [529] = 519,
  [530] = 530,
  [531] = 488,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
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
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 458,
  [575] = 459,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 546,
  [580] = 580,
  [581] = 553,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 462,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 469,
  [591] = 450,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 567,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 558,
  [610] = 275,
  [611] = 546,
  [612] = 553,
  [613] = 558,
  [614] = 546,
  [615] = 558,
  [616] = 546,
  [617] = 558,
  [618] = 546,
  [619] = 546,
  [620] = 546,
  [621] = 546,
  [622] = 546,
  [623] = 546,
  [624] = 546,
  [625] = 625,
  [626] = 548,
  [627] = 627,
  [628] = 628,
  [629] = 627,
  [630] = 340,
  [631] = 631,
  [632] = 632,
  [633] = 291,
  [634] = 634,
  [635] = 429,
  [636] = 636,
  [637] = 353,
  [638] = 638,
  [639] = 431,
  [640] = 640,
  [641] = 641,
  [642] = 472,
  [643] = 475,
  [644] = 600,
  [645] = 288,
  [646] = 646,
  [647] = 432,
  [648] = 648,
  [649] = 649,
  [650] = 589,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
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
      if (lookahead == '+') ADVANCE(992);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == '-') ADVANCE(993);
      if (lookahead == '.') ADVANCE(987);
      if (lookahead == '/') ADVANCE(995);
      if (lookahead == ':') ADVANCE(633);
      if (lookahead == ';') ADVANCE(636);
      if (lookahead == '<') ADVANCE(676);
      if (lookahead == '=') ADVANCE(652);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(991);
      if (lookahead == '[') ADVANCE(949);
      if (lookahead == '\\') ADVANCE(890);
      if (lookahead == ']') ADVANCE(954);
      if (lookahead == '`') ADVANCE(901);
      if (lookahead == 'b') ADVANCE(718);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == 't') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(723);
      if (lookahead == '{') ADVANCE(940);
      if (lookahead == '}') ADVANCE(946);
      if (('a' <= lookahead && lookahead <= 'd')) ADVANCE(963);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(963);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(511)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '.') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(990);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'h') ADVANCE(447);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'x') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
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
      if (lookahead == '{') ADVANCE(942);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(944);
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
          lookahead == 65279) ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(944);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '`') ADVANCE(901);
      if (lookahead == '{') ADVANCE(940);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(936);
      if (lookahead != 0) ADVANCE(938);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '{') ADVANCE(897);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(893);
      if (lookahead != 0) ADVANCE(893);
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
      if (lookahead == '#') ADVANCE(998);
      if (lookahead == '/') ADVANCE(995);
      if (lookahead == '\\') ADVANCE(714);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(997);
      if (lookahead != 0) ADVANCE(999);
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
      if (lookahead == '#') ADVANCE(1002);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(1001);
      if (lookahead != 0) ADVANCE(1000);
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
      if (lookahead == '+') ADVANCE(992);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == '-') ADVANCE(993);
      if (lookahead == '/') ADVANCE(995);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == '<') ADVANCE(678);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == '[') ADVANCE(948);
      if (lookahead == ']') ADVANCE(954);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '+') ADVANCE(992);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == '-') ADVANCE(993);
      if (lookahead == '/') ADVANCE(995);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == '<') ADVANCE(678);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == '[') ADVANCE(948);
      if (lookahead == ']') ADVANCE(954);
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
      if (lookahead == '{') ADVANCE(939);
      if (lookahead == '}') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '"') ADVANCE(891);
      if (lookahead == '#') ADVANCE(892);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == '.') ADVANCE(987);
      if (lookahead == '<') ADVANCE(678);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == 'E') ADVANCE(990);
      if (lookahead == ']') ADVANCE(954);
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(989);
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
      if (lookahead == '{') ADVANCE(939);
      if (lookahead == '}') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(61);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == '.') ADVANCE(987);
      if (lookahead == '<') ADVANCE(678);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == 'E') ADVANCE(990);
      if (lookahead == ']') ADVANCE(954);
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(989);
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
      if (lookahead == '{') ADVANCE(939);
      if (lookahead == '}') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(898);
      if (lookahead == ',') ADVANCE(945);
      if (lookahead == ';') ADVANCE(636);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
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
      if (lookahead == ',') ADVANCE(945);
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
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == '.') ADVANCE(987);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == '<') ADVANCE(679);
      if (lookahead == '=') ADVANCE(651);
      if (lookahead == '>') ADVANCE(671);
      if (lookahead == 'E') ADVANCE(990);
      if (lookahead == ']') ADVANCE(954);
      if (lookahead == 'b') ADVANCE(320);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead == 'j') ADVANCE(415);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(372);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(353);
      if (lookahead == '}') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
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
      if (lookahead == '#') ADVANCE(958);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == '{') ADVANCE(957);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(956);
      if (lookahead != 0) ADVANCE(955);
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
      if (lookahead == '{') ADVANCE(942);
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
          lookahead == 65279) ADVANCE(943);
      if (lookahead != 0) ADVANCE(944);
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
          lookahead == 65279) ADVANCE(943);
      if (lookahead != 0) ADVANCE(944);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == ';') ADVANCE(636);
      if (lookahead == '}') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(986);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(963);
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
      if (lookahead == '#') ADVANCE(698);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(700);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(694);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(696);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(907);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(905);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(702);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '>') ADVANCE(704);
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
      if (lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(981);
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
      if (lookahead == 'e') ADVANCE(973);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(978);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(976);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(966);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(968);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(969);
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
      if (lookahead == 'h') ADVANCE(975);
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
      if (lookahead == 'l') ADVANCE(983);
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
      if (lookahead == 't') ADVANCE(965);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(977);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(970);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(974);
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
      if (lookahead == 'w') ADVANCE(971);
      END_STATE();
    case 489:
      if (lookahead == 'w') ADVANCE(972);
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
      if (lookahead == '{') ADVANCE(959);
      END_STATE();
    case 501:
      if (lookahead == '}') ADVANCE(962);
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
      if (lookahead == '.') ADVANCE(987);
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
      if (lookahead == '[') ADVANCE(950);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(504)
      END_STATE();
    case 504:
      if (eof) ADVANCE(512);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '"') ADVANCE(709);
      if (lookahead == '#') ADVANCE(502);
      if (lookahead == '.') ADVANCE(987);
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
      if (lookahead == '[') ADVANCE(950);
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
      if (lookahead == '{') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
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
      if (lookahead == '[') ADVANCE(951);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
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
      if (lookahead == '[') ADVANCE(951);
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
      if (lookahead == '{') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
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
      if (lookahead == '[') ADVANCE(951);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '{') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
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
      if (lookahead == '[') ADVANCE(950);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '{') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
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
      if (lookahead == '[') ADVANCE(952);
      if (lookahead == '\\') ADVANCE(890);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(867);
      if (lookahead == 'f') ADVANCE(784);
      if (lookahead == 'h') ADVANCE(794);
      if (lookahead == 'n') ADVANCE(860);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '{') ADVANCE(940);
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
      if (lookahead == '[') ADVANCE(953);
      if (lookahead == '\\') ADVANCE(890);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(867);
      if (lookahead == 'f') ADVANCE(784);
      if (lookahead == 'h') ADVANCE(794);
      if (lookahead == 'n') ADVANCE(860);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '{') ADVANCE(940);
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
      if (lookahead == '+') ADVANCE(992);
      if (lookahead == ',') ADVANCE(947);
      if (lookahead == '-') ADVANCE(993);
      if (lookahead == '.') ADVANCE(987);
      if (lookahead == '/') ADVANCE(995);
      if (lookahead == ':') ADVANCE(634);
      if (lookahead == ';') ADVANCE(636);
      if (lookahead == '<') ADVANCE(676);
      if (lookahead == '=') ADVANCE(652);
      if (lookahead == '>') ADVANCE(672);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(991);
      if (lookahead == '[') ADVANCE(949);
      if (lookahead == '\\') ADVANCE(714);
      if (lookahead == ']') ADVANCE(954);
      if (lookahead == '`') ADVANCE(901);
      if (lookahead == 'b') ADVANCE(718);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'n') ADVANCE(720);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == 't') ADVANCE(722);
      if (lookahead == 'u') ADVANCE(723);
      if (lookahead == '{') ADVANCE(939);
      if (lookahead == '}') ADVANCE(946);
      if (('a' <= lookahead && lookahead <= 'd')) ADVANCE(963);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(963);
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
          lookahead == 65279) ADVANCE(941);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(515);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(936);
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
      if (lookahead == '{') ADVANCE(961);
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
      if (lookahead == 'e') ADVANCE(980);
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
      if (lookahead == 'e') ADVANCE(982);
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
      if (lookahead == 'l') ADVANCE(984);
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
      if (lookahead == '{') ADVANCE(959);
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
      if (lookahead == '{') ADVANCE(959);
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
      if (lookahead == '\n') ADVANCE(994);
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
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '#') ADVANCE(937);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(938);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead == '\n') ADVANCE(938);
      if (lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '{') ADVANCE(1);
      if (lookahead != 0) ADVANCE(937);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym__multiline_string_text_token1);
      if (lookahead != 0 &&
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(941);
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
      if (sym_filename_text_character_set_1(lookahead)) ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
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
      if (lookahead == 'A') ADVANCE(410);
      if (lookahead == 'B') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(130);
      if (lookahead == 'F') ADVANCE(312);
      if (lookahead == 'M') ADVANCE(470);
      if (lookahead == 'O') ADVANCE(346);
      if (lookahead == 'Q') ADVANCE(471);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'A') ADVANCE(410);
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'B') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(319);
      if (lookahead == 'F') ADVANCE(312);
      if (lookahead == 'M') ADVANCE(470);
      if (lookahead == 'O') ADVANCE(346);
      if (lookahead == 'Q') ADVANCE(471);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_3(lookahead)) ADVANCE(886);
      if (lookahead == 'B') ADVANCE(869);
      if (lookahead == 'C') ADVANCE(825);
      if (lookahead == 'F') ADVANCE(824);
      if (lookahead == 'M') ADVANCE(862);
      if (lookahead == 'O') ADVANCE(827);
      if (lookahead == 'Q') ADVANCE(859);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (sym_key_string_text_character_set_4(lookahead)) ADVANCE(886);
      if (lookahead == 'A') ADVANCE(850);
      if (lookahead == 'C') ADVANCE(875);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '#') ADVANCE(958);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(955);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead == '{') ADVANCE(959);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_json_string_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
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
          lookahead != '\\') ADVANCE(713);
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
      ACCEPT_TOKEN(anon_sym_htmlEscape);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_htmlUnescape);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_toInt);
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
      ACCEPT_TOKEN(anon_sym_nth);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_replace);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_split);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_toDate);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 984:
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
    case 985:
      ACCEPT_TOKEN(aux_sym_digit_token1);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_hexdigit_token1);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'q') ADVANCE(479);
      if (lookahead == 'x') ADVANCE(251);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_E);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(608);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(996);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '#') ADVANCE(998);
      if (aux_sym_oneline_string_text_token1_character_set_1(lookahead)) ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(999);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(996);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_regex_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(999);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_regex_escaped_char_token1);
      if (lookahead == '#') ADVANCE(1002);
      if (aux_sym_oneline_string_text_token1_character_set_1(lookahead)) ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1000);
      END_STATE();
    case 1002:
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
  [11] = {.lex_state = 505},
  [12] = {.lex_state = 510},
  [13] = {.lex_state = 510},
  [14] = {.lex_state = 505},
  [15] = {.lex_state = 505},
  [16] = {.lex_state = 503},
  [17] = {.lex_state = 503},
  [18] = {.lex_state = 503},
  [19] = {.lex_state = 503},
  [20] = {.lex_state = 503},
  [21] = {.lex_state = 505},
  [22] = {.lex_state = 19},
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
  [53] = {.lex_state = 503},
  [54] = {.lex_state = 509},
  [55] = {.lex_state = 503},
  [56] = {.lex_state = 503},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 503},
  [60] = {.lex_state = 509},
  [61] = {.lex_state = 509},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 509},
  [64] = {.lex_state = 510},
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
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 503},
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
  [115] = {.lex_state = 505},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 505},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 503},
  [121] = {.lex_state = 505},
  [122] = {.lex_state = 505},
  [123] = {.lex_state = 505},
  [124] = {.lex_state = 505},
  [125] = {.lex_state = 505},
  [126] = {.lex_state = 503},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 25},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 503},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 503},
  [137] = {.lex_state = 503},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 503},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 503},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 503},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 503},
  [150] = {.lex_state = 30},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 505},
  [153] = {.lex_state = 505},
  [154] = {.lex_state = 505},
  [155] = {.lex_state = 505},
  [156] = {.lex_state = 505},
  [157] = {.lex_state = 505},
  [158] = {.lex_state = 505},
  [159] = {.lex_state = 505},
  [160] = {.lex_state = 505},
  [161] = {.lex_state = 505},
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
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 38},
  [196] = {.lex_state = 27},
  [197] = {.lex_state = 27},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 27},
  [202] = {.lex_state = 11},
  [203] = {.lex_state = 11},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 27},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 27},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 38},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 32},
  [213] = {.lex_state = 38},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 32},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 38},
  [219] = {.lex_state = 38},
  [220] = {.lex_state = 39},
  [221] = {.lex_state = 28},
  [222] = {.lex_state = 29},
  [223] = {.lex_state = 28},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 32},
  [228] = {.lex_state = 28},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 39},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 28},
  [233] = {.lex_state = 32},
  [234] = {.lex_state = 11},
  [235] = {.lex_state = 27},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 24},
  [238] = {.lex_state = 24},
  [239] = {.lex_state = 18},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 27},
  [245] = {.lex_state = 26},
  [246] = {.lex_state = 11},
  [247] = {.lex_state = 26},
  [248] = {.lex_state = 24},
  [249] = {.lex_state = 24},
  [250] = {.lex_state = 26},
  [251] = {.lex_state = 26},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 26},
  [254] = {.lex_state = 26},
  [255] = {.lex_state = 26},
  [256] = {.lex_state = 15},
  [257] = {.lex_state = 26},
  [258] = {.lex_state = 38},
  [259] = {.lex_state = 13},
  [260] = {.lex_state = 15},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 13},
  [263] = {.lex_state = 19},
  [264] = {.lex_state = 19},
  [265] = {.lex_state = 19},
  [266] = {.lex_state = 19},
  [267] = {.lex_state = 38},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 19},
  [273] = {.lex_state = 39},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 15},
  [279] = {.lex_state = 32},
  [280] = {.lex_state = 39},
  [281] = {.lex_state = 32},
  [282] = {.lex_state = 15},
  [283] = {.lex_state = 19},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 24},
  [290] = {.lex_state = 26},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 26},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 19},
  [295] = {.lex_state = 19},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 26},
  [299] = {.lex_state = 19},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 503},
  [302] = {.lex_state = 503},
  [303] = {.lex_state = 19},
  [304] = {.lex_state = 38},
  [305] = {.lex_state = 503},
  [306] = {.lex_state = 19},
  [307] = {.lex_state = 26},
  [308] = {.lex_state = 26},
  [309] = {.lex_state = 26},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 11},
  [315] = {.lex_state = 11},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 11},
  [318] = {.lex_state = 38},
  [319] = {.lex_state = 11},
  [320] = {.lex_state = 11},
  [321] = {.lex_state = 27},
  [322] = {.lex_state = 32},
  [323] = {.lex_state = 13},
  [324] = {.lex_state = 13},
  [325] = {.lex_state = 503},
  [326] = {.lex_state = 19},
  [327] = {.lex_state = 503},
  [328] = {.lex_state = 503},
  [329] = {.lex_state = 503},
  [330] = {.lex_state = 503},
  [331] = {.lex_state = 34},
  [332] = {.lex_state = 19},
  [333] = {.lex_state = 503},
  [334] = {.lex_state = 34},
  [335] = {.lex_state = 19},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 503},
  [338] = {.lex_state = 39},
  [339] = {.lex_state = 19},
  [340] = {.lex_state = 26},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 19},
  [343] = {.lex_state = 19},
  [344] = {.lex_state = 19},
  [345] = {.lex_state = 4},
  [346] = {.lex_state = 4},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 28},
  [349] = {.lex_state = 9},
  [350] = {.lex_state = 27},
  [351] = {.lex_state = 28},
  [352] = {.lex_state = 28},
  [353] = {.lex_state = 26},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 13},
  [356] = {.lex_state = 19},
  [357] = {.lex_state = 19},
  [358] = {.lex_state = 503},
  [359] = {.lex_state = 503},
  [360] = {.lex_state = 28},
  [361] = {.lex_state = 503},
  [362] = {.lex_state = 503},
  [363] = {.lex_state = 28},
  [364] = {.lex_state = 503},
  [365] = {.lex_state = 503},
  [366] = {.lex_state = 503},
  [367] = {.lex_state = 503},
  [368] = {.lex_state = 27},
  [369] = {.lex_state = 19},
  [370] = {.lex_state = 13},
  [371] = {.lex_state = 26},
  [372] = {.lex_state = 9},
  [373] = {.lex_state = 39},
  [374] = {.lex_state = 34},
  [375] = {.lex_state = 32},
  [376] = {.lex_state = 27},
  [377] = {.lex_state = 503},
  [378] = {.lex_state = 7},
  [379] = {.lex_state = 503},
  [380] = {.lex_state = 19},
  [381] = {.lex_state = 27},
  [382] = {.lex_state = 27},
  [383] = {.lex_state = 13},
  [384] = {.lex_state = 19},
  [385] = {.lex_state = 19},
  [386] = {.lex_state = 28},
  [387] = {.lex_state = 503},
  [388] = {.lex_state = 37},
  [389] = {.lex_state = 503},
  [390] = {.lex_state = 19},
  [391] = {.lex_state = 503},
  [392] = {.lex_state = 37},
  [393] = {.lex_state = 19},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 19},
  [396] = {.lex_state = 503},
  [397] = {.lex_state = 26},
  [398] = {.lex_state = 6},
  [399] = {.lex_state = 25},
  [400] = {.lex_state = 19},
  [401] = {.lex_state = 26},
  [402] = {.lex_state = 503},
  [403] = {.lex_state = 503},
  [404] = {.lex_state = 503},
  [405] = {.lex_state = 19},
  [406] = {.lex_state = 503},
  [407] = {.lex_state = 25},
  [408] = {.lex_state = 503},
  [409] = {.lex_state = 503},
  [410] = {.lex_state = 503},
  [411] = {.lex_state = 503},
  [412] = {.lex_state = 503},
  [413] = {.lex_state = 503},
  [414] = {.lex_state = 19},
  [415] = {.lex_state = 503},
  [416] = {.lex_state = 503},
  [417] = {.lex_state = 37},
  [418] = {.lex_state = 503},
  [419] = {.lex_state = 503},
  [420] = {.lex_state = 503},
  [421] = {.lex_state = 503},
  [422] = {.lex_state = 503},
  [423] = {.lex_state = 503},
  [424] = {.lex_state = 503},
  [425] = {.lex_state = 503},
  [426] = {.lex_state = 503},
  [427] = {.lex_state = 503},
  [428] = {.lex_state = 503},
  [429] = {.lex_state = 26},
  [430] = {.lex_state = 503},
  [431] = {.lex_state = 26},
  [432] = {.lex_state = 26},
  [433] = {.lex_state = 26},
  [434] = {.lex_state = 19},
  [435] = {.lex_state = 503},
  [436] = {.lex_state = 503},
  [437] = {.lex_state = 503},
  [438] = {.lex_state = 503},
  [439] = {.lex_state = 19},
  [440] = {.lex_state = 503},
  [441] = {.lex_state = 6},
  [442] = {.lex_state = 15},
  [443] = {.lex_state = 26},
  [444] = {.lex_state = 503},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 19},
  [447] = {.lex_state = 503},
  [448] = {.lex_state = 26},
  [449] = {.lex_state = 19},
  [450] = {.lex_state = 26},
  [451] = {.lex_state = 19},
  [452] = {.lex_state = 26},
  [453] = {.lex_state = 37},
  [454] = {.lex_state = 37},
  [455] = {.lex_state = 19},
  [456] = {.lex_state = 19},
  [457] = {.lex_state = 34},
  [458] = {.lex_state = 26},
  [459] = {.lex_state = 26},
  [460] = {.lex_state = 37},
  [461] = {.lex_state = 503},
  [462] = {.lex_state = 26},
  [463] = {.lex_state = 19},
  [464] = {.lex_state = 19},
  [465] = {.lex_state = 19},
  [466] = {.lex_state = 503},
  [467] = {.lex_state = 37},
  [468] = {.lex_state = 37},
  [469] = {.lex_state = 26},
  [470] = {.lex_state = 19},
  [471] = {.lex_state = 37},
  [472] = {.lex_state = 26},
  [473] = {.lex_state = 26},
  [474] = {.lex_state = 26},
  [475] = {.lex_state = 26},
  [476] = {.lex_state = 37},
  [477] = {.lex_state = 37},
  [478] = {.lex_state = 37},
  [479] = {.lex_state = 30},
  [480] = {.lex_state = 37},
  [481] = {.lex_state = 26},
  [482] = {.lex_state = 19},
  [483] = {.lex_state = 21},
  [484] = {.lex_state = 34},
  [485] = {.lex_state = 34},
  [486] = {.lex_state = 34},
  [487] = {.lex_state = 34},
  [488] = {.lex_state = 34},
  [489] = {.lex_state = 34},
  [490] = {.lex_state = 34},
  [491] = {.lex_state = 34},
  [492] = {.lex_state = 34},
  [493] = {.lex_state = 34},
  [494] = {.lex_state = 34},
  [495] = {.lex_state = 34},
  [496] = {.lex_state = 34},
  [497] = {.lex_state = 19},
  [498] = {.lex_state = 34},
  [499] = {.lex_state = 21},
  [500] = {.lex_state = 26},
  [501] = {.lex_state = 19},
  [502] = {.lex_state = 21},
  [503] = {.lex_state = 34},
  [504] = {.lex_state = 34},
  [505] = {.lex_state = 34},
  [506] = {.lex_state = 34},
  [507] = {.lex_state = 34},
  [508] = {.lex_state = 19},
  [509] = {.lex_state = 19},
  [510] = {.lex_state = 19},
  [511] = {.lex_state = 19},
  [512] = {.lex_state = 19},
  [513] = {.lex_state = 19},
  [514] = {.lex_state = 19},
  [515] = {.lex_state = 19},
  [516] = {.lex_state = 19},
  [517] = {.lex_state = 19},
  [518] = {.lex_state = 19},
  [519] = {.lex_state = 19},
  [520] = {.lex_state = 19},
  [521] = {.lex_state = 34},
  [522] = {.lex_state = 34},
  [523] = {.lex_state = 21},
  [524] = {.lex_state = 34},
  [525] = {.lex_state = 19},
  [526] = {.lex_state = 19},
  [527] = {.lex_state = 21},
  [528] = {.lex_state = 26},
  [529] = {.lex_state = 19},
  [530] = {.lex_state = 34},
  [531] = {.lex_state = 34},
  [532] = {.lex_state = 30},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 503},
  [536] = {.lex_state = 503},
  [537] = {.lex_state = 503},
  [538] = {.lex_state = 503},
  [539] = {.lex_state = 503},
  [540] = {.lex_state = 503},
  [541] = {.lex_state = 503},
  [542] = {.lex_state = 503},
  [543] = {.lex_state = 503},
  [544] = {.lex_state = 964},
  [545] = {.lex_state = 503},
  [546] = {.lex_state = 19},
  [547] = {.lex_state = 40},
  [548] = {.lex_state = 41},
  [549] = {.lex_state = 503},
  [550] = {.lex_state = 42},
  [551] = {.lex_state = 16},
  [552] = {.lex_state = 17},
  [553] = {.lex_state = 21},
  [554] = {.lex_state = 503},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 503},
  [557] = {.lex_state = 503},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 26},
  [560] = {.lex_state = 503},
  [561] = {.lex_state = 503},
  [562] = {.lex_state = 503},
  [563] = {.lex_state = 503},
  [564] = {.lex_state = 503},
  [565] = {.lex_state = 503},
  [566] = {.lex_state = 503},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 503},
  [569] = {.lex_state = 503},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 503},
  [572] = {.lex_state = 503},
  [573] = {.lex_state = 503},
  [574] = {.lex_state = 503},
  [575] = {.lex_state = 503},
  [576] = {.lex_state = 503},
  [577] = {.lex_state = 503},
  [578] = {.lex_state = 19},
  [579] = {.lex_state = 19},
  [580] = {.lex_state = 503},
  [581] = {.lex_state = 21},
  [582] = {.lex_state = 19},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 19},
  [585] = {.lex_state = 19},
  [586] = {.lex_state = 503},
  [587] = {.lex_state = 19},
  [588] = {.lex_state = 503},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 503},
  [591] = {.lex_state = 503},
  [592] = {.lex_state = 26},
  [593] = {.lex_state = 19},
  [594] = {.lex_state = 503},
  [595] = {.lex_state = 503},
  [596] = {.lex_state = 19},
  [597] = {.lex_state = 19},
  [598] = {.lex_state = 19},
  [599] = {.lex_state = 503},
  [600] = {.lex_state = 26},
  [601] = {.lex_state = 503},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 503},
  [604] = {.lex_state = 19},
  [605] = {.lex_state = 19},
  [606] = {.lex_state = 19},
  [607] = {.lex_state = 19},
  [608] = {.lex_state = 19},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 503},
  [611] = {.lex_state = 19},
  [612] = {.lex_state = 21},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 19},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 19},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 19},
  [619] = {.lex_state = 19},
  [620] = {.lex_state = 19},
  [621] = {.lex_state = 19},
  [622] = {.lex_state = 19},
  [623] = {.lex_state = 19},
  [624] = {.lex_state = 19},
  [625] = {.lex_state = 19},
  [626] = {.lex_state = 41},
  [627] = {.lex_state = 43},
  [628] = {.lex_state = 19},
  [629] = {.lex_state = 43},
  [630] = {.lex_state = 503},
  [631] = {.lex_state = 503},
  [632] = {.lex_state = 503},
  [633] = {.lex_state = 503},
  [634] = {.lex_state = 503},
  [635] = {.lex_state = 503},
  [636] = {.lex_state = 503},
  [637] = {.lex_state = 503},
  [638] = {.lex_state = 503},
  [639] = {.lex_state = 503},
  [640] = {.lex_state = 503},
  [641] = {.lex_state = 503},
  [642] = {.lex_state = 503},
  [643] = {.lex_state = 503},
  [644] = {.lex_state = 26},
  [645] = {.lex_state = 503},
  [646] = {.lex_state = 503},
  [647] = {.lex_state = 503},
  [648] = {.lex_state = 503},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 503},
  [652] = {.lex_state = 503},
  [653] = {.lex_state = 503},
  [654] = {.lex_state = 503},
  [655] = {.lex_state = 503},
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
    [sym_hurl_file] = STATE(534),
    [sym_entry] = STATE(120),
    [sym__comment_or_new_line] = STATE(305),
    [sym_request] = STATE(118),
    [sym_method] = STATE(188),
    [aux_sym_hurl_file_repeat1] = STATE(120),
    [aux_sym_hurl_file_repeat2] = STATE(305),
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
    [sym_body] = STATE(124),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(69),
    [sym_query_string_params_section] = STATE(69),
    [sym_form_params_section] = STATE(69),
    [sym_multipart_form_data_section] = STATE(69),
    [sym_cookies_section] = STATE(69),
    [sym_options_section] = STATE(69),
    [sym_key_value] = STATE(402),
    [sym_bytes] = STATE(403),
    [sym_xml] = STATE(576),
    [sym_xml_prolog_tag] = STATE(292),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(139),
    [sym_oneline_base64] = STATE(576),
    [sym_oneline_file] = STATE(576),
    [sym_oneline_hex] = STATE(576),
    [sym_key_string] = STATE(583),
    [sym_key_string_content] = STATE(218),
    [sym_key_string_escaped_char] = STATE(258),
    [sym_oneline_string] = STATE(576),
    [sym_multiline_string] = STATE(576),
    [sym_json_value] = STATE(576),
    [sym_json_object] = STATE(586),
    [sym_json_array] = STATE(586),
    [sym_json_string] = STATE(586),
    [sym_json_number] = STATE(586),
    [sym_template] = STATE(316),
    [sym_boolean] = STATE(586),
    [sym_null] = STATE(586),
    [sym_integer] = STATE(293),
    [sym_digit] = STATE(128),
    [aux_sym_hurl_file_repeat2] = STATE(54),
    [aux_sym__comment_or_new_line_repeat1] = STATE(61),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(292),
    [aux_sym_key_string_repeat1] = STATE(218),
    [aux_sym_key_string_content_repeat1] = STATE(258),
    [aux_sym_integer_repeat1] = STATE(128),
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
    [sym__comment_or_new_line] = STATE(54),
    [sym_header] = STATE(5),
    [sym_body] = STATE(122),
    [sym_request_section] = STATE(10),
    [sym_basic_auth_section] = STATE(69),
    [sym_query_string_params_section] = STATE(69),
    [sym_form_params_section] = STATE(69),
    [sym_multipart_form_data_section] = STATE(69),
    [sym_cookies_section] = STATE(69),
    [sym_options_section] = STATE(69),
    [sym_key_value] = STATE(402),
    [sym_bytes] = STATE(403),
    [sym_xml] = STATE(576),
    [sym_xml_prolog_tag] = STATE(292),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(139),
    [sym_oneline_base64] = STATE(576),
    [sym_oneline_file] = STATE(576),
    [sym_oneline_hex] = STATE(576),
    [sym_key_string] = STATE(583),
    [sym_key_string_content] = STATE(218),
    [sym_key_string_escaped_char] = STATE(258),
    [sym_oneline_string] = STATE(576),
    [sym_multiline_string] = STATE(576),
    [sym_json_value] = STATE(576),
    [sym_json_object] = STATE(586),
    [sym_json_array] = STATE(586),
    [sym_json_string] = STATE(586),
    [sym_json_number] = STATE(586),
    [sym_template] = STATE(316),
    [sym_boolean] = STATE(586),
    [sym_null] = STATE(586),
    [sym_integer] = STATE(293),
    [sym_digit] = STATE(128),
    [aux_sym_hurl_file_repeat2] = STATE(54),
    [aux_sym__comment_or_new_line_repeat1] = STATE(61),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat2] = STATE(10),
    [aux_sym_xml_repeat1] = STATE(292),
    [aux_sym_key_string_repeat1] = STATE(218),
    [aux_sym_key_string_content_repeat1] = STATE(258),
    [aux_sym_integer_repeat1] = STATE(128),
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
    [sym_header] = STATE(39),
    [sym_body] = STATE(121),
    [sym_request_section] = STATE(9),
    [sym_basic_auth_section] = STATE(69),
    [sym_query_string_params_section] = STATE(69),
    [sym_form_params_section] = STATE(69),
    [sym_multipart_form_data_section] = STATE(69),
    [sym_cookies_section] = STATE(69),
    [sym_options_section] = STATE(69),
    [sym_key_value] = STATE(402),
    [sym_bytes] = STATE(403),
    [sym_xml] = STATE(576),
    [sym_xml_prolog_tag] = STATE(292),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(139),
    [sym_oneline_base64] = STATE(576),
    [sym_oneline_file] = STATE(576),
    [sym_oneline_hex] = STATE(576),
    [sym_key_string] = STATE(583),
    [sym_key_string_content] = STATE(218),
    [sym_key_string_escaped_char] = STATE(258),
    [sym_oneline_string] = STATE(576),
    [sym_multiline_string] = STATE(576),
    [sym_json_value] = STATE(576),
    [sym_json_object] = STATE(586),
    [sym_json_array] = STATE(586),
    [sym_json_string] = STATE(586),
    [sym_json_number] = STATE(586),
    [sym_template] = STATE(316),
    [sym_boolean] = STATE(586),
    [sym_null] = STATE(586),
    [sym_integer] = STATE(293),
    [sym_digit] = STATE(128),
    [aux_sym_request_repeat1] = STATE(39),
    [aux_sym_request_repeat2] = STATE(9),
    [aux_sym_xml_repeat1] = STATE(292),
    [aux_sym_key_string_repeat1] = STATE(218),
    [aux_sym_key_string_content_repeat1] = STATE(258),
    [aux_sym_integer_repeat1] = STATE(128),
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
    [sym_header] = STATE(39),
    [sym_body] = STATE(124),
    [sym_request_section] = STATE(8),
    [sym_basic_auth_section] = STATE(69),
    [sym_query_string_params_section] = STATE(69),
    [sym_form_params_section] = STATE(69),
    [sym_multipart_form_data_section] = STATE(69),
    [sym_cookies_section] = STATE(69),
    [sym_options_section] = STATE(69),
    [sym_key_value] = STATE(402),
    [sym_bytes] = STATE(403),
    [sym_xml] = STATE(576),
    [sym_xml_prolog_tag] = STATE(292),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(139),
    [sym_oneline_base64] = STATE(576),
    [sym_oneline_file] = STATE(576),
    [sym_oneline_hex] = STATE(576),
    [sym_key_string] = STATE(583),
    [sym_key_string_content] = STATE(218),
    [sym_key_string_escaped_char] = STATE(258),
    [sym_oneline_string] = STATE(576),
    [sym_multiline_string] = STATE(576),
    [sym_json_value] = STATE(576),
    [sym_json_object] = STATE(586),
    [sym_json_array] = STATE(586),
    [sym_json_string] = STATE(586),
    [sym_json_number] = STATE(586),
    [sym_template] = STATE(316),
    [sym_boolean] = STATE(586),
    [sym_null] = STATE(586),
    [sym_integer] = STATE(293),
    [sym_digit] = STATE(128),
    [aux_sym_request_repeat1] = STATE(39),
    [aux_sym_request_repeat2] = STATE(8),
    [aux_sym_xml_repeat1] = STATE(292),
    [aux_sym_key_string_repeat1] = STATE(218),
    [aux_sym_key_string_content_repeat1] = STATE(258),
    [aux_sym_integer_repeat1] = STATE(128),
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
    [sym_predicate] = STATE(391),
    [sym_predicate_func] = STATE(561),
    [sym_equal_predicate] = STATE(560),
    [sym_not_equal_predicate] = STATE(560),
    [sym_greater_predicate] = STATE(560),
    [sym_greater_or_equal_predicate] = STATE(560),
    [sym_less_predicate] = STATE(560),
    [sym_less_or_equal_predicate] = STATE(560),
    [sym_start_with_predicate] = STATE(560),
    [sym_end_with_predicate] = STATE(560),
    [sym_contain_predicate] = STATE(560),
    [sym_match_predicate] = STATE(560),
    [sym_exist_predicate] = STATE(560),
    [sym_include_predicate] = STATE(560),
    [sym_integer_predicate] = STATE(560),
    [sym_float_predicate] = STATE(560),
    [sym_boolean_predicate] = STATE(560),
    [sym_string_predicate] = STATE(560),
    [sym_collection_predicate] = STATE(560),
    [sym_filter] = STATE(7),
    [sym_regex_filter] = STATE(76),
    [sym_count_filter] = STATE(76),
    [sym_url_encode_filter] = STATE(76),
    [sym_url_decode_filter] = STATE(76),
    [sym_html_escape_filter] = STATE(76),
    [sym_html_unescape_filter] = STATE(76),
    [sym_to_int_filter] = STATE(76),
    [sym_days_after_now_filter] = STATE(76),
    [sym_days_before_now_filter] = STATE(76),
    [sym_decode_filter] = STATE(76),
    [sym_format_filter] = STATE(76),
    [sym_nth_filter] = STATE(76),
    [sym_replace_filter] = STATE(76),
    [sym_split_filter] = STATE(76),
    [sym_to_date_filter] = STATE(76),
    [sym_xpath_filter] = STATE(76),
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
    [sym_predicate] = STATE(437),
    [sym_predicate_func] = STATE(561),
    [sym_equal_predicate] = STATE(560),
    [sym_not_equal_predicate] = STATE(560),
    [sym_greater_predicate] = STATE(560),
    [sym_greater_or_equal_predicate] = STATE(560),
    [sym_less_predicate] = STATE(560),
    [sym_less_or_equal_predicate] = STATE(560),
    [sym_start_with_predicate] = STATE(560),
    [sym_end_with_predicate] = STATE(560),
    [sym_contain_predicate] = STATE(560),
    [sym_match_predicate] = STATE(560),
    [sym_exist_predicate] = STATE(560),
    [sym_include_predicate] = STATE(560),
    [sym_integer_predicate] = STATE(560),
    [sym_float_predicate] = STATE(560),
    [sym_boolean_predicate] = STATE(560),
    [sym_string_predicate] = STATE(560),
    [sym_collection_predicate] = STATE(560),
    [sym_filter] = STATE(22),
    [sym_regex_filter] = STATE(76),
    [sym_count_filter] = STATE(76),
    [sym_url_encode_filter] = STATE(76),
    [sym_url_decode_filter] = STATE(76),
    [sym_html_escape_filter] = STATE(76),
    [sym_html_unescape_filter] = STATE(76),
    [sym_to_int_filter] = STATE(76),
    [sym_days_after_now_filter] = STATE(76),
    [sym_days_before_now_filter] = STATE(76),
    [sym_decode_filter] = STATE(76),
    [sym_format_filter] = STATE(76),
    [sym_nth_filter] = STATE(76),
    [sym_replace_filter] = STATE(76),
    [sym_split_filter] = STATE(76),
    [sym_to_date_filter] = STATE(76),
    [sym_xpath_filter] = STATE(76),
    [aux_sym_capture_repeat1] = STATE(22),
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
    [sym_body] = STATE(121),
    [sym_request_section] = STATE(52),
    [sym_basic_auth_section] = STATE(69),
    [sym_query_string_params_section] = STATE(69),
    [sym_form_params_section] = STATE(69),
    [sym_multipart_form_data_section] = STATE(69),
    [sym_cookies_section] = STATE(69),
    [sym_options_section] = STATE(69),
    [sym_bytes] = STATE(403),
    [sym_xml] = STATE(576),
    [sym_xml_prolog_tag] = STATE(292),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(139),
    [sym_oneline_base64] = STATE(576),
    [sym_oneline_file] = STATE(576),
    [sym_oneline_hex] = STATE(576),
    [sym_oneline_string] = STATE(576),
    [sym_multiline_string] = STATE(576),
    [sym_json_value] = STATE(576),
    [sym_json_object] = STATE(586),
    [sym_json_array] = STATE(586),
    [sym_json_string] = STATE(586),
    [sym_json_number] = STATE(586),
    [sym_template] = STATE(586),
    [sym_boolean] = STATE(586),
    [sym_null] = STATE(586),
    [sym_integer] = STATE(293),
    [sym_digit] = STATE(128),
    [aux_sym_request_repeat2] = STATE(52),
    [aux_sym_xml_repeat1] = STATE(292),
    [aux_sym_integer_repeat1] = STATE(128),
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
  [9] = {
    [sym_body] = STATE(125),
    [sym_request_section] = STATE(52),
    [sym_basic_auth_section] = STATE(69),
    [sym_query_string_params_section] = STATE(69),
    [sym_form_params_section] = STATE(69),
    [sym_multipart_form_data_section] = STATE(69),
    [sym_cookies_section] = STATE(69),
    [sym_options_section] = STATE(69),
    [sym_bytes] = STATE(403),
    [sym_xml] = STATE(576),
    [sym_xml_prolog_tag] = STATE(292),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(139),
    [sym_oneline_base64] = STATE(576),
    [sym_oneline_file] = STATE(576),
    [sym_oneline_hex] = STATE(576),
    [sym_oneline_string] = STATE(576),
    [sym_multiline_string] = STATE(576),
    [sym_json_value] = STATE(576),
    [sym_json_object] = STATE(586),
    [sym_json_array] = STATE(586),
    [sym_json_string] = STATE(586),
    [sym_json_number] = STATE(586),
    [sym_template] = STATE(586),
    [sym_boolean] = STATE(586),
    [sym_null] = STATE(586),
    [sym_integer] = STATE(293),
    [sym_digit] = STATE(128),
    [aux_sym_request_repeat2] = STATE(52),
    [aux_sym_xml_repeat1] = STATE(292),
    [aux_sym_integer_repeat1] = STATE(128),
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
    [sym_body] = STATE(124),
    [sym_request_section] = STATE(52),
    [sym_basic_auth_section] = STATE(69),
    [sym_query_string_params_section] = STATE(69),
    [sym_form_params_section] = STATE(69),
    [sym_multipart_form_data_section] = STATE(69),
    [sym_cookies_section] = STATE(69),
    [sym_options_section] = STATE(69),
    [sym_bytes] = STATE(403),
    [sym_xml] = STATE(576),
    [sym_xml_prolog_tag] = STATE(292),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(139),
    [sym_oneline_base64] = STATE(576),
    [sym_oneline_file] = STATE(576),
    [sym_oneline_hex] = STATE(576),
    [sym_oneline_string] = STATE(576),
    [sym_multiline_string] = STATE(576),
    [sym_json_value] = STATE(576),
    [sym_json_object] = STATE(586),
    [sym_json_array] = STATE(586),
    [sym_json_string] = STATE(586),
    [sym_json_number] = STATE(586),
    [sym_template] = STATE(586),
    [sym_boolean] = STATE(586),
    [sym_null] = STATE(586),
    [sym_integer] = STATE(293),
    [sym_digit] = STATE(128),
    [aux_sym_request_repeat2] = STATE(52),
    [aux_sym_xml_repeat1] = STATE(292),
    [aux_sym_integer_repeat1] = STATE(128),
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
  [11] = {
    [sym_option] = STATE(11),
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
    [aux_sym_options_section_repeat1] = STATE(11),
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
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(147),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(147),
    [anon_sym_HTTP_SLASH2] = ACTIONS(147),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(147),
    [anon_sym_HTTP] = ACTIONS(147),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(147),
    [anon_sym_file_COMMA] = ACTIONS(147),
    [anon_sym_cacert] = ACTIONS(149),
    [anon_sym_compressed] = ACTIONS(152),
    [anon_sym_location] = ACTIONS(155),
    [anon_sym_insecure] = ACTIONS(158),
    [anon_sym_max_DASHredirs] = ACTIONS(161),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(164),
    [anon_sym_proxy] = ACTIONS(167),
    [anon_sym_retry] = ACTIONS(170),
    [anon_sym_retry_DASHinterval] = ACTIONS(173),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(176),
    [anon_sym_variable] = ACTIONS(179),
    [anon_sym_verbose] = ACTIONS(182),
    [anon_sym_very_DASHverbose] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_LT_QMARK] = ACTIONS(147),
    [anon_sym_base64_COMMA] = ACTIONS(147),
    [anon_sym_hex_COMMA] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [aux_sym_oneline_string_token1] = ACTIONS(147),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_null] = ACTIONS(147),
    [aux_sym_digit_token1] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
  },
  [12] = {
    [sym_header] = STATE(13),
    [sym_body] = STATE(137),
    [sym_response_section] = STATE(20),
    [sym_captures_section] = STATE(114),
    [sym_asserts_section] = STATE(114),
    [sym_key_value] = STATE(406),
    [sym_bytes] = STATE(461),
    [sym_xml] = STATE(576),
    [sym_xml_prolog_tag] = STATE(292),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(139),
    [sym_oneline_base64] = STATE(576),
    [sym_oneline_file] = STATE(576),
    [sym_oneline_hex] = STATE(576),
    [sym_key_string] = STATE(583),
    [sym_key_string_content] = STATE(218),
    [sym_key_string_escaped_char] = STATE(258),
    [sym_oneline_string] = STATE(576),
    [sym_multiline_string] = STATE(576),
    [sym_json_value] = STATE(576),
    [sym_json_object] = STATE(586),
    [sym_json_array] = STATE(586),
    [sym_json_string] = STATE(586),
    [sym_json_number] = STATE(586),
    [sym_template] = STATE(316),
    [sym_boolean] = STATE(586),
    [sym_null] = STATE(586),
    [sym_integer] = STATE(293),
    [sym_digit] = STATE(128),
    [aux_sym_request_repeat1] = STATE(13),
    [aux_sym_response_repeat1] = STATE(20),
    [aux_sym_xml_repeat1] = STATE(292),
    [aux_sym_key_string_repeat1] = STATE(218),
    [aux_sym_key_string_content_repeat1] = STATE(258),
    [aux_sym_integer_repeat1] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(188),
    [anon_sym_GET] = ACTIONS(190),
    [anon_sym_HEAD] = ACTIONS(190),
    [anon_sym_POST] = ACTIONS(190),
    [anon_sym_PUT] = ACTIONS(190),
    [anon_sym_DELETE] = ACTIONS(190),
    [anon_sym_CONNECT] = ACTIONS(190),
    [anon_sym_OPTIONS] = ACTIONS(190),
    [anon_sym_TRACE] = ACTIONS(190),
    [anon_sym_PATCH] = ACTIONS(190),
    [anon_sym_LINK] = ACTIONS(190),
    [anon_sym_UNLINK] = ACTIONS(190),
    [anon_sym_PURGE] = ACTIONS(190),
    [anon_sym_LOCK] = ACTIONS(190),
    [anon_sym_UNLOCK] = ACTIONS(190),
    [anon_sym_PROPFIND] = ACTIONS(190),
    [anon_sym_VIEW] = ACTIONS(190),
    [aux_sym_method_token1] = ACTIONS(190),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(192),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(194),
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
    [sym_comment] = ACTIONS(190),
  },
  [13] = {
    [sym_header] = STATE(64),
    [sym_body] = STATE(146),
    [sym_response_section] = STATE(19),
    [sym_captures_section] = STATE(114),
    [sym_asserts_section] = STATE(114),
    [sym_key_value] = STATE(406),
    [sym_bytes] = STATE(461),
    [sym_xml] = STATE(576),
    [sym_xml_prolog_tag] = STATE(292),
    [sym_xml_tag] = STATE(577),
    [sym_xml_open_tag] = STATE(139),
    [sym_oneline_base64] = STATE(576),
    [sym_oneline_file] = STATE(576),
    [sym_oneline_hex] = STATE(576),
    [sym_key_string] = STATE(583),
    [sym_key_string_content] = STATE(218),
    [sym_key_string_escaped_char] = STATE(258),
    [sym_oneline_string] = STATE(576),
    [sym_multiline_string] = STATE(576),
    [sym_json_value] = STATE(576),
    [sym_json_object] = STATE(586),
    [sym_json_array] = STATE(586),
    [sym_json_string] = STATE(586),
    [sym_json_number] = STATE(586),
    [sym_template] = STATE(316),
    [sym_boolean] = STATE(586),
    [sym_null] = STATE(586),
    [sym_integer] = STATE(293),
    [sym_digit] = STATE(128),
    [aux_sym_request_repeat1] = STATE(64),
    [aux_sym_response_repeat1] = STATE(19),
    [aux_sym_xml_repeat1] = STATE(292),
    [aux_sym_key_string_repeat1] = STATE(218),
    [aux_sym_key_string_content_repeat1] = STATE(258),
    [aux_sym_integer_repeat1] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_LF] = ACTIONS(196),
    [anon_sym_GET] = ACTIONS(198),
    [anon_sym_HEAD] = ACTIONS(198),
    [anon_sym_POST] = ACTIONS(198),
    [anon_sym_PUT] = ACTIONS(198),
    [anon_sym_DELETE] = ACTIONS(198),
    [anon_sym_CONNECT] = ACTIONS(198),
    [anon_sym_OPTIONS] = ACTIONS(198),
    [anon_sym_TRACE] = ACTIONS(198),
    [anon_sym_PATCH] = ACTIONS(198),
    [anon_sym_LINK] = ACTIONS(198),
    [anon_sym_UNLINK] = ACTIONS(198),
    [anon_sym_PURGE] = ACTIONS(198),
    [anon_sym_LOCK] = ACTIONS(198),
    [anon_sym_UNLOCK] = ACTIONS(198),
    [anon_sym_PROPFIND] = ACTIONS(198),
    [anon_sym_VIEW] = ACTIONS(198),
    [aux_sym_method_token1] = ACTIONS(198),
    [anon_sym_LBRACKCaptures_RBRACK] = ACTIONS(192),
    [anon_sym_LBRACKAsserts_RBRACK] = ACTIONS(194),
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
    [sym_comment] = ACTIONS(198),
  },
  [14] = {
    [sym_option] = STATE(11),
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
    [aux_sym_options_section_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_LF] = ACTIONS(200),
    [anon_sym_GET] = ACTIONS(202),
    [anon_sym_HEAD] = ACTIONS(202),
    [anon_sym_POST] = ACTIONS(202),
    [anon_sym_PUT] = ACTIONS(202),
    [anon_sym_DELETE] = ACTIONS(202),
    [anon_sym_CONNECT] = ACTIONS(202),
    [anon_sym_OPTIONS] = ACTIONS(202),
    [anon_sym_TRACE] = ACTIONS(202),
    [anon_sym_PATCH] = ACTIONS(202),
    [anon_sym_LINK] = ACTIONS(202),
    [anon_sym_UNLINK] = ACTIONS(202),
    [anon_sym_PURGE] = ACTIONS(202),
    [anon_sym_LOCK] = ACTIONS(202),
    [anon_sym_UNLOCK] = ACTIONS(202),
    [anon_sym_PROPFIND] = ACTIONS(202),
    [anon_sym_VIEW] = ACTIONS(202),
    [aux_sym_method_token1] = ACTIONS(202),
    [anon_sym_HTTP_SLASH1_DOT0] = ACTIONS(202),
    [anon_sym_HTTP_SLASH1_DOT1] = ACTIONS(202),
    [anon_sym_HTTP_SLASH2] = ACTIONS(202),
    [anon_sym_HTTP_SLASH_STAR] = ACTIONS(202),
    [anon_sym_HTTP] = ACTIONS(202),
    [anon_sym_LBRACKBasicAuth_RBRACK] = ACTIONS(202),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(202),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(202),
    [anon_sym_LBRACKMultipartFormData_RBRACK] = ACTIONS(202),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(202),
    [anon_sym_LBRACKOptions_RBRACK] = ACTIONS(202),
    [anon_sym_file_COMMA] = ACTIONS(202),
    [anon_sym_cacert] = ACTIONS(204),
    [anon_sym_compressed] = ACTIONS(206),
    [anon_sym_location] = ACTIONS(208),
    [anon_sym_insecure] = ACTIONS(210),
    [anon_sym_max_DASHredirs] = ACTIONS(212),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(214),
    [anon_sym_proxy] = ACTIONS(216),
    [anon_sym_retry] = ACTIONS(218),
    [anon_sym_retry_DASHinterval] = ACTIONS(220),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(222),
    [anon_sym_variable] = ACTIONS(224),
    [anon_sym_verbose] = ACTIONS(226),
    [anon_sym_very_DASHverbose] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(202),
    [anon_sym_LT_QMARK] = ACTIONS(202),
    [anon_sym_base64_COMMA] = ACTIONS(202),
    [anon_sym_hex_COMMA] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [aux_sym_oneline_string_token1] = ACTIONS(202),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(200),
    [anon_sym_true] = ACTIONS(202),
    [anon_sym_false] = ACTIONS(202),
    [anon_sym_null] = ACTIONS(202),
    [aux_sym_digit_token1] = ACTIONS(202),
    [sym_comment] = ACTIONS(202),
  },
  [15] = {
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
    [anon_sym_cacert] = ACTIONS(204),
    [anon_sym_compressed] = ACTIONS(206),
    [anon_sym_location] = ACTIONS(208),
    [anon_sym_insecure] = ACTIONS(210),
    [anon_sym_max_DASHredirs] = ACTIONS(212),
    [anon_sym_path_DASHas_DASHis] = ACTIONS(214),
    [anon_sym_proxy] = ACTIONS(216),
    [anon_sym_retry] = ACTIONS(218),
    [anon_sym_retry_DASHinterval] = ACTIONS(220),
    [anon_sym_retry_DASHmax_DASHcount] = ACTIONS(222),
    [anon_sym_variable] = ACTIONS(224),
    [anon_sym_verbose] = ACTIONS(226),
    [anon_sym_very_DASHverbose] = ACTIONS(228),
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
    [sym_assert] = STATE(18),
    [sym_query] = STATE(6),
    [sym_status_query] = STATE(95),
    [sym_url_query] = STATE(95),
    [sym_header_query] = STATE(95),
    [sym_cookie_query] = STATE(95),
    [sym_body_query] = STATE(95),
    [sym_xpath_query] = STATE(95),
    [sym_jsonpath_query] = STATE(95),
    [sym_regex_query] = STATE(95),
    [sym_variable_query] = STATE(95),
    [sym_duration_query] = STATE(95),
    [sym_sha256_query] = STATE(95),
    [sym_md5_query] = STATE(95),
    [sym_bytes_query] = STATE(95),
    [aux_sym_asserts_section_repeat1] = STATE(18),
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
    [sym_status_query] = STATE(95),
    [sym_url_query] = STATE(95),
    [sym_header_query] = STATE(95),
    [sym_cookie_query] = STATE(95),
    [sym_body_query] = STATE(95),
    [sym_xpath_query] = STATE(95),
    [sym_jsonpath_query] = STATE(95),
    [sym_regex_query] = STATE(95),
    [sym_variable_query] = STATE(95),
    [sym_duration_query] = STATE(95),
    [sym_sha256_query] = STATE(95),
    [sym_md5_query] = STATE(95),
    [sym_bytes_query] = STATE(95),
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
    [sym_assert] = STATE(17),
    [sym_query] = STATE(6),
    [sym_status_query] = STATE(95),
    [sym_url_query] = STATE(95),
    [sym_header_query] = STATE(95),
    [sym_cookie_query] = STATE(95),
    [sym_body_query] = STATE(95),
    [sym_xpath_query] = STATE(95),
    [sym_jsonpath_query] = STATE(95),
    [sym_regex_query] = STATE(95),
    [sym_variable_query] = STATE(95),
    [sym_duration_query] = STATE(95),
    [sym_sha256_query] = STATE(95),
    [sym_md5_query] = STATE(95),
    [sym_bytes_query] = STATE(95),
    [aux_sym_asserts_section_repeat1] = STATE(17),
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
    ACTIONS(192), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(194), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(139), 1,
      sym_xml_open_tag,
    STATE(140), 1,
      sym_body,
    STATE(293), 1,
      sym_integer,
    STATE(461), 1,
      sym_bytes,
    STATE(577), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(103), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(114), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(292), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(576), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(586), 7,
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
    ACTIONS(192), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(194), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(139), 1,
      sym_xml_open_tag,
    STATE(146), 1,
      sym_body,
    STATE(293), 1,
      sym_integer,
    STATE(461), 1,
      sym_bytes,
    STATE(577), 1,
      sym_xml_tag,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(103), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(114), 2,
      sym_captures_section,
      sym_asserts_section,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(292), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
    STATE(576), 7,
      sym_xml,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_oneline_string,
      sym_multiline_string,
      sym_json_value,
    STATE(586), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
    ACTIONS(198), 18,
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
  [246] = 5,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(322), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 55,
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
  [317] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_xpath,
    ACTIONS(328), 1,
      anon_sym_regex,
    ACTIONS(335), 1,
      anon_sym_count,
    ACTIONS(338), 1,
      anon_sym_urlEncode,
    ACTIONS(341), 1,
      anon_sym_urlDecode,
    ACTIONS(344), 1,
      anon_sym_htmlEscape,
    ACTIONS(347), 1,
      anon_sym_htmlUnescape,
    ACTIONS(350), 1,
      anon_sym_toInt,
    ACTIONS(353), 1,
      anon_sym_daysAfterNow,
    ACTIONS(356), 1,
      anon_sym_daysBeforeNow,
    ACTIONS(359), 1,
      anon_sym_decode,
    ACTIONS(362), 1,
      anon_sym_format,
    ACTIONS(365), 1,
      anon_sym_nth,
    ACTIONS(368), 1,
      anon_sym_replace,
    ACTIONS(371), 1,
      anon_sym_split,
    ACTIONS(374), 1,
      anon_sym_toDate,
    STATE(22), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    ACTIONS(331), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    STATE(76), 16,
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
    ACTIONS(333), 20,
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
  [420] = 5,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      sym_comment,
    STATE(21), 1,
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
    ACTIONS(449), 1,
      sym_key_string_text,
    ACTIONS(452), 1,
      anon_sym_BSLASH2,
    ACTIONS(455), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(402), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(39), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
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
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(533), 1,
      sym_key_string,
    STATE(537), 1,
      sym_multipart_form_data_param,
    ACTIONS(458), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(540), 2,
      sym_key_value,
      sym_file_param,
    STATE(218), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(460), 43,
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
    ACTIONS(43), 1,
      sym_key_string_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(533), 1,
      sym_key_string,
    STATE(537), 1,
      sym_multipart_form_data_param,
    ACTIONS(464), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(540), 2,
      sym_key_value,
      sym_file_param,
    STATE(218), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(466), 43,
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
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(533), 1,
      sym_key_string,
    STATE(537), 1,
      sym_multipart_form_data_param,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(540), 2,
      sym_key_value,
      sym_file_param,
    STATE(218), 3,
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
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(571), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    ACTIONS(472), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
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
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(571), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
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
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(571), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
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
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(571), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
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
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(571), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
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
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(571), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
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
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(571), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
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
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(571), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
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
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(571), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
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
    STATE(69), 6,
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
  [2504] = 5,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(532), 1,
      sym_comment,
    STATE(55), 1,
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
  [2566] = 6,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(54), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    ACTIONS(534), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(539), 43,
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
  [2630] = 5,
    ACTIONS(544), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 46,
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
  [2747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_digit_token1,
    STATE(58), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(556), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(554), 40,
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
  [2808] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      aux_sym_digit_token1,
    STATE(58), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(562), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(560), 40,
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
  [2869] = 2,
    ACTIONS(567), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(569), 47,
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
  [2924] = 5,
    ACTIONS(571), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 43,
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
  [3044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 6,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
      anon_sym_e,
    ACTIONS(581), 41,
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
  [3099] = 2,
    ACTIONS(585), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(587), 44,
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
  [3152] = 10,
    ACTIONS(449), 1,
      sym_key_string_text,
    ACTIONS(452), 1,
      anon_sym_BSLASH2,
    ACTIONS(455), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(406), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(64), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    ACTIONS(447), 34,
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
  [3221] = 9,
    ACTIONS(593), 1,
      sym_key_string_text,
    ACTIONS(595), 1,
      anon_sym_BSLASH2,
    ACTIONS(597), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(628), 1,
      sym_key_string,
    ACTIONS(589), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(67), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(273), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(230), 3,
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
    STATE(628), 1,
      sym_key_string,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(66), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(273), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(230), 3,
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
    STATE(628), 1,
      sym_key_string,
    ACTIONS(612), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(66), 2,
      sym_capture,
      aux_sym_captures_section_repeat1,
    STATE(273), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(230), 3,
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
  [3770] = 20,
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
    STATE(543), 1,
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
    STATE(560), 17,
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
  [3853] = 3,
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
  [4733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(716), 35,
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
  [4781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(720), 35,
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
  [4829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(724), 35,
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
  [4877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(728), 35,
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
  [4925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(732), 35,
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
  [4973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(736), 35,
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
  [5021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(740), 35,
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
  [5069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(744), 35,
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
  [5117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 5,
      anon_sym_not,
      anon_sym_greaterThan,
      anon_sym_GT,
      anon_sym_lessThan,
      anon_sym_LT,
    ACTIONS(748), 35,
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
  [5165] = 6,
    ACTIONS(756), 1,
      anon_sym_LBRACKCaptures_RBRACK,
    ACTIONS(759), 1,
      anon_sym_LBRACKAsserts_RBRACK,
    STATE(103), 2,
      sym_response_section,
      aux_sym_response_repeat1,
    STATE(114), 2,
      sym_captures_section,
      sym_asserts_section,
    ACTIONS(752), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(754), 32,
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
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 34,
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
    ACTIONS(585), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(587), 35,
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
    STATE(110), 1,
      sym__comment_or_new_line,
    STATE(113), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(163), 16,
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
    STATE(111), 1,
      sym__comment_or_new_line,
    STATE(115), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(163), 16,
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
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_LF,
    ACTIONS(832), 1,
      anon_sym_xpath,
    ACTIONS(835), 1,
      anon_sym_regex,
    ACTIONS(838), 1,
      anon_sym_count,
    ACTIONS(841), 1,
      anon_sym_urlEncode,
    ACTIONS(844), 1,
      anon_sym_urlDecode,
    ACTIONS(847), 1,
      anon_sym_htmlEscape,
    ACTIONS(850), 1,
      anon_sym_htmlUnescape,
    ACTIONS(853), 1,
      anon_sym_toInt,
    ACTIONS(856), 1,
      anon_sym_daysAfterNow,
    ACTIONS(859), 1,
      anon_sym_daysBeforeNow,
    ACTIONS(862), 1,
      anon_sym_decode,
    ACTIONS(865), 1,
      anon_sym_format,
    ACTIONS(868), 1,
      anon_sym_nth,
    ACTIONS(871), 1,
      anon_sym_replace,
    ACTIONS(874), 1,
      anon_sym_split,
    ACTIONS(877), 1,
      anon_sym_toDate,
    STATE(115), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(163), 16,
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
    ACTIONS(880), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(22), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(76), 16,
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
    STATE(116), 2,
      sym_filter,
      aux_sym_capture_repeat1,
    STATE(76), 16,
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
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(134), 1,
      sym_response,
    STATE(149), 1,
      sym__comment_or_new_line,
    STATE(479), 1,
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
  [6084] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_variable,
    ACTIONS(892), 1,
      anon_sym_status,
    ACTIONS(894), 1,
      anon_sym_url,
    ACTIONS(896), 1,
      anon_sym_header,
    ACTIONS(898), 1,
      anon_sym_cookie,
    ACTIONS(900), 1,
      anon_sym_body,
    ACTIONS(902), 1,
      anon_sym_xpath,
    ACTIONS(904), 1,
      anon_sym_jsonpath,
    ACTIONS(906), 1,
      anon_sym_regex,
    ACTIONS(908), 1,
      anon_sym_duration,
    ACTIONS(910), 1,
      anon_sym_sha256,
    ACTIONS(912), 1,
      anon_sym_md5,
    ACTIONS(914), 1,
      anon_sym_bytes,
    STATE(112), 1,
      sym_query,
    STATE(181), 13,
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
  [6145] = 9,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(916), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(118), 1,
      sym_request,
    STATE(188), 1,
      sym_method,
    STATE(126), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    STATE(301), 2,
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
  [6191] = 2,
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
  [6221] = 2,
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
  [6251] = 2,
    ACTIONS(918), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(920), 23,
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
  [6281] = 2,
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
  [6311] = 2,
    ACTIONS(922), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(924), 23,
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
  [6341] = 6,
    ACTIONS(931), 1,
      sym_comment,
    STATE(118), 1,
      sym_request,
    STATE(188), 1,
      sym_method,
    ACTIONS(926), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(126), 2,
      sym_entry,
      aux_sym_hurl_file_repeat1,
    ACTIONS(928), 17,
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
  [6378] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(933), 1,
      anon_sym_file_COMMA,
    ACTIONS(935), 1,
      anon_sym_base64_COMMA,
    ACTIONS(937), 1,
      anon_sym_hex_COMMA,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(941), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(945), 1,
      anon_sym_null,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(421), 1,
      sym_integer,
    STATE(568), 1,
      sym_predicate_value,
    ACTIONS(943), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(541), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [6431] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(554), 1,
      anon_sym_LF,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(556), 20,
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
  [6464] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(933), 1,
      anon_sym_file_COMMA,
    ACTIONS(935), 1,
      anon_sym_base64_COMMA,
    ACTIONS(937), 1,
      anon_sym_hex_COMMA,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(941), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(945), 1,
      anon_sym_null,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(421), 1,
      sym_integer,
    STATE(539), 1,
      sym_predicate_value,
    ACTIONS(943), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(541), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [6517] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(933), 1,
      anon_sym_file_COMMA,
    ACTIONS(935), 1,
      anon_sym_base64_COMMA,
    ACTIONS(937), 1,
      anon_sym_hex_COMMA,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(941), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(945), 1,
      anon_sym_null,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(421), 1,
      sym_integer,
    STATE(542), 1,
      sym_predicate_value,
    ACTIONS(943), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(541), 9,
      sym_oneline_base64,
      sym_oneline_file,
      sym_oneline_hex,
      sym_quoted_string,
      sym_multiline_string,
      sym_template,
      sym_boolean,
      sym_null,
      sym_float,
  [6570] = 4,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(949), 1,
      aux_sym_digit_token1,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(562), 20,
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
  [6603] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(952), 1,
      sym_key_string_text,
    ACTIONS(954), 1,
      anon_sym_BSLASH2,
    STATE(444), 1,
      sym_integer,
    STATE(654), 1,
      sym_variable_value,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(284), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(225), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
    STATE(653), 5,
      sym_quoted_string,
      sym_key_string,
      sym_boolean,
      sym_null,
      sym_float,
  [6655] = 13,
    ACTIONS(59), 1,
      anon_sym_null,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(958), 1,
      anon_sym_BSLASH,
    ACTIONS(960), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(962), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(300), 1,
      aux_sym_value_string_text_repeat1,
    STATE(466), 1,
      sym_integer,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(956), 2,
      anon_sym_LF,
      sym_comment,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(199), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(242), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(646), 4,
      sym_value_string,
      sym_boolean,
      sym_null,
      sym_float,
  [6705] = 6,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(964), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(144), 1,
      sym__comment_or_new_line,
    ACTIONS(966), 17,
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
  [6740] = 2,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(583), 21,
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
  [6767] = 2,
    ACTIONS(918), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(920), 18,
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
  [6792] = 2,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(198), 18,
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
  [6817] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_digit_token1,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    ACTIONS(972), 1,
      anon_sym_LBRACK,
    ACTIONS(974), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(978), 1,
      anon_sym_null,
    STATE(254), 1,
      sym_integer,
    STATE(445), 1,
      sym_json_value,
    ACTIONS(976), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(462), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [6862] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(980), 1,
      anon_sym_LT_QMARK,
    ACTIONS(982), 1,
      anon_sym_LT_SLASH,
    ACTIONS(984), 1,
      anon_sym_BSLASH,
    ACTIONS(986), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(988), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(990), 1,
      sym_comment,
    STATE(145), 1,
      sym_xml_open_tag,
    STATE(252), 1,
      aux_sym_value_string_text_repeat1,
    STATE(610), 1,
      sym_xml_close_tag,
    STATE(192), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(141), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6909] = 2,
    ACTIONS(992), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(994), 18,
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
  [6934] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(980), 1,
      anon_sym_LT_QMARK,
    ACTIONS(982), 1,
      anon_sym_LT_SLASH,
    ACTIONS(984), 1,
      anon_sym_BSLASH,
    ACTIONS(986), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(988), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(990), 1,
      sym_comment,
    STATE(145), 1,
      sym_xml_open_tag,
    STATE(252), 1,
      aux_sym_value_string_text_repeat1,
    STATE(645), 1,
      sym_xml_close_tag,
    STATE(192), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(151), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [6981] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_digit_token1,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    ACTIONS(972), 1,
      anon_sym_LBRACK,
    ACTIONS(974), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(978), 1,
      anon_sym_null,
    STATE(254), 1,
      sym_integer,
    STATE(395), 1,
      sym_json_value,
    ACTIONS(976), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(462), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [7026] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(980), 1,
      anon_sym_LT_QMARK,
    ACTIONS(984), 1,
      anon_sym_BSLASH,
    ACTIONS(986), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(988), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_LT_SLASH,
    STATE(145), 1,
      sym_xml_open_tag,
    STATE(252), 1,
      aux_sym_value_string_text_repeat1,
    STATE(288), 1,
      sym_xml_close_tag,
    STATE(192), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(151), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [7073] = 2,
    ACTIONS(998), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(1000), 18,
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
  [7098] = 13,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(980), 1,
      anon_sym_LT_QMARK,
    ACTIONS(984), 1,
      anon_sym_BSLASH,
    ACTIONS(986), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(988), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(996), 1,
      anon_sym_LT_SLASH,
    STATE(145), 1,
      sym_xml_open_tag,
    STATE(252), 1,
      aux_sym_value_string_text_repeat1,
    STATE(275), 1,
      sym_xml_close_tag,
    STATE(192), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(143), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [7145] = 2,
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
  [7170] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_digit_token1,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    ACTIONS(972), 1,
      anon_sym_LBRACK,
    ACTIONS(974), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(978), 1,
      anon_sym_null,
    STATE(254), 1,
      sym_integer,
    STATE(501), 1,
      sym_json_value,
    ACTIONS(976), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(462), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [7215] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    ACTIONS(972), 1,
      anon_sym_LBRACK,
    ACTIONS(974), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(978), 1,
      anon_sym_null,
    ACTIONS(1002), 1,
      aux_sym_digit_token1,
    STATE(250), 1,
      sym_integer,
    STATE(500), 1,
      sym_json_value,
    ACTIONS(976), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(245), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(462), 7,
      sym_json_object,
      sym_json_array,
      sym_json_string,
      sym_json_number,
      sym_template,
      sym_boolean,
      sym_null,
  [7260] = 2,
    ACTIONS(964), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(966), 18,
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
  [7285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 18,
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
  [7309] = 12,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_LT,
    ACTIONS(1009), 1,
      anon_sym_LT_QMARK,
    ACTIONS(1012), 1,
      anon_sym_LT_SLASH,
    ACTIONS(1014), 1,
      anon_sym_BSLASH,
    ACTIONS(1017), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1020), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(145), 1,
      sym_xml_open_tag,
    STATE(252), 1,
      aux_sym_value_string_text_repeat1,
    STATE(192), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    STATE(151), 4,
      sym_xml_prolog_tag,
      sym_xml_tag,
      sym_value_string,
      aux_sym_xml_tag_repeat1,
  [7353] = 2,
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
  [7376] = 2,
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
  [7399] = 2,
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
  [7422] = 2,
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
  [7445] = 2,
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
  [7468] = 2,
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
  [7491] = 2,
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
  [7514] = 2,
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
  [7537] = 2,
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
  [7560] = 2,
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
  [7583] = 2,
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
  [7606] = 2,
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
  [7629] = 2,
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
  [7652] = 2,
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
  [7675] = 2,
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
  [7698] = 2,
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
  [7721] = 2,
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
  [7744] = 2,
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
  [7767] = 2,
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
  [7790] = 2,
    ACTIONS(716), 1,
      anon_sym_LF,
    ACTIONS(718), 17,
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
  [7813] = 2,
    ACTIONS(724), 1,
      anon_sym_LF,
    ACTIONS(726), 17,
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
  [7836] = 2,
    ACTIONS(744), 1,
      anon_sym_LF,
    ACTIONS(746), 17,
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
  [7859] = 2,
    ACTIONS(740), 1,
      anon_sym_LF,
    ACTIONS(742), 17,
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
  [7882] = 2,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(738), 17,
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
  [7905] = 2,
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
  [7928] = 2,
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
  [7951] = 2,
    ACTIONS(732), 1,
      anon_sym_LF,
    ACTIONS(734), 17,
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
  [7974] = 2,
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
  [7997] = 2,
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
  [8020] = 2,
    ACTIONS(720), 1,
      anon_sym_LF,
    ACTIONS(722), 17,
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
  [8043] = 2,
    ACTIONS(728), 1,
      anon_sym_LF,
    ACTIONS(730), 17,
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
  [8066] = 2,
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
  [8089] = 2,
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
  [8112] = 2,
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
  [8135] = 2,
    ACTIONS(748), 1,
      anon_sym_LF,
    ACTIONS(750), 17,
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
  [8158] = 13,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 1,
      sym_key_string_text,
    STATE(42), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(361), 1,
      aux_sym_multipart_form_data_section_repeat1,
    STATE(362), 1,
      sym_multipart_form_data_param,
    STATE(533), 1,
      sym_key_string,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(540), 2,
      sym_key_value,
      sym_file_param,
    STATE(218), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8202] = 10,
    ACTIONS(958), 1,
      anon_sym_BSLASH,
    ACTIONS(960), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(962), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(300), 1,
      aux_sym_value_string_text_repeat1,
    STATE(337), 1,
      sym_value_string,
    ACTIONS(63), 2,
      anon_sym_LF,
      sym_comment,
    STATE(3), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
    STATE(199), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(242), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8239] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 1,
      sym_key_string_text,
    STATE(47), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(366), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(367), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8279] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 1,
      sym_key_string_text,
    STATE(48), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(364), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(365), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8319] = 12,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 1,
      sym_key_string_text,
    STATE(49), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(358), 1,
      aux_sym_query_string_params_section_repeat1,
    STATE(359), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8359] = 6,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(252), 1,
      aux_sym_value_string_text_repeat1,
    STATE(193), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
    ACTIONS(1025), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [8386] = 8,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_BSLASH,
    ACTIONS(1034), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1037), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(252), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1029), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(193), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(214), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8417] = 9,
    ACTIONS(1042), 1,
      anon_sym_BSLASH,
    ACTIONS(1044), 1,
      sym_filename_text,
    ACTIONS(1046), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(29), 1,
      sym__comment_or_new_line,
    STATE(438), 1,
      sym_filename,
    ACTIONS(1040), 2,
      anon_sym_LF,
      sym_comment,
    STATE(274), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(224), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8449] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 1,
      sym_key_string_text,
    STATE(533), 1,
      sym_key_string,
    STATE(537), 1,
      sym_multipart_form_data_param,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(540), 2,
      sym_key_value,
      sym_file_param,
    STATE(218), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8481] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_DQUOTE,
    ACTIONS(1050), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1052), 1,
      anon_sym_BSLASH,
    ACTIONS(1054), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(205), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(235), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8508] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1050), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1052), 1,
      anon_sym_BSLASH,
    ACTIONS(1054), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1056), 1,
      anon_sym_DQUOTE,
    STATE(205), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(235), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8535] = 8,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_LF,
    ACTIONS(1060), 1,
      anon_sym_BSLASH,
    ACTIONS(1062), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1064), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1066), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(206), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(246), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8564] = 7,
    ACTIONS(958), 1,
      anon_sym_BSLASH,
    ACTIONS(960), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(962), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(300), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1025), 2,
      anon_sym_LF,
      sym_comment,
    STATE(204), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(242), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8591] = 8,
    ACTIONS(958), 1,
      anon_sym_BSLASH,
    ACTIONS(960), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(962), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(990), 1,
      sym_comment,
    STATE(300), 1,
      aux_sym_value_string_text_repeat1,
    STATE(423), 1,
      sym_value_string,
    STATE(199), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(242), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8620] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1050), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1052), 1,
      anon_sym_BSLASH,
    ACTIONS(1054), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1068), 1,
      anon_sym_DQUOTE,
    STATE(196), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(235), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8647] = 8,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_BSLASH,
    ACTIONS(1064), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1066), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1070), 1,
      anon_sym_LF,
    ACTIONS(1072), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(207), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(246), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8676] = 8,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_BSLASH,
    ACTIONS(1064), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1066), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1074), 1,
      anon_sym_LF,
    ACTIONS(1076), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(198), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(246), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8705] = 7,
    ACTIONS(1078), 1,
      anon_sym_BSLASH,
    ACTIONS(1081), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1084), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(300), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1029), 2,
      anon_sym_LF,
      sym_comment,
    STATE(204), 3,
      sym_value_string_content,
      sym_template,
      aux_sym_value_string_repeat1,
    STATE(242), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [8732] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_DQUOTE,
    ACTIONS(1089), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1092), 1,
      anon_sym_BSLASH,
    ACTIONS(1095), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(205), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(235), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8759] = 8,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_LF,
    ACTIONS(1101), 1,
      anon_sym_BSLASH,
    ACTIONS(1104), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1106), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(206), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(246), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8788] = 8,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_BSLASH,
    ACTIONS(1064), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1066), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1074), 1,
      anon_sym_LF,
    ACTIONS(1076), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(206), 3,
      sym_multiline_string_content,
      sym_template,
      aux_sym_multiline_string_repeat1,
    STATE(246), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [8817] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1050), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1052), 1,
      anon_sym_BSLASH,
    ACTIONS(1054), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1112), 1,
      anon_sym_DQUOTE,
    STATE(197), 3,
      sym_quoted_string_content,
      sym_template,
      aux_sym_quoted_string_repeat1,
    STATE(235), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [8844] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1114), 1,
      anon_sym_BSLASH,
    ACTIONS(1117), 1,
      anon_sym_BQUOTE,
    ACTIONS(1119), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1122), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(209), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(259), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8870] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_COLON,
    ACTIONS(1127), 1,
      anon_sym_COLON2,
    ACTIONS(1129), 1,
      sym_key_string_text,
    ACTIONS(1132), 1,
      anon_sym_BSLASH2,
    ACTIONS(1135), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(210), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8898] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_BSLASH,
    ACTIONS(1140), 1,
      anon_sym_BQUOTE,
    ACTIONS(1142), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1144), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(209), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(259), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [8924] = 8,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_SEMI,
    ACTIONS(1148), 1,
      anon_sym_BSLASH,
    ACTIONS(1150), 1,
      sym_filename_text,
    ACTIONS(1152), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(570), 1,
      sym_filename,
    STATE(281), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(233), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [8952] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 1,
      sym_key_string_text,
    STATE(404), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [8980] = 7,
    ACTIONS(984), 1,
      anon_sym_BSLASH,
    ACTIONS(986), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(252), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1154), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(217), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9006] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_BSLASH,
    ACTIONS(1142), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1144), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1158), 1,
      anon_sym_BQUOTE,
    STATE(211), 3,
      sym_oneline_string_content,
      sym_template,
      aux_sym_oneline_string_repeat1,
    STATE(259), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [9032] = 8,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_BSLASH,
    ACTIONS(1150), 1,
      sym_filename_text,
    ACTIONS(1152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1160), 1,
      anon_sym_SEMI,
    STATE(555), 1,
      sym_filename,
    STATE(281), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(233), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9060] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_BSLASH,
    ACTIONS(1167), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1170), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(252), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1162), 3,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
    STATE(217), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9086] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 1,
      sym_key_string_text,
    ACTIONS(1172), 1,
      anon_sym_COLON,
    ACTIONS(1174), 1,
      anon_sym_COLON2,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(210), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9114] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_BSLASH2,
    ACTIONS(462), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1023), 1,
      sym_key_string_text,
    STATE(571), 1,
      sym_key_value,
    STATE(583), 1,
      sym_key_string,
    STATE(258), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(218), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9142] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_COLON2,
    ACTIONS(1176), 1,
      sym_key_string_text,
    ACTIONS(1179), 1,
      anon_sym_BSLASH2,
    ACTIONS(1182), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(273), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(220), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9167] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_DQUOTE,
    ACTIONS(1187), 1,
      anon_sym_BSLASH,
    ACTIONS(1189), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1191), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(363), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(226), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9192] = 4,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1195), 1,
      aux_sym_invalid_quoted_string_escaped_char_token1,
    ACTIONS(1197), 1,
      anon_sym_u,
    ACTIONS(1193), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [9211] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_BSLASH,
    ACTIONS(1189), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1191), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1199), 1,
      anon_sym_DQUOTE,
    STATE(363), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(221), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9236] = 6,
    ACTIONS(1042), 1,
      anon_sym_BSLASH,
    ACTIONS(1044), 1,
      sym_filename_text,
    ACTIONS(1046), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1201), 2,
      anon_sym_LF,
      sym_comment,
    STATE(274), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(229), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9259] = 7,
    ACTIONS(55), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(954), 1,
      anon_sym_BSLASH2,
    ACTIONS(1172), 1,
      anon_sym_LF,
    ACTIONS(1174), 1,
      sym_comment,
    ACTIONS(1203), 1,
      sym_key_string_text,
    STATE(284), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(231), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9284] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1205), 1,
      anon_sym_DQUOTE,
    ACTIONS(1207), 1,
      anon_sym_BSLASH,
    ACTIONS(1210), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1213), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(363), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(226), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9309] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1216), 1,
      anon_sym_SEMI,
    ACTIONS(1218), 1,
      anon_sym_BSLASH,
    ACTIONS(1221), 1,
      sym_filename_text,
    ACTIONS(1224), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(281), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(227), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9334] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_BSLASH,
    ACTIONS(1189), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1191), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1227), 1,
      anon_sym_DQUOTE,
    STATE(363), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(232), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9359] = 6,
    ACTIONS(1229), 1,
      anon_sym_BSLASH,
    ACTIONS(1232), 1,
      sym_filename_text,
    ACTIONS(1235), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1216), 2,
      anon_sym_LF,
      sym_comment,
    STATE(274), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(229), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9382] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_BSLASH2,
    ACTIONS(597), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1172), 1,
      anon_sym_COLON2,
    ACTIONS(1238), 1,
      sym_key_string_text,
    STATE(273), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(220), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9407] = 7,
    ACTIONS(1125), 1,
      anon_sym_LF,
    ACTIONS(1127), 1,
      sym_comment,
    ACTIONS(1240), 1,
      sym_key_string_text,
    ACTIONS(1243), 1,
      anon_sym_BSLASH2,
    ACTIONS(1246), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(284), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    STATE(231), 3,
      sym_key_string_content,
      sym_template,
      aux_sym_key_string_repeat1,
  [9432] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_BSLASH,
    ACTIONS(1189), 1,
      aux_sym_json_string_text_token1,
    ACTIONS(1191), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1249), 1,
      anon_sym_DQUOTE,
    STATE(363), 2,
      sym_json_string_text,
      sym_json_string_escaped_char,
    STATE(226), 3,
      sym_json_string_content,
      sym_template,
      aux_sym_json_string_repeat1,
  [9457] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_BSLASH,
    ACTIONS(1150), 1,
      sym_filename_text,
    ACTIONS(1152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1201), 1,
      anon_sym_SEMI,
    STATE(281), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    STATE(227), 3,
      sym_filename_content,
      sym_template,
      aux_sym_filename_repeat1,
  [9482] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_LF,
    ACTIONS(1254), 1,
      anon_sym_BSLASH,
    ACTIONS(1257), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1259), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1262), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(234), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [9506] = 5,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1050), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1052), 1,
      anon_sym_BSLASH,
    ACTIONS(1264), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(244), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9526] = 5,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1270), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(241), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1268), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1266), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_u,
    ACTIONS(1276), 1,
      anon_sym_POUND,
    ACTIONS(1272), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [9564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_u,
    ACTIONS(1278), 7,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [9580] = 4,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_LF,
    STATE(557), 1,
      sym_multiline_string_type,
    ACTIONS(1284), 6,
      anon_sym_base64,
      anon_sym_hex,
      anon_sym_json,
      anon_sym_xml,
      anon_sym_graphql,
      aux_sym_multiline_string_type_token1,
  [9598] = 6,
    ACTIONS(1170), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1286), 1,
      anon_sym_BSLASH,
    ACTIONS(1289), 1,
      aux_sym_value_string_text_token1,
    STATE(300), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1162), 2,
      anon_sym_LF,
      sym_comment,
    STATE(240), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9620] = 5,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(243), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1294), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1292), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9640] = 6,
    ACTIONS(958), 1,
      anon_sym_BSLASH,
    ACTIONS(960), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1156), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(300), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1154), 2,
      anon_sym_LF,
      sym_comment,
    STATE(240), 3,
      sym_value_string_text,
      sym_value_string_escaped_char,
      aux_sym_value_string_content_repeat1,
  [9662] = 5,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(243), 1,
      aux_sym__multiline_string_text_repeat1,
    ACTIONS(1300), 2,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
    ACTIONS(1298), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [9682] = 5,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1307), 1,
      aux_sym_quoted_string_text_token1,
    ACTIONS(1310), 1,
      anon_sym_BSLASH,
    ACTIONS(1305), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_LBRACE,
    STATE(244), 4,
      sym_quoted_string_text,
      sym_invalid_quoted_string_escaped_char,
      sym_quoted_string_escaped_char,
      aux_sym_quoted_string_content_repeat1,
  [9702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      aux_sym_digit_token1,
    STATE(247), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(554), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9720] = 7,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1060), 1,
      anon_sym_BSLASH,
    ACTIONS(1064), 1,
      aux_sym__multiline_string_text_token1,
    ACTIONS(1313), 1,
      anon_sym_LF,
    ACTIONS(1315), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(234), 3,
      sym__multiline_string_text,
      sym_multiline_string_escaped_char,
      aux_sym_multiline_string_content_repeat1,
  [9744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      aux_sym_digit_token1,
    STATE(247), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(560), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [9762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      anon_sym_u,
    ACTIONS(1322), 7,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_BQUOTE,
  [9778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_u,
    ACTIONS(1330), 1,
      anon_sym_POUND,
    ACTIONS(1326), 6,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
  [9796] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_DOT,
    STATE(307), 1,
      sym_fraction,
    STATE(469), 1,
      sym_exponent,
    ACTIONS(1332), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(1336), 2,
      anon_sym_e,
      anon_sym_E,
  [9817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      aux_sym_digit_token1,
    STATE(247), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1338), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_e,
      anon_sym_E,
  [9834] = 5,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1342), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1344), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(261), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1340), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [9853] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    ACTIONS(1346), 1,
      anon_sym_RBRACE,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      sym_json_key_value,
    STATE(443), 1,
      aux_sym_json_object_repeat1,
    STATE(582), 1,
      sym_json_string,
    STATE(584), 1,
      sym_json_key_string,
  [9878] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_DOT,
    STATE(298), 1,
      sym_fraction,
    STATE(469), 1,
      sym_exponent,
    ACTIONS(1332), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1352), 2,
      anon_sym_e,
      anon_sym_E,
  [9899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_digit_token1,
    STATE(58), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1338), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_e,
      anon_sym_E,
  [9916] = 6,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_BSLASH,
    ACTIONS(1356), 1,
      anon_sym_SLASH,
    ACTIONS(1358), 1,
      aux_sym_regex_text_token1,
    STATE(602), 1,
      sym_regex_content,
    STATE(282), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [9937] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1360), 1,
      anon_sym_RBRACE,
    STATE(401), 1,
      aux_sym_json_object_repeat1,
    STATE(452), 1,
      sym_json_key_value,
    STATE(582), 1,
      sym_json_string,
    STATE(584), 1,
      sym_json_key_string,
  [9962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      anon_sym_COLON2,
    STATE(267), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1362), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [9979] = 4,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1368), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1366), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
    STATE(262), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [9996] = 6,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_BSLASH,
    ACTIONS(1358), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1370), 1,
      anon_sym_SLASH,
    STATE(567), 1,
      sym_regex_content,
    STATE(282), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10017] = 5,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1374), 1,
      aux_sym_value_string_text_token1,
    ACTIONS(1377), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(261), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1372), 4,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
  [10036] = 6,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1379), 1,
      anon_sym_BSLASH,
    ACTIONS(1382), 1,
      anon_sym_BQUOTE,
    ACTIONS(1384), 1,
      aux_sym_oneline_string_text_token1,
    ACTIONS(1387), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(262), 3,
      sym_oneline_string_text,
      sym_oneline_string_escaped_char,
      aux_sym_oneline_string_content_repeat1,
  [10057] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(430), 1,
      sym_integer,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(595), 2,
      sym_quoted_string,
      sym_float,
  [10078] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(428), 1,
      sym_integer,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(536), 2,
      sym_quoted_string,
      sym_float,
  [10099] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(426), 1,
      sym_integer,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(603), 2,
      sym_quoted_string,
      sym_float,
  [10120] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(424), 1,
      sym_integer,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    STATE(538), 2,
      sym_quoted_string,
      sym_float,
  [10141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      anon_sym_COLON2,
    ACTIONS(1393), 1,
      sym_key_string_text,
    ACTIONS(1396), 1,
      anon_sym_BSLASH2,
    ACTIONS(1389), 2,
      anon_sym_COLON,
      anon_sym_LBRACE_LBRACE,
    STATE(267), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [10162] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1399), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10176] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1405), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1403), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10190] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1409), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1407), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10204] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1411), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10218] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_base64_COMMA,
    ACTIONS(937), 1,
      anon_sym_hex_COMMA,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(594), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [10236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(280), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1362), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10250] = 2,
    STATE(286), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1415), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10262] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1417), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10276] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1338), 1,
      anon_sym_LF,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
    ACTIONS(1421), 3,
      anon_sym_e,
      anon_sym_E,
      sym_comment,
  [10292] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1423), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10306] = 5,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1427), 1,
      anon_sym_BSLASH,
    ACTIONS(1430), 1,
      anon_sym_SLASH,
    ACTIONS(1432), 1,
      aux_sym_regex_text_token1,
    STATE(278), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10324] = 5,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_BSLASH,
    ACTIONS(1440), 1,
      sym_filename_text,
    ACTIONS(1435), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE_LBRACE,
    STATE(279), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
  [10342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      sym_key_string_text,
    ACTIONS(1446), 1,
      anon_sym_BSLASH2,
    ACTIONS(1389), 2,
      anon_sym_COLON2,
      anon_sym_LBRACE_LBRACE,
    STATE(280), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [10360] = 3,
    ACTIONS(990), 1,
      sym_comment,
    STATE(279), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1415), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10374] = 5,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_BSLASH,
    ACTIONS(1358), 1,
      aux_sym_regex_text_token1,
    ACTIONS(1449), 1,
      anon_sym_SLASH,
    STATE(278), 3,
      sym_regex_text,
      sym_regex_escaped_char,
      aux_sym_regex_content_repeat1,
  [10392] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_base64_COMMA,
    ACTIONS(937), 1,
      anon_sym_hex_COMMA,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(535), 3,
      sym_oneline_base64,
      sym_oneline_hex,
      sym_quoted_string,
  [10410] = 3,
    ACTIONS(1364), 1,
      sym_comment,
    STATE(285), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
    ACTIONS(1362), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10424] = 5,
    ACTIONS(1391), 1,
      sym_comment,
    ACTIONS(1451), 1,
      sym_key_string_text,
    ACTIONS(1454), 1,
      anon_sym_BSLASH2,
    ACTIONS(1389), 2,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
    STATE(285), 2,
      sym_key_string_escaped_char,
      aux_sym_key_string_content_repeat1,
  [10442] = 4,
    ACTIONS(1457), 1,
      anon_sym_BSLASH,
    ACTIONS(1460), 1,
      sym_filename_text,
    STATE(286), 2,
      sym_filename_escaped_char,
      aux_sym_filename_content_repeat1,
    ACTIONS(1435), 3,
      anon_sym_LF,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [10458] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1465), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1463), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10472] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1467), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      anon_sym_u,
    ACTIONS(1475), 1,
      anon_sym_POUND,
    ACTIONS(1471), 4,
      anon_sym_BSLASH,
      anon_sym_b,
      anon_sym_f,
      anon_sym_BQUOTE,
  [10502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      aux_sym_digit_token1,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
  [10514] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1477), 5,
      anon_sym_LT,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
  [10528] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LT,
    ACTIONS(1481), 1,
      anon_sym_LT_QMARK,
    STATE(139), 1,
      sym_xml_open_tag,
    STATE(580), 1,
      sym_xml_tag,
    STATE(371), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [10548] = 6,
    ACTIONS(1332), 1,
      anon_sym_LF,
    ACTIONS(1483), 1,
      anon_sym_DOT,
    ACTIONS(1487), 1,
      sym_comment,
    STATE(347), 1,
      sym_fraction,
    STATE(590), 1,
      sym_exponent,
    ACTIONS(1485), 2,
      anon_sym_e,
      anon_sym_E,
  [10568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_digit_token1,
    ACTIONS(1489), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(58), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    ACTIONS(1491), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(330), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10598] = 4,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1495), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1493), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [10613] = 2,
    ACTIONS(1399), 1,
      sym_comment,
    ACTIONS(1401), 5,
      anon_sym_LF,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(432), 1,
      sym_exponent,
    ACTIONS(1352), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1497), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_digit_token1,
    ACTIONS(1499), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(303), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10654] = 4,
    ACTIONS(1344), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1501), 1,
      aux_sym_value_string_text_token1,
    STATE(312), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1340), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [10669] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(1503), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(302), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [10686] = 5,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(1505), 1,
      anon_sym_LF,
    ACTIONS(1508), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(302), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [10703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_digit_token1,
    ACTIONS(1511), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(58), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      anon_sym_COLON2,
    ACTIONS(1513), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10731] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(916), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(302), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [10748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      aux_sym_digit_token1,
    ACTIONS(1517), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(308), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(432), 1,
      sym_exponent,
    ACTIONS(1336), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(1497), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      aux_sym_digit_token1,
    ACTIONS(1511), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(247), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      aux_sym_digit_token1,
    ACTIONS(1489), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(247), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [10808] = 4,
    ACTIONS(1519), 1,
      anon_sym_LF,
    ACTIONS(1521), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(377), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10823] = 4,
    ACTIONS(1523), 1,
      anon_sym_LF,
    ACTIONS(1526), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym__comment_or_new_line_repeat1,
    ACTIONS(315), 3,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10838] = 4,
    ACTIONS(1377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1529), 1,
      aux_sym_value_string_text_token1,
    STATE(312), 1,
      aux_sym_value_string_text_repeat1,
    ACTIONS(1372), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_comment,
  [10853] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1409), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1407), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10866] = 4,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1532), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1493), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [10881] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1534), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10894] = 3,
    ACTIONS(1538), 1,
      anon_sym_LF,
    ACTIONS(1542), 1,
      sym_comment,
    ACTIONS(1540), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10907] = 4,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(1495), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1493), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym__multiline_string_text_token1,
  [10922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      anon_sym_COLON2,
    ACTIONS(1401), 4,
      anon_sym_COLON,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [10935] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1399), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10948] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1544), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym__multiline_string_text_token1,
  [10961] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1548), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [10971] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1550), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [10981] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1552), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [10993] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1556), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [11005] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(40), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(328), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [11021] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    STATE(481), 1,
      sym_json_key_value,
    STATE(582), 1,
      sym_json_string,
    STATE(584), 1,
      sym_json_key_string,
  [11037] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(45), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(377), 1,
      aux_sym_query_string_params_section_repeat1,
  [11053] = 5,
    ACTIONS(1560), 1,
      anon_sym_LF,
    ACTIONS(1563), 1,
      sym_comment,
    STATE(195), 1,
      sym__comment_or_new_line,
    STATE(310), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(328), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [11069] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(46), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(377), 1,
      aux_sym_query_string_params_section_repeat1,
  [11085] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1511), 1,
      anon_sym_LF,
    ACTIONS(1566), 1,
      sym_comment,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_SEMI,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(334), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    ACTIONS(1574), 1,
      anon_sym_SLASH,
    STATE(519), 2,
      sym_quoted_string,
      sym_regex,
  [11127] = 4,
    ACTIONS(61), 1,
      aux_sym_digit_token1,
    ACTIONS(1489), 1,
      anon_sym_LF,
    ACTIONS(1576), 1,
      sym_comment,
    STATE(131), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_SEMI,
    ACTIONS(1580), 1,
      aux_sym_hexdigit_token1,
    STATE(334), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(1583), 1,
      anon_sym_SLASH,
    STATE(172), 2,
      sym_quoted_string,
      sym_regex,
  [11169] = 2,
    ACTIONS(1413), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1411), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [11179] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(2), 2,
      sym__comment_or_new_line,
      aux_sym_hurl_file_repeat2,
  [11193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [11203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    ACTIONS(1574), 1,
      anon_sym_SLASH,
    STATE(529), 2,
      sym_quoted_string,
      sym_regex,
  [11217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1585), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11227] = 2,
    ACTIONS(1589), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1587), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [11237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    ACTIONS(1574), 1,
      anon_sym_SLASH,
    STATE(96), 2,
      sym_quoted_string,
      sym_regex,
  [11251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_digit_token1,
    STATE(81), 1,
      sym_integer,
    STATE(57), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    ACTIONS(1574), 1,
      anon_sym_SLASH,
    STATE(90), 2,
      sym_quoted_string,
      sym_regex,
  [11279] = 2,
    ACTIONS(1401), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1399), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [11289] = 2,
    ACTIONS(1405), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1403), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [11299] = 4,
    ACTIONS(1497), 1,
      anon_sym_LF,
    ACTIONS(1591), 1,
      sym_comment,
    STATE(647), 1,
      sym_exponent,
    ACTIONS(1485), 2,
      anon_sym_e,
      anon_sym_E,
  [11313] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1595), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1593), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [11325] = 1,
    ACTIONS(1550), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [11333] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1597), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11343] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1601), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1599), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [11355] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1603), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [11367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 4,
      anon_sym_COLON2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11377] = 2,
    ACTIONS(1409), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1407), 4,
      anon_sym_LF,
      anon_sym_BSLASH,
      aux_sym_value_string_text_token1,
      sym_comment,
  [11387] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1611), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1609), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [11399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(166), 1,
      sym_integer,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(427), 1,
      sym_integer,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11427] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(50), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(377), 1,
      aux_sym_query_string_params_section_repeat1,
  [11443] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(50), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(329), 1,
      aux_sym_query_string_params_section_repeat1,
  [11459] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1615), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1613), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [11471] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(41), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(328), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [11487] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(41), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(325), 1,
      aux_sym_multipart_form_data_section_repeat1,
  [11503] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1619), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1617), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [11515] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(377), 1,
      aux_sym_query_string_params_section_repeat1,
  [11531] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(44), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(327), 1,
      aux_sym_query_string_params_section_repeat1,
  [11547] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(51), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(377), 1,
      aux_sym_query_string_params_section_repeat1,
  [11563] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(51), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(379), 1,
      aux_sym_query_string_params_section_repeat1,
  [11579] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1621), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(1583), 1,
      anon_sym_SLASH,
    STATE(165), 2,
      sym_quoted_string,
      sym_regex,
  [11603] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1409), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1407), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [11615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1623), 1,
      anon_sym_LT,
    ACTIONS(1625), 1,
      anon_sym_LT_QMARK,
    STATE(371), 2,
      sym_xml_prolog_tag,
      aux_sym_xml_repeat1,
  [11629] = 1,
    ACTIONS(1399), 5,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
      sym_comment,
  [11637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 4,
      anon_sym_COLON2,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [11647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    ACTIONS(1628), 1,
      anon_sym_SEMI,
    STATE(331), 2,
      sym_hexdigit,
      aux_sym_oneline_hex_repeat1,
  [11661] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1399), 4,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      sym_filename_text,
      anon_sym_LBRACE_LBRACE,
  [11671] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1399), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11681] = 5,
    ACTIONS(1630), 1,
      anon_sym_LF,
    ACTIONS(1633), 1,
      sym_comment,
    STATE(219), 1,
      sym__comment_or_new_line,
    STATE(310), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(377), 1,
      aux_sym_query_string_params_section_repeat1,
  [11697] = 2,
    ACTIONS(1515), 1,
      sym_comment,
    ACTIONS(1513), 4,
      anon_sym_LF,
      sym_key_string_text,
      anon_sym_BSLASH2,
      anon_sym_LBRACE_LBRACE,
  [11707] = 5,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(43), 1,
      sym__comment_or_new_line,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(377), 1,
      aux_sym_query_string_params_section_repeat1,
  [11723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(420), 1,
      sym_integer,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11737] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1636), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11747] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1407), 4,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_text_token1,
      anon_sym_BSLASH,
      anon_sym_LBRACE_LBRACE,
  [11757] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1399), 3,
      anon_sym_BSLASH,
      anon_sym_BQUOTE,
      aux_sym_oneline_string_text_token1,
  [11769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(1583), 1,
      anon_sym_SLASH,
    STATE(601), 2,
      sym_quoted_string,
      sym_regex,
  [11783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(419), 1,
      sym_integer,
    STATE(128), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11797] = 3,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1399), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_json_string_text_token1,
  [11809] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(37), 1,
      sym__comment_or_new_line,
  [11822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(622), 1,
      sym_expr,
  [11835] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(16), 1,
      sym__comment_or_new_line,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(416), 1,
      sym_boolean,
    ACTIONS(943), 2,
      anon_sym_true,
      anon_sym_false,
  [11859] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(59), 1,
      sym__comment_or_new_line,
  [11872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(418), 1,
      sym_variable_definition,
    STATE(592), 1,
      sym_variable_name,
  [11885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      aux_sym_digit_token1,
    STATE(309), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11896] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1642), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [11905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_COMMA,
    ACTIONS(1646), 1,
      anon_sym_RBRACK,
    STATE(470), 1,
      aux_sym_json_array_repeat1,
  [11918] = 4,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(826), 1,
      sym_comment,
    STATE(65), 1,
      sym__comment_or_new_line,
    STATE(108), 1,
      aux_sym__comment_or_new_line_repeat1,
  [11931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11940] = 4,
    ACTIONS(1648), 1,
      anon_sym_LF,
    ACTIONS(1650), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1652), 1,
      sym_comment,
    STATE(655), 1,
      sym_file_contenttype,
  [11953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_POUND,
    ACTIONS(1654), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [11964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      aux_sym_digit_token1,
    STATE(251), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [11975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1658), 1,
      anon_sym_RBRACE,
    STATE(473), 1,
      aux_sym_json_object_repeat1,
  [11988] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(63), 1,
      sym__comment_or_new_line,
  [12001] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(123), 1,
      sym__comment_or_new_line,
  [12014] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(68), 1,
      sym__comment_or_new_line,
  [12027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(422), 1,
      sym_boolean,
    ACTIONS(943), 2,
      anon_sym_true,
      anon_sym_false,
  [12038] = 4,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(826), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(109), 1,
      sym__comment_or_new_line,
  [12051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      anon_sym_POUND,
    ACTIONS(1660), 2,
      anon_sym_SEMI,
      aux_sym_filename_escaped_char_token1,
  [12062] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__comment_or_new_line,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12075] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(38), 1,
      sym__comment_or_new_line,
  [12088] = 4,
    ACTIONS(1664), 1,
      anon_sym_LF,
    ACTIONS(1666), 1,
      sym_comment,
    STATE(187), 1,
      sym__comment_or_new_line,
    STATE(310), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12101] = 4,
    ACTIONS(1664), 1,
      anon_sym_LF,
    ACTIONS(1666), 1,
      sym_comment,
    STATE(190), 1,
      sym__comment_or_new_line,
    STATE(310), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12114] = 4,
    ACTIONS(1664), 1,
      anon_sym_LF,
    ACTIONS(1666), 1,
      sym_comment,
    STATE(189), 1,
      sym__comment_or_new_line,
    STATE(310), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12127] = 4,
    ACTIONS(1664), 1,
      anon_sym_LF,
    ACTIONS(1666), 1,
      sym_comment,
    STATE(213), 1,
      sym__comment_or_new_line,
    STATE(310), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(425), 1,
      sym_boolean,
    ACTIONS(943), 2,
      anon_sym_true,
      anon_sym_false,
  [12151] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(26), 1,
      sym__comment_or_new_line,
  [12164] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(27), 1,
      sym__comment_or_new_line,
  [12177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(624), 1,
      sym_expr,
  [12190] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(30), 1,
      sym__comment_or_new_line,
  [12203] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(31), 1,
      sym__comment_or_new_line,
  [12216] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(32), 1,
      sym__comment_or_new_line,
  [12229] = 4,
    ACTIONS(1483), 1,
      anon_sym_DOT,
    ACTIONS(1668), 1,
      anon_sym_LF,
    ACTIONS(1670), 1,
      sym_comment,
    STATE(631), 1,
      sym_fraction,
  [12242] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(33), 1,
      sym__comment_or_new_line,
  [12255] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(34), 1,
      sym__comment_or_new_line,
  [12268] = 4,
    ACTIONS(1483), 1,
      anon_sym_DOT,
    ACTIONS(1672), 1,
      anon_sym_LF,
    ACTIONS(1674), 1,
      sym_comment,
    STATE(631), 1,
      sym_fraction,
  [12281] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(35), 1,
      sym__comment_or_new_line,
  [12294] = 4,
    ACTIONS(1483), 1,
      anon_sym_DOT,
    ACTIONS(1676), 1,
      anon_sym_LF,
    ACTIONS(1678), 1,
      sym_comment,
    STATE(631), 1,
      sym_fraction,
  [12307] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(36), 1,
      sym__comment_or_new_line,
  [12320] = 4,
    ACTIONS(1483), 1,
      anon_sym_DOT,
    ACTIONS(1680), 1,
      anon_sym_LF,
    ACTIONS(1682), 1,
      sym_comment,
    STATE(631), 1,
      sym_fraction,
  [12333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12342] = 4,
    ACTIONS(1483), 1,
      anon_sym_DOT,
    ACTIONS(1686), 1,
      anon_sym_LF,
    ACTIONS(1688), 1,
      sym_comment,
    STATE(631), 1,
      sym_fraction,
  [12355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1694), 1,
      anon_sym_RBRACE,
    STATE(448), 1,
      aux_sym_json_object_repeat1,
  [12386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(415), 1,
      sym_boolean,
    ACTIONS(943), 2,
      anon_sym_true,
      anon_sym_false,
  [12397] = 4,
    ACTIONS(1664), 1,
      anon_sym_LF,
    ACTIONS(1666), 1,
      sym_comment,
    STATE(191), 1,
      sym__comment_or_new_line,
    STATE(310), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12410] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(28), 1,
      sym__comment_or_new_line,
  [12423] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(56), 1,
      sym__comment_or_new_line,
  [12436] = 4,
    ACTIONS(1040), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(25), 1,
      sym__comment_or_new_line,
  [12449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_digit_token1,
    STATE(294), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [12460] = 4,
    ACTIONS(1664), 1,
      anon_sym_LF,
    ACTIONS(1666), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(554), 1,
      sym__comment_or_new_line,
  [12473] = 4,
    ACTIONS(1650), 1,
      aux_sym_file_contenttype_token1,
    ACTIONS(1696), 1,
      anon_sym_LF,
    ACTIONS(1698), 1,
      sym_comment,
    STATE(651), 1,
      sym_file_contenttype,
  [12486] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1700), 3,
      anon_sym_BSLASH,
      anon_sym_SLASH,
      aux_sym_regex_text_token1,
  [12495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1694), 1,
      anon_sym_RBRACE,
    STATE(473), 1,
      aux_sym_json_object_repeat1,
  [12508] = 4,
    ACTIONS(1483), 1,
      anon_sym_DOT,
    ACTIONS(1702), 1,
      anon_sym_LF,
    ACTIONS(1704), 1,
      sym_comment,
    STATE(631), 1,
      sym_fraction,
  [12521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_COMMA,
    ACTIONS(1706), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      aux_sym_json_array_repeat1,
  [12534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(276), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [12545] = 4,
    ACTIONS(792), 1,
      anon_sym_LF,
    ACTIONS(826), 1,
      sym_comment,
    STATE(12), 1,
      sym__comment_or_new_line,
    STATE(108), 1,
      aux_sym__comment_or_new_line_repeat1,
  [12558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1708), 1,
      anon_sym_RBRACE,
    STATE(473), 1,
      aux_sym_json_object_repeat1,
  [12571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_COMMA,
    ACTIONS(1710), 1,
      anon_sym_RBRACK,
    STATE(464), 1,
      aux_sym_json_array_repeat1,
  [12584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1712), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(387), 1,
      sym_boolean,
    ACTIONS(943), 2,
      anon_sym_true,
      anon_sym_false,
  [12604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1658), 1,
      anon_sym_RBRACE,
    STATE(474), 1,
      aux_sym_json_object_repeat1,
  [12617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(546), 1,
      sym_expr,
  [12630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(579), 1,
      sym_expr,
  [12643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(409), 1,
      sym_boolean,
    ACTIONS(943), 2,
      anon_sym_true,
      anon_sym_false,
  [12654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(436), 1,
      sym_boolean,
    ACTIONS(943), 2,
      anon_sym_true,
      anon_sym_false,
  [12665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      aux_sym_hexdigit_token1,
  [12674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1716), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(611), 1,
      sym_expr,
  [12705] = 4,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(11), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__comment_or_new_line_repeat1,
    STATE(136), 1,
      sym__comment_or_new_line,
  [12718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      aux_sym_digit_token1,
    STATE(255), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [12738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      anon_sym_COMMA,
    ACTIONS(1721), 1,
      anon_sym_RBRACK,
    STATE(464), 1,
      aux_sym_json_array_repeat1,
  [12751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      aux_sym_digit_token1,
    STATE(333), 2,
      sym_digit,
      aux_sym_integer_repeat1,
  [12762] = 4,
    ACTIONS(1483), 1,
      anon_sym_DOT,
    ACTIONS(1723), 1,
      anon_sym_LF,
    ACTIONS(1725), 1,
      sym_comment,
    STATE(631), 1,
      sym_fraction,
  [12775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(614), 1,
      sym_expr,
  [12788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(616), 1,
      sym_expr,
  [12801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_COMMA,
    ACTIONS(1727), 1,
      anon_sym_RBRACK,
    STATE(464), 1,
      aux_sym_json_array_repeat1,
  [12823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(623), 1,
      sym_expr,
  [12836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1729), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1731), 1,
      anon_sym_RBRACE,
    ACTIONS(1733), 1,
      anon_sym_COMMA,
    STATE(473), 1,
      aux_sym_json_object_repeat1,
  [12858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1736), 1,
      anon_sym_RBRACE,
    STATE(473), 1,
      aux_sym_json_object_repeat1,
  [12871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1738), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(618), 1,
      sym_expr,
  [12893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(619), 1,
      sym_expr,
  [12906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(620), 1,
      sym_expr,
  [12919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(447), 1,
      sym_status,
    ACTIONS(1740), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [12930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      aux_sym_variable_name_token1,
    STATE(117), 1,
      sym_variable_name,
    STATE(621), 1,
      sym_expr,
  [12943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1731), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(599), 1,
      sym_quoted_string,
  [12961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1742), 1,
      anon_sym_LBRACE,
    STATE(346), 1,
      sym_unicode_char,
  [12971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(488), 1,
      sym_hexdigit,
  [12981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(489), 1,
      sym_hexdigit,
  [12991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(490), 1,
      sym_hexdigit,
  [13001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(492), 1,
      sym_hexdigit,
  [13011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(493), 1,
      sym_hexdigit,
  [13021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(494), 1,
      sym_hexdigit,
  [13031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(495), 1,
      sym_hexdigit,
  [13041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(522), 1,
      sym_hexdigit,
  [13051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(496), 1,
      sym_hexdigit,
  [13061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(503), 1,
      sym_hexdigit,
  [13071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(505), 1,
      sym_hexdigit,
  [13081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(506), 1,
      sym_hexdigit,
  [13091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(507), 1,
      sym_hexdigit,
  [13101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1744), 1,
      anon_sym_file_COMMA,
    STATE(440), 1,
      sym_file_value,
  [13111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(524), 1,
      sym_hexdigit,
  [13121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1746), 1,
      anon_sym_LBRACE,
    STATE(320), 1,
      sym_unicode_char,
  [13131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1748), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1721), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1750), 1,
      anon_sym_LBRACE,
    STATE(323), 1,
      sym_unicode_char,
  [13157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(617), 1,
      sym_hexdigit,
  [13167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(498), 1,
      sym_hexdigit,
  [13177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(615), 1,
      sym_hexdigit,
  [13187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(613), 1,
      sym_hexdigit,
  [13197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(609), 1,
      sym_hexdigit,
  [13207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_quoted_string,
  [13217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_quoted_string,
  [13227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_quoted_string,
  [13237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(173), 1,
      sym_quoted_string,
  [13247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      sym_quoted_string,
  [13257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_quoted_string,
  [13267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      sym_quoted_string,
  [13277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym_quoted_string,
  [13287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_quoted_string,
  [13297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_quoted_string,
  [13307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_quoted_string,
  [13317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      sym_quoted_string,
  [13327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_quoted_string,
  [13337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(531), 1,
      sym_hexdigit,
  [13347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(558), 1,
      sym_hexdigit,
  [13357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1752), 1,
      anon_sym_LBRACE,
    STATE(381), 1,
      sym_unicode_char,
  [13367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(530), 1,
      sym_hexdigit,
  [13377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_quoted_string,
  [13387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_quoted_string,
  [13397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1754), 1,
      anon_sym_LBRACE,
    STATE(269), 1,
      sym_unicode_char,
  [13407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_LT,
    ACTIONS(1465), 1,
      anon_sym_LT_QMARK,
  [13417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_quoted_string,
  [13427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1756), 1,
      aux_sym_hexdigit_token1,
    STATE(348), 1,
      sym_hexdigit,
  [13437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      aux_sym_hexdigit_token1,
    STATE(491), 1,
      sym_hexdigit,
  [13447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1758), 2,
      aux_sym_status_token1,
      anon_sym_STAR,
  [13455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1760), 1,
      anon_sym_COLON,
    ACTIONS(1762), 1,
      anon_sym_COLON2,
  [13465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1764), 1,
      ts_builtin_sym_end,
  [13472] = 2,
    ACTIONS(1766), 1,
      anon_sym_LF,
    ACTIONS(1768), 1,
      sym_comment,
  [13479] = 2,
    ACTIONS(1680), 1,
      anon_sym_LF,
    ACTIONS(1682), 1,
      sym_comment,
  [13486] = 2,
    ACTIONS(1770), 1,
      anon_sym_LF,
    ACTIONS(1772), 1,
      sym_comment,
  [13493] = 2,
    ACTIONS(1672), 1,
      anon_sym_LF,
    ACTIONS(1674), 1,
      sym_comment,
  [13500] = 2,
    ACTIONS(1774), 1,
      anon_sym_LF,
    ACTIONS(1776), 1,
      sym_comment,
  [13507] = 2,
    ACTIONS(1778), 1,
      anon_sym_LF,
    ACTIONS(1780), 1,
      sym_comment,
  [13514] = 2,
    ACTIONS(1668), 1,
      anon_sym_LF,
    ACTIONS(1670), 1,
      sym_comment,
  [13521] = 2,
    ACTIONS(1782), 1,
      anon_sym_LF,
    ACTIONS(1784), 1,
      sym_comment,
  [13528] = 2,
    ACTIONS(1786), 1,
      anon_sym_LF,
    ACTIONS(1788), 1,
      sym_comment,
  [13535] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1790), 1,
      aux_sym_variable_name_token2,
  [13542] = 2,
    ACTIONS(1792), 1,
      anon_sym_LF,
    ACTIONS(1794), 1,
      sym_comment,
  [13549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1796), 1,
      anon_sym_RBRACE_RBRACE,
  [13556] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1798), 1,
      aux_sym_xml_open_tag_token1,
  [13563] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1800), 1,
      aux_sym_xml_prolog_tag_token1,
  [13570] = 2,
    ACTIONS(1802), 1,
      anon_sym_LF,
    ACTIONS(1804), 1,
      sym_comment,
  [13577] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1806), 1,
      aux_sym_oneline_string_text_token2,
  [13584] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1808), 1,
      aux_sym_oneline_base64_token1,
  [13591] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1810), 1,
      aux_sym_regex_escaped_char_token1,
  [13598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1812), 1,
      aux_sym_key_string_escaped_char_token1,
  [13605] = 2,
    ACTIONS(1814), 1,
      anon_sym_LF,
    ACTIONS(1816), 1,
      sym_comment,
  [13612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_SEMI,
  [13619] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1820), 1,
      anon_sym_LF,
  [13626] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1822), 1,
      anon_sym_LF,
  [13633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1824), 1,
      anon_sym_RBRACE,
  [13640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1826), 1,
      anon_sym_GT,
  [13647] = 2,
    ACTIONS(1828), 1,
      anon_sym_LF,
    ACTIONS(1830), 1,
      sym_comment,
  [13654] = 2,
    ACTIONS(1832), 1,
      anon_sym_LF,
    ACTIONS(1834), 1,
      sym_comment,
  [13661] = 2,
    ACTIONS(1836), 1,
      anon_sym_LF,
    ACTIONS(1838), 1,
      sym_comment,
  [13668] = 2,
    ACTIONS(1840), 1,
      anon_sym_LF,
    ACTIONS(1842), 1,
      sym_comment,
  [13675] = 2,
    ACTIONS(1844), 1,
      anon_sym_LF,
    ACTIONS(1846), 1,
      sym_comment,
  [13682] = 2,
    ACTIONS(1848), 1,
      anon_sym_LF,
    ACTIONS(1850), 1,
      sym_comment,
  [13689] = 2,
    ACTIONS(1852), 1,
      anon_sym_LF,
    ACTIONS(1854), 1,
      sym_comment,
  [13696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1856), 1,
      anon_sym_SLASH,
  [13703] = 2,
    ACTIONS(1858), 1,
      anon_sym_LF,
    ACTIONS(1860), 1,
      sym_comment,
  [13710] = 2,
    ACTIONS(1862), 1,
      anon_sym_LF,
    ACTIONS(1864), 1,
      sym_comment,
  [13717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1866), 1,
      anon_sym_SEMI,
  [13724] = 2,
    ACTIONS(1868), 1,
      anon_sym_LF,
    ACTIONS(1870), 1,
      sym_comment,
  [13731] = 2,
    ACTIONS(1872), 1,
      anon_sym_LF,
    ACTIONS(1874), 1,
      sym_comment,
  [13738] = 2,
    ACTIONS(1876), 1,
      anon_sym_LF,
    ACTIONS(1878), 1,
      sym_comment,
  [13745] = 2,
    ACTIONS(1714), 1,
      anon_sym_LF,
    ACTIONS(1880), 1,
      sym_comment,
  [13752] = 2,
    ACTIONS(1716), 1,
      anon_sym_LF,
    ACTIONS(1882), 1,
      sym_comment,
  [13759] = 2,
    ACTIONS(1884), 1,
      anon_sym_LF,
    ACTIONS(1886), 1,
      sym_comment,
  [13766] = 2,
    ACTIONS(1888), 1,
      anon_sym_LF,
    ACTIONS(1890), 1,
      sym_comment,
  [13773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1892), 1,
      anon_sym_COLON2,
  [13780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1894), 1,
      anon_sym_RBRACE_RBRACE,
  [13787] = 2,
    ACTIONS(1896), 1,
      anon_sym_LF,
    ACTIONS(1898), 1,
      sym_comment,
  [13794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1900), 1,
      aux_sym_key_string_escaped_char_token1,
  [13801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1902), 1,
      anon_sym_COLON2,
  [13808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1760), 1,
      anon_sym_COLON,
  [13815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1904), 1,
      anon_sym_COLON2,
  [13822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1906), 1,
      anon_sym_COLON2,
  [13829] = 2,
    ACTIONS(1538), 1,
      anon_sym_LF,
    ACTIONS(1542), 1,
      sym_comment,
  [13836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1908), 1,
      anon_sym_COLON2,
  [13843] = 2,
    ACTIONS(1910), 1,
      anon_sym_LF,
    ACTIONS(1912), 1,
      sym_comment,
  [13850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1914), 1,
      anon_sym_QMARK_GT,
  [13857] = 2,
    ACTIONS(1497), 1,
      anon_sym_LF,
    ACTIONS(1591), 1,
      sym_comment,
  [13864] = 2,
    ACTIONS(1712), 1,
      anon_sym_LF,
    ACTIONS(1916), 1,
      sym_comment,
  [13871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1918), 1,
      anon_sym_EQ,
  [13878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1920), 1,
      anon_sym_COLON2,
  [13885] = 2,
    ACTIONS(1922), 1,
      anon_sym_LF,
    ACTIONS(1924), 1,
      sym_comment,
  [13892] = 2,
    ACTIONS(1686), 1,
      anon_sym_LF,
    ACTIONS(1688), 1,
      sym_comment,
  [13899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1926), 1,
      anon_sym_COLON2,
  [13906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1928), 1,
      anon_sym_COLON2,
  [13913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1930), 1,
      anon_sym_COLON2,
  [13920] = 2,
    ACTIONS(1932), 1,
      anon_sym_LF,
    ACTIONS(1934), 1,
      sym_comment,
  [13927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1936), 1,
      anon_sym_GT,
  [13934] = 2,
    ACTIONS(1938), 1,
      anon_sym_LF,
    ACTIONS(1940), 1,
      sym_comment,
  [13941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1942), 1,
      anon_sym_SLASH,
  [13948] = 2,
    ACTIONS(1676), 1,
      anon_sym_LF,
    ACTIONS(1678), 1,
      sym_comment,
  [13955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1944), 1,
      anon_sym_COLON2,
  [13962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1946), 1,
      anon_sym_COLON2,
  [13969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1948), 1,
      anon_sym_COLON2,
  [13976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1950), 1,
      anon_sym_COLON2,
  [13983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1952), 1,
      anon_sym_COLON2,
  [13990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1954), 1,
      anon_sym_RBRACE,
  [13997] = 2,
    ACTIONS(1417), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_LF,
  [14004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1956), 1,
      anon_sym_RBRACE_RBRACE,
  [14011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1958), 1,
      aux_sym_key_string_escaped_char_token1,
  [14018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1960), 1,
      anon_sym_RBRACE,
  [14025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1962), 1,
      anon_sym_RBRACE_RBRACE,
  [14032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1964), 1,
      anon_sym_RBRACE,
  [14039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1966), 1,
      anon_sym_RBRACE_RBRACE,
  [14046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1968), 1,
      anon_sym_RBRACE,
  [14053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1970), 1,
      anon_sym_RBRACE_RBRACE,
  [14060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1972), 1,
      anon_sym_RBRACE_RBRACE,
  [14067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1974), 1,
      anon_sym_RBRACE_RBRACE,
  [14074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1976), 1,
      anon_sym_RBRACE_RBRACE,
  [14081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1978), 1,
      anon_sym_RBRACE_RBRACE,
  [14088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1980), 1,
      anon_sym_RBRACE_RBRACE,
  [14095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1982), 1,
      anon_sym_RBRACE_RBRACE,
  [14102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1984), 1,
      anon_sym_COLON2,
  [14109] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1986), 1,
      aux_sym_xml_prolog_tag_token1,
  [14116] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1988), 1,
      aux_sym_xml_close_tag_token1,
  [14123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1990), 1,
      anon_sym_COLON2,
  [14130] = 2,
    ACTIONS(990), 1,
      sym_comment,
    ACTIONS(1992), 1,
      aux_sym_xml_close_tag_token1,
  [14137] = 2,
    ACTIONS(1585), 1,
      anon_sym_LF,
    ACTIONS(1994), 1,
      sym_comment,
  [14144] = 2,
    ACTIONS(1996), 1,
      anon_sym_LF,
    ACTIONS(1998), 1,
      sym_comment,
  [14151] = 2,
    ACTIONS(2000), 1,
      anon_sym_LF,
    ACTIONS(2002), 1,
      sym_comment,
  [14158] = 2,
    ACTIONS(1477), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_LF,
  [14165] = 2,
    ACTIONS(2004), 1,
      anon_sym_LF,
    ACTIONS(2006), 1,
      sym_comment,
  [14172] = 2,
    ACTIONS(1684), 1,
      anon_sym_LF,
    ACTIONS(2008), 1,
      sym_comment,
  [14179] = 2,
    ACTIONS(2010), 1,
      anon_sym_LF,
    ACTIONS(2012), 1,
      sym_comment,
  [14186] = 2,
    ACTIONS(1607), 1,
      anon_sym_LF,
    ACTIONS(2014), 1,
      sym_comment,
  [14193] = 2,
    ACTIONS(2016), 1,
      anon_sym_LF,
    ACTIONS(2018), 1,
      sym_comment,
  [14200] = 2,
    ACTIONS(1690), 1,
      anon_sym_LF,
    ACTIONS(2020), 1,
      sym_comment,
  [14207] = 2,
    ACTIONS(2022), 1,
      anon_sym_LF,
    ACTIONS(2024), 1,
      sym_comment,
  [14214] = 2,
    ACTIONS(2026), 1,
      anon_sym_LF,
    ACTIONS(2028), 1,
      sym_comment,
  [14221] = 2,
    ACTIONS(1729), 1,
      anon_sym_LF,
    ACTIONS(2030), 1,
      sym_comment,
  [14228] = 2,
    ACTIONS(1738), 1,
      anon_sym_LF,
    ACTIONS(2032), 1,
      sym_comment,
  [14235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2034), 1,
      anon_sym_GT,
  [14242] = 2,
    ACTIONS(1467), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_LF,
  [14249] = 2,
    ACTIONS(1723), 1,
      anon_sym_LF,
    ACTIONS(1725), 1,
      sym_comment,
  [14256] = 2,
    ACTIONS(1692), 1,
      anon_sym_LF,
    ACTIONS(2036), 1,
      sym_comment,
  [14263] = 2,
    ACTIONS(2038), 1,
      anon_sym_LF,
    ACTIONS(2040), 1,
      sym_comment,
  [14270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2042), 1,
      anon_sym_SEMI,
  [14277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2044), 1,
      anon_sym_QMARK_GT,
  [14284] = 2,
    ACTIONS(2046), 1,
      anon_sym_LF,
    ACTIONS(2048), 1,
      sym_comment,
  [14291] = 2,
    ACTIONS(2050), 1,
      anon_sym_LF,
    ACTIONS(2052), 1,
      sym_comment,
  [14298] = 2,
    ACTIONS(1702), 1,
      anon_sym_LF,
    ACTIONS(1704), 1,
      sym_comment,
  [14305] = 2,
    ACTIONS(2054), 1,
      anon_sym_LF,
    ACTIONS(2056), 1,
      sym_comment,
  [14312] = 2,
    ACTIONS(1696), 1,
      anon_sym_LF,
    ACTIONS(1698), 1,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 123,
  [SMALL_STATE(21)] = 246,
  [SMALL_STATE(22)] = 317,
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
  [SMALL_STATE(54)] = 2566,
  [SMALL_STATE(55)] = 2630,
  [SMALL_STATE(56)] = 2692,
  [SMALL_STATE(57)] = 2747,
  [SMALL_STATE(58)] = 2808,
  [SMALL_STATE(59)] = 2869,
  [SMALL_STATE(60)] = 2924,
  [SMALL_STATE(61)] = 2984,
  [SMALL_STATE(62)] = 3044,
  [SMALL_STATE(63)] = 3099,
  [SMALL_STATE(64)] = 3152,
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
  [SMALL_STATE(76)] = 3853,
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
  [SMALL_STATE(95)] = 4781,
  [SMALL_STATE(96)] = 4829,
  [SMALL_STATE(97)] = 4877,
  [SMALL_STATE(98)] = 4925,
  [SMALL_STATE(99)] = 4973,
  [SMALL_STATE(100)] = 5021,
  [SMALL_STATE(101)] = 5069,
  [SMALL_STATE(102)] = 5117,
  [SMALL_STATE(103)] = 5165,
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
  [SMALL_STATE(120)] = 6145,
  [SMALL_STATE(121)] = 6191,
  [SMALL_STATE(122)] = 6221,
  [SMALL_STATE(123)] = 6251,
  [SMALL_STATE(124)] = 6281,
  [SMALL_STATE(125)] = 6311,
  [SMALL_STATE(126)] = 6341,
  [SMALL_STATE(127)] = 6378,
  [SMALL_STATE(128)] = 6431,
  [SMALL_STATE(129)] = 6464,
  [SMALL_STATE(130)] = 6517,
  [SMALL_STATE(131)] = 6570,
  [SMALL_STATE(132)] = 6603,
  [SMALL_STATE(133)] = 6655,
  [SMALL_STATE(134)] = 6705,
  [SMALL_STATE(135)] = 6740,
  [SMALL_STATE(136)] = 6767,
  [SMALL_STATE(137)] = 6792,
  [SMALL_STATE(138)] = 6817,
  [SMALL_STATE(139)] = 6862,
  [SMALL_STATE(140)] = 6909,
  [SMALL_STATE(141)] = 6934,
  [SMALL_STATE(142)] = 6981,
  [SMALL_STATE(143)] = 7026,
  [SMALL_STATE(144)] = 7073,
  [SMALL_STATE(145)] = 7098,
  [SMALL_STATE(146)] = 7145,
  [SMALL_STATE(147)] = 7170,
  [SMALL_STATE(148)] = 7215,
  [SMALL_STATE(149)] = 7260,
  [SMALL_STATE(150)] = 7285,
  [SMALL_STATE(151)] = 7309,
  [SMALL_STATE(152)] = 7353,
  [SMALL_STATE(153)] = 7376,
  [SMALL_STATE(154)] = 7399,
  [SMALL_STATE(155)] = 7422,
  [SMALL_STATE(156)] = 7445,
  [SMALL_STATE(157)] = 7468,
  [SMALL_STATE(158)] = 7491,
  [SMALL_STATE(159)] = 7514,
  [SMALL_STATE(160)] = 7537,
  [SMALL_STATE(161)] = 7560,
  [SMALL_STATE(162)] = 7583,
  [SMALL_STATE(163)] = 7606,
  [SMALL_STATE(164)] = 7629,
  [SMALL_STATE(165)] = 7652,
  [SMALL_STATE(166)] = 7675,
  [SMALL_STATE(167)] = 7698,
  [SMALL_STATE(168)] = 7721,
  [SMALL_STATE(169)] = 7744,
  [SMALL_STATE(170)] = 7767,
  [SMALL_STATE(171)] = 7790,
  [SMALL_STATE(172)] = 7813,
  [SMALL_STATE(173)] = 7836,
  [SMALL_STATE(174)] = 7859,
  [SMALL_STATE(175)] = 7882,
  [SMALL_STATE(176)] = 7905,
  [SMALL_STATE(177)] = 7928,
  [SMALL_STATE(178)] = 7951,
  [SMALL_STATE(179)] = 7974,
  [SMALL_STATE(180)] = 7997,
  [SMALL_STATE(181)] = 8020,
  [SMALL_STATE(182)] = 8043,
  [SMALL_STATE(183)] = 8066,
  [SMALL_STATE(184)] = 8089,
  [SMALL_STATE(185)] = 8112,
  [SMALL_STATE(186)] = 8135,
  [SMALL_STATE(187)] = 8158,
  [SMALL_STATE(188)] = 8202,
  [SMALL_STATE(189)] = 8239,
  [SMALL_STATE(190)] = 8279,
  [SMALL_STATE(191)] = 8319,
  [SMALL_STATE(192)] = 8359,
  [SMALL_STATE(193)] = 8386,
  [SMALL_STATE(194)] = 8417,
  [SMALL_STATE(195)] = 8449,
  [SMALL_STATE(196)] = 8481,
  [SMALL_STATE(197)] = 8508,
  [SMALL_STATE(198)] = 8535,
  [SMALL_STATE(199)] = 8564,
  [SMALL_STATE(200)] = 8591,
  [SMALL_STATE(201)] = 8620,
  [SMALL_STATE(202)] = 8647,
  [SMALL_STATE(203)] = 8676,
  [SMALL_STATE(204)] = 8705,
  [SMALL_STATE(205)] = 8732,
  [SMALL_STATE(206)] = 8759,
  [SMALL_STATE(207)] = 8788,
  [SMALL_STATE(208)] = 8817,
  [SMALL_STATE(209)] = 8844,
  [SMALL_STATE(210)] = 8870,
  [SMALL_STATE(211)] = 8898,
  [SMALL_STATE(212)] = 8924,
  [SMALL_STATE(213)] = 8952,
  [SMALL_STATE(214)] = 8980,
  [SMALL_STATE(215)] = 9006,
  [SMALL_STATE(216)] = 9032,
  [SMALL_STATE(217)] = 9060,
  [SMALL_STATE(218)] = 9086,
  [SMALL_STATE(219)] = 9114,
  [SMALL_STATE(220)] = 9142,
  [SMALL_STATE(221)] = 9167,
  [SMALL_STATE(222)] = 9192,
  [SMALL_STATE(223)] = 9211,
  [SMALL_STATE(224)] = 9236,
  [SMALL_STATE(225)] = 9259,
  [SMALL_STATE(226)] = 9284,
  [SMALL_STATE(227)] = 9309,
  [SMALL_STATE(228)] = 9334,
  [SMALL_STATE(229)] = 9359,
  [SMALL_STATE(230)] = 9382,
  [SMALL_STATE(231)] = 9407,
  [SMALL_STATE(232)] = 9432,
  [SMALL_STATE(233)] = 9457,
  [SMALL_STATE(234)] = 9482,
  [SMALL_STATE(235)] = 9506,
  [SMALL_STATE(236)] = 9526,
  [SMALL_STATE(237)] = 9546,
  [SMALL_STATE(238)] = 9564,
  [SMALL_STATE(239)] = 9580,
  [SMALL_STATE(240)] = 9598,
  [SMALL_STATE(241)] = 9620,
  [SMALL_STATE(242)] = 9640,
  [SMALL_STATE(243)] = 9662,
  [SMALL_STATE(244)] = 9682,
  [SMALL_STATE(245)] = 9702,
  [SMALL_STATE(246)] = 9720,
  [SMALL_STATE(247)] = 9744,
  [SMALL_STATE(248)] = 9762,
  [SMALL_STATE(249)] = 9778,
  [SMALL_STATE(250)] = 9796,
  [SMALL_STATE(251)] = 9817,
  [SMALL_STATE(252)] = 9834,
  [SMALL_STATE(253)] = 9853,
  [SMALL_STATE(254)] = 9878,
  [SMALL_STATE(255)] = 9899,
  [SMALL_STATE(256)] = 9916,
  [SMALL_STATE(257)] = 9937,
  [SMALL_STATE(258)] = 9962,
  [SMALL_STATE(259)] = 9979,
  [SMALL_STATE(260)] = 9996,
  [SMALL_STATE(261)] = 10017,
  [SMALL_STATE(262)] = 10036,
  [SMALL_STATE(263)] = 10057,
  [SMALL_STATE(264)] = 10078,
  [SMALL_STATE(265)] = 10099,
  [SMALL_STATE(266)] = 10120,
  [SMALL_STATE(267)] = 10141,
  [SMALL_STATE(268)] = 10162,
  [SMALL_STATE(269)] = 10176,
  [SMALL_STATE(270)] = 10190,
  [SMALL_STATE(271)] = 10204,
  [SMALL_STATE(272)] = 10218,
  [SMALL_STATE(273)] = 10236,
  [SMALL_STATE(274)] = 10250,
  [SMALL_STATE(275)] = 10262,
  [SMALL_STATE(276)] = 10276,
  [SMALL_STATE(277)] = 10292,
  [SMALL_STATE(278)] = 10306,
  [SMALL_STATE(279)] = 10324,
  [SMALL_STATE(280)] = 10342,
  [SMALL_STATE(281)] = 10360,
  [SMALL_STATE(282)] = 10374,
  [SMALL_STATE(283)] = 10392,
  [SMALL_STATE(284)] = 10410,
  [SMALL_STATE(285)] = 10424,
  [SMALL_STATE(286)] = 10442,
  [SMALL_STATE(287)] = 10458,
  [SMALL_STATE(288)] = 10472,
  [SMALL_STATE(289)] = 10486,
  [SMALL_STATE(290)] = 10502,
  [SMALL_STATE(291)] = 10514,
  [SMALL_STATE(292)] = 10528,
  [SMALL_STATE(293)] = 10548,
  [SMALL_STATE(294)] = 10568,
  [SMALL_STATE(295)] = 10583,
  [SMALL_STATE(296)] = 10598,
  [SMALL_STATE(297)] = 10613,
  [SMALL_STATE(298)] = 10624,
  [SMALL_STATE(299)] = 10639,
  [SMALL_STATE(300)] = 10654,
  [SMALL_STATE(301)] = 10669,
  [SMALL_STATE(302)] = 10686,
  [SMALL_STATE(303)] = 10703,
  [SMALL_STATE(304)] = 10718,
  [SMALL_STATE(305)] = 10731,
  [SMALL_STATE(306)] = 10748,
  [SMALL_STATE(307)] = 10763,
  [SMALL_STATE(308)] = 10778,
  [SMALL_STATE(309)] = 10793,
  [SMALL_STATE(310)] = 10808,
  [SMALL_STATE(311)] = 10823,
  [SMALL_STATE(312)] = 10838,
  [SMALL_STATE(313)] = 10853,
  [SMALL_STATE(314)] = 10866,
  [SMALL_STATE(315)] = 10881,
  [SMALL_STATE(316)] = 10894,
  [SMALL_STATE(317)] = 10907,
  [SMALL_STATE(318)] = 10922,
  [SMALL_STATE(319)] = 10935,
  [SMALL_STATE(320)] = 10948,
  [SMALL_STATE(321)] = 10961,
  [SMALL_STATE(322)] = 10971,
  [SMALL_STATE(323)] = 10981,
  [SMALL_STATE(324)] = 10993,
  [SMALL_STATE(325)] = 11005,
  [SMALL_STATE(326)] = 11021,
  [SMALL_STATE(327)] = 11037,
  [SMALL_STATE(328)] = 11053,
  [SMALL_STATE(329)] = 11069,
  [SMALL_STATE(330)] = 11085,
  [SMALL_STATE(331)] = 11099,
  [SMALL_STATE(332)] = 11113,
  [SMALL_STATE(333)] = 11127,
  [SMALL_STATE(334)] = 11141,
  [SMALL_STATE(335)] = 11155,
  [SMALL_STATE(336)] = 11169,
  [SMALL_STATE(337)] = 11179,
  [SMALL_STATE(338)] = 11193,
  [SMALL_STATE(339)] = 11203,
  [SMALL_STATE(340)] = 11217,
  [SMALL_STATE(341)] = 11227,
  [SMALL_STATE(342)] = 11237,
  [SMALL_STATE(343)] = 11251,
  [SMALL_STATE(344)] = 11265,
  [SMALL_STATE(345)] = 11279,
  [SMALL_STATE(346)] = 11289,
  [SMALL_STATE(347)] = 11299,
  [SMALL_STATE(348)] = 11313,
  [SMALL_STATE(349)] = 11325,
  [SMALL_STATE(350)] = 11333,
  [SMALL_STATE(351)] = 11343,
  [SMALL_STATE(352)] = 11355,
  [SMALL_STATE(353)] = 11367,
  [SMALL_STATE(354)] = 11377,
  [SMALL_STATE(355)] = 11387,
  [SMALL_STATE(356)] = 11399,
  [SMALL_STATE(357)] = 11413,
  [SMALL_STATE(358)] = 11427,
  [SMALL_STATE(359)] = 11443,
  [SMALL_STATE(360)] = 11459,
  [SMALL_STATE(361)] = 11471,
  [SMALL_STATE(362)] = 11487,
  [SMALL_STATE(363)] = 11503,
  [SMALL_STATE(364)] = 11515,
  [SMALL_STATE(365)] = 11531,
  [SMALL_STATE(366)] = 11547,
  [SMALL_STATE(367)] = 11563,
  [SMALL_STATE(368)] = 11579,
  [SMALL_STATE(369)] = 11589,
  [SMALL_STATE(370)] = 11603,
  [SMALL_STATE(371)] = 11615,
  [SMALL_STATE(372)] = 11629,
  [SMALL_STATE(373)] = 11637,
  [SMALL_STATE(374)] = 11647,
  [SMALL_STATE(375)] = 11661,
  [SMALL_STATE(376)] = 11671,
  [SMALL_STATE(377)] = 11681,
  [SMALL_STATE(378)] = 11697,
  [SMALL_STATE(379)] = 11707,
  [SMALL_STATE(380)] = 11723,
  [SMALL_STATE(381)] = 11737,
  [SMALL_STATE(382)] = 11747,
  [SMALL_STATE(383)] = 11757,
  [SMALL_STATE(384)] = 11769,
  [SMALL_STATE(385)] = 11783,
  [SMALL_STATE(386)] = 11797,
  [SMALL_STATE(387)] = 11809,
  [SMALL_STATE(388)] = 11822,
  [SMALL_STATE(389)] = 11835,
  [SMALL_STATE(390)] = 11848,
  [SMALL_STATE(391)] = 11859,
  [SMALL_STATE(392)] = 11872,
  [SMALL_STATE(393)] = 11885,
  [SMALL_STATE(394)] = 11896,
  [SMALL_STATE(395)] = 11905,
  [SMALL_STATE(396)] = 11918,
  [SMALL_STATE(397)] = 11931,
  [SMALL_STATE(398)] = 11940,
  [SMALL_STATE(399)] = 11953,
  [SMALL_STATE(400)] = 11964,
  [SMALL_STATE(401)] = 11975,
  [SMALL_STATE(402)] = 11988,
  [SMALL_STATE(403)] = 12001,
  [SMALL_STATE(404)] = 12014,
  [SMALL_STATE(405)] = 12027,
  [SMALL_STATE(406)] = 12038,
  [SMALL_STATE(407)] = 12051,
  [SMALL_STATE(408)] = 12062,
  [SMALL_STATE(409)] = 12075,
  [SMALL_STATE(410)] = 12088,
  [SMALL_STATE(411)] = 12101,
  [SMALL_STATE(412)] = 12114,
  [SMALL_STATE(413)] = 12127,
  [SMALL_STATE(414)] = 12140,
  [SMALL_STATE(415)] = 12151,
  [SMALL_STATE(416)] = 12164,
  [SMALL_STATE(417)] = 12177,
  [SMALL_STATE(418)] = 12190,
  [SMALL_STATE(419)] = 12203,
  [SMALL_STATE(420)] = 12216,
  [SMALL_STATE(421)] = 12229,
  [SMALL_STATE(422)] = 12242,
  [SMALL_STATE(423)] = 12255,
  [SMALL_STATE(424)] = 12268,
  [SMALL_STATE(425)] = 12281,
  [SMALL_STATE(426)] = 12294,
  [SMALL_STATE(427)] = 12307,
  [SMALL_STATE(428)] = 12320,
  [SMALL_STATE(429)] = 12333,
  [SMALL_STATE(430)] = 12342,
  [SMALL_STATE(431)] = 12355,
  [SMALL_STATE(432)] = 12364,
  [SMALL_STATE(433)] = 12373,
  [SMALL_STATE(434)] = 12386,
  [SMALL_STATE(435)] = 12397,
  [SMALL_STATE(436)] = 12410,
  [SMALL_STATE(437)] = 12423,
  [SMALL_STATE(438)] = 12436,
  [SMALL_STATE(439)] = 12449,
  [SMALL_STATE(440)] = 12460,
  [SMALL_STATE(441)] = 12473,
  [SMALL_STATE(442)] = 12486,
  [SMALL_STATE(443)] = 12495,
  [SMALL_STATE(444)] = 12508,
  [SMALL_STATE(445)] = 12521,
  [SMALL_STATE(446)] = 12534,
  [SMALL_STATE(447)] = 12545,
  [SMALL_STATE(448)] = 12558,
  [SMALL_STATE(449)] = 12571,
  [SMALL_STATE(450)] = 12584,
  [SMALL_STATE(451)] = 12593,
  [SMALL_STATE(452)] = 12604,
  [SMALL_STATE(453)] = 12617,
  [SMALL_STATE(454)] = 12630,
  [SMALL_STATE(455)] = 12643,
  [SMALL_STATE(456)] = 12654,
  [SMALL_STATE(457)] = 12665,
  [SMALL_STATE(458)] = 12674,
  [SMALL_STATE(459)] = 12683,
  [SMALL_STATE(460)] = 12692,
  [SMALL_STATE(461)] = 12705,
  [SMALL_STATE(462)] = 12718,
  [SMALL_STATE(463)] = 12727,
  [SMALL_STATE(464)] = 12738,
  [SMALL_STATE(465)] = 12751,
  [SMALL_STATE(466)] = 12762,
  [SMALL_STATE(467)] = 12775,
  [SMALL_STATE(468)] = 12788,
  [SMALL_STATE(469)] = 12801,
  [SMALL_STATE(470)] = 12810,
  [SMALL_STATE(471)] = 12823,
  [SMALL_STATE(472)] = 12836,
  [SMALL_STATE(473)] = 12845,
  [SMALL_STATE(474)] = 12858,
  [SMALL_STATE(475)] = 12871,
  [SMALL_STATE(476)] = 12880,
  [SMALL_STATE(477)] = 12893,
  [SMALL_STATE(478)] = 12906,
  [SMALL_STATE(479)] = 12919,
  [SMALL_STATE(480)] = 12930,
  [SMALL_STATE(481)] = 12943,
  [SMALL_STATE(482)] = 12951,
  [SMALL_STATE(483)] = 12961,
  [SMALL_STATE(484)] = 12971,
  [SMALL_STATE(485)] = 12981,
  [SMALL_STATE(486)] = 12991,
  [SMALL_STATE(487)] = 13001,
  [SMALL_STATE(488)] = 13011,
  [SMALL_STATE(489)] = 13021,
  [SMALL_STATE(490)] = 13031,
  [SMALL_STATE(491)] = 13041,
  [SMALL_STATE(492)] = 13051,
  [SMALL_STATE(493)] = 13061,
  [SMALL_STATE(494)] = 13071,
  [SMALL_STATE(495)] = 13081,
  [SMALL_STATE(496)] = 13091,
  [SMALL_STATE(497)] = 13101,
  [SMALL_STATE(498)] = 13111,
  [SMALL_STATE(499)] = 13121,
  [SMALL_STATE(500)] = 13131,
  [SMALL_STATE(501)] = 13139,
  [SMALL_STATE(502)] = 13147,
  [SMALL_STATE(503)] = 13157,
  [SMALL_STATE(504)] = 13167,
  [SMALL_STATE(505)] = 13177,
  [SMALL_STATE(506)] = 13187,
  [SMALL_STATE(507)] = 13197,
  [SMALL_STATE(508)] = 13207,
  [SMALL_STATE(509)] = 13217,
  [SMALL_STATE(510)] = 13227,
  [SMALL_STATE(511)] = 13237,
  [SMALL_STATE(512)] = 13247,
  [SMALL_STATE(513)] = 13257,
  [SMALL_STATE(514)] = 13267,
  [SMALL_STATE(515)] = 13277,
  [SMALL_STATE(516)] = 13287,
  [SMALL_STATE(517)] = 13297,
  [SMALL_STATE(518)] = 13307,
  [SMALL_STATE(519)] = 13317,
  [SMALL_STATE(520)] = 13327,
  [SMALL_STATE(521)] = 13337,
  [SMALL_STATE(522)] = 13347,
  [SMALL_STATE(523)] = 13357,
  [SMALL_STATE(524)] = 13367,
  [SMALL_STATE(525)] = 13377,
  [SMALL_STATE(526)] = 13387,
  [SMALL_STATE(527)] = 13397,
  [SMALL_STATE(528)] = 13407,
  [SMALL_STATE(529)] = 13417,
  [SMALL_STATE(530)] = 13427,
  [SMALL_STATE(531)] = 13437,
  [SMALL_STATE(532)] = 13447,
  [SMALL_STATE(533)] = 13455,
  [SMALL_STATE(534)] = 13465,
  [SMALL_STATE(535)] = 13472,
  [SMALL_STATE(536)] = 13479,
  [SMALL_STATE(537)] = 13486,
  [SMALL_STATE(538)] = 13493,
  [SMALL_STATE(539)] = 13500,
  [SMALL_STATE(540)] = 13507,
  [SMALL_STATE(541)] = 13514,
  [SMALL_STATE(542)] = 13521,
  [SMALL_STATE(543)] = 13528,
  [SMALL_STATE(544)] = 13535,
  [SMALL_STATE(545)] = 13542,
  [SMALL_STATE(546)] = 13549,
  [SMALL_STATE(547)] = 13556,
  [SMALL_STATE(548)] = 13563,
  [SMALL_STATE(549)] = 13570,
  [SMALL_STATE(550)] = 13577,
  [SMALL_STATE(551)] = 13584,
  [SMALL_STATE(552)] = 13591,
  [SMALL_STATE(553)] = 13598,
  [SMALL_STATE(554)] = 13605,
  [SMALL_STATE(555)] = 13612,
  [SMALL_STATE(556)] = 13619,
  [SMALL_STATE(557)] = 13626,
  [SMALL_STATE(558)] = 13633,
  [SMALL_STATE(559)] = 13640,
  [SMALL_STATE(560)] = 13647,
  [SMALL_STATE(561)] = 13654,
  [SMALL_STATE(562)] = 13661,
  [SMALL_STATE(563)] = 13668,
  [SMALL_STATE(564)] = 13675,
  [SMALL_STATE(565)] = 13682,
  [SMALL_STATE(566)] = 13689,
  [SMALL_STATE(567)] = 13696,
  [SMALL_STATE(568)] = 13703,
  [SMALL_STATE(569)] = 13710,
  [SMALL_STATE(570)] = 13717,
  [SMALL_STATE(571)] = 13724,
  [SMALL_STATE(572)] = 13731,
  [SMALL_STATE(573)] = 13738,
  [SMALL_STATE(574)] = 13745,
  [SMALL_STATE(575)] = 13752,
  [SMALL_STATE(576)] = 13759,
  [SMALL_STATE(577)] = 13766,
  [SMALL_STATE(578)] = 13773,
  [SMALL_STATE(579)] = 13780,
  [SMALL_STATE(580)] = 13787,
  [SMALL_STATE(581)] = 13794,
  [SMALL_STATE(582)] = 13801,
  [SMALL_STATE(583)] = 13808,
  [SMALL_STATE(584)] = 13815,
  [SMALL_STATE(585)] = 13822,
  [SMALL_STATE(586)] = 13829,
  [SMALL_STATE(587)] = 13836,
  [SMALL_STATE(588)] = 13843,
  [SMALL_STATE(589)] = 13850,
  [SMALL_STATE(590)] = 13857,
  [SMALL_STATE(591)] = 13864,
  [SMALL_STATE(592)] = 13871,
  [SMALL_STATE(593)] = 13878,
  [SMALL_STATE(594)] = 13885,
  [SMALL_STATE(595)] = 13892,
  [SMALL_STATE(596)] = 13899,
  [SMALL_STATE(597)] = 13906,
  [SMALL_STATE(598)] = 13913,
  [SMALL_STATE(599)] = 13920,
  [SMALL_STATE(600)] = 13927,
  [SMALL_STATE(601)] = 13934,
  [SMALL_STATE(602)] = 13941,
  [SMALL_STATE(603)] = 13948,
  [SMALL_STATE(604)] = 13955,
  [SMALL_STATE(605)] = 13962,
  [SMALL_STATE(606)] = 13969,
  [SMALL_STATE(607)] = 13976,
  [SMALL_STATE(608)] = 13983,
  [SMALL_STATE(609)] = 13990,
  [SMALL_STATE(610)] = 13997,
  [SMALL_STATE(611)] = 14004,
  [SMALL_STATE(612)] = 14011,
  [SMALL_STATE(613)] = 14018,
  [SMALL_STATE(614)] = 14025,
  [SMALL_STATE(615)] = 14032,
  [SMALL_STATE(616)] = 14039,
  [SMALL_STATE(617)] = 14046,
  [SMALL_STATE(618)] = 14053,
  [SMALL_STATE(619)] = 14060,
  [SMALL_STATE(620)] = 14067,
  [SMALL_STATE(621)] = 14074,
  [SMALL_STATE(622)] = 14081,
  [SMALL_STATE(623)] = 14088,
  [SMALL_STATE(624)] = 14095,
  [SMALL_STATE(625)] = 14102,
  [SMALL_STATE(626)] = 14109,
  [SMALL_STATE(627)] = 14116,
  [SMALL_STATE(628)] = 14123,
  [SMALL_STATE(629)] = 14130,
  [SMALL_STATE(630)] = 14137,
  [SMALL_STATE(631)] = 14144,
  [SMALL_STATE(632)] = 14151,
  [SMALL_STATE(633)] = 14158,
  [SMALL_STATE(634)] = 14165,
  [SMALL_STATE(635)] = 14172,
  [SMALL_STATE(636)] = 14179,
  [SMALL_STATE(637)] = 14186,
  [SMALL_STATE(638)] = 14193,
  [SMALL_STATE(639)] = 14200,
  [SMALL_STATE(640)] = 14207,
  [SMALL_STATE(641)] = 14214,
  [SMALL_STATE(642)] = 14221,
  [SMALL_STATE(643)] = 14228,
  [SMALL_STATE(644)] = 14235,
  [SMALL_STATE(645)] = 14242,
  [SMALL_STATE(646)] = 14249,
  [SMALL_STATE(647)] = 14256,
  [SMALL_STATE(648)] = 14263,
  [SMALL_STATE(649)] = 14270,
  [SMALL_STATE(650)] = 14277,
  [SMALL_STATE(651)] = 14284,
  [SMALL_STATE(652)] = 14291,
  [SMALL_STATE(653)] = 14298,
  [SMALL_STATE(654)] = 14305,
  [SMALL_STATE(655)] = 14312,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(578),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(585),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(587),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(593),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(596),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(597),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(598),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(604),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(605),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(606),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(607),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(608),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_section_repeat1, 2), SHIFT_REPEAT(625),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_section, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options_section, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(508),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(94),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(105),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(510),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(516),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(102),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(517),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(518),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(342),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(104),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(106),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(93),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asserts_section_repeat1, 2), SHIFT_REPEAT(97),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asserts_section, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asserts_section, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(21),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(21),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(520),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(344),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(80),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(74),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(82),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(83),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(84),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(85),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(86),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(87),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(88),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(89),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(343),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(339),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(509),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(91),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_or_new_line, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_or_new_line, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_very_verbose_option, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_very_verbose_option, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose_option, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbose_option, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compressed_option, 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compressed_option, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca_certificate_option, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ca_certificate_option, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_option, 4),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_option, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_max_count_option, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_max_count_option, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_interval_option, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_interval_option, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_option, 4),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retry_option, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proxy_option, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proxy_option, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_as_is_option, 4),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_as_is_option, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_redirs_option, 4),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_redirs_option, 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insecure_option, 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insecure_option, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_follow_redirect_option, 4),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_follow_redirect_option, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(258),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(553),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(478),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 5),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 4),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_section, 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_section, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 5),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(413),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(412),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(411),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(410),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(435),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(408),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(61),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(61),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(55),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(55),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 4),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(62),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 3),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(60),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(60),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_digit, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_digit, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(273),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(581),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_captures_section_repeat1, 2), SHIFT_REPEAT(471),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_captures_section, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_captures_section, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_auth_section, 4),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_auth_section, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encode_filter, 1),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encode_filter, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_filter, 2),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_filter, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replace_filter, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replace_filter, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_filter, 2),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_filter, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_filter, 1),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_filter, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_filter, 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_filter, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_decode_filter, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_decode_filter, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_escape_filter, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_escape_filter, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_unescape_filter, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_unescape_filter, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_int_filter, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_int_filter, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_days_after_now_filter, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_days_after_now_filter, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_days_before_now_filter, 1),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_days_before_now_filter, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decode_filter, 1),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decode_filter, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_filter, 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_filter, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_filter, 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_filter, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to_date_filter, 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_to_date_filter, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_query, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_query, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md5_query, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md5_query, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_query, 1),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_query, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_query, 2),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_query, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_query, 1),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes_query, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_query, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_query, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_query, 2),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_query, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath_query, 2),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xpath_query, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsonpath_query, 2),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsonpath_query, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_query, 1),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_query, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [756] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(396),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(389),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration_query, 1),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration_query, 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_query, 1),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_query, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha256_query, 1),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sha256_query, 1),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(107),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(107),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 4),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 4),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 5),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 5),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_section, 1),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response_section, 1),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(526),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(369),
  [838] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(154),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(155),
  [844] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(156),
  [847] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(157),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(153),
  [853] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(159),
  [856] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(160),
  [859] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(158),
  [862] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(152),
  [865] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(161),
  [868] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(356),
  [871] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(332),
  [874] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(525),
  [877] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(162),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [928] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2), SHIFT_REPEAT(341),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat1, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [949] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(135),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 2),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 2),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(547),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(626),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2),
  [1014] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(237),
  [1017] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(252),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2), SHIFT_REPEAT(477),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string, 1),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2),
  [1031] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(237),
  [1034] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(252),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(477),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1078] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(249),
  [1081] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(300),
  [1084] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_string_repeat1, 2), SHIFT_REPEAT(453),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [1089] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(368),
  [1092] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(222),
  [1095] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(388),
  [1098] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(246),
  [1101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(248),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [1106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(236),
  [1109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(480),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [1114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(289),
  [1117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2),
  [1119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(550),
  [1122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_string_repeat1, 2), SHIFT_REPEAT(468),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_repeat1, 2),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(258),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(553),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(478),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_content, 1),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_content, 1),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(237),
  [1167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(252),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_content_repeat1, 2),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string, 1),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(273),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(581),
  [1182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(471),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [1207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(238),
  [1210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(360),
  [1213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(467),
  [1216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [1218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(399),
  [1221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(281),
  [1224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(460),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(407),
  [1232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(274),
  [1235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(417),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(284),
  [1243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(612),
  [1246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2), SHIFT_REPEAT(454),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(234),
  [1254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(248),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2), SHIFT_REPEAT(236),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 2),
  [1264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_content, 1),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 1),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 1),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(249),
  [1289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_content_repeat1, 2), SHIFT_REPEAT(300),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string_text, 2),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string_text, 2),
  [1298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2), SHIFT_REPEAT(243),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_string_text_repeat1, 2),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2),
  [1307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(368),
  [1310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_content_repeat1, 2), SHIFT_REPEAT(222),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_content, 1),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_content, 1),
  [1319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(290),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 1),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_text, 1),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_text, 1),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_content, 1),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_content, 1),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_content, 1),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_content, 1),
  [1370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(261),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_string_text_repeat1, 2),
  [1379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(289),
  [1382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2), SHIFT_REPEAT(550),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_string_content_repeat1, 2),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_string_content_repeat1, 2),
  [1393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(267),
  [1396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(553),
  [1399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 3),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 3),
  [1403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 3),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 3),
  [1407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_char, 6),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_char, 6),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_string_escaped_char, 2),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_string_escaped_char, 2),
  [1415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_content, 1),
  [1417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2),
  [1421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fraction, 2),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_open_tag, 3),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_open_tag, 3),
  [1427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(552),
  [1430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2),
  [1432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_content_repeat1, 2), SHIFT_REPEAT(394),
  [1435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2),
  [1437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(399),
  [1440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(279),
  [1443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(280),
  [1446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(581),
  [1449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_content, 1),
  [1451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(285),
  [1454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_content_repeat1, 2), SHIFT_REPEAT(612),
  [1457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(407),
  [1460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_content_repeat1, 2), SHIFT_REPEAT(286),
  [1463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_prolog_tag, 3),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_prolog_tag, 3),
  [1467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_close_tag, 3),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_close_tag, 3),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 1),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_string_content_repeat1, 1),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 2),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hurl_file, 2),
  [1505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(53),
  [1508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hurl_file_repeat2, 2), SHIFT_REPEAT(53),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string_escaped_char, 2),
  [1515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_string_escaped_char, 2),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(311),
  [1526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_or_new_line_repeat1, 2), SHIFT_REPEAT(311),
  [1529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_string_text_repeat1, 2), SHIFT_REPEAT(312),
  [1532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [1534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 2),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 1),
  [1542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_value, 1),
  [1544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_escaped_char, 3),
  [1548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 2),
  [1550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename_escaped_char, 2),
  [1552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 3),
  [1556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_text, 2),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_text, 2),
  [1560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(310),
  [1563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2), SHIFT_REPEAT(310),
  [1566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 3),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2),
  [1580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneline_hex_repeat1, 2), SHIFT_REPEAT(457),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [1587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method, 1),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [1591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 2),
  [1593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 6),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 6),
  [1597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_quoted_string_escaped_char, 2),
  [1599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexdigit, 1),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexdigit, 1),
  [1603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_escaped_char, 2),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_escaped_char, 2),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [1609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string_escaped_char, 2),
  [1613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_text, 1),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_text, 1),
  [1617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_content, 1),
  [1621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text, 1),
  [1623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_repeat1, 2),
  [1625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_repeat1, 2), SHIFT_REPEAT(548),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(310),
  [1633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(310),
  [1636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_escaped_char, 3),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_text, 1),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 2),
  [1650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 2),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [1670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_value, 1),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_predicate, 2),
  [1674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_predicate, 2),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_or_equal_predicate, 2),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_predicate, 2),
  [1682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_predicate, 2),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_or_equal_predicate, 2),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_number, 3),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 3),
  [1698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 3),
  [1700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_escaped_char, 2),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_value, 1),
  [1704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_value, 1),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [1718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(147),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2),
  [1733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_object_repeat1, 2), SHIFT_REPEAT(326),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1764] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_with_predicate, 2),
  [1768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_with_predicate, 2),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_section_repeat1, 2),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_equal_predicate, 2),
  [1776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_equal_predicate, 2),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data_param, 1),
  [1780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data_param, 1),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equal_predicate, 2),
  [1784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equal_predicate, 2),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 2),
  [1788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 2),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 6),
  [1794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 6),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [1802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 2),
  [1804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 2),
  [1806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_param, 4),
  [1816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_param, 4),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string_type, 1),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_func, 1),
  [1830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate_func, 1),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [1834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_predicate, 1),
  [1836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_predicate, 1),
  [1838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_predicate, 1),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_predicate, 1),
  [1842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_predicate, 1),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_predicate, 1),
  [1846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_predicate, 1),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_predicate, 1),
  [1850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_predicate, 1),
  [1852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_predicate, 1),
  [1854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_predicate, 1),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_predicate, 2),
  [1860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_predicate, 2),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exist_predicate, 1),
  [1864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exist_predicate, 1),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [1872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_contenttype, 1),
  [1874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_contenttype, 1),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 2),
  [1878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 2),
  [1880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [1882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes, 1),
  [1886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytes, 1),
  [1888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 1),
  [1890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 1),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml, 2),
  [1898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml, 2),
  [1900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_string, 1, .production_id = 1),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [1912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 2),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_with_predicate, 2),
  [1924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_with_predicate, 2),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_predicate, 2),
  [1934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contain_predicate, 2),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_predicate, 2),
  [1940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_predicate, 2),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [1988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 2),
  [1996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [1998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [2000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_file, 3),
  [2002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_file, 3),
  [2004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_base64, 3),
  [2006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_base64, 3),
  [2008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 4),
  [2010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 3),
  [2012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 3),
  [2014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string, 3),
  [2016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_string, 3),
  [2018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_string, 3),
  [2020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 4),
  [2022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [2024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [2026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 4),
  [2028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 4),
  [2030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_object, 3),
  [2032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_array, 3),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [2036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_number, 3),
  [2038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneline_hex, 2),
  [2040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneline_hex, 2),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [2046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_value, 4),
  [2048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_value, 4),
  [2050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [2052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [2054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [2056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
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
