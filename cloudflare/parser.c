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
#define STATE_COUNT 254
#define LARGE_STATE_COUNT 66
#define SYMBOL_COUNT 214
#define ALIAS_COUNT 0
#define TOKEN_COUNT 173
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 22

enum ts_symbol_identifiers {
  anon_sym_in = 1,
  anon_sym_AMP_AMP = 2,
  anon_sym_and = 3,
  anon_sym_xor = 4,
  anon_sym_CARET_CARET = 5,
  anon_sym_or = 6,
  anon_sym_PIPE_PIPE = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_comment = 10,
  anon_sym_eq = 11,
  anon_sym_ne = 12,
  anon_sym_lt = 13,
  anon_sym_le = 14,
  anon_sym_gt = 15,
  anon_sym_ge = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_LT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT = 21,
  anon_sym_GT_EQ = 22,
  anon_sym_contains = 23,
  anon_sym_matches = 24,
  anon_sym_strictwildcard = 25,
  anon_sym_wildcard = 26,
  anon_sym_TILDE = 27,
  anon_sym_concat = 28,
  anon_sym_LPAREN = 29,
  anon_sym_COMMA = 30,
  anon_sym_RPAREN = 31,
  anon_sym_lookup_json_string = 32,
  anon_sym_lower = 33,
  anon_sym_regex_replace = 34,
  anon_sym_remove_bytes = 35,
  anon_sym_to_string = 36,
  anon_sym_upper = 37,
  anon_sym_url_decode = 38,
  anon_sym_uuidv4 = 39,
  anon_sym_len = 40,
  anon_sym_ends_with = 41,
  anon_sym_starts_with = 42,
  anon_sym_any = 43,
  anon_sym_all = 44,
  anon_sym_LBRACK_STAR_RBRACK = 45,
  sym_number = 46,
  sym_string = 47,
  anon_sym_true = 48,
  anon_sym_false = 49,
  sym_ipv4 = 50,
  anon_sym_SLASH = 51,
  aux_sym_ip_range_token1 = 52,
  sym_ip_list = 53,
  anon_sym_not = 54,
  anon_sym_BANG = 55,
  anon_sym_LBRACK = 56,
  anon_sym_RBRACK = 57,
  anon_sym_STAR = 58,
  anon_sym_http_DOTrequest_DOTtimestamp_DOTsec = 59,
  anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec = 60,
  anon_sym_ip_DOTgeoip_DOTasnum = 61,
  anon_sym_ip_DOTsrc_DOTasnum = 62,
  anon_sym_cf_DOTbot_management_DOTscore = 63,
  anon_sym_cf_DOTedge_DOTserver_port = 64,
  anon_sym_cf_DOTthreat_score = 65,
  anon_sym_cf_DOTwaf_DOTscore = 66,
  anon_sym_cf_DOTwaf_DOTscore_DOTsqli = 67,
  anon_sym_cf_DOTwaf_DOTscore_DOTxss = 68,
  anon_sym_cf_DOTwaf_DOTscore_DOTrce = 69,
  anon_sym_icmp_DOTtype = 70,
  anon_sym_icmp_DOTcode = 71,
  anon_sym_ip_DOThdr_len = 72,
  anon_sym_ip_DOTlen = 73,
  anon_sym_ip_DOTopt_DOTtype = 74,
  anon_sym_ip_DOTttl = 75,
  anon_sym_tcp_DOTflags = 76,
  anon_sym_tcp_DOTsrcport = 77,
  anon_sym_tcp_DOTdstport = 78,
  anon_sym_udp_DOTdstport = 79,
  anon_sym_udp_DOTsrcport = 80,
  anon_sym_http_DOTrequest_DOTbody_DOTsize = 81,
  anon_sym_http_DOTresponse_DOTcode = 82,
  anon_sym_http_DOTresponse_DOT1xxx_code = 83,
  anon_sym_ip_DOTsrc = 84,
  anon_sym_cf_DOTedge_DOTserver_ip = 85,
  anon_sym_ip_DOTdst = 86,
  anon_sym_http_DOTcookie = 87,
  anon_sym_http_DOThost = 88,
  anon_sym_http_DOTreferer = 89,
  anon_sym_http_DOTrequest_DOTfull_uri = 90,
  anon_sym_http_DOTrequest_DOTmethod = 91,
  anon_sym_http_DOTrequest_DOTuri = 92,
  anon_sym_http_DOTrequest_DOTuri_DOTpath = 93,
  anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension = 94,
  anon_sym_http_DOTrequest_DOTuri_DOTquery = 95,
  anon_sym_http_DOTuser_agent = 96,
  anon_sym_http_DOTrequest_DOTversion = 97,
  anon_sym_http_DOTx_forwarded_for = 98,
  anon_sym_ip_DOTsrc_DOTlat = 99,
  anon_sym_ip_DOTsrc_DOTlon = 100,
  anon_sym_ip_DOTsrc_DOTcity = 101,
  anon_sym_ip_DOTsrc_DOTpostal_code = 102,
  anon_sym_ip_DOTsrc_DOTmetro_code = 103,
  anon_sym_ip_DOTsrc_DOTregion = 104,
  anon_sym_ip_DOTsrc_DOTregion_code = 105,
  anon_sym_ip_DOTsrc_DOTtimezone_DOTname = 106,
  anon_sym_ip_DOTgeoip_DOTcontinent = 107,
  anon_sym_ip_DOTgeoip_DOTcountry = 108,
  anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code = 109,
  anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code = 110,
  anon_sym_ip_DOTsrc_DOTcontinent = 111,
  anon_sym_ip_DOTsrc_DOTcountry = 112,
  anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code = 113,
  anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code = 114,
  anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri = 115,
  anon_sym_raw_DOThttp_DOTrequest_DOTuri = 116,
  anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath = 117,
  anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery = 118,
  anon_sym_cf_DOTbot_management_DOTja3_hash = 119,
  anon_sym_cf_DOTverified_bot_category = 120,
  anon_sym_cf_DOThostname_DOTmetadata = 121,
  anon_sym_cf_DOTworker_DOTupstream_zone = 122,
  anon_sym_cf_DOTcolo_DOTname = 123,
  anon_sym_cf_DOTcolo_DOTregion = 124,
  anon_sym_icmp = 125,
  anon_sym_ip = 126,
  anon_sym_ip_DOTdst_DOTcountry = 127,
  anon_sym_tcp = 128,
  anon_sym_udp = 129,
  anon_sym_http_DOTrequest_DOTbody_DOTraw = 130,
  anon_sym_http_DOTrequest_DOTbody_DOTmime = 131,
  anon_sym_cf_DOTresponse_DOTerror_type = 132,
  anon_sym_cf_DOTrandom_seed = 133,
  anon_sym_http_DOTrequest_DOTcookies = 134,
  anon_sym_http_DOTrequest_DOTuri_DOTargs = 135,
  anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs = 136,
  anon_sym_http_DOTrequest_DOTheaders = 137,
  anon_sym_http_DOTrequest_DOTbody_DOTform = 138,
  anon_sym_http_DOTresponse_DOTheaders = 139,
  anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames = 140,
  anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues = 141,
  anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames = 142,
  anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues = 143,
  anon_sym_http_DOTrequest_DOTheaders_DOTnames = 144,
  anon_sym_http_DOTrequest_DOTheaders_DOTvalues = 145,
  anon_sym_http_DOTrequest_DOTaccepted_languages = 146,
  anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames = 147,
  anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues = 148,
  anon_sym_http_DOTresponse_DOTheaders_DOTnames = 149,
  anon_sym_http_DOTresponse_DOTheaders_DOTvalues = 150,
  anon_sym_cf_DOTbot_management_DOTdetection_ids = 151,
  anon_sym_ip_DOTgeoip_DOTis_in_european_union = 152,
  anon_sym_ip_DOTsrc_DOTis_in_european_union = 153,
  anon_sym_ssl = 154,
  anon_sym_cf_DOTbot_management_DOTverified_bot = 155,
  anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed = 156,
  anon_sym_cf_DOTbot_management_DOTcorporate_proxy = 157,
  anon_sym_cf_DOTbot_management_DOTstatic_resource = 158,
  anon_sym_cf_DOTclient_DOTbot = 159,
  anon_sym_cf_DOTtls_client_auth_DOTcert_revoked = 160,
  anon_sym_cf_DOTtls_client_auth_DOTcert_verified = 161,
  anon_sym_sip = 162,
  anon_sym_tcp_DOTflags_DOTack = 163,
  anon_sym_tcp_DOTflags_DOTcwr = 164,
  anon_sym_tcp_DOTflags_DOTecn = 165,
  anon_sym_tcp_DOTflags_DOTfin = 166,
  anon_sym_tcp_DOTflags_DOTpush = 167,
  anon_sym_tcp_DOTflags_DOTreset = 168,
  anon_sym_tcp_DOTflags_DOTsyn = 169,
  anon_sym_tcp_DOTflags_DOTurg = 170,
  anon_sym_http_DOTrequest_DOTheaders_DOTtruncated = 171,
  anon_sym_http_DOTrequest_DOTbody_DOTtruncated = 172,
  sym_source_file = 173,
  sym__expression = 174,
  sym_not_expression = 175,
  sym_in_expression = 176,
  sym_compound_expression = 177,
  sym_ip_set = 178,
  sym_string_set = 179,
  sym_number_set = 180,
  sym_simple_expression = 181,
  sym__bool_lhs = 182,
  sym__number_lhs = 183,
  sym_string_func = 184,
  sym_number_func = 185,
  sym_bool_func = 186,
  sym_array_func = 187,
  sym_group = 188,
  sym_boolean = 189,
  sym__ip = 190,
  sym_ip_range = 191,
  sym_not_operator = 192,
  sym_number_array = 193,
  sym_bool_array = 194,
  sym_string_array = 195,
  sym__string_array_expansion = 196,
  sym_boollike_field = 197,
  sym_numberlike_field = 198,
  sym_stringlike_field = 199,
  sym_number_field = 200,
  sym_ip_field = 201,
  sym_string_field = 202,
  sym_bytes_field = 203,
  sym_map_string_array_field = 204,
  sym_array_string_field = 205,
  sym_array_number_field = 206,
  sym_bool_field = 207,
  aux_sym_source_file_repeat1 = 208,
  aux_sym_ip_set_repeat1 = 209,
  aux_sym_string_set_repeat1 = 210,
  aux_sym_number_set_repeat1 = 211,
  aux_sym_string_func_repeat1 = 212,
  aux_sym_string_func_repeat2 = 213,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_in] = "in",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_and] = "and",
  [anon_sym_xor] = "xor",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_or] = "or",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [anon_sym_eq] = "eq",
  [anon_sym_ne] = "ne",
  [anon_sym_lt] = "lt",
  [anon_sym_le] = "le",
  [anon_sym_gt] = "gt",
  [anon_sym_ge] = "ge",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_contains] = "contains",
  [anon_sym_matches] = "matches",
  [anon_sym_strictwildcard] = "strict wildcard",
  [anon_sym_wildcard] = "wildcard",
  [anon_sym_TILDE] = "~",
  [anon_sym_concat] = "concat",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_lookup_json_string] = "lookup_json_string",
  [anon_sym_lower] = "lower",
  [anon_sym_regex_replace] = "regex_replace",
  [anon_sym_remove_bytes] = "remove_bytes",
  [anon_sym_to_string] = "to_string",
  [anon_sym_upper] = "upper",
  [anon_sym_url_decode] = "url_decode",
  [anon_sym_uuidv4] = "uuidv4",
  [anon_sym_len] = "len",
  [anon_sym_ends_with] = "ends_with",
  [anon_sym_starts_with] = "starts_with",
  [anon_sym_any] = "any",
  [anon_sym_all] = "all",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_ipv4] = "ipv4",
  [anon_sym_SLASH] = "/",
  [aux_sym_ip_range_token1] = "ip_range_token1",
  [sym_ip_list] = "ip_list",
  [anon_sym_not] = "not",
  [anon_sym_BANG] = "!",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = "http.request.timestamp.sec",
  [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = "http.request.timestamp.msec",
  [anon_sym_ip_DOTgeoip_DOTasnum] = "ip.geoip.asnum",
  [anon_sym_ip_DOTsrc_DOTasnum] = "ip.src.asnum",
  [anon_sym_cf_DOTbot_management_DOTscore] = "cf.bot_management.score",
  [anon_sym_cf_DOTedge_DOTserver_port] = "cf.edge.server_port",
  [anon_sym_cf_DOTthreat_score] = "cf.threat_score",
  [anon_sym_cf_DOTwaf_DOTscore] = "cf.waf.score",
  [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = "cf.waf.score.sqli",
  [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = "cf.waf.score.xss",
  [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = "cf.waf.score.rce",
  [anon_sym_icmp_DOTtype] = "icmp.type",
  [anon_sym_icmp_DOTcode] = "icmp.code",
  [anon_sym_ip_DOThdr_len] = "ip.hdr_len",
  [anon_sym_ip_DOTlen] = "ip.len",
  [anon_sym_ip_DOTopt_DOTtype] = "ip.opt.type",
  [anon_sym_ip_DOTttl] = "ip.ttl",
  [anon_sym_tcp_DOTflags] = "tcp.flags",
  [anon_sym_tcp_DOTsrcport] = "tcp.srcport",
  [anon_sym_tcp_DOTdstport] = "tcp.dstport",
  [anon_sym_udp_DOTdstport] = "udp.dstport",
  [anon_sym_udp_DOTsrcport] = "udp.srcport",
  [anon_sym_http_DOTrequest_DOTbody_DOTsize] = "http.request.body.size",
  [anon_sym_http_DOTresponse_DOTcode] = "http.response.code",
  [anon_sym_http_DOTresponse_DOT1xxx_code] = "http.response.1xxx_code",
  [anon_sym_ip_DOTsrc] = "ip.src",
  [anon_sym_cf_DOTedge_DOTserver_ip] = "cf.edge.server_ip",
  [anon_sym_ip_DOTdst] = "ip.dst",
  [anon_sym_http_DOTcookie] = "http.cookie",
  [anon_sym_http_DOThost] = "http.host",
  [anon_sym_http_DOTreferer] = "http.referer",
  [anon_sym_http_DOTrequest_DOTfull_uri] = "http.request.full_uri",
  [anon_sym_http_DOTrequest_DOTmethod] = "http.request.method",
  [anon_sym_http_DOTrequest_DOTuri] = "http.request.uri",
  [anon_sym_http_DOTrequest_DOTuri_DOTpath] = "http.request.uri.path",
  [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = "http.request.uri.path.extension",
  [anon_sym_http_DOTrequest_DOTuri_DOTquery] = "http.request.uri.query",
  [anon_sym_http_DOTuser_agent] = "http.user_agent",
  [anon_sym_http_DOTrequest_DOTversion] = "http.request.version",
  [anon_sym_http_DOTx_forwarded_for] = "http.x_forwarded_for",
  [anon_sym_ip_DOTsrc_DOTlat] = "ip.src.lat",
  [anon_sym_ip_DOTsrc_DOTlon] = "ip.src.lon",
  [anon_sym_ip_DOTsrc_DOTcity] = "ip.src.city",
  [anon_sym_ip_DOTsrc_DOTpostal_code] = "ip.src.postal_code",
  [anon_sym_ip_DOTsrc_DOTmetro_code] = "ip.src.metro_code",
  [anon_sym_ip_DOTsrc_DOTregion] = "ip.src.region",
  [anon_sym_ip_DOTsrc_DOTregion_code] = "ip.src.region_code",
  [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = "ip.src.timezone.name",
  [anon_sym_ip_DOTgeoip_DOTcontinent] = "ip.geoip.continent",
  [anon_sym_ip_DOTgeoip_DOTcountry] = "ip.geoip.country",
  [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = "ip.geoip.subdivision_1_iso_code",
  [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = "ip.geoip.subdivision_2_iso_code",
  [anon_sym_ip_DOTsrc_DOTcontinent] = "ip.src.continent",
  [anon_sym_ip_DOTsrc_DOTcountry] = "ip.src.country",
  [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = "ip.src.subdivision_1_iso_code",
  [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = "ip.src.subdivision_2_iso_code",
  [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = "raw.http.request.full_uri",
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = "raw.http.request.uri",
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = "raw.http.request.uri.path",
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = "raw.http.request.uri.query",
  [anon_sym_cf_DOTbot_management_DOTja3_hash] = "cf.bot_management.ja3_hash",
  [anon_sym_cf_DOTverified_bot_category] = "cf.verified_bot_category",
  [anon_sym_cf_DOThostname_DOTmetadata] = "cf.hostname.metadata",
  [anon_sym_cf_DOTworker_DOTupstream_zone] = "cf.worker.upstream_zone",
  [anon_sym_cf_DOTcolo_DOTname] = "cf.colo.name",
  [anon_sym_cf_DOTcolo_DOTregion] = "cf.colo.region",
  [anon_sym_icmp] = "icmp",
  [anon_sym_ip] = "ip",
  [anon_sym_ip_DOTdst_DOTcountry] = "ip.dst.country",
  [anon_sym_tcp] = "tcp",
  [anon_sym_udp] = "udp",
  [anon_sym_http_DOTrequest_DOTbody_DOTraw] = "http.request.body.raw",
  [anon_sym_http_DOTrequest_DOTbody_DOTmime] = "http.request.body.mime",
  [anon_sym_cf_DOTresponse_DOTerror_type] = "cf.response.error_type",
  [anon_sym_cf_DOTrandom_seed] = "cf.random_seed",
  [anon_sym_http_DOTrequest_DOTcookies] = "http.request.cookies",
  [anon_sym_http_DOTrequest_DOTuri_DOTargs] = "http.request.uri.args",
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = "raw.http.request.uri.args",
  [anon_sym_http_DOTrequest_DOTheaders] = "http.request.headers",
  [anon_sym_http_DOTrequest_DOTbody_DOTform] = "http.request.body.form",
  [anon_sym_http_DOTresponse_DOTheaders] = "http.response.headers",
  [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = "http.request.uri.args.names",
  [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = "http.request.uri.args.values",
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = "raw.http.request.uri.args.names",
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = "raw.http.request.uri.args.values",
  [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = "http.request.headers.names",
  [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = "http.request.headers.values",
  [anon_sym_http_DOTrequest_DOTaccepted_languages] = "http.request.accepted_languages",
  [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = "http.request.body.form.names",
  [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = "http.request.body.form.values",
  [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = "http.response.headers.names",
  [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = "http.response.headers.values",
  [anon_sym_cf_DOTbot_management_DOTdetection_ids] = "cf.bot_management.detection_ids",
  [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = "ip.geoip.is_in_european_union",
  [anon_sym_ip_DOTsrc_DOTis_in_european_union] = "ip.src.is_in_european_union",
  [anon_sym_ssl] = "ssl",
  [anon_sym_cf_DOTbot_management_DOTverified_bot] = "cf.bot_management.verified_bot",
  [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = "cf.bot_management.js_detection.passed",
  [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = "cf.bot_management.corporate_proxy",
  [anon_sym_cf_DOTbot_management_DOTstatic_resource] = "cf.bot_management.static_resource",
  [anon_sym_cf_DOTclient_DOTbot] = "cf.client.bot",
  [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = "cf.tls_client_auth.cert_revoked",
  [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = "cf.tls_client_auth.cert_verified",
  [anon_sym_sip] = "sip",
  [anon_sym_tcp_DOTflags_DOTack] = "tcp.flags.ack",
  [anon_sym_tcp_DOTflags_DOTcwr] = "tcp.flags.cwr",
  [anon_sym_tcp_DOTflags_DOTecn] = "tcp.flags.ecn",
  [anon_sym_tcp_DOTflags_DOTfin] = "tcp.flags.fin",
  [anon_sym_tcp_DOTflags_DOTpush] = "tcp.flags.push",
  [anon_sym_tcp_DOTflags_DOTreset] = "tcp.flags.reset",
  [anon_sym_tcp_DOTflags_DOTsyn] = "tcp.flags.syn",
  [anon_sym_tcp_DOTflags_DOTurg] = "tcp.flags.urg",
  [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = "http.request.headers.truncated",
  [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = "http.request.body.truncated",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_not_expression] = "not_expression",
  [sym_in_expression] = "in_expression",
  [sym_compound_expression] = "compound_expression",
  [sym_ip_set] = "ip_set",
  [sym_string_set] = "string_set",
  [sym_number_set] = "number_set",
  [sym_simple_expression] = "simple_expression",
  [sym__bool_lhs] = "_bool_lhs",
  [sym__number_lhs] = "_number_lhs",
  [sym_string_func] = "string_func",
  [sym_number_func] = "number_func",
  [sym_bool_func] = "bool_func",
  [sym_array_func] = "array_func",
  [sym_group] = "group",
  [sym_boolean] = "boolean",
  [sym__ip] = "_ip",
  [sym_ip_range] = "ip_range",
  [sym_not_operator] = "not_operator",
  [sym_number_array] = "number_array",
  [sym_bool_array] = "bool_array",
  [sym_string_array] = "string_array",
  [sym__string_array_expansion] = "_string_array_expansion",
  [sym_boollike_field] = "boollike_field",
  [sym_numberlike_field] = "numberlike_field",
  [sym_stringlike_field] = "stringlike_field",
  [sym_number_field] = "number_field",
  [sym_ip_field] = "ip_field",
  [sym_string_field] = "string_field",
  [sym_bytes_field] = "bytes_field",
  [sym_map_string_array_field] = "map_string_array_field",
  [sym_array_string_field] = "array_string_field",
  [sym_array_number_field] = "array_number_field",
  [sym_bool_field] = "bool_field",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_ip_set_repeat1] = "ip_set_repeat1",
  [aux_sym_string_set_repeat1] = "string_set_repeat1",
  [aux_sym_number_set_repeat1] = "number_set_repeat1",
  [aux_sym_string_func_repeat1] = "string_func_repeat1",
  [aux_sym_string_func_repeat2] = "string_func_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_ne] = anon_sym_ne,
  [anon_sym_lt] = anon_sym_lt,
  [anon_sym_le] = anon_sym_le,
  [anon_sym_gt] = anon_sym_gt,
  [anon_sym_ge] = anon_sym_ge,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_matches] = anon_sym_matches,
  [anon_sym_strictwildcard] = anon_sym_strictwildcard,
  [anon_sym_wildcard] = anon_sym_wildcard,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_concat] = anon_sym_concat,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_lookup_json_string] = anon_sym_lookup_json_string,
  [anon_sym_lower] = anon_sym_lower,
  [anon_sym_regex_replace] = anon_sym_regex_replace,
  [anon_sym_remove_bytes] = anon_sym_remove_bytes,
  [anon_sym_to_string] = anon_sym_to_string,
  [anon_sym_upper] = anon_sym_upper,
  [anon_sym_url_decode] = anon_sym_url_decode,
  [anon_sym_uuidv4] = anon_sym_uuidv4,
  [anon_sym_len] = anon_sym_len,
  [anon_sym_ends_with] = anon_sym_ends_with,
  [anon_sym_starts_with] = anon_sym_starts_with,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_ipv4] = sym_ipv4,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_ip_range_token1] = aux_sym_ip_range_token1,
  [sym_ip_list] = sym_ip_list,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = anon_sym_http_DOTrequest_DOTtimestamp_DOTsec,
  [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec,
  [anon_sym_ip_DOTgeoip_DOTasnum] = anon_sym_ip_DOTgeoip_DOTasnum,
  [anon_sym_ip_DOTsrc_DOTasnum] = anon_sym_ip_DOTsrc_DOTasnum,
  [anon_sym_cf_DOTbot_management_DOTscore] = anon_sym_cf_DOTbot_management_DOTscore,
  [anon_sym_cf_DOTedge_DOTserver_port] = anon_sym_cf_DOTedge_DOTserver_port,
  [anon_sym_cf_DOTthreat_score] = anon_sym_cf_DOTthreat_score,
  [anon_sym_cf_DOTwaf_DOTscore] = anon_sym_cf_DOTwaf_DOTscore,
  [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = anon_sym_cf_DOTwaf_DOTscore_DOTsqli,
  [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = anon_sym_cf_DOTwaf_DOTscore_DOTxss,
  [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = anon_sym_cf_DOTwaf_DOTscore_DOTrce,
  [anon_sym_icmp_DOTtype] = anon_sym_icmp_DOTtype,
  [anon_sym_icmp_DOTcode] = anon_sym_icmp_DOTcode,
  [anon_sym_ip_DOThdr_len] = anon_sym_ip_DOThdr_len,
  [anon_sym_ip_DOTlen] = anon_sym_ip_DOTlen,
  [anon_sym_ip_DOTopt_DOTtype] = anon_sym_ip_DOTopt_DOTtype,
  [anon_sym_ip_DOTttl] = anon_sym_ip_DOTttl,
  [anon_sym_tcp_DOTflags] = anon_sym_tcp_DOTflags,
  [anon_sym_tcp_DOTsrcport] = anon_sym_tcp_DOTsrcport,
  [anon_sym_tcp_DOTdstport] = anon_sym_tcp_DOTdstport,
  [anon_sym_udp_DOTdstport] = anon_sym_udp_DOTdstport,
  [anon_sym_udp_DOTsrcport] = anon_sym_udp_DOTsrcport,
  [anon_sym_http_DOTrequest_DOTbody_DOTsize] = anon_sym_http_DOTrequest_DOTbody_DOTsize,
  [anon_sym_http_DOTresponse_DOTcode] = anon_sym_http_DOTresponse_DOTcode,
  [anon_sym_http_DOTresponse_DOT1xxx_code] = anon_sym_http_DOTresponse_DOT1xxx_code,
  [anon_sym_ip_DOTsrc] = anon_sym_ip_DOTsrc,
  [anon_sym_cf_DOTedge_DOTserver_ip] = anon_sym_cf_DOTedge_DOTserver_ip,
  [anon_sym_ip_DOTdst] = anon_sym_ip_DOTdst,
  [anon_sym_http_DOTcookie] = anon_sym_http_DOTcookie,
  [anon_sym_http_DOThost] = anon_sym_http_DOThost,
  [anon_sym_http_DOTreferer] = anon_sym_http_DOTreferer,
  [anon_sym_http_DOTrequest_DOTfull_uri] = anon_sym_http_DOTrequest_DOTfull_uri,
  [anon_sym_http_DOTrequest_DOTmethod] = anon_sym_http_DOTrequest_DOTmethod,
  [anon_sym_http_DOTrequest_DOTuri] = anon_sym_http_DOTrequest_DOTuri,
  [anon_sym_http_DOTrequest_DOTuri_DOTpath] = anon_sym_http_DOTrequest_DOTuri_DOTpath,
  [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension,
  [anon_sym_http_DOTrequest_DOTuri_DOTquery] = anon_sym_http_DOTrequest_DOTuri_DOTquery,
  [anon_sym_http_DOTuser_agent] = anon_sym_http_DOTuser_agent,
  [anon_sym_http_DOTrequest_DOTversion] = anon_sym_http_DOTrequest_DOTversion,
  [anon_sym_http_DOTx_forwarded_for] = anon_sym_http_DOTx_forwarded_for,
  [anon_sym_ip_DOTsrc_DOTlat] = anon_sym_ip_DOTsrc_DOTlat,
  [anon_sym_ip_DOTsrc_DOTlon] = anon_sym_ip_DOTsrc_DOTlon,
  [anon_sym_ip_DOTsrc_DOTcity] = anon_sym_ip_DOTsrc_DOTcity,
  [anon_sym_ip_DOTsrc_DOTpostal_code] = anon_sym_ip_DOTsrc_DOTpostal_code,
  [anon_sym_ip_DOTsrc_DOTmetro_code] = anon_sym_ip_DOTsrc_DOTmetro_code,
  [anon_sym_ip_DOTsrc_DOTregion] = anon_sym_ip_DOTsrc_DOTregion,
  [anon_sym_ip_DOTsrc_DOTregion_code] = anon_sym_ip_DOTsrc_DOTregion_code,
  [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = anon_sym_ip_DOTsrc_DOTtimezone_DOTname,
  [anon_sym_ip_DOTgeoip_DOTcontinent] = anon_sym_ip_DOTgeoip_DOTcontinent,
  [anon_sym_ip_DOTgeoip_DOTcountry] = anon_sym_ip_DOTgeoip_DOTcountry,
  [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code,
  [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code,
  [anon_sym_ip_DOTsrc_DOTcontinent] = anon_sym_ip_DOTsrc_DOTcontinent,
  [anon_sym_ip_DOTsrc_DOTcountry] = anon_sym_ip_DOTsrc_DOTcountry,
  [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code,
  [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code,
  [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri,
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = anon_sym_raw_DOThttp_DOTrequest_DOTuri,
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath,
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery,
  [anon_sym_cf_DOTbot_management_DOTja3_hash] = anon_sym_cf_DOTbot_management_DOTja3_hash,
  [anon_sym_cf_DOTverified_bot_category] = anon_sym_cf_DOTverified_bot_category,
  [anon_sym_cf_DOThostname_DOTmetadata] = anon_sym_cf_DOThostname_DOTmetadata,
  [anon_sym_cf_DOTworker_DOTupstream_zone] = anon_sym_cf_DOTworker_DOTupstream_zone,
  [anon_sym_cf_DOTcolo_DOTname] = anon_sym_cf_DOTcolo_DOTname,
  [anon_sym_cf_DOTcolo_DOTregion] = anon_sym_cf_DOTcolo_DOTregion,
  [anon_sym_icmp] = anon_sym_icmp,
  [anon_sym_ip] = anon_sym_ip,
  [anon_sym_ip_DOTdst_DOTcountry] = anon_sym_ip_DOTdst_DOTcountry,
  [anon_sym_tcp] = anon_sym_tcp,
  [anon_sym_udp] = anon_sym_udp,
  [anon_sym_http_DOTrequest_DOTbody_DOTraw] = anon_sym_http_DOTrequest_DOTbody_DOTraw,
  [anon_sym_http_DOTrequest_DOTbody_DOTmime] = anon_sym_http_DOTrequest_DOTbody_DOTmime,
  [anon_sym_cf_DOTresponse_DOTerror_type] = anon_sym_cf_DOTresponse_DOTerror_type,
  [anon_sym_cf_DOTrandom_seed] = anon_sym_cf_DOTrandom_seed,
  [anon_sym_http_DOTrequest_DOTcookies] = anon_sym_http_DOTrequest_DOTcookies,
  [anon_sym_http_DOTrequest_DOTuri_DOTargs] = anon_sym_http_DOTrequest_DOTuri_DOTargs,
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs,
  [anon_sym_http_DOTrequest_DOTheaders] = anon_sym_http_DOTrequest_DOTheaders,
  [anon_sym_http_DOTrequest_DOTbody_DOTform] = anon_sym_http_DOTrequest_DOTbody_DOTform,
  [anon_sym_http_DOTresponse_DOTheaders] = anon_sym_http_DOTresponse_DOTheaders,
  [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames,
  [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues,
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames,
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues,
  [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = anon_sym_http_DOTrequest_DOTheaders_DOTnames,
  [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = anon_sym_http_DOTrequest_DOTheaders_DOTvalues,
  [anon_sym_http_DOTrequest_DOTaccepted_languages] = anon_sym_http_DOTrequest_DOTaccepted_languages,
  [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames,
  [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues,
  [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = anon_sym_http_DOTresponse_DOTheaders_DOTnames,
  [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = anon_sym_http_DOTresponse_DOTheaders_DOTvalues,
  [anon_sym_cf_DOTbot_management_DOTdetection_ids] = anon_sym_cf_DOTbot_management_DOTdetection_ids,
  [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = anon_sym_ip_DOTgeoip_DOTis_in_european_union,
  [anon_sym_ip_DOTsrc_DOTis_in_european_union] = anon_sym_ip_DOTsrc_DOTis_in_european_union,
  [anon_sym_ssl] = anon_sym_ssl,
  [anon_sym_cf_DOTbot_management_DOTverified_bot] = anon_sym_cf_DOTbot_management_DOTverified_bot,
  [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed,
  [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = anon_sym_cf_DOTbot_management_DOTcorporate_proxy,
  [anon_sym_cf_DOTbot_management_DOTstatic_resource] = anon_sym_cf_DOTbot_management_DOTstatic_resource,
  [anon_sym_cf_DOTclient_DOTbot] = anon_sym_cf_DOTclient_DOTbot,
  [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = anon_sym_cf_DOTtls_client_auth_DOTcert_revoked,
  [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = anon_sym_cf_DOTtls_client_auth_DOTcert_verified,
  [anon_sym_sip] = anon_sym_sip,
  [anon_sym_tcp_DOTflags_DOTack] = anon_sym_tcp_DOTflags_DOTack,
  [anon_sym_tcp_DOTflags_DOTcwr] = anon_sym_tcp_DOTflags_DOTcwr,
  [anon_sym_tcp_DOTflags_DOTecn] = anon_sym_tcp_DOTflags_DOTecn,
  [anon_sym_tcp_DOTflags_DOTfin] = anon_sym_tcp_DOTflags_DOTfin,
  [anon_sym_tcp_DOTflags_DOTpush] = anon_sym_tcp_DOTflags_DOTpush,
  [anon_sym_tcp_DOTflags_DOTreset] = anon_sym_tcp_DOTflags_DOTreset,
  [anon_sym_tcp_DOTflags_DOTsyn] = anon_sym_tcp_DOTflags_DOTsyn,
  [anon_sym_tcp_DOTflags_DOTurg] = anon_sym_tcp_DOTflags_DOTurg,
  [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = anon_sym_http_DOTrequest_DOTheaders_DOTtruncated,
  [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = anon_sym_http_DOTrequest_DOTbody_DOTtruncated,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_not_expression] = sym_not_expression,
  [sym_in_expression] = sym_in_expression,
  [sym_compound_expression] = sym_compound_expression,
  [sym_ip_set] = sym_ip_set,
  [sym_string_set] = sym_string_set,
  [sym_number_set] = sym_number_set,
  [sym_simple_expression] = sym_simple_expression,
  [sym__bool_lhs] = sym__bool_lhs,
  [sym__number_lhs] = sym__number_lhs,
  [sym_string_func] = sym_string_func,
  [sym_number_func] = sym_number_func,
  [sym_bool_func] = sym_bool_func,
  [sym_array_func] = sym_array_func,
  [sym_group] = sym_group,
  [sym_boolean] = sym_boolean,
  [sym__ip] = sym__ip,
  [sym_ip_range] = sym_ip_range,
  [sym_not_operator] = sym_not_operator,
  [sym_number_array] = sym_number_array,
  [sym_bool_array] = sym_bool_array,
  [sym_string_array] = sym_string_array,
  [sym__string_array_expansion] = sym__string_array_expansion,
  [sym_boollike_field] = sym_boollike_field,
  [sym_numberlike_field] = sym_numberlike_field,
  [sym_stringlike_field] = sym_stringlike_field,
  [sym_number_field] = sym_number_field,
  [sym_ip_field] = sym_ip_field,
  [sym_string_field] = sym_string_field,
  [sym_bytes_field] = sym_bytes_field,
  [sym_map_string_array_field] = sym_map_string_array_field,
  [sym_array_string_field] = sym_array_string_field,
  [sym_array_number_field] = sym_array_number_field,
  [sym_bool_field] = sym_bool_field,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_ip_set_repeat1] = aux_sym_ip_set_repeat1,
  [aux_sym_string_set_repeat1] = aux_sym_string_set_repeat1,
  [aux_sym_number_set_repeat1] = aux_sym_number_set_repeat1,
  [aux_sym_string_func_repeat1] = aux_sym_string_func_repeat1,
  [aux_sym_string_func_repeat2] = aux_sym_string_func_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_le] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
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
  [anon_sym_strictwildcard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wildcard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lookup_json_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lower] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex_replace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url_decode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uuidv4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_len] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ends_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_starts_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_ipv4] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ip_range_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ip_list] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTgeoip_DOTasnum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTasnum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTbot_management_DOTscore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTedge_DOTserver_port] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTthreat_score] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTwaf_DOTscore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmp_DOTtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmp_DOTcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOThdr_len] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTlen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTopt_DOTtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTttl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTflags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTsrcport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTdstport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp_DOTdstport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp_DOTsrcport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTbody_DOTsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTresponse_DOTcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTresponse_DOT1xxx_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTedge_DOTserver_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTdst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTcookie] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOThost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTreferer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTfull_uri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTmethod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTuri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTuri_DOTpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTuri_DOTquery] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTuser_agent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTx_forwarded_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTlat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTlon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTcity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTpostal_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTmetro_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTregion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTregion_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTgeoip_DOTcontinent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTgeoip_DOTcountry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTcontinent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTcountry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTbot_management_DOTja3_hash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTverified_bot_category] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOThostname_DOTmetadata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTworker_DOTupstream_zone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTcolo_DOTname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTcolo_DOTregion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTdst_DOTcountry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTbody_DOTraw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTbody_DOTmime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTresponse_DOTerror_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTrandom_seed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTcookies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTuri_DOTargs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTheaders] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTbody_DOTform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTresponse_DOTheaders] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTaccepted_languages] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTbot_management_DOTdetection_ids] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip_DOTsrc_DOTis_in_european_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ssl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTbot_management_DOTverified_bot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTbot_management_DOTstatic_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTclient_DOTbot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTflags_DOTack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTflags_DOTcwr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTflags_DOTecn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTflags_DOTfin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTflags_DOTpush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTflags_DOTreset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTflags_DOTsyn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp_DOTflags_DOTurg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_not_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_in_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_set] = {
    .visible = true,
    .named = true,
  },
  [sym_string_set] = {
    .visible = true,
    .named = true,
  },
  [sym_number_set] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__bool_lhs] = {
    .visible = false,
    .named = true,
  },
  [sym__number_lhs] = {
    .visible = false,
    .named = true,
  },
  [sym_string_func] = {
    .visible = true,
    .named = true,
  },
  [sym_number_func] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_func] = {
    .visible = true,
    .named = true,
  },
  [sym_array_func] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__ip] = {
    .visible = false,
    .named = true,
  },
  [sym_ip_range] = {
    .visible = true,
    .named = true,
  },
  [sym_not_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_number_array] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym__string_array_expansion] = {
    .visible = false,
    .named = true,
  },
  [sym_boollike_field] = {
    .visible = true,
    .named = true,
  },
  [sym_numberlike_field] = {
    .visible = true,
    .named = true,
  },
  [sym_stringlike_field] = {
    .visible = true,
    .named = true,
  },
  [sym_number_field] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_field] = {
    .visible = true,
    .named = true,
  },
  [sym_string_field] = {
    .visible = true,
    .named = true,
  },
  [sym_bytes_field] = {
    .visible = true,
    .named = true,
  },
  [sym_map_string_array_field] = {
    .visible = true,
    .named = true,
  },
  [sym_array_string_field] = {
    .visible = true,
    .named = true,
  },
  [sym_array_number_field] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_field] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ip_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_func_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_func_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_field = 1,
  field_func = 2,
  field_index = 3,
  field_inner = 4,
  field_ip = 5,
  field_key = 6,
  field_keys = 7,
  field_lhs = 8,
  field_mask = 9,
  field_operator = 10,
  field_regex = 11,
  field_replacement = 12,
  field_rhs = 13,
  field_seed = 14,
  field_source = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_field] = "field",
  [field_func] = "func",
  [field_index] = "index",
  [field_inner] = "inner",
  [field_ip] = "ip",
  [field_key] = "key",
  [field_keys] = "keys",
  [field_lhs] = "lhs",
  [field_mask] = "mask",
  [field_operator] = "operator",
  [field_regex] = "regex",
  [field_replacement] = "replacement",
  [field_rhs] = "rhs",
  [field_seed] = "seed",
  [field_source] = "source",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 3},
  [6] = {.index = 12, .length = 2},
  [7] = {.index = 14, .length = 1},
  [8] = {.index = 15, .length = 1},
  [9] = {.index = 16, .length = 4},
  [10] = {.index = 20, .length = 3},
  [11] = {.index = 23, .length = 3},
  [12] = {.index = 26, .length = 1},
  [13] = {.index = 27, .length = 2},
  [14] = {.index = 29, .length = 2},
  [15] = {.index = 31, .length = 4},
  [16] = {.index = 35, .length = 3},
  [17] = {.index = 38, .length = 4},
  [18] = {.index = 42, .length = 3},
  [19] = {.index = 45, .length = 5},
  [20] = {.index = 50, .length = 5},
  [21] = {.index = 55, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_inner, 1},
  [1] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
  [4] =
    {field_field, 2},
    {field_func, 0},
    {field_key, 2, .inherited = true},
  [7] =
    {field_field, 2},
    {field_func, 0},
  [9] =
    {field_func, 0},
    {field_key, 2, .inherited = true},
    {field_seed, 2},
  [12] =
    {field_func, 0},
    {field_seed, 2},
  [14] =
    {field_index, 2},
  [15] =
    {field_key, 2},
  [16] =
    {field_field, 2},
    {field_func, 0},
    {field_key, 2, .inherited = true},
    {field_keys, 3},
  [20] =
    {field_field, 2},
    {field_func, 0},
    {field_keys, 3},
  [23] =
    {field_field, 2},
    {field_field, 3},
    {field_func, 0},
  [26] =
    {field_func, 0},
  [27] =
    {field_ip, 0},
    {field_mask, 2},
  [29] =
    {field_func, 0},
    {field_key, 2, .inherited = true},
  [31] =
    {field_field, 2},
    {field_func, 0},
    {field_key, 2, .inherited = true},
    {field_replacement, 4},
  [35] =
    {field_field, 2},
    {field_func, 0},
    {field_replacement, 4},
  [38] =
    {field_field, 2},
    {field_func, 0},
    {field_key, 2, .inherited = true},
    {field_value, 4},
  [42] =
    {field_field, 2},
    {field_func, 0},
    {field_value, 4},
  [45] =
    {field_func, 0},
    {field_lhs, 2},
    {field_lhs, 3},
    {field_operator, 4},
    {field_rhs, 5},
  [50] =
    {field_func, 0},
    {field_key, 2, .inherited = true},
    {field_regex, 4},
    {field_replacement, 6},
    {field_source, 2},
  [55] =
    {field_func, 0},
    {field_regex, 4},
    {field_replacement, 6},
    {field_source, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [42] = 41,
  [43] = 43,
  [44] = 40,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
  [51] = 49,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 57,
  [58] = 53,
  [59] = 57,
  [60] = 52,
  [61] = 55,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
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
  [94] = 92,
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
  [106] = 105,
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
  [132] = 110,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 114,
  [137] = 137,
  [138] = 115,
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
  [150] = 121,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 122,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 123,
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
  [179] = 179,
  [180] = 180,
  [181] = 116,
  [182] = 182,
  [183] = 124,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 125,
  [188] = 188,
  [189] = 126,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 117,
  [196] = 107,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 118,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 119,
  [211] = 211,
  [212] = 212,
  [213] = 152,
  [214] = 157,
  [215] = 180,
  [216] = 120,
  [217] = 209,
  [218] = 218,
  [219] = 161,
  [220] = 165,
  [221] = 193,
  [222] = 222,
  [223] = 223,
  [224] = 182,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 206,
  [230] = 225,
  [231] = 185,
  [232] = 232,
  [233] = 151,
  [234] = 178,
  [235] = 212,
  [236] = 236,
  [237] = 197,
  [238] = 238,
  [239] = 177,
  [240] = 159,
  [241] = 208,
  [242] = 146,
  [243] = 243,
  [244] = 244,
  [245] = 232,
  [246] = 204,
  [247] = 203,
  [248] = 144,
  [249] = 188,
  [250] = 243,
  [251] = 238,
  [252] = 139,
  [253] = 253,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1110);
      ADVANCE_MAP(
        '!', 1178,
        '"', 3,
        '#', 1120,
        '$', 1173,
        '&', 5,
        '(', 1140,
        ')', 1142,
        '*', 1182,
        ',', 1141,
        '/', 1167,
        '3', 1157,
        '<', 1130,
        '=', 62,
        '>', 1132,
        '[', 1180,
        ']', 1181,
        '^', 64,
        'a', 556,
        'c', 444,
        'e', 610,
        'f', 123,
        'g', 300,
        'h', 973,
        'i', 197,
        'l', 301,
        'm', 126,
        'n', 303,
        'o', 805,
        'r', 118,
        's', 487,
        't', 205,
        'u', 263,
        'w', 500,
        'x', 684,
        '{', 1118,
        '|', 1108,
        '}', 1119,
        '~', 1138,
      );
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1158);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1080);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 61,
        '"', 3,
        '#', 1120,
        ')', 1142,
        ',', 1141,
        '<', 1130,
        '=', 62,
        '>', 1132,
        'c', 446,
        'e', 802,
        'g', 300,
        'h', 1033,
        'i', 226,
        'l', 336,
        'm', 126,
        'n', 302,
        'r', 118,
        's', 1009,
        't', 217,
        'u', 273,
        'w', 500,
        '}', 1119,
        '~', 1138,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1158);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(1159);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(1120);
      if (lookahead == '3') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1170);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1168);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(1112);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(188);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(208);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(655);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(177);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(161);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(457);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(234);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(455);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(605);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '5') ADVANCE(18);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(195);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(202);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(215);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(162);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(454);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(189);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(485);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(549);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '5') ADVANCE(31);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(912);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(236);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(1023);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(790);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(486);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '5') ADVANCE(42);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(1042);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(214);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(664);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(603);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(854);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(385);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(940);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(209);
      END_STATE();
    case 53:
      if (lookahead == '1') ADVANCE(1082);
      if (lookahead == 'c') ADVANCE(742);
      if (lookahead == 'h') ADVANCE(433);
      END_STATE();
    case 54:
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == '2') ADVANCE(112);
      END_STATE();
    case 55:
      if (lookahead == '1') ADVANCE(113);
      if (lookahead == '2') ADVANCE(114);
      END_STATE();
    case 56:
      if (lookahead == '2') ADVANCE(1163);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(1166);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1165);
      END_STATE();
    case 57:
      if (lookahead == '2') ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(32);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 58:
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(43);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == '3') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == '4') ADVANCE(1150);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(1129);
      END_STATE();
    case 62:
      if (lookahead == '=') ADVANCE(1128);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(1156);
      END_STATE();
    case 64:
      if (lookahead == '^') ADVANCE(1115);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(548);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(190);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(508);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(862);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(586);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(1075);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(911);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(447);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(266);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(212);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(482);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(136);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(571);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(229);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(780);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(572);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(519);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(350);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(837);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(1048);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(512);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(785);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(925);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(1046);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(522);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(1050);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(298);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(863);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(1078);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(1107);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(453);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(193);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(164);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(194);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(240);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(943);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(1026);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(1063);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(242);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(244);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(245);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(246);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(247);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(248);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(948);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(608);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(541);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(542);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(543);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(443);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(546);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(1074);
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead == 'o') ADVANCE(813);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(1245);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(629);
      if (lookahead == 'b') ADVANCE(700);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(777);
      if (lookahead == 'v') ADVANCE(773);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(955);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(819);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(1073);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(590);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(957);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(1049);
      END_STATE();
    case 137:
      ADVANCE_MAP(
        'a', 918,
        'c', 509,
        'i', 916,
        'l', 147,
        'm', 412,
        'p', 737,
        'r', 340,
        's', 1035,
        't', 520,
      );
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(823);
      END_STATE();
    case 140:
      ADVANCE_MAP(
        'a', 207,
        'c', 1076,
        'e', 216,
        'f', 510,
        'p', 1040,
        'r', 420,
        's', 1099,
        'u', 818,
      );
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(633);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(1019);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(961);
      if (lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(869);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(915);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(830);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(864);
      if (lookahead == 'p') ADVANCE(155);
      if (lookahead == 'q') ADVANCE(1057);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(941);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(991);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(984);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(1000);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(987);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(1017);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 161:
      ADVANCE_MAP(
        'a', 227,
        'b', 702,
        'c', 753,
        'f', 1041,
        'h', 415,
        'm', 401,
        't', 527,
        'u', 834,
        'v', 392,
      );
      END_STATE();
    case 162:
      ADVANCE_MAP(
        'a', 227,
        'b', 726,
        'c', 753,
        'f', 1041,
        'h', 435,
        'm', 401,
        'u', 834,
        'v', 392,
      );
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(1010);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(1013);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(1015);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(934);
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == 'i') ADVANCE(954);
      if (lookahead == 's') ADVANCE(1066);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'p') ADVANCE(157);
      if (lookahead == 'q') ADVANCE(1058);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(577);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(678);
      END_STATE();
    case 188:
      ADVANCE_MAP(
        'b', 695,
        'c', 564,
        'e', 252,
        'h', 728,
        'r', 129,
        't', 480,
        'v', 349,
        'w', 119,
      );
      END_STATE();
    case 189:
      ADVANCE_MAP(
        'b', 695,
        'c', 564,
        'e', 252,
        'h', 728,
        'r', 339,
        't', 480,
        'v', 349,
        'w', 119,
      );
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(1098);
      END_STATE();
    case 191:
      if (lookahead == 'b') ADVANCE(270);
      END_STATE();
    case 192:
      if (lookahead == 'b') ADVANCE(711);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(714);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(721);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(761);
      if (lookahead == 'c') ADVANCE(691);
      if (lookahead == 'h') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead == 'v') ADVANCE(349);
      if (lookahead == 'w') ADVANCE(697);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(299);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead == 'n') ADVANCE(1111);
      if (lookahead == 'p') ADVANCE(1251);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead == 'p') ADVANCE(1251);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(1208);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(1171);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(509);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(412);
      if (lookahead == 'p') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == 's') ADVANCE(1035);
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(1183);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(1184);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(765);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(1036);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(550);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(698);
      if (lookahead == 'h') ADVANCE(733);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(938);
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(698);
      if (lookahead == 'h') ADVANCE(733);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead == 'u') ADVANCE(938);
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead == 't') ADVANCE(1101);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(578);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(959);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(689);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == 's') ADVANCE(1066);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(618);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(769);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(319);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(1028);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(591);
      if (lookahead == 'n') ADVANCE(1111);
      if (lookahead == 'p') ADVANCE(1252);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(743);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(717);
      if (lookahead == 'd') ADVANCE(419);
      if (lookahead == 'j') ADVANCE(121);
      if (lookahead == 's') ADVANCE(235);
      if (lookahead == 'v') ADVANCE(441);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(746);
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(729);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(793);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(738);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(795);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(744);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(745);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(747);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(748);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(749);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(750);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(751);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(1029);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(1113);
      if (lookahead == 'y') ADVANCE(1154);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(907);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(1137);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(1261);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(1136);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(1215);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(1301);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(1300);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(1289);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(1290);
      END_STATE();
    case 261:
      if (lookahead == 'd') ADVANCE(1285);
      END_STATE();
    case 262:
      if (lookahead == 'd') ADVANCE(1067);
      END_STATE();
    case 263:
      if (lookahead == 'd') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(788);
      if (lookahead == 'r') ADVANCE(560);
      if (lookahead == 'u') ADVANCE(495);
      END_STATE();
    case 264:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 265:
      if (lookahead == 'd') ADVANCE(935);
      if (lookahead == 'f') ADVANCE(565);
      if (lookahead == 's') ADVANCE(817);
      END_STATE();
    case 266:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(1097);
      END_STATE();
    case 268:
      if (lookahead == 'd') ADVANCE(824);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(686);
      END_STATE();
    case 270:
      if (lookahead == 'd') ADVANCE(499);
      END_STATE();
    case 271:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 272:
      if (lookahead == 'd') ADVANCE(309);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(770);
      if (lookahead == 'p') ADVANCE(788);
      if (lookahead == 'r') ADVANCE(560);
      if (lookahead == 'u') ADVANCE(495);
      END_STATE();
    case 274:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(902);
      END_STATE();
    case 276:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 277:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 278:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 279:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 280:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 281:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 282:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 283:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 284:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 285:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 286:
      if (lookahead == 'd') ADVANCE(913);
      if (lookahead == 'g') ADVANCE(342);
      if (lookahead == 'h') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(778);
      if (lookahead == 's') ADVANCE(816);
      if (lookahead == 't') ADVANCE(981);
      END_STATE();
    case 287:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 288:
      if (lookahead == 'd') ADVANCE(1100);
      END_STATE();
    case 289:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 290:
      if (lookahead == 'd') ADVANCE(929);
      if (lookahead == 'g') ADVANCE(430);
      if (lookahead == 's') ADVANCE(843);
      END_STATE();
    case 291:
      if (lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 292:
      if (lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 293:
      if (lookahead == 'd') ADVANCE(407);
      END_STATE();
    case 294:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 295:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 296:
      if (lookahead == 'd') ADVANCE(944);
      if (lookahead == 's') ADVANCE(878);
      END_STATE();
    case 297:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 298:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 299:
      if (lookahead == 'd') ADVANCE(547);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(1127);
      if (lookahead == 't') ADVANCE(1126);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(682);
      if (lookahead == 't') ADVANCE(1123);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(1122);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(1122);
      if (lookahead == 'o') ADVANCE(956);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(1081);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(1161);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(1171);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(1195);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(1194);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(1149);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(1211);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(1198);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(1247);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(1190);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(1189);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(1193);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(1227);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(1206);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(1226);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(1229);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(1230);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(1260);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(1259);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(1205);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(1187);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(1246);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(1207);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(1237);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(1238);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(1233);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(1234);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(1287);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(1124);
      if (lookahead == 'o') ADVANCE(682);
      if (lookahead == 't') ADVANCE(1123);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(1105);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(1070);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(1047);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(986);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(921);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(988);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(845);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(968);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(980);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(856);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(1012);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(924);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(927);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(1032);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(1065);
      END_STATE();
    case 444:
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 445:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 446:
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 447:
      if (lookahead == 'f') ADVANCE(703);
      END_STATE();
    case 448:
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 449:
      if (lookahead == 'f') ADVANCE(511);
      END_STATE();
    case 450:
      if (lookahead == 'f') ADVANCE(364);
      if (lookahead == 'q') ADVANCE(1044);
      if (lookahead == 's') ADVANCE(798);
      END_STATE();
    case 451:
      if (lookahead == 'f') ADVANCE(364);
      if (lookahead == 'q') ADVANCE(1061);
      if (lookahead == 's') ADVANCE(799);
      END_STATE();
    case 452:
      if (lookahead == 'f') ADVANCE(518);
      END_STATE();
    case 453:
      if (lookahead == 'f') ADVANCE(716);
      END_STATE();
    case 454:
      if (lookahead == 'f') ADVANCE(718);
      if (lookahead == 'm') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 455:
      if (lookahead == 'f') ADVANCE(718);
      if (lookahead == 'm') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == 't') ADVANCE(865);
      END_STATE();
    case 456:
      if (lookahead == 'f') ADVANCE(539);
      END_STATE();
    case 457:
      if (lookahead == 'f') ADVANCE(1064);
      if (lookahead == 'u') ADVANCE(838);
      END_STATE();
    case 458:
      if (lookahead == 'g') ADVANCE(1147);
      END_STATE();
    case 459:
      if (lookahead == 'g') ADVANCE(1299);
      END_STATE();
    case 460:
      if (lookahead == 'g') ADVANCE(1143);
      END_STATE();
    case 461:
      if (lookahead == 'g') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(683);
      END_STATE();
    case 462:
      if (lookahead == 'g') ADVANCE(1060);
      END_STATE();
    case 463:
      if (lookahead == 'g') ADVANCE(525);
      END_STATE();
    case 464:
      if (lookahead == 'g') ADVANCE(886);
      END_STATE();
    case 465:
      if (lookahead == 'g') ADVANCE(409);
      END_STATE();
    case 466:
      if (lookahead == 'g') ADVANCE(891);
      END_STATE();
    case 467:
      if (lookahead == 'g') ADVANCE(893);
      END_STATE();
    case 468:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 469:
      if (lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 470:
      if (lookahead == 'g') ADVANCE(417);
      END_STATE();
    case 471:
      if (lookahead == 'g') ADVANCE(719);
      END_STATE();
    case 472:
      if (lookahead == 'g') ADVANCE(526);
      END_STATE();
    case 473:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 474:
      if (lookahead == 'h') ADVANCE(1152);
      END_STATE();
    case 475:
      if (lookahead == 'h') ADVANCE(1153);
      END_STATE();
    case 476:
      if (lookahead == 'h') ADVANCE(1296);
      END_STATE();
    case 477:
      if (lookahead == 'h') ADVANCE(1217);
      END_STATE();
    case 478:
      if (lookahead == 'h') ADVANCE(1241);
      END_STATE();
    case 479:
      if (lookahead == 'h') ADVANCE(1243);
      END_STATE();
    case 480:
      if (lookahead == 'h') ADVANCE(833);
      if (lookahead == 'l') ADVANCE(910);
      END_STATE();
    case 481:
      if (lookahead == 'h') ADVANCE(347);
      END_STATE();
    case 482:
      if (lookahead == 'h') ADVANCE(149);
      END_STATE();
    case 483:
      if (lookahead == 'h') ADVANCE(704);
      END_STATE();
    case 484:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 485:
      if (lookahead == 'h') ADVANCE(1016);
      END_STATE();
    case 486:
      if (lookahead == 'h') ADVANCE(433);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(764);
      if (lookahead == 's') ADVANCE(558);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(764);
      if (lookahead == 's') ADVANCE(558);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(1106);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(1216);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(1191);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(1240);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(1214);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(1239);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(1104);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(1069);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(774);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(974);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(945);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(768);
      if (lookahead == 'p') ADVANCE(741);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(976);
      if (lookahead == 'o') ADVANCE(643);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(949);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(975);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 516:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(379);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 520:
      if (lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 521:
      if (lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 523:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 524:
      if (lookahead == 'i') ADVANCE(783);
      END_STATE();
    case 525:
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 526:
      if (lookahead == 'i') ADVANCE(707);
      END_STATE();
    case 527:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 528:
      if (lookahead == 'i') ADVANCE(731);
      END_STATE();
    case 529:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 530:
      if (lookahead == 'i') ADVANCE(708);
      END_STATE();
    case 531:
      if (lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 532:
      if (lookahead == 'i') ADVANCE(709);
      END_STATE();
    case 533:
      if (lookahead == 'i') ADVANCE(710);
      END_STATE();
    case 534:
      if (lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 535:
      if (lookahead == 'i') ADVANCE(713);
      END_STATE();
    case 536:
      if (lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 537:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 538:
      if (lookahead == 'i') ADVANCE(580);
      END_STATE();
    case 539:
      if (lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 540:
      if (lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 541:
      if (lookahead == 'i') ADVANCE(950);
      END_STATE();
    case 542:
      if (lookahead == 'i') ADVANCE(951);
      END_STATE();
    case 543:
      if (lookahead == 'i') ADVANCE(952);
      END_STATE();
    case 544:
      if (lookahead == 'i') ADVANCE(763);
      END_STATE();
    case 545:
      if (lookahead == 'i') ADVANCE(953);
      END_STATE();
    case 546:
      if (lookahead == 'i') ADVANCE(681);
      END_STATE();
    case 547:
      if (lookahead == 'i') ADVANCE(1072);
      END_STATE();
    case 548:
      if (lookahead == 'j') ADVANCE(936);
      END_STATE();
    case 549:
      if (lookahead == 'j') ADVANCE(120);
      END_STATE();
    case 550:
      if (lookahead == 'k') ADVANCE(1292);
      END_STATE();
    case 551:
      if (lookahead == 'k') ADVANCE(1039);
      END_STATE();
    case 552:
      if (lookahead == 'k') ADVANCE(378);
      END_STATE();
    case 553:
      if (lookahead == 'k') ADVANCE(515);
      END_STATE();
    case 554:
      if (lookahead == 'k') ADVANCE(359);
      END_STATE();
    case 555:
      if (lookahead == 'k') ADVANCE(517);
      END_STATE();
    case 556:
      if (lookahead == 'l') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 557:
      if (lookahead == 'l') ADVANCE(1155);
      END_STATE();
    case 558:
      if (lookahead == 'l') ADVANCE(1283);
      END_STATE();
    case 559:
      if (lookahead == 'l') ADVANCE(1199);
      END_STATE();
    case 560:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 561:
      if (lookahead == 'l') ADVANCE(908);
      END_STATE();
    case 562:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 563:
      if (lookahead == 'l') ADVANCE(1077);
      END_STATE();
    case 564:
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 565:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 566:
      if (lookahead == 'l') ADVANCE(692);
      END_STATE();
    case 567:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 568:
      if (lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 569:
      if (lookahead == 'l') ADVANCE(570);
      END_STATE();
    case 570:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 571:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 572:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 573:
      if (lookahead == 'l') ADVANCE(1051);
      END_STATE();
    case 574:
      if (lookahead == 'l') ADVANCE(1052);
      END_STATE();
    case 575:
      if (lookahead == 'l') ADVANCE(1053);
      END_STATE();
    case 576:
      if (lookahead == 'l') ADVANCE(1054);
      END_STATE();
    case 577:
      if (lookahead == 'l') ADVANCE(1055);
      END_STATE();
    case 578:
      if (lookahead == 'l') ADVANCE(523);
      END_STATE();
    case 579:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 580:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 581:
      if (lookahead == 'l') ADVANCE(579);
      END_STATE();
    case 582:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 583:
      if (lookahead == 'm') ADVANCE(1186);
      END_STATE();
    case 584:
      if (lookahead == 'm') ADVANCE(1185);
      END_STATE();
    case 585:
      if (lookahead == 'm') ADVANCE(1267);
      END_STATE();
    case 586:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 587:
      if (lookahead == 'm') ADVANCE(767);
      END_STATE();
    case 588:
      if (lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 589:
      if (lookahead == 'm') ADVANCE(782);
      END_STATE();
    case 590:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 591:
      if (lookahead == 'm') ADVANCE(771);
      END_STATE();
    case 592:
      if (lookahead == 'm') ADVANCE(355);
      END_STATE();
    case 593:
      if (lookahead == 'm') ADVANCE(337);
      END_STATE();
    case 594:
      if (lookahead == 'm') ADVANCE(315);
      END_STATE();
    case 595:
      if (lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 596:
      if (lookahead == 'm') ADVANCE(326);
      END_STATE();
    case 597:
      if (lookahead == 'm') ADVANCE(382);
      END_STATE();
    case 598:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 599:
      if (lookahead == 'm') ADVANCE(388);
      END_STATE();
    case 600:
      if (lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 601:
      if (lookahead == 'm') ADVANCE(400);
      END_STATE();
    case 602:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 603:
      if (lookahead == 'm') ADVANCE(394);
      END_STATE();
    case 604:
      if (lookahead == 'm') ADVANCE(422);
      END_STATE();
    case 605:
      if (lookahead == 'm') ADVANCE(931);
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 606:
      if (lookahead == 'm') ADVANCE(427);
      END_STATE();
    case 607:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 608:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'q') ADVANCE(1121);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 612:
      if (lookahead == 'n') ADVANCE(1151);
      END_STATE();
    case 613:
      if (lookahead == 'n') ADVANCE(1197);
      END_STATE();
    case 614:
      if (lookahead == 'n') ADVANCE(1171);
      END_STATE();
    case 615:
      if (lookahead == 'n') ADVANCE(1196);
      END_STATE();
    case 616:
      if (lookahead == 'n') ADVANCE(1224);
      END_STATE();
    case 617:
      if (lookahead == 'n') ADVANCE(1228);
      END_STATE();
    case 618:
      if (lookahead == 'n') ADVANCE(1294);
      END_STATE();
    case 619:
      if (lookahead == 'n') ADVANCE(1295);
      END_STATE();
    case 620:
      if (lookahead == 'n') ADVANCE(1298);
      END_STATE();
    case 621:
      if (lookahead == 'n') ADVANCE(1248);
      END_STATE();
    case 622:
      if (lookahead == 'n') ADVANCE(1221);
      END_STATE();
    case 623:
      if (lookahead == 'n') ADVANCE(1282);
      END_STATE();
    case 624:
      if (lookahead == 'n') ADVANCE(1281);
      END_STATE();
    case 625:
      if (lookahead == 'n') ADVANCE(1218);
      END_STATE();
    case 626:
      if (lookahead == 'n') ADVANCE(1096);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(1037);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(694);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(885);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 638:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(985);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(1021);
      if (lookahead == 'u') ADVANCE(658);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(967);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(969);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(998);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(970);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(1006);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 653:
      if (lookahead == 'n') ADVANCE(923);
      END_STATE();
    case 654:
      if (lookahead == 'n') ADVANCE(1038);
      END_STATE();
    case 655:
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 656:
      if (lookahead == 'n') ADVANCE(1001);
      END_STATE();
    case 657:
      if (lookahead == 'n') ADVANCE(926);
      END_STATE();
    case 658:
      if (lookahead == 'n') ADVANCE(1002);
      END_STATE();
    case 659:
      if (lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 660:
      if (lookahead == 'n') ADVANCE(1007);
      END_STATE();
    case 661:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 662:
      if (lookahead == 'n') ADVANCE(933);
      END_STATE();
    case 663:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 664:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 665:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 666:
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 't') ADVANCE(880);
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 667:
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 668:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 669:
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'v') ADVANCE(179);
      END_STATE();
    case 670:
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'v') ADVANCE(182);
      END_STATE();
    case 671:
      if (lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 672:
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 673:
      if (lookahead == 'n') ADVANCE(533);
      END_STATE();
    case 674:
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'v') ADVANCE(184);
      END_STATE();
    case 675:
      if (lookahead == 'n') ADVANCE(1025);
      if (lookahead == 'u') ADVANCE(660);
      END_STATE();
    case 676:
      if (lookahead == 'n') ADVANCE(947);
      END_STATE();
    case 677:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 678:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 679:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 680:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 681:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 682:
      if (lookahead == 'o') ADVANCE(551);
      if (lookahead == 'w') ADVANCE(341);
      END_STATE();
    case 683:
      if (lookahead == 'o') ADVANCE(1068);
      END_STATE();
    case 684:
      if (lookahead == 'o') ADVANCE(806);
      END_STATE();
    case 685:
      if (lookahead == 'o') ADVANCE(1085);
      END_STATE();
    case 686:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 687:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 688:
      if (lookahead == 'o') ADVANCE(956);
      END_STATE();
    case 689:
      if (lookahead == 'o') ADVANCE(1043);
      END_STATE();
    case 690:
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 691:
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 692:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 693:
      if (lookahead == 'o') ADVANCE(1083);
      END_STATE();
    case 694:
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 695:
      if (lookahead == 'o') ADVANCE(979);
      END_STATE();
    case 696:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 697:
      if (lookahead == 'o') ADVANCE(813);
      END_STATE();
    case 698:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 699:
      if (lookahead == 'o') ADVANCE(1056);
      END_STATE();
    case 700:
      if (lookahead == 'o') ADVANCE(983);
      END_STATE();
    case 701:
      if (lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 702:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(875);
      END_STATE();
    case 704:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 705:
      if (lookahead == 'o') ADVANCE(679);
      END_STATE();
    case 706:
      if (lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 707:
      if (lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 708:
      if (lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 709:
      if (lookahead == 'o') ADVANCE(623);
      END_STATE();
    case 710:
      if (lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 711:
      if (lookahead == 'o') ADVANCE(966);
      END_STATE();
    case 712:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 713:
      if (lookahead == 'o') ADVANCE(625);
      END_STATE();
    case 714:
      if (lookahead == 'o') ADVANCE(1020);
      END_STATE();
    case 715:
      if (lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 716:
      if (lookahead == 'o') ADVANCE(812);
      END_STATE();
    case 717:
      if (lookahead == 'o') ADVANCE(877);
      END_STATE();
    case 718:
      if (lookahead == 'o') ADVANCE(826);
      END_STATE();
    case 719:
      if (lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 720:
      if (lookahead == 'o') ADVANCE(874);
      END_STATE();
    case 721:
      if (lookahead == 'o') ADVANCE(972);
      END_STATE();
    case 722:
      if (lookahead == 'o') ADVANCE(849);
      END_STATE();
    case 723:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 724:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 725:
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 726:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 727:
      if (lookahead == 'o') ADVANCE(850);
      END_STATE();
    case 728:
      if (lookahead == 'o') ADVANCE(917);
      END_STATE();
    case 729:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 730:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 731:
      if (lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 732:
      if (lookahead == 'o') ADVANCE(851);
      END_STATE();
    case 733:
      if (lookahead == 'o') ADVANCE(920);
      END_STATE();
    case 734:
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 735:
      if (lookahead == 'o') ADVANCE(786);
      END_STATE();
    case 736:
      if (lookahead == 'o') ADVANCE(852);
      END_STATE();
    case 737:
      if (lookahead == 'o') ADVANCE(922);
      END_STATE();
    case 738:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 739:
      if (lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 740:
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 741:
      if (lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 742:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 743:
      if (lookahead == 'o') ADVANCE(857);
      END_STATE();
    case 744:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 745:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 746:
      if (lookahead == 'o') ADVANCE(861);
      END_STATE();
    case 747:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 748:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 749:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 750:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 751:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 752:
      if (lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 753:
      if (lookahead == 'o') ADVANCE(752);
      END_STATE();
    case 754:
      if (lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 755:
      if (lookahead == 'o') ADVANCE(662);
      END_STATE();
    case 756:
      if (lookahead == 'o') ADVANCE(675);
      END_STATE();
    case 757:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 758:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 759:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 760:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 761:
      if (lookahead == 'o') ADVANCE(1034);
      END_STATE();
    case 762:
      if (lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 763:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 764:
      if (lookahead == 'p') ADVANCE(1291);
      END_STATE();
    case 765:
      if (lookahead == 'p') ADVANCE(1255);
      END_STATE();
    case 766:
      if (lookahead == 'p') ADVANCE(1257);
      END_STATE();
    case 767:
      if (lookahead == 'p') ADVANCE(1250);
      END_STATE();
    case 768:
      if (lookahead == 'p') ADVANCE(1209);
      END_STATE();
    case 769:
      if (lookahead == 'p') ADVANCE(1254);
      END_STATE();
    case 770:
      if (lookahead == 'p') ADVANCE(1256);
      END_STATE();
    case 771:
      if (lookahead == 'p') ADVANCE(1249);
      END_STATE();
    case 772:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 773:
      if (lookahead == 'p') ADVANCE(614);
      END_STATE();
    case 774:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 775:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 776:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 777:
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 778:
      if (lookahead == 'p') ADVANCE(977);
      END_STATE();
    case 779:
      if (lookahead == 'p') ADVANCE(567);
      END_STATE();
    case 780:
      if (lookahead == 'p') ADVANCE(835);
      END_STATE();
    case 781:
      if (lookahead == 'p') ADVANCE(310);
      END_STATE();
    case 782:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 783:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 784:
      if (lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 785:
      if (lookahead == 'p') ADVANCE(846);
      END_STATE();
    case 786:
      if (lookahead == 'p') ADVANCE(410);
      END_STATE();
    case 787:
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 788:
      if (lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 789:
      if (lookahead == 'p') ADVANCE(701);
      END_STATE();
    case 790:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 791:
      if (lookahead == 'p') ADVANCE(722);
      END_STATE();
    case 792:
      if (lookahead == 'p') ADVANCE(1011);
      END_STATE();
    case 793:
      if (lookahead == 'p') ADVANCE(727);
      END_STATE();
    case 794:
      if (lookahead == 'p') ADVANCE(732);
      END_STATE();
    case 795:
      if (lookahead == 'p') ADVANCE(736);
      END_STATE();
    case 796:
      if (lookahead == 'p') ADVANCE(720);
      END_STATE();
    case 797:
      if (lookahead == 'p') ADVANCE(939);
      END_STATE();
    case 798:
      if (lookahead == 'p') ADVANCE(754);
      END_STATE();
    case 799:
      if (lookahead == 'p') ADVANCE(755);
      END_STATE();
    case 800:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 801:
      if (lookahead == 'p') ADVANCE(442);
      END_STATE();
    case 802:
      if (lookahead == 'q') ADVANCE(1121);
      END_STATE();
    case 803:
      if (lookahead == 'q') ADVANCE(568);
      END_STATE();
    case 804:
      if (lookahead == 'q') ADVANCE(1059);
      END_STATE();
    case 805:
      if (lookahead == 'r') ADVANCE(1116);
      END_STATE();
    case 806:
      if (lookahead == 'r') ADVANCE(1114);
      END_STATE();
    case 807:
      if (lookahead == 'r') ADVANCE(1144);
      END_STATE();
    case 808:
      if (lookahead == 'r') ADVANCE(1148);
      END_STATE();
    case 809:
      if (lookahead == 'r') ADVANCE(1171);
      END_STATE();
    case 810:
      if (lookahead == 'r') ADVANCE(1213);
      END_STATE();
    case 811:
      if (lookahead == 'r') ADVANCE(1293);
      END_STATE();
    case 812:
      if (lookahead == 'r') ADVANCE(1222);
      END_STATE();
    case 813:
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 814:
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 815:
      if (lookahead == 'r') ADVANCE(1071);
      END_STATE();
    case 816:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 817:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 818:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 819:
      if (lookahead == 'r') ADVANCE(1030);
      END_STATE();
    case 820:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 821:
      if (lookahead == 'r') ADVANCE(1089);
      END_STATE();
    case 822:
      if (lookahead == 'r') ADVANCE(1090);
      END_STATE();
    case 823:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 824:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 825:
      if (lookahead == 'r') ADVANCE(1091);
      END_STATE();
    case 826:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 827:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 828:
      if (lookahead == 'r') ADVANCE(1092);
      END_STATE();
    case 829:
      if (lookahead == 'r') ADVANCE(1093);
      END_STATE();
    case 830:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 831:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 832:
      if (lookahead == 'r') ADVANCE(1094);
      END_STATE();
    case 833:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 834:
      if (lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 835:
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 836:
      if (lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 837:
      if (lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 838:
      if (lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 839:
      if (lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 840:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 841:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 842:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 843:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 844:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 845:
      if (lookahead == 'r') ADVANCE(890);
      END_STATE();
    case 846:
      if (lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 847:
      if (lookahead == 'r') ADVANCE(892);
      END_STATE();
    case 848:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 849:
      if (lookahead == 'r') ADVANCE(962);
      END_STATE();
    case 850:
      if (lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 851:
      if (lookahead == 'r') ADVANCE(964);
      END_STATE();
    case 852:
      if (lookahead == 'r') ADVANCE(965);
      END_STATE();
    case 853:
      if (lookahead == 'r') ADVANCE(873);
      END_STATE();
    case 854:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 855:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 856:
      if (lookahead == 'r') ADVANCE(906);
      END_STATE();
    case 857:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 858:
      if (lookahead == 'r') ADVANCE(971);
      END_STATE();
    case 859:
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 860:
      if (lookahead == 'r') ADVANCE(1004);
      END_STATE();
    case 861:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 862:
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == 'v') ADVANCE(431);
      END_STATE();
    case 863:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 864:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 865:
      if (lookahead == 'r') ADVANCE(1045);
      END_STATE();
    case 866:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 867:
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(803);
      if (lookahead == 'x') ADVANCE(919);
      END_STATE();
    case 868:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 869:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 870:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 871:
      if (lookahead == 'r') ADVANCE(514);
      END_STATE();
    case 872:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 873:
      if (lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 874:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 875:
      if (lookahead == 'r') ADVANCE(1079);
      END_STATE();
    case 876:
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 877:
      if (lookahead == 'r') ADVANCE(796);
      END_STATE();
    case 878:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 879:
      if (lookahead == 'r') ADVANCE(946);
      END_STATE();
    case 880:
      if (lookahead == 'r') ADVANCE(1062);
      END_STATE();
    case 881:
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 882:
      if (lookahead == 'r') ADVANCE(762);
      END_STATE();
    case 883:
      if (lookahead == 's') ADVANCE(1171);
      END_STATE();
    case 884:
      if (lookahead == 's') ADVANCE(1135);
      END_STATE();
    case 885:
      if (lookahead == 's') ADVANCE(1134);
      END_STATE();
    case 886:
      if (lookahead == 's') ADVANCE(1200);
      END_STATE();
    case 887:
      if (lookahead == 's') ADVANCE(1146);
      END_STATE();
    case 888:
      if (lookahead == 's') ADVANCE(1192);
      END_STATE();
    case 889:
      if (lookahead == 's') ADVANCE(1262);
      END_STATE();
    case 890:
      if (lookahead == 's') ADVANCE(1265);
      END_STATE();
    case 891:
      if (lookahead == 's') ADVANCE(1263);
      END_STATE();
    case 892:
      if (lookahead == 's') ADVANCE(1268);
      END_STATE();
    case 893:
      if (lookahead == 's') ADVANCE(1264);
      END_STATE();
    case 894:
      if (lookahead == 's') ADVANCE(1273);
      END_STATE();
    case 895:
      if (lookahead == 's') ADVANCE(1274);
      END_STATE();
    case 896:
      if (lookahead == 's') ADVANCE(1269);
      END_STATE();
    case 897:
      if (lookahead == 's') ADVANCE(1278);
      END_STATE();
    case 898:
      if (lookahead == 's') ADVANCE(1276);
      END_STATE();
    case 899:
      if (lookahead == 's') ADVANCE(1270);
      END_STATE();
    case 900:
      if (lookahead == 's') ADVANCE(1279);
      END_STATE();
    case 901:
      if (lookahead == 's') ADVANCE(1277);
      END_STATE();
    case 902:
      if (lookahead == 's') ADVANCE(1280);
      END_STATE();
    case 903:
      if (lookahead == 's') ADVANCE(1275);
      END_STATE();
    case 904:
      if (lookahead == 's') ADVANCE(1271);
      END_STATE();
    case 905:
      if (lookahead == 's') ADVANCE(1272);
      END_STATE();
    case 906:
      if (lookahead == 's') ADVANCE(1266);
      END_STATE();
    case 907:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 908:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 909:
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 910:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 911:
      if (lookahead == 's') ADVANCE(989);
      END_STATE();
    case 912:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 913:
      if (lookahead == 's') ADVANCE(958);
      END_STATE();
    case 914:
      if (lookahead == 's') ADVANCE(789);
      END_STATE();
    case 915:
      if (lookahead == 's') ADVANCE(479);
      END_STATE();
    case 916:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 917:
      if (lookahead == 's') ADVANCE(990);
      END_STATE();
    case 918:
      if (lookahead == 's') ADVANCE(628);
      END_STATE();
    case 919:
      if (lookahead == 's') ADVANCE(888);
      END_STATE();
    case 920:
      if (lookahead == 's') ADVANCE(960);
      END_STATE();
    case 921:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 922:
      if (lookahead == 's') ADVANCE(1018);
      END_STATE();
    case 923:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 924:
      if (lookahead == 's') ADVANCE(992);
      END_STATE();
    case 925:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 926:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 927:
      if (lookahead == 's') ADVANCE(996);
      END_STATE();
    case 928:
      if (lookahead == 's') ADVANCE(995);
      END_STATE();
    case 929:
      if (lookahead == 's') ADVANCE(1003);
      END_STATE();
    case 930:
      if (lookahead == 's') ADVANCE(1005);
      END_STATE();
    case 931:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 932:
      if (lookahead == 's') ADVANCE(380);
      END_STATE();
    case 933:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 934:
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 935:
      if (lookahead == 's') ADVANCE(994);
      END_STATE();
    case 936:
      if (lookahead == 's') ADVANCE(705);
      END_STATE();
    case 937:
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 938:
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 939:
      if (lookahead == 's') ADVANCE(1022);
      END_STATE();
    case 940:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 941:
      if (lookahead == 's') ADVANCE(932);
      END_STATE();
    case 942:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 943:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 944:
      if (lookahead == 's') ADVANCE(1027);
      END_STATE();
    case 945:
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 946:
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 947:
      if (lookahead == 's') ADVANCE(535);
      END_STATE();
    case 948:
      if (lookahead == 's') ADVANCE(1024);
      END_STATE();
    case 949:
      if (lookahead == 's') ADVANCE(757);
      END_STATE();
    case 950:
      if (lookahead == 's') ADVANCE(758);
      END_STATE();
    case 951:
      if (lookahead == 's') ADVANCE(759);
      END_STATE();
    case 952:
      if (lookahead == 's') ADVANCE(760);
      END_STATE();
    case 953:
      if (lookahead == 's') ADVANCE(544);
      END_STATE();
    case 954:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 955:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 956:
      if (lookahead == 't') ADVANCE(1176);
      END_STATE();
    case 957:
      if (lookahead == 't') ADVANCE(1139);
      END_STATE();
    case 958:
      if (lookahead == 't') ADVANCE(1210);
      END_STATE();
    case 959:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 960:
      if (lookahead == 't') ADVANCE(1212);
      END_STATE();
    case 961:
      if (lookahead == 't') ADVANCE(1223);
      END_STATE();
    case 962:
      if (lookahead == 't') ADVANCE(1202);
      END_STATE();
    case 963:
      if (lookahead == 't') ADVANCE(1201);
      END_STATE();
    case 964:
      if (lookahead == 't') ADVANCE(1203);
      END_STATE();
    case 965:
      if (lookahead == 't') ADVANCE(1204);
      END_STATE();
    case 966:
      if (lookahead == 't') ADVANCE(1288);
      END_STATE();
    case 967:
      if (lookahead == 't') ADVANCE(1220);
      END_STATE();
    case 968:
      if (lookahead == 't') ADVANCE(1297);
      END_STATE();
    case 969:
      if (lookahead == 't') ADVANCE(1235);
      END_STATE();
    case 970:
      if (lookahead == 't') ADVANCE(1231);
      END_STATE();
    case 971:
      if (lookahead == 't') ADVANCE(1188);
      END_STATE();
    case 972:
      if (lookahead == 't') ADVANCE(1284);
      END_STATE();
    case 973:
      if (lookahead == 't') ADVANCE(978);
      END_STATE();
    case 974:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 975:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 976:
      if (lookahead == 't') ADVANCE(1088);
      END_STATE();
    case 977:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 978:
      if (lookahead == 't') ADVANCE(772);
      END_STATE();
    case 979:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 980:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 981:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 982:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 983:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 984:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 985:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 986:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 987:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 988:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 989:
      if (lookahead == 't') ADVANCE(866);
      END_STATE();
    case 990:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 991:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 992:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 993:
      if (lookahead == 't') ADVANCE(775);
      END_STATE();
    case 994:
      if (lookahead == 't') ADVANCE(791);
      END_STATE();
    case 995:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 996:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 997:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 998:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 999:
      if (lookahead == 't') ADVANCE(836);
      END_STATE();
    case 1000:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 1001:
      if (lookahead == 't') ADVANCE(821);
      END_STATE();
    case 1002:
      if (lookahead == 't') ADVANCE(822);
      END_STATE();
    case 1003:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 1004:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 1005:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 1006:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 1007:
      if (lookahead == 't') ADVANCE(825);
      END_STATE();
    case 1008:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 1009:
      if (lookahead == 't') ADVANCE(814);
      END_STATE();
    case 1010:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 1011:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 1012:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 1013:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 1014:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 1015:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 1016:
      if (lookahead == 't') ADVANCE(993);
      END_STATE();
    case 1017:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 1018:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 1019:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 1020:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 1021:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 1022:
      if (lookahead == 't') ADVANCE(859);
      END_STATE();
    case 1023:
      if (lookahead == 't') ADVANCE(1102);
      END_STATE();
    case 1024:
      if (lookahead == 't') ADVANCE(871);
      END_STATE();
    case 1025:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 1026:
      if (lookahead == 't') ADVANCE(1103);
      END_STATE();
    case 1027:
      if (lookahead == 't') ADVANCE(794);
      END_STATE();
    case 1028:
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 1029:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 1030:
      if (lookahead == 't') ADVANCE(942);
      END_STATE();
    case 1031:
      if (lookahead == 't') ADVANCE(800);
      END_STATE();
    case 1032:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 1033:
      if (lookahead == 't') ADVANCE(1031);
      END_STATE();
    case 1034:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 1035:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 1036:
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 1037:
      if (lookahead == 'u') ADVANCE(583);
      END_STATE();
    case 1038:
      if (lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 1039:
      if (lookahead == 'u') ADVANCE(776);
      END_STATE();
    case 1040:
      if (lookahead == 'u') ADVANCE(909);
      END_STATE();
    case 1041:
      if (lookahead == 'u') ADVANCE(569);
      END_STATE();
    case 1042:
      if (lookahead == 'u') ADVANCE(797);
      END_STATE();
    case 1043:
      if (lookahead == 'u') ADVANCE(656);
      END_STATE();
    case 1044:
      if (lookahead == 'u') ADVANCE(423);
      END_STATE();
    case 1045:
      if (lookahead == 'u') ADVANCE(663);
      END_STATE();
    case 1046:
      if (lookahead == 'u') ADVANCE(671);
      END_STATE();
    case 1047:
      if (lookahead == 'u') ADVANCE(839);
      END_STATE();
    case 1048:
      if (lookahead == 'u') ADVANCE(841);
      END_STATE();
    case 1049:
      if (lookahead == 'u') ADVANCE(982);
      END_STATE();
    case 1050:
      if (lookahead == 'u') ADVANCE(844);
      END_STATE();
    case 1051:
      if (lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 1052:
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 1053:
      if (lookahead == 'u') ADVANCE(393);
      END_STATE();
    case 1054:
      if (lookahead == 'u') ADVANCE(395);
      END_STATE();
    case 1055:
      if (lookahead == 'u') ADVANCE(402);
      END_STATE();
    case 1056:
      if (lookahead == 'u') ADVANCE(870);
      END_STATE();
    case 1057:
      if (lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 1058:
      if (lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 1059:
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 1060:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 1061:
      if (lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 1062:
      if (lookahead == 'u') ADVANCE(665);
      END_STATE();
    case 1063:
      if (lookahead == 'u') ADVANCE(673);
      END_STATE();
    case 1064:
      if (lookahead == 'u') ADVANCE(581);
      END_STATE();
    case 1065:
      if (lookahead == 'u') ADVANCE(882);
      END_STATE();
    case 1066:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 1067:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 1068:
      if (lookahead == 'v') ADVANCE(354);
      END_STATE();
    case 1069:
      if (lookahead == 'v') ADVANCE(506);
      END_STATE();
    case 1070:
      if (lookahead == 'v') ADVANCE(690);
      END_STATE();
    case 1071:
      if (lookahead == 'v') ADVANCE(383);
      END_STATE();
    case 1072:
      if (lookahead == 'v') ADVANCE(545);
      END_STATE();
    case 1073:
      if (lookahead == 'w') ADVANCE(1258);
      END_STATE();
    case 1074:
      if (lookahead == 'w') ADVANCE(27);
      END_STATE();
    case 1075:
      if (lookahead == 'w') ADVANCE(505);
      END_STATE();
    case 1076:
      if (lookahead == 'w') ADVANCE(811);
      END_STATE();
    case 1077:
      if (lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 1078:
      if (lookahead == 'w') ADVANCE(513);
      END_STATE();
    case 1079:
      if (lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 1080:
      if (lookahead == 'w') ADVANCE(538);
      END_STATE();
    case 1081:
      if (lookahead == 'x') ADVANCE(84);
      END_STATE();
    case 1082:
      if (lookahead == 'x') ADVANCE(1084);
      END_STATE();
    case 1083:
      if (lookahead == 'x') ADVANCE(1095);
      END_STATE();
    case 1084:
      if (lookahead == 'x') ADVANCE(1087);
      END_STATE();
    case 1085:
      if (lookahead == 'x') ADVANCE(516);
      END_STATE();
    case 1086:
      if (lookahead == 'x') ADVANCE(1014);
      END_STATE();
    case 1087:
      if (lookahead == 'x') ADVANCE(105);
      END_STATE();
    case 1088:
      if (lookahead == 'y') ADVANCE(1225);
      END_STATE();
    case 1089:
      if (lookahead == 'y') ADVANCE(1253);
      END_STATE();
    case 1090:
      if (lookahead == 'y') ADVANCE(1236);
      END_STATE();
    case 1091:
      if (lookahead == 'y') ADVANCE(1232);
      END_STATE();
    case 1092:
      if (lookahead == 'y') ADVANCE(1219);
      END_STATE();
    case 1093:
      if (lookahead == 'y') ADVANCE(1244);
      END_STATE();
    case 1094:
      if (lookahead == 'y') ADVANCE(1242);
      END_STATE();
    case 1095:
      if (lookahead == 'y') ADVANCE(1286);
      END_STATE();
    case 1096:
      if (lookahead == 'y') ADVANCE(588);
      END_STATE();
    case 1097:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 1098:
      if (lookahead == 'y') ADVANCE(1008);
      END_STATE();
    case 1099:
      if (lookahead == 'y') ADVANCE(620);
      END_STATE();
    case 1100:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 1101:
      if (lookahead == 'y') ADVANCE(781);
      END_STATE();
    case 1102:
      if (lookahead == 'y') ADVANCE(784);
      END_STATE();
    case 1103:
      if (lookahead == 'y') ADVANCE(787);
      END_STATE();
    case 1104:
      if (lookahead == 'z') ADVANCE(327);
      END_STATE();
    case 1105:
      if (lookahead == 'z') ADVANCE(730);
      END_STATE();
    case 1106:
      if (lookahead == 'z') ADVANCE(381);
      END_STATE();
    case 1107:
      if (lookahead == 'z') ADVANCE(734);
      END_STATE();
    case 1108:
      if (lookahead == '|') ADVANCE(1117);
      END_STATE();
    case 1109:
      if (eof) ADVANCE(1110);
      ADVANCE_MAP(
        '!', 1177,
        '#', 1120,
        '&', 5,
        '(', 1140,
        ')', 1142,
        '/', 1167,
        '2', 17,
        '[', 1179,
        '^', 64,
        'a', 556,
        'c', 448,
        'e', 609,
        'f', 123,
        'h', 973,
        'i', 198,
        'l', 396,
        'n', 688,
        'o', 805,
        'r', 118,
        's', 488,
        't', 205,
        'u', 263,
        'x', 684,
        '|', 1108,
        '}', 1119,
        '0', 19,
        '1', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1109);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1120);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_ne);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_lt);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_le);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_le);
      if (lookahead == 'n') ADVANCE(1151);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_gt);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_ge);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(1131);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(1133);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_strictwildcard);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_wildcard);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_concat);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_lookup_json_string);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_lower);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_regex_replace);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_remove_bytes);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_to_string);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_upper);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_url_decode);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_uuidv4);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_len);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_ends_with);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_starts_with);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1158);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1158);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1158);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_ipv4);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_ipv4);
      if (lookahead == '5') ADVANCE(1164);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1165);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1162);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1162);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1165);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_ip_range_token1);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_ip_range_token1);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1168);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_ip_range_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1168);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_ip_list);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_ip_list);
      if (lookahead == '.') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_ip_list);
      if (lookahead == 'c') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_ip_list);
      if (lookahead == 'f') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_ip_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(1129);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(63);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTtimestamp_DOTsec);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_ip_DOTgeoip_DOTasnum);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTasnum);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_cf_DOTbot_management_DOTscore);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_cf_DOTedge_DOTserver_port);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_cf_DOTthreat_score);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_cf_DOTwaf_DOTscore);
      if (lookahead == '.') ADVANCE(867);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_cf_DOTwaf_DOTscore_DOTsqli);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_cf_DOTwaf_DOTscore_DOTxss);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_cf_DOTwaf_DOTscore_DOTrce);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_icmp_DOTtype);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_icmp_DOTcode);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_ip_DOThdr_len);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_ip_DOTlen);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_ip_DOTopt_DOTtype);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_ip_DOTttl);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_tcp_DOTflags);
      if (lookahead == '.') ADVANCE(140);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_tcp_DOTsrcport);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_tcp_DOTdstport);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_udp_DOTdstport);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_udp_DOTsrcport);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTbody_DOTsize);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_http_DOTresponse_DOTcode);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_http_DOTresponse_DOT1xxx_code);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc);
      if (lookahead == '.') ADVANCE(137);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_cf_DOTedge_DOTserver_ip);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_ip_DOTdst);
      if (lookahead == '.') ADVANCE(214);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_http_DOTcookie);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_http_DOThost);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_http_DOTreferer);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTfull_uri);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTmethod);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTuri);
      if (lookahead == '.') ADVANCE(152);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTuri_DOTpath);
      if (lookahead == '.') ADVANCE(343);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTuri_DOTquery);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_http_DOTuser_agent);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTversion);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_http_DOTx_forwarded_for);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTlat);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTlon);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTcity);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTpostal_code);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTmetro_code);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTregion);
      if (lookahead == '_') ADVANCE(243);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTregion_code);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTtimezone_DOTname);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_ip_DOTgeoip_DOTcontinent);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_ip_DOTgeoip_DOTcountry);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTcontinent);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTcountry);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_raw_DOThttp_DOTrequest_DOTuri);
      if (lookahead == '.') ADVANCE(180);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(anon_sym_cf_DOTbot_management_DOTja3_hash);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_cf_DOTverified_bot_category);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_cf_DOThostname_DOTmetadata);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_cf_DOTworker_DOTupstream_zone);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_cf_DOTcolo_DOTname);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_cf_DOTcolo_DOTregion);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(anon_sym_icmp);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(anon_sym_icmp);
      if (lookahead == '.') ADVANCE(210);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '.') ADVANCE(286);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '.') ADVANCE(290);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(anon_sym_ip_DOTdst_DOTcountry);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(anon_sym_tcp);
      if (lookahead == '.') ADVANCE(265);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(anon_sym_udp);
      if (lookahead == '.') ADVANCE(296);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTbody_DOTraw);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTbody_DOTmime);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(anon_sym_cf_DOTresponse_DOTerror_type);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(anon_sym_cf_DOTrandom_seed);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTcookies);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTuri_DOTargs);
      if (lookahead == '.') ADVANCE(669);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs);
      if (lookahead == '.') ADVANCE(674);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTheaders);
      if (lookahead == '.') ADVANCE(666);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTheaders);
      if (lookahead == '.') ADVANCE(667);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTbody_DOTform);
      if (lookahead == '.') ADVANCE(672);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(anon_sym_http_DOTresponse_DOTheaders);
      if (lookahead == '.') ADVANCE(670);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTheaders_DOTnames);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTheaders_DOTvalues);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTaccepted_languages);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_http_DOTresponse_DOTheaders_DOTnames);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_http_DOTresponse_DOTheaders_DOTvalues);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_cf_DOTbot_management_DOTdetection_ids);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_ip_DOTgeoip_DOTis_in_european_union);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_ip_DOTsrc_DOTis_in_european_union);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_ssl);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_cf_DOTbot_management_DOTverified_bot);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_cf_DOTbot_management_DOTcorporate_proxy);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_cf_DOTbot_management_DOTstatic_resource);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_cf_DOTclient_DOTbot);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(anon_sym_cf_DOTtls_client_auth_DOTcert_revoked);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_cf_DOTtls_client_auth_DOTcert_verified);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(anon_sym_sip);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_tcp_DOTflags_DOTack);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_tcp_DOTflags_DOTcwr);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_tcp_DOTflags_DOTecn);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_tcp_DOTflags_DOTfin);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_tcp_DOTflags_DOTpush);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_tcp_DOTflags_DOTreset);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_tcp_DOTflags_DOTsyn);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_tcp_DOTflags_DOTurg);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTheaders_DOTtruncated);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_http_DOTrequest_DOTbody_DOTtruncated);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1109},
  [2] = {.lex_state = 1109},
  [3] = {.lex_state = 1109},
  [4] = {.lex_state = 1109},
  [5] = {.lex_state = 1109},
  [6] = {.lex_state = 1109},
  [7] = {.lex_state = 1109},
  [8] = {.lex_state = 1109},
  [9] = {.lex_state = 1109},
  [10] = {.lex_state = 1109},
  [11] = {.lex_state = 1109},
  [12] = {.lex_state = 1109},
  [13] = {.lex_state = 1109},
  [14] = {.lex_state = 1109},
  [15] = {.lex_state = 1109},
  [16] = {.lex_state = 1109},
  [17] = {.lex_state = 1109},
  [18] = {.lex_state = 1109},
  [19] = {.lex_state = 1109},
  [20] = {.lex_state = 1109},
  [21] = {.lex_state = 1109},
  [22] = {.lex_state = 1109},
  [23] = {.lex_state = 1109},
  [24] = {.lex_state = 1109},
  [25] = {.lex_state = 1109},
  [26] = {.lex_state = 1109},
  [27] = {.lex_state = 1109},
  [28] = {.lex_state = 1109},
  [29] = {.lex_state = 1109},
  [30] = {.lex_state = 1109},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1109},
  [65] = {.lex_state = 1109},
  [66] = {.lex_state = 1109},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 1109},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 1109},
  [88] = {.lex_state = 1109},
  [89] = {.lex_state = 1109},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1109},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 1109},
  [136] = {.lex_state = 1109},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1109},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1109},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 1109},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 1109},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1109},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1109},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1109},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1109},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1109},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1109},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1109},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 1109},
  [196] = {.lex_state = 1109},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 1109},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 1109},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 1109},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 1109},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 1109},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 1109},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_ne] = ACTIONS(1),
    [anon_sym_lt] = ACTIONS(1),
    [anon_sym_le] = ACTIONS(1),
    [anon_sym_gt] = ACTIONS(1),
    [anon_sym_ge] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_matches] = ACTIONS(1),
    [anon_sym_strictwildcard] = ACTIONS(1),
    [anon_sym_wildcard] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_concat] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_lookup_json_string] = ACTIONS(1),
    [anon_sym_lower] = ACTIONS(1),
    [anon_sym_regex_replace] = ACTIONS(1),
    [anon_sym_remove_bytes] = ACTIONS(1),
    [anon_sym_to_string] = ACTIONS(1),
    [anon_sym_upper] = ACTIONS(1),
    [anon_sym_url_decode] = ACTIONS(1),
    [anon_sym_uuidv4] = ACTIONS(1),
    [anon_sym_len] = ACTIONS(1),
    [anon_sym_ends_with] = ACTIONS(1),
    [anon_sym_starts_with] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_LBRACK_STAR_RBRACK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_ip_range_token1] = ACTIONS(1),
    [sym_ip_list] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(1),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(1),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(1),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(1),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(1),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(1),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(1),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(1),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(1),
    [anon_sym_icmp_DOTtype] = ACTIONS(1),
    [anon_sym_icmp_DOTcode] = ACTIONS(1),
    [anon_sym_ip_DOThdr_len] = ACTIONS(1),
    [anon_sym_ip_DOTlen] = ACTIONS(1),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(1),
    [anon_sym_ip_DOTttl] = ACTIONS(1),
    [anon_sym_tcp_DOTflags] = ACTIONS(1),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(1),
    [anon_sym_tcp_DOTdstport] = ACTIONS(1),
    [anon_sym_udp_DOTdstport] = ACTIONS(1),
    [anon_sym_udp_DOTsrcport] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(1),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(1),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(1),
    [anon_sym_ip_DOTsrc] = ACTIONS(1),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(1),
    [anon_sym_ip_DOTdst] = ACTIONS(1),
    [anon_sym_http_DOTcookie] = ACTIONS(1),
    [anon_sym_http_DOThost] = ACTIONS(1),
    [anon_sym_http_DOTreferer] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(1),
    [anon_sym_http_DOTuser_agent] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(1),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(1),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(1),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(1),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(1),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(1),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(1),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(1),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(1),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(1),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(1),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(1),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(1),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(1),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(1),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(1),
    [anon_sym_icmp] = ACTIONS(1),
    [anon_sym_ip] = ACTIONS(1),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(1),
    [anon_sym_tcp] = ACTIONS(1),
    [anon_sym_udp] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(1),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(1),
    [anon_sym_cf_DOTrandom_seed] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(1),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(1),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(1),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(1),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(1),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(1),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(1),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(1),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(1),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(1),
    [anon_sym_ssl] = ACTIONS(1),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(1),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(1),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(1),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(1),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(1),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(1),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(1),
    [anon_sym_sip] = ACTIONS(1),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(1),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(1),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(1),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(1),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(1),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(1),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(1),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(1),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(142),
    [sym__expression] = STATE(29),
    [sym_not_expression] = STATE(29),
    [sym_in_expression] = STATE(29),
    [sym_compound_expression] = STATE(29),
    [sym_simple_expression] = STATE(29),
    [sym__bool_lhs] = STATE(29),
    [sym__number_lhs] = STATE(82),
    [sym_string_func] = STATE(31),
    [sym_number_func] = STATE(82),
    [sym_bool_func] = STATE(15),
    [sym_array_func] = STATE(20),
    [sym_group] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_not_operator] = STATE(5),
    [sym_number_array] = STATE(222),
    [sym_bool_array] = STATE(145),
    [sym_string_array] = STATE(147),
    [sym_boollike_field] = STATE(29),
    [sym_numberlike_field] = STATE(82),
    [sym_stringlike_field] = STATE(75),
    [sym_number_field] = STATE(78),
    [sym_ip_field] = STATE(86),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [sym_array_number_field] = STATE(195),
    [sym_bool_field] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [anon_sym_len] = ACTIONS(23),
    [anon_sym_ends_with] = ACTIONS(25),
    [anon_sym_starts_with] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_all] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(33),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(33),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(33),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(33),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(33),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(35),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(33),
    [anon_sym_icmp_DOTtype] = ACTIONS(33),
    [anon_sym_icmp_DOTcode] = ACTIONS(33),
    [anon_sym_ip_DOThdr_len] = ACTIONS(33),
    [anon_sym_ip_DOTlen] = ACTIONS(33),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(33),
    [anon_sym_ip_DOTttl] = ACTIONS(33),
    [anon_sym_tcp_DOTflags] = ACTIONS(35),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(33),
    [anon_sym_tcp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTsrcport] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(33),
    [anon_sym_ip_DOTsrc] = ACTIONS(37),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(39),
    [anon_sym_ip_DOTdst] = ACTIONS(37),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(43),
    [anon_sym_udp] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(51),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ssl] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(53),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(53),
    [anon_sym_sip] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(53),
  },
  [2] = {
    [sym__expression] = STATE(29),
    [sym_not_expression] = STATE(29),
    [sym_in_expression] = STATE(29),
    [sym_compound_expression] = STATE(29),
    [sym_simple_expression] = STATE(29),
    [sym__bool_lhs] = STATE(29),
    [sym__number_lhs] = STATE(82),
    [sym_string_func] = STATE(31),
    [sym_number_func] = STATE(82),
    [sym_bool_func] = STATE(15),
    [sym_array_func] = STATE(20),
    [sym_group] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_not_operator] = STATE(5),
    [sym_number_array] = STATE(222),
    [sym_bool_array] = STATE(145),
    [sym_string_array] = STATE(147),
    [sym_boollike_field] = STATE(29),
    [sym_numberlike_field] = STATE(82),
    [sym_stringlike_field] = STATE(75),
    [sym_number_field] = STATE(78),
    [sym_ip_field] = STATE(86),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [sym_array_number_field] = STATE(195),
    [sym_bool_field] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_lookup_json_string] = ACTIONS(63),
    [anon_sym_lower] = ACTIONS(66),
    [anon_sym_regex_replace] = ACTIONS(69),
    [anon_sym_remove_bytes] = ACTIONS(72),
    [anon_sym_to_string] = ACTIONS(75),
    [anon_sym_upper] = ACTIONS(66),
    [anon_sym_url_decode] = ACTIONS(66),
    [anon_sym_uuidv4] = ACTIONS(78),
    [anon_sym_len] = ACTIONS(81),
    [anon_sym_ends_with] = ACTIONS(84),
    [anon_sym_starts_with] = ACTIONS(84),
    [anon_sym_any] = ACTIONS(87),
    [anon_sym_all] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(90),
    [anon_sym_not] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(96),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(96),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(96),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(96),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(96),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(96),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(96),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(99),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(96),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(96),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(96),
    [anon_sym_icmp_DOTtype] = ACTIONS(96),
    [anon_sym_icmp_DOTcode] = ACTIONS(96),
    [anon_sym_ip_DOThdr_len] = ACTIONS(96),
    [anon_sym_ip_DOTlen] = ACTIONS(96),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(96),
    [anon_sym_ip_DOTttl] = ACTIONS(96),
    [anon_sym_tcp_DOTflags] = ACTIONS(99),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(96),
    [anon_sym_tcp_DOTdstport] = ACTIONS(96),
    [anon_sym_udp_DOTdstport] = ACTIONS(96),
    [anon_sym_udp_DOTsrcport] = ACTIONS(96),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(96),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(96),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(96),
    [anon_sym_ip_DOTsrc] = ACTIONS(102),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(105),
    [anon_sym_ip_DOTdst] = ACTIONS(102),
    [anon_sym_http_DOTcookie] = ACTIONS(108),
    [anon_sym_http_DOThost] = ACTIONS(108),
    [anon_sym_http_DOTreferer] = ACTIONS(108),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(108),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(108),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(111),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(111),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(108),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(108),
    [anon_sym_http_DOTuser_agent] = ACTIONS(108),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(108),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(108),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(108),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(108),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(108),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(108),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(108),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(111),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(108),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(108),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(108),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(108),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(108),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(108),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(108),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(108),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(108),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(108),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(108),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(111),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(108),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(108),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(108),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(108),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(108),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(108),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(108),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(108),
    [anon_sym_icmp] = ACTIONS(111),
    [anon_sym_ip] = ACTIONS(111),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(108),
    [anon_sym_tcp] = ACTIONS(111),
    [anon_sym_udp] = ACTIONS(111),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(108),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(108),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(108),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(114),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(117),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(117),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(117),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(117),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(117),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(120),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(120),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(120),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(120),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(120),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(120),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(120),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(120),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(120),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(120),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(120),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(123),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(126),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(126),
    [anon_sym_ssl] = ACTIONS(126),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(126),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(126),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(126),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(126),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(126),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(126),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(126),
    [anon_sym_sip] = ACTIONS(126),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(126),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(126),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(126),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(126),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(126),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(126),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(126),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(126),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(126),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(126),
  },
  [3] = {
    [sym__expression] = STATE(29),
    [sym_not_expression] = STATE(29),
    [sym_in_expression] = STATE(29),
    [sym_compound_expression] = STATE(29),
    [sym_simple_expression] = STATE(29),
    [sym__bool_lhs] = STATE(29),
    [sym__number_lhs] = STATE(82),
    [sym_string_func] = STATE(31),
    [sym_number_func] = STATE(82),
    [sym_bool_func] = STATE(15),
    [sym_array_func] = STATE(20),
    [sym_group] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_not_operator] = STATE(5),
    [sym_number_array] = STATE(222),
    [sym_bool_array] = STATE(145),
    [sym_string_array] = STATE(147),
    [sym_boollike_field] = STATE(29),
    [sym_numberlike_field] = STATE(82),
    [sym_stringlike_field] = STATE(75),
    [sym_number_field] = STATE(78),
    [sym_ip_field] = STATE(86),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [sym_array_number_field] = STATE(195),
    [sym_bool_field] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [anon_sym_len] = ACTIONS(23),
    [anon_sym_ends_with] = ACTIONS(25),
    [anon_sym_starts_with] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_all] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(33),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(33),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(33),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(33),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(33),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(35),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(33),
    [anon_sym_icmp_DOTtype] = ACTIONS(33),
    [anon_sym_icmp_DOTcode] = ACTIONS(33),
    [anon_sym_ip_DOThdr_len] = ACTIONS(33),
    [anon_sym_ip_DOTlen] = ACTIONS(33),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(33),
    [anon_sym_ip_DOTttl] = ACTIONS(33),
    [anon_sym_tcp_DOTflags] = ACTIONS(35),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(33),
    [anon_sym_tcp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTsrcport] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(33),
    [anon_sym_ip_DOTsrc] = ACTIONS(37),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(39),
    [anon_sym_ip_DOTdst] = ACTIONS(37),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(43),
    [anon_sym_udp] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(51),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ssl] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(53),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(53),
    [anon_sym_sip] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(53),
  },
  [4] = {
    [sym__expression] = STATE(17),
    [sym_not_expression] = STATE(17),
    [sym_in_expression] = STATE(17),
    [sym_compound_expression] = STATE(17),
    [sym_simple_expression] = STATE(17),
    [sym__bool_lhs] = STATE(17),
    [sym__number_lhs] = STATE(82),
    [sym_string_func] = STATE(31),
    [sym_number_func] = STATE(82),
    [sym_bool_func] = STATE(15),
    [sym_array_func] = STATE(20),
    [sym_group] = STATE(17),
    [sym_boolean] = STATE(17),
    [sym_not_operator] = STATE(5),
    [sym_number_array] = STATE(222),
    [sym_bool_array] = STATE(145),
    [sym_string_array] = STATE(147),
    [sym_boollike_field] = STATE(17),
    [sym_numberlike_field] = STATE(82),
    [sym_stringlike_field] = STATE(75),
    [sym_number_field] = STATE(78),
    [sym_ip_field] = STATE(86),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [sym_array_number_field] = STATE(195),
    [sym_bool_field] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [anon_sym_len] = ACTIONS(23),
    [anon_sym_ends_with] = ACTIONS(25),
    [anon_sym_starts_with] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_all] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(33),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(33),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(33),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(33),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(33),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(35),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(33),
    [anon_sym_icmp_DOTtype] = ACTIONS(33),
    [anon_sym_icmp_DOTcode] = ACTIONS(33),
    [anon_sym_ip_DOThdr_len] = ACTIONS(33),
    [anon_sym_ip_DOTlen] = ACTIONS(33),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(33),
    [anon_sym_ip_DOTttl] = ACTIONS(33),
    [anon_sym_tcp_DOTflags] = ACTIONS(35),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(33),
    [anon_sym_tcp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTsrcport] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(33),
    [anon_sym_ip_DOTsrc] = ACTIONS(37),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(39),
    [anon_sym_ip_DOTdst] = ACTIONS(37),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(43),
    [anon_sym_udp] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(51),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ssl] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(53),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(53),
    [anon_sym_sip] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(53),
  },
  [5] = {
    [sym__expression] = STATE(14),
    [sym_not_expression] = STATE(14),
    [sym_in_expression] = STATE(14),
    [sym_compound_expression] = STATE(14),
    [sym_simple_expression] = STATE(14),
    [sym__bool_lhs] = STATE(14),
    [sym__number_lhs] = STATE(82),
    [sym_string_func] = STATE(31),
    [sym_number_func] = STATE(82),
    [sym_bool_func] = STATE(15),
    [sym_array_func] = STATE(20),
    [sym_group] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_not_operator] = STATE(5),
    [sym_number_array] = STATE(222),
    [sym_bool_array] = STATE(145),
    [sym_string_array] = STATE(147),
    [sym_boollike_field] = STATE(14),
    [sym_numberlike_field] = STATE(82),
    [sym_stringlike_field] = STATE(75),
    [sym_number_field] = STATE(78),
    [sym_ip_field] = STATE(86),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [sym_array_number_field] = STATE(195),
    [sym_bool_field] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [anon_sym_len] = ACTIONS(23),
    [anon_sym_ends_with] = ACTIONS(25),
    [anon_sym_starts_with] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_all] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(33),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(33),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(33),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(33),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(33),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(35),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(33),
    [anon_sym_icmp_DOTtype] = ACTIONS(33),
    [anon_sym_icmp_DOTcode] = ACTIONS(33),
    [anon_sym_ip_DOThdr_len] = ACTIONS(33),
    [anon_sym_ip_DOTlen] = ACTIONS(33),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(33),
    [anon_sym_ip_DOTttl] = ACTIONS(33),
    [anon_sym_tcp_DOTflags] = ACTIONS(35),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(33),
    [anon_sym_tcp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTsrcport] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(33),
    [anon_sym_ip_DOTsrc] = ACTIONS(37),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(39),
    [anon_sym_ip_DOTdst] = ACTIONS(37),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(43),
    [anon_sym_udp] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(51),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ssl] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(53),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(53),
    [anon_sym_sip] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(53),
  },
  [6] = {
    [sym__expression] = STATE(13),
    [sym_not_expression] = STATE(13),
    [sym_in_expression] = STATE(13),
    [sym_compound_expression] = STATE(13),
    [sym_simple_expression] = STATE(13),
    [sym__bool_lhs] = STATE(13),
    [sym__number_lhs] = STATE(82),
    [sym_string_func] = STATE(31),
    [sym_number_func] = STATE(82),
    [sym_bool_func] = STATE(15),
    [sym_array_func] = STATE(20),
    [sym_group] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_not_operator] = STATE(5),
    [sym_number_array] = STATE(222),
    [sym_bool_array] = STATE(145),
    [sym_string_array] = STATE(147),
    [sym_boollike_field] = STATE(13),
    [sym_numberlike_field] = STATE(82),
    [sym_stringlike_field] = STATE(75),
    [sym_number_field] = STATE(78),
    [sym_ip_field] = STATE(86),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [sym_array_number_field] = STATE(195),
    [sym_bool_field] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [anon_sym_len] = ACTIONS(23),
    [anon_sym_ends_with] = ACTIONS(25),
    [anon_sym_starts_with] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_all] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(33),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(33),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(33),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(33),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(33),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(35),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(33),
    [anon_sym_icmp_DOTtype] = ACTIONS(33),
    [anon_sym_icmp_DOTcode] = ACTIONS(33),
    [anon_sym_ip_DOThdr_len] = ACTIONS(33),
    [anon_sym_ip_DOTlen] = ACTIONS(33),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(33),
    [anon_sym_ip_DOTttl] = ACTIONS(33),
    [anon_sym_tcp_DOTflags] = ACTIONS(35),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(33),
    [anon_sym_tcp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTsrcport] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(33),
    [anon_sym_ip_DOTsrc] = ACTIONS(37),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(39),
    [anon_sym_ip_DOTdst] = ACTIONS(37),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(43),
    [anon_sym_udp] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(51),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ssl] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(53),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(53),
    [anon_sym_sip] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(53),
  },
  [7] = {
    [sym__expression] = STATE(19),
    [sym_not_expression] = STATE(19),
    [sym_in_expression] = STATE(19),
    [sym_compound_expression] = STATE(19),
    [sym_simple_expression] = STATE(19),
    [sym__bool_lhs] = STATE(19),
    [sym__number_lhs] = STATE(82),
    [sym_string_func] = STATE(31),
    [sym_number_func] = STATE(82),
    [sym_bool_func] = STATE(15),
    [sym_array_func] = STATE(20),
    [sym_group] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_not_operator] = STATE(5),
    [sym_number_array] = STATE(222),
    [sym_bool_array] = STATE(145),
    [sym_string_array] = STATE(147),
    [sym_boollike_field] = STATE(19),
    [sym_numberlike_field] = STATE(82),
    [sym_stringlike_field] = STATE(75),
    [sym_number_field] = STATE(78),
    [sym_ip_field] = STATE(86),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [sym_array_number_field] = STATE(195),
    [sym_bool_field] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [anon_sym_len] = ACTIONS(23),
    [anon_sym_ends_with] = ACTIONS(25),
    [anon_sym_starts_with] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_all] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(33),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(33),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(33),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(33),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(33),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(35),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(33),
    [anon_sym_icmp_DOTtype] = ACTIONS(33),
    [anon_sym_icmp_DOTcode] = ACTIONS(33),
    [anon_sym_ip_DOThdr_len] = ACTIONS(33),
    [anon_sym_ip_DOTlen] = ACTIONS(33),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(33),
    [anon_sym_ip_DOTttl] = ACTIONS(33),
    [anon_sym_tcp_DOTflags] = ACTIONS(35),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(33),
    [anon_sym_tcp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTsrcport] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(33),
    [anon_sym_ip_DOTsrc] = ACTIONS(37),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(39),
    [anon_sym_ip_DOTdst] = ACTIONS(37),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(43),
    [anon_sym_udp] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(51),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ssl] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(53),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(53),
    [anon_sym_sip] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(53),
  },
  [8] = {
    [sym__expression] = STATE(84),
    [sym_not_expression] = STATE(84),
    [sym_in_expression] = STATE(84),
    [sym_compound_expression] = STATE(84),
    [sym_simple_expression] = STATE(84),
    [sym__bool_lhs] = STATE(84),
    [sym__number_lhs] = STATE(82),
    [sym_string_func] = STATE(31),
    [sym_number_func] = STATE(82),
    [sym_bool_func] = STATE(15),
    [sym_array_func] = STATE(20),
    [sym_group] = STATE(84),
    [sym_boolean] = STATE(84),
    [sym_not_operator] = STATE(5),
    [sym_number_array] = STATE(222),
    [sym_bool_array] = STATE(145),
    [sym_string_array] = STATE(147),
    [sym_boollike_field] = STATE(84),
    [sym_numberlike_field] = STATE(82),
    [sym_stringlike_field] = STATE(75),
    [sym_number_field] = STATE(78),
    [sym_ip_field] = STATE(86),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [sym_array_number_field] = STATE(195),
    [sym_bool_field] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [anon_sym_len] = ACTIONS(23),
    [anon_sym_ends_with] = ACTIONS(25),
    [anon_sym_starts_with] = ACTIONS(25),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_all] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(33),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(33),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(33),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(33),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(33),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(35),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(33),
    [anon_sym_icmp_DOTtype] = ACTIONS(33),
    [anon_sym_icmp_DOTcode] = ACTIONS(33),
    [anon_sym_ip_DOThdr_len] = ACTIONS(33),
    [anon_sym_ip_DOTlen] = ACTIONS(33),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(33),
    [anon_sym_ip_DOTttl] = ACTIONS(33),
    [anon_sym_tcp_DOTflags] = ACTIONS(35),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(33),
    [anon_sym_tcp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTsrcport] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(33),
    [anon_sym_ip_DOTsrc] = ACTIONS(37),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(39),
    [anon_sym_ip_DOTdst] = ACTIONS(37),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(43),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(43),
    [anon_sym_udp] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(51),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ssl] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(53),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(53),
    [anon_sym_sip] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(53),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_AMP_AMP] = ACTIONS(131),
    [anon_sym_and] = ACTIONS(131),
    [anon_sym_xor] = ACTIONS(131),
    [anon_sym_CARET_CARET] = ACTIONS(131),
    [anon_sym_or] = ACTIONS(131),
    [anon_sym_PIPE_PIPE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_lookup_json_string] = ACTIONS(131),
    [anon_sym_lower] = ACTIONS(131),
    [anon_sym_regex_replace] = ACTIONS(131),
    [anon_sym_remove_bytes] = ACTIONS(131),
    [anon_sym_to_string] = ACTIONS(131),
    [anon_sym_upper] = ACTIONS(131),
    [anon_sym_url_decode] = ACTIONS(131),
    [anon_sym_uuidv4] = ACTIONS(131),
    [anon_sym_len] = ACTIONS(131),
    [anon_sym_ends_with] = ACTIONS(131),
    [anon_sym_starts_with] = ACTIONS(131),
    [anon_sym_any] = ACTIONS(131),
    [anon_sym_all] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(131),
    [sym_ipv4] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_not] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(131),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(131),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(131),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(131),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(131),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(135),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(131),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(131),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(131),
    [anon_sym_icmp_DOTtype] = ACTIONS(131),
    [anon_sym_icmp_DOTcode] = ACTIONS(131),
    [anon_sym_ip_DOThdr_len] = ACTIONS(131),
    [anon_sym_ip_DOTlen] = ACTIONS(131),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(131),
    [anon_sym_ip_DOTttl] = ACTIONS(131),
    [anon_sym_tcp_DOTflags] = ACTIONS(135),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(131),
    [anon_sym_tcp_DOTdstport] = ACTIONS(131),
    [anon_sym_udp_DOTdstport] = ACTIONS(131),
    [anon_sym_udp_DOTsrcport] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(131),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(131),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(131),
    [anon_sym_ip_DOTsrc] = ACTIONS(135),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(131),
    [anon_sym_ip_DOTdst] = ACTIONS(135),
    [anon_sym_http_DOTcookie] = ACTIONS(131),
    [anon_sym_http_DOThost] = ACTIONS(131),
    [anon_sym_http_DOTreferer] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(135),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(135),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(131),
    [anon_sym_http_DOTuser_agent] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(131),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(135),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(131),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(131),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(131),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(131),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(131),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(131),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(135),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(131),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(131),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(131),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(131),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(131),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(131),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(131),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(131),
    [anon_sym_icmp] = ACTIONS(135),
    [anon_sym_ip] = ACTIONS(135),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(131),
    [anon_sym_tcp] = ACTIONS(135),
    [anon_sym_udp] = ACTIONS(135),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(131),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(135),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(135),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(135),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(135),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(135),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(131),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(131),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(131),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(131),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(131),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(131),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(131),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(131),
    [anon_sym_ssl] = ACTIONS(131),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(131),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(131),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(131),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(131),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(131),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(131),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(131),
    [anon_sym_sip] = ACTIONS(131),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(131),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(131),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(131),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(131),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(131),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(131),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(131),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(131),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(131),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_and] = ACTIONS(137),
    [anon_sym_xor] = ACTIONS(137),
    [anon_sym_CARET_CARET] = ACTIONS(137),
    [anon_sym_or] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_lookup_json_string] = ACTIONS(137),
    [anon_sym_lower] = ACTIONS(137),
    [anon_sym_regex_replace] = ACTIONS(137),
    [anon_sym_remove_bytes] = ACTIONS(137),
    [anon_sym_to_string] = ACTIONS(137),
    [anon_sym_upper] = ACTIONS(137),
    [anon_sym_url_decode] = ACTIONS(137),
    [anon_sym_uuidv4] = ACTIONS(137),
    [anon_sym_len] = ACTIONS(137),
    [anon_sym_ends_with] = ACTIONS(137),
    [anon_sym_starts_with] = ACTIONS(137),
    [anon_sym_any] = ACTIONS(137),
    [anon_sym_all] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [sym_ipv4] = ACTIONS(137),
    [anon_sym_not] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(137),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(137),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(137),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(137),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(137),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(139),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(137),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(137),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(137),
    [anon_sym_icmp_DOTtype] = ACTIONS(137),
    [anon_sym_icmp_DOTcode] = ACTIONS(137),
    [anon_sym_ip_DOThdr_len] = ACTIONS(137),
    [anon_sym_ip_DOTlen] = ACTIONS(137),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(137),
    [anon_sym_ip_DOTttl] = ACTIONS(137),
    [anon_sym_tcp_DOTflags] = ACTIONS(139),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(137),
    [anon_sym_tcp_DOTdstport] = ACTIONS(137),
    [anon_sym_udp_DOTdstport] = ACTIONS(137),
    [anon_sym_udp_DOTsrcport] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(137),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(137),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(137),
    [anon_sym_ip_DOTsrc] = ACTIONS(139),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(137),
    [anon_sym_ip_DOTdst] = ACTIONS(139),
    [anon_sym_http_DOTcookie] = ACTIONS(137),
    [anon_sym_http_DOThost] = ACTIONS(137),
    [anon_sym_http_DOTreferer] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(139),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(139),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(137),
    [anon_sym_http_DOTuser_agent] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(137),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(139),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(137),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(137),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(137),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(137),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(137),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(137),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(139),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(137),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(137),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(137),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(137),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(137),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(137),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(137),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(137),
    [anon_sym_icmp] = ACTIONS(139),
    [anon_sym_ip] = ACTIONS(139),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(137),
    [anon_sym_tcp] = ACTIONS(139),
    [anon_sym_udp] = ACTIONS(139),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(137),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(139),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(139),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(139),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(139),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(139),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(137),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(137),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(137),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(137),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(137),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(137),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(137),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(137),
    [anon_sym_ssl] = ACTIONS(137),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(137),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(137),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(137),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(137),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(137),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(137),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(137),
    [anon_sym_sip] = ACTIONS(137),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(137),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(137),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(137),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(137),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(137),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(137),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(137),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(137),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(137),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_AMP_AMP] = ACTIONS(141),
    [anon_sym_and] = ACTIONS(141),
    [anon_sym_xor] = ACTIONS(141),
    [anon_sym_CARET_CARET] = ACTIONS(141),
    [anon_sym_or] = ACTIONS(141),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_lookup_json_string] = ACTIONS(141),
    [anon_sym_lower] = ACTIONS(141),
    [anon_sym_regex_replace] = ACTIONS(141),
    [anon_sym_remove_bytes] = ACTIONS(141),
    [anon_sym_to_string] = ACTIONS(141),
    [anon_sym_upper] = ACTIONS(141),
    [anon_sym_url_decode] = ACTIONS(141),
    [anon_sym_uuidv4] = ACTIONS(141),
    [anon_sym_len] = ACTIONS(141),
    [anon_sym_ends_with] = ACTIONS(141),
    [anon_sym_starts_with] = ACTIONS(141),
    [anon_sym_any] = ACTIONS(141),
    [anon_sym_all] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(141),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(141),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(141),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(141),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(141),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(143),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(141),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(141),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(141),
    [anon_sym_icmp_DOTtype] = ACTIONS(141),
    [anon_sym_icmp_DOTcode] = ACTIONS(141),
    [anon_sym_ip_DOThdr_len] = ACTIONS(141),
    [anon_sym_ip_DOTlen] = ACTIONS(141),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(141),
    [anon_sym_ip_DOTttl] = ACTIONS(141),
    [anon_sym_tcp_DOTflags] = ACTIONS(143),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(141),
    [anon_sym_tcp_DOTdstport] = ACTIONS(141),
    [anon_sym_udp_DOTdstport] = ACTIONS(141),
    [anon_sym_udp_DOTsrcport] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(141),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(141),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(141),
    [anon_sym_ip_DOTsrc] = ACTIONS(143),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(141),
    [anon_sym_ip_DOTdst] = ACTIONS(143),
    [anon_sym_http_DOTcookie] = ACTIONS(141),
    [anon_sym_http_DOThost] = ACTIONS(141),
    [anon_sym_http_DOTreferer] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(143),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(143),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(141),
    [anon_sym_http_DOTuser_agent] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(141),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(143),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(141),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(141),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(141),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(141),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(141),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(141),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(143),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(141),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(141),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(141),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(141),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(141),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(141),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(141),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(141),
    [anon_sym_icmp] = ACTIONS(143),
    [anon_sym_ip] = ACTIONS(143),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(141),
    [anon_sym_tcp] = ACTIONS(143),
    [anon_sym_udp] = ACTIONS(143),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(141),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(143),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(143),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(143),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(143),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(143),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(141),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(141),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(141),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(141),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(141),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(141),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(141),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(141),
    [anon_sym_ssl] = ACTIONS(141),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(141),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(141),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(141),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(141),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(141),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(141),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(141),
    [anon_sym_sip] = ACTIONS(141),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(141),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(141),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(141),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(141),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(141),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(141),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(141),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(141),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(141),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_AMP_AMP] = ACTIONS(145),
    [anon_sym_and] = ACTIONS(145),
    [anon_sym_xor] = ACTIONS(145),
    [anon_sym_CARET_CARET] = ACTIONS(145),
    [anon_sym_or] = ACTIONS(145),
    [anon_sym_PIPE_PIPE] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_lookup_json_string] = ACTIONS(145),
    [anon_sym_lower] = ACTIONS(145),
    [anon_sym_regex_replace] = ACTIONS(145),
    [anon_sym_remove_bytes] = ACTIONS(145),
    [anon_sym_to_string] = ACTIONS(145),
    [anon_sym_upper] = ACTIONS(145),
    [anon_sym_url_decode] = ACTIONS(145),
    [anon_sym_uuidv4] = ACTIONS(145),
    [anon_sym_len] = ACTIONS(145),
    [anon_sym_ends_with] = ACTIONS(145),
    [anon_sym_starts_with] = ACTIONS(145),
    [anon_sym_any] = ACTIONS(145),
    [anon_sym_all] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(145),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(145),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(145),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(145),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(145),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(147),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(145),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(145),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(145),
    [anon_sym_icmp_DOTtype] = ACTIONS(145),
    [anon_sym_icmp_DOTcode] = ACTIONS(145),
    [anon_sym_ip_DOThdr_len] = ACTIONS(145),
    [anon_sym_ip_DOTlen] = ACTIONS(145),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(145),
    [anon_sym_ip_DOTttl] = ACTIONS(145),
    [anon_sym_tcp_DOTflags] = ACTIONS(147),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(145),
    [anon_sym_tcp_DOTdstport] = ACTIONS(145),
    [anon_sym_udp_DOTdstport] = ACTIONS(145),
    [anon_sym_udp_DOTsrcport] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(145),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(145),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(145),
    [anon_sym_ip_DOTsrc] = ACTIONS(147),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(145),
    [anon_sym_ip_DOTdst] = ACTIONS(147),
    [anon_sym_http_DOTcookie] = ACTIONS(145),
    [anon_sym_http_DOThost] = ACTIONS(145),
    [anon_sym_http_DOTreferer] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(147),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(147),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(145),
    [anon_sym_http_DOTuser_agent] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(145),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(147),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(145),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(145),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(145),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(145),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(145),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(145),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(147),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(145),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(145),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(145),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(145),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(145),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(145),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(145),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(145),
    [anon_sym_icmp] = ACTIONS(147),
    [anon_sym_ip] = ACTIONS(147),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(145),
    [anon_sym_tcp] = ACTIONS(147),
    [anon_sym_udp] = ACTIONS(147),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(145),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(147),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(147),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(147),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(147),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(147),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(145),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(145),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(145),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(145),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(145),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(145),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(145),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(145),
    [anon_sym_ssl] = ACTIONS(145),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(145),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(145),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(145),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(145),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(145),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(145),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(145),
    [anon_sym_sip] = ACTIONS(145),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(145),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(145),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(145),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(145),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(145),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(145),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(145),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(145),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(145),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_xor] = ACTIONS(149),
    [anon_sym_CARET_CARET] = ACTIONS(149),
    [anon_sym_or] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_lookup_json_string] = ACTIONS(149),
    [anon_sym_lower] = ACTIONS(149),
    [anon_sym_regex_replace] = ACTIONS(149),
    [anon_sym_remove_bytes] = ACTIONS(149),
    [anon_sym_to_string] = ACTIONS(149),
    [anon_sym_upper] = ACTIONS(149),
    [anon_sym_url_decode] = ACTIONS(149),
    [anon_sym_uuidv4] = ACTIONS(149),
    [anon_sym_len] = ACTIONS(149),
    [anon_sym_ends_with] = ACTIONS(149),
    [anon_sym_starts_with] = ACTIONS(149),
    [anon_sym_any] = ACTIONS(149),
    [anon_sym_all] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_BANG] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(149),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(149),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(149),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(153),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(149),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(149),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(149),
    [anon_sym_icmp_DOTtype] = ACTIONS(149),
    [anon_sym_icmp_DOTcode] = ACTIONS(149),
    [anon_sym_ip_DOThdr_len] = ACTIONS(149),
    [anon_sym_ip_DOTlen] = ACTIONS(149),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(149),
    [anon_sym_ip_DOTttl] = ACTIONS(149),
    [anon_sym_tcp_DOTflags] = ACTIONS(153),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(149),
    [anon_sym_tcp_DOTdstport] = ACTIONS(149),
    [anon_sym_udp_DOTdstport] = ACTIONS(149),
    [anon_sym_udp_DOTsrcport] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc] = ACTIONS(153),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(149),
    [anon_sym_ip_DOTdst] = ACTIONS(153),
    [anon_sym_http_DOTcookie] = ACTIONS(149),
    [anon_sym_http_DOThost] = ACTIONS(149),
    [anon_sym_http_DOTreferer] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(149),
    [anon_sym_http_DOTuser_agent] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(149),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(153),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(153),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(149),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(149),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(149),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(149),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(149),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(149),
    [anon_sym_icmp] = ACTIONS(153),
    [anon_sym_ip] = ACTIONS(153),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(149),
    [anon_sym_tcp] = ACTIONS(153),
    [anon_sym_udp] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(149),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(153),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(153),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(149),
    [anon_sym_ssl] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(149),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(149),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(149),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(149),
    [anon_sym_sip] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(149),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_AMP_AMP] = ACTIONS(155),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_xor] = ACTIONS(155),
    [anon_sym_CARET_CARET] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [anon_sym_PIPE_PIPE] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_lookup_json_string] = ACTIONS(155),
    [anon_sym_lower] = ACTIONS(155),
    [anon_sym_regex_replace] = ACTIONS(155),
    [anon_sym_remove_bytes] = ACTIONS(155),
    [anon_sym_to_string] = ACTIONS(155),
    [anon_sym_upper] = ACTIONS(155),
    [anon_sym_url_decode] = ACTIONS(155),
    [anon_sym_uuidv4] = ACTIONS(155),
    [anon_sym_len] = ACTIONS(155),
    [anon_sym_ends_with] = ACTIONS(155),
    [anon_sym_starts_with] = ACTIONS(155),
    [anon_sym_any] = ACTIONS(155),
    [anon_sym_all] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [anon_sym_not] = ACTIONS(155),
    [anon_sym_BANG] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(155),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(155),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(155),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(155),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(155),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(157),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(155),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(155),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(155),
    [anon_sym_icmp_DOTtype] = ACTIONS(155),
    [anon_sym_icmp_DOTcode] = ACTIONS(155),
    [anon_sym_ip_DOThdr_len] = ACTIONS(155),
    [anon_sym_ip_DOTlen] = ACTIONS(155),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(155),
    [anon_sym_ip_DOTttl] = ACTIONS(155),
    [anon_sym_tcp_DOTflags] = ACTIONS(157),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(155),
    [anon_sym_tcp_DOTdstport] = ACTIONS(155),
    [anon_sym_udp_DOTdstport] = ACTIONS(155),
    [anon_sym_udp_DOTsrcport] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(155),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(155),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(155),
    [anon_sym_ip_DOTsrc] = ACTIONS(157),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(155),
    [anon_sym_ip_DOTdst] = ACTIONS(157),
    [anon_sym_http_DOTcookie] = ACTIONS(155),
    [anon_sym_http_DOThost] = ACTIONS(155),
    [anon_sym_http_DOTreferer] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(157),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(157),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(155),
    [anon_sym_http_DOTuser_agent] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(155),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(157),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(155),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(155),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(155),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(155),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(155),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(155),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(157),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(155),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(155),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(155),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(155),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(155),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(155),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(155),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(155),
    [anon_sym_icmp] = ACTIONS(157),
    [anon_sym_ip] = ACTIONS(157),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(155),
    [anon_sym_tcp] = ACTIONS(157),
    [anon_sym_udp] = ACTIONS(157),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(155),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(157),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(157),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(157),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(157),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(157),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(155),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(155),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(155),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(155),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(155),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(155),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(155),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(155),
    [anon_sym_ssl] = ACTIONS(155),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(155),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(155),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(155),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(155),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(155),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(155),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(155),
    [anon_sym_sip] = ACTIONS(155),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(155),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(155),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(155),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(155),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(155),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(155),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(155),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(155),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(155),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_xor] = ACTIONS(159),
    [anon_sym_CARET_CARET] = ACTIONS(159),
    [anon_sym_or] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_lookup_json_string] = ACTIONS(159),
    [anon_sym_lower] = ACTIONS(159),
    [anon_sym_regex_replace] = ACTIONS(159),
    [anon_sym_remove_bytes] = ACTIONS(159),
    [anon_sym_to_string] = ACTIONS(159),
    [anon_sym_upper] = ACTIONS(159),
    [anon_sym_url_decode] = ACTIONS(159),
    [anon_sym_uuidv4] = ACTIONS(159),
    [anon_sym_len] = ACTIONS(159),
    [anon_sym_ends_with] = ACTIONS(159),
    [anon_sym_starts_with] = ACTIONS(159),
    [anon_sym_any] = ACTIONS(159),
    [anon_sym_all] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [anon_sym_not] = ACTIONS(159),
    [anon_sym_BANG] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(159),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(159),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(159),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(159),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(159),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(161),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(159),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(159),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(159),
    [anon_sym_icmp_DOTtype] = ACTIONS(159),
    [anon_sym_icmp_DOTcode] = ACTIONS(159),
    [anon_sym_ip_DOThdr_len] = ACTIONS(159),
    [anon_sym_ip_DOTlen] = ACTIONS(159),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(159),
    [anon_sym_ip_DOTttl] = ACTIONS(159),
    [anon_sym_tcp_DOTflags] = ACTIONS(161),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(159),
    [anon_sym_tcp_DOTdstport] = ACTIONS(159),
    [anon_sym_udp_DOTdstport] = ACTIONS(159),
    [anon_sym_udp_DOTsrcport] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(159),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(159),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(159),
    [anon_sym_ip_DOTsrc] = ACTIONS(161),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(159),
    [anon_sym_ip_DOTdst] = ACTIONS(161),
    [anon_sym_http_DOTcookie] = ACTIONS(159),
    [anon_sym_http_DOThost] = ACTIONS(159),
    [anon_sym_http_DOTreferer] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(161),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(161),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(159),
    [anon_sym_http_DOTuser_agent] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(159),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(161),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(159),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(159),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(159),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(159),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(159),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(159),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(161),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(159),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(159),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(159),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(159),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(159),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(159),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(159),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(159),
    [anon_sym_icmp] = ACTIONS(161),
    [anon_sym_ip] = ACTIONS(161),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(159),
    [anon_sym_tcp] = ACTIONS(161),
    [anon_sym_udp] = ACTIONS(161),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(159),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(161),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(161),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(161),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(161),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(161),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(159),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(159),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(159),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(159),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(159),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(159),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(159),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(159),
    [anon_sym_ssl] = ACTIONS(159),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(159),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(159),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(159),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(159),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(159),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(159),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(159),
    [anon_sym_sip] = ACTIONS(159),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(159),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(159),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(159),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(159),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(159),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(159),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(159),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(159),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(159),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_AMP_AMP] = ACTIONS(163),
    [anon_sym_and] = ACTIONS(163),
    [anon_sym_xor] = ACTIONS(163),
    [anon_sym_CARET_CARET] = ACTIONS(163),
    [anon_sym_or] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_lookup_json_string] = ACTIONS(163),
    [anon_sym_lower] = ACTIONS(163),
    [anon_sym_regex_replace] = ACTIONS(163),
    [anon_sym_remove_bytes] = ACTIONS(163),
    [anon_sym_to_string] = ACTIONS(163),
    [anon_sym_upper] = ACTIONS(163),
    [anon_sym_url_decode] = ACTIONS(163),
    [anon_sym_uuidv4] = ACTIONS(163),
    [anon_sym_len] = ACTIONS(163),
    [anon_sym_ends_with] = ACTIONS(163),
    [anon_sym_starts_with] = ACTIONS(163),
    [anon_sym_any] = ACTIONS(163),
    [anon_sym_all] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_not] = ACTIONS(163),
    [anon_sym_BANG] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(163),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(163),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(163),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(163),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(163),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(165),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(163),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(163),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(163),
    [anon_sym_icmp_DOTtype] = ACTIONS(163),
    [anon_sym_icmp_DOTcode] = ACTIONS(163),
    [anon_sym_ip_DOThdr_len] = ACTIONS(163),
    [anon_sym_ip_DOTlen] = ACTIONS(163),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(163),
    [anon_sym_ip_DOTttl] = ACTIONS(163),
    [anon_sym_tcp_DOTflags] = ACTIONS(165),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(163),
    [anon_sym_tcp_DOTdstport] = ACTIONS(163),
    [anon_sym_udp_DOTdstport] = ACTIONS(163),
    [anon_sym_udp_DOTsrcport] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(163),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(163),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(163),
    [anon_sym_ip_DOTsrc] = ACTIONS(165),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(163),
    [anon_sym_ip_DOTdst] = ACTIONS(165),
    [anon_sym_http_DOTcookie] = ACTIONS(163),
    [anon_sym_http_DOThost] = ACTIONS(163),
    [anon_sym_http_DOTreferer] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(165),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(165),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(163),
    [anon_sym_http_DOTuser_agent] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(163),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(165),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(163),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(163),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(163),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(163),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(163),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(163),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(165),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(163),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(163),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(163),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(163),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(163),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(163),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(163),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(163),
    [anon_sym_icmp] = ACTIONS(165),
    [anon_sym_ip] = ACTIONS(165),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(163),
    [anon_sym_tcp] = ACTIONS(165),
    [anon_sym_udp] = ACTIONS(165),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(163),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(165),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(165),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(165),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(165),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(165),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(163),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(163),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(163),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(163),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(163),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(163),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(163),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(163),
    [anon_sym_ssl] = ACTIONS(163),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(163),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(163),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(163),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(163),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(163),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(163),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(163),
    [anon_sym_sip] = ACTIONS(163),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(163),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(163),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(163),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(163),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(163),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(163),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(163),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(163),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(163),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_and] = ACTIONS(149),
    [anon_sym_xor] = ACTIONS(149),
    [anon_sym_CARET_CARET] = ACTIONS(149),
    [anon_sym_or] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_lookup_json_string] = ACTIONS(149),
    [anon_sym_lower] = ACTIONS(149),
    [anon_sym_regex_replace] = ACTIONS(149),
    [anon_sym_remove_bytes] = ACTIONS(149),
    [anon_sym_to_string] = ACTIONS(149),
    [anon_sym_upper] = ACTIONS(149),
    [anon_sym_url_decode] = ACTIONS(149),
    [anon_sym_uuidv4] = ACTIONS(149),
    [anon_sym_len] = ACTIONS(149),
    [anon_sym_ends_with] = ACTIONS(149),
    [anon_sym_starts_with] = ACTIONS(149),
    [anon_sym_any] = ACTIONS(149),
    [anon_sym_all] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_BANG] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(149),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(149),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(149),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(153),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(149),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(149),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(149),
    [anon_sym_icmp_DOTtype] = ACTIONS(149),
    [anon_sym_icmp_DOTcode] = ACTIONS(149),
    [anon_sym_ip_DOThdr_len] = ACTIONS(149),
    [anon_sym_ip_DOTlen] = ACTIONS(149),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(149),
    [anon_sym_ip_DOTttl] = ACTIONS(149),
    [anon_sym_tcp_DOTflags] = ACTIONS(153),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(149),
    [anon_sym_tcp_DOTdstport] = ACTIONS(149),
    [anon_sym_udp_DOTdstport] = ACTIONS(149),
    [anon_sym_udp_DOTsrcport] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc] = ACTIONS(153),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(149),
    [anon_sym_ip_DOTdst] = ACTIONS(153),
    [anon_sym_http_DOTcookie] = ACTIONS(149),
    [anon_sym_http_DOThost] = ACTIONS(149),
    [anon_sym_http_DOTreferer] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(149),
    [anon_sym_http_DOTuser_agent] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(149),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(153),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(153),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(149),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(149),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(149),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(149),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(149),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(149),
    [anon_sym_icmp] = ACTIONS(153),
    [anon_sym_ip] = ACTIONS(153),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(149),
    [anon_sym_tcp] = ACTIONS(153),
    [anon_sym_udp] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(149),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(153),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(153),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(149),
    [anon_sym_ssl] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(149),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(149),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(149),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(149),
    [anon_sym_sip] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(149),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_and] = ACTIONS(167),
    [anon_sym_xor] = ACTIONS(167),
    [anon_sym_CARET_CARET] = ACTIONS(167),
    [anon_sym_or] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_lookup_json_string] = ACTIONS(167),
    [anon_sym_lower] = ACTIONS(167),
    [anon_sym_regex_replace] = ACTIONS(167),
    [anon_sym_remove_bytes] = ACTIONS(167),
    [anon_sym_to_string] = ACTIONS(167),
    [anon_sym_upper] = ACTIONS(167),
    [anon_sym_url_decode] = ACTIONS(167),
    [anon_sym_uuidv4] = ACTIONS(167),
    [anon_sym_len] = ACTIONS(167),
    [anon_sym_ends_with] = ACTIONS(167),
    [anon_sym_starts_with] = ACTIONS(167),
    [anon_sym_any] = ACTIONS(167),
    [anon_sym_all] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_not] = ACTIONS(167),
    [anon_sym_BANG] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(167),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(167),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(167),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(167),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(167),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(169),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(167),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(167),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(167),
    [anon_sym_icmp_DOTtype] = ACTIONS(167),
    [anon_sym_icmp_DOTcode] = ACTIONS(167),
    [anon_sym_ip_DOThdr_len] = ACTIONS(167),
    [anon_sym_ip_DOTlen] = ACTIONS(167),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(167),
    [anon_sym_ip_DOTttl] = ACTIONS(167),
    [anon_sym_tcp_DOTflags] = ACTIONS(169),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(167),
    [anon_sym_tcp_DOTdstport] = ACTIONS(167),
    [anon_sym_udp_DOTdstport] = ACTIONS(167),
    [anon_sym_udp_DOTsrcport] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(167),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(167),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(167),
    [anon_sym_ip_DOTsrc] = ACTIONS(169),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(167),
    [anon_sym_ip_DOTdst] = ACTIONS(169),
    [anon_sym_http_DOTcookie] = ACTIONS(167),
    [anon_sym_http_DOThost] = ACTIONS(167),
    [anon_sym_http_DOTreferer] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(169),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(169),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(167),
    [anon_sym_http_DOTuser_agent] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(167),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(169),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(167),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(167),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(167),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(167),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(167),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(167),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(169),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(167),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(167),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(167),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(167),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(167),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(167),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(167),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(167),
    [anon_sym_icmp] = ACTIONS(169),
    [anon_sym_ip] = ACTIONS(169),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(167),
    [anon_sym_tcp] = ACTIONS(169),
    [anon_sym_udp] = ACTIONS(169),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(167),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(169),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(169),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(169),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(169),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(169),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(167),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(167),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(167),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(167),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(167),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(167),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(167),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(167),
    [anon_sym_ssl] = ACTIONS(167),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(167),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(167),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(167),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(167),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(167),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(167),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(167),
    [anon_sym_sip] = ACTIONS(167),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(167),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(167),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(167),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(167),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(167),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(167),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(167),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(167),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(167),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_xor] = ACTIONS(171),
    [anon_sym_CARET_CARET] = ACTIONS(171),
    [anon_sym_or] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_lookup_json_string] = ACTIONS(149),
    [anon_sym_lower] = ACTIONS(149),
    [anon_sym_regex_replace] = ACTIONS(149),
    [anon_sym_remove_bytes] = ACTIONS(149),
    [anon_sym_to_string] = ACTIONS(149),
    [anon_sym_upper] = ACTIONS(149),
    [anon_sym_url_decode] = ACTIONS(149),
    [anon_sym_uuidv4] = ACTIONS(149),
    [anon_sym_len] = ACTIONS(149),
    [anon_sym_ends_with] = ACTIONS(149),
    [anon_sym_starts_with] = ACTIONS(149),
    [anon_sym_any] = ACTIONS(149),
    [anon_sym_all] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_BANG] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(149),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(149),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(149),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(153),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(149),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(149),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(149),
    [anon_sym_icmp_DOTtype] = ACTIONS(149),
    [anon_sym_icmp_DOTcode] = ACTIONS(149),
    [anon_sym_ip_DOThdr_len] = ACTIONS(149),
    [anon_sym_ip_DOTlen] = ACTIONS(149),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(149),
    [anon_sym_ip_DOTttl] = ACTIONS(149),
    [anon_sym_tcp_DOTflags] = ACTIONS(153),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(149),
    [anon_sym_tcp_DOTdstport] = ACTIONS(149),
    [anon_sym_udp_DOTdstport] = ACTIONS(149),
    [anon_sym_udp_DOTsrcport] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc] = ACTIONS(153),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(149),
    [anon_sym_ip_DOTdst] = ACTIONS(153),
    [anon_sym_http_DOTcookie] = ACTIONS(149),
    [anon_sym_http_DOThost] = ACTIONS(149),
    [anon_sym_http_DOTreferer] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(149),
    [anon_sym_http_DOTuser_agent] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(149),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(153),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(153),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(149),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(149),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(149),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(149),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(149),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(149),
    [anon_sym_icmp] = ACTIONS(153),
    [anon_sym_ip] = ACTIONS(153),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(149),
    [anon_sym_tcp] = ACTIONS(153),
    [anon_sym_udp] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(149),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(153),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(153),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(153),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(149),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(149),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(149),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(149),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(149),
    [anon_sym_ssl] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(149),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(149),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(149),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(149),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(149),
    [anon_sym_sip] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(149),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(149),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(149),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_and] = ACTIONS(173),
    [anon_sym_xor] = ACTIONS(173),
    [anon_sym_CARET_CARET] = ACTIONS(173),
    [anon_sym_or] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_lookup_json_string] = ACTIONS(173),
    [anon_sym_lower] = ACTIONS(173),
    [anon_sym_regex_replace] = ACTIONS(173),
    [anon_sym_remove_bytes] = ACTIONS(173),
    [anon_sym_to_string] = ACTIONS(173),
    [anon_sym_upper] = ACTIONS(173),
    [anon_sym_url_decode] = ACTIONS(173),
    [anon_sym_uuidv4] = ACTIONS(173),
    [anon_sym_len] = ACTIONS(173),
    [anon_sym_ends_with] = ACTIONS(173),
    [anon_sym_starts_with] = ACTIONS(173),
    [anon_sym_any] = ACTIONS(173),
    [anon_sym_all] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_not] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(173),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(173),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(173),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(173),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(173),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(175),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(173),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(173),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(173),
    [anon_sym_icmp_DOTtype] = ACTIONS(173),
    [anon_sym_icmp_DOTcode] = ACTIONS(173),
    [anon_sym_ip_DOThdr_len] = ACTIONS(173),
    [anon_sym_ip_DOTlen] = ACTIONS(173),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(173),
    [anon_sym_ip_DOTttl] = ACTIONS(173),
    [anon_sym_tcp_DOTflags] = ACTIONS(175),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(173),
    [anon_sym_tcp_DOTdstport] = ACTIONS(173),
    [anon_sym_udp_DOTdstport] = ACTIONS(173),
    [anon_sym_udp_DOTsrcport] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(173),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(173),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(173),
    [anon_sym_ip_DOTsrc] = ACTIONS(175),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(173),
    [anon_sym_ip_DOTdst] = ACTIONS(175),
    [anon_sym_http_DOTcookie] = ACTIONS(173),
    [anon_sym_http_DOThost] = ACTIONS(173),
    [anon_sym_http_DOTreferer] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(175),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(175),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(173),
    [anon_sym_http_DOTuser_agent] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(173),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(175),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(173),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(173),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(173),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(173),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(173),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(173),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(175),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(173),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(173),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(173),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(173),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(173),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(173),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(173),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(173),
    [anon_sym_icmp] = ACTIONS(175),
    [anon_sym_ip] = ACTIONS(175),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(173),
    [anon_sym_tcp] = ACTIONS(175),
    [anon_sym_udp] = ACTIONS(175),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(173),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(175),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(175),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(175),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(175),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(175),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(173),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(173),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(173),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(173),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(173),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(173),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(173),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(173),
    [anon_sym_ssl] = ACTIONS(173),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(173),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(173),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(173),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(173),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(173),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(173),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(173),
    [anon_sym_sip] = ACTIONS(173),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(173),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(173),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(173),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(173),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(173),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(173),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(173),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(173),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(173),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_and] = ACTIONS(177),
    [anon_sym_xor] = ACTIONS(177),
    [anon_sym_CARET_CARET] = ACTIONS(177),
    [anon_sym_or] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_lookup_json_string] = ACTIONS(177),
    [anon_sym_lower] = ACTIONS(177),
    [anon_sym_regex_replace] = ACTIONS(177),
    [anon_sym_remove_bytes] = ACTIONS(177),
    [anon_sym_to_string] = ACTIONS(177),
    [anon_sym_upper] = ACTIONS(177),
    [anon_sym_url_decode] = ACTIONS(177),
    [anon_sym_uuidv4] = ACTIONS(177),
    [anon_sym_len] = ACTIONS(177),
    [anon_sym_ends_with] = ACTIONS(177),
    [anon_sym_starts_with] = ACTIONS(177),
    [anon_sym_any] = ACTIONS(177),
    [anon_sym_all] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(177),
    [anon_sym_false] = ACTIONS(177),
    [anon_sym_not] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(177),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(177),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(177),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(177),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(177),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(179),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(177),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(177),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(177),
    [anon_sym_icmp_DOTtype] = ACTIONS(177),
    [anon_sym_icmp_DOTcode] = ACTIONS(177),
    [anon_sym_ip_DOThdr_len] = ACTIONS(177),
    [anon_sym_ip_DOTlen] = ACTIONS(177),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(177),
    [anon_sym_ip_DOTttl] = ACTIONS(177),
    [anon_sym_tcp_DOTflags] = ACTIONS(179),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(177),
    [anon_sym_tcp_DOTdstport] = ACTIONS(177),
    [anon_sym_udp_DOTdstport] = ACTIONS(177),
    [anon_sym_udp_DOTsrcport] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(177),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(177),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(177),
    [anon_sym_ip_DOTsrc] = ACTIONS(179),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(177),
    [anon_sym_ip_DOTdst] = ACTIONS(179),
    [anon_sym_http_DOTcookie] = ACTIONS(177),
    [anon_sym_http_DOThost] = ACTIONS(177),
    [anon_sym_http_DOTreferer] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(179),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(179),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(177),
    [anon_sym_http_DOTuser_agent] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(177),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(179),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(177),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(177),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(177),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(177),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(177),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(177),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(179),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(177),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(177),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(177),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(177),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(177),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(177),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(177),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(177),
    [anon_sym_icmp] = ACTIONS(179),
    [anon_sym_ip] = ACTIONS(179),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(177),
    [anon_sym_tcp] = ACTIONS(179),
    [anon_sym_udp] = ACTIONS(179),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(177),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(179),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(179),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(179),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(179),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(179),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(177),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(177),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(177),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(177),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(177),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(177),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(177),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(177),
    [anon_sym_ssl] = ACTIONS(177),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(177),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(177),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(177),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(177),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(177),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(177),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(177),
    [anon_sym_sip] = ACTIONS(177),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(177),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(177),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(177),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(177),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(177),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(177),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(177),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(177),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(177),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_and] = ACTIONS(181),
    [anon_sym_xor] = ACTIONS(181),
    [anon_sym_CARET_CARET] = ACTIONS(181),
    [anon_sym_or] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_lookup_json_string] = ACTIONS(181),
    [anon_sym_lower] = ACTIONS(181),
    [anon_sym_regex_replace] = ACTIONS(181),
    [anon_sym_remove_bytes] = ACTIONS(181),
    [anon_sym_to_string] = ACTIONS(181),
    [anon_sym_upper] = ACTIONS(181),
    [anon_sym_url_decode] = ACTIONS(181),
    [anon_sym_uuidv4] = ACTIONS(181),
    [anon_sym_len] = ACTIONS(181),
    [anon_sym_ends_with] = ACTIONS(181),
    [anon_sym_starts_with] = ACTIONS(181),
    [anon_sym_any] = ACTIONS(181),
    [anon_sym_all] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(181),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(181),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(181),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(181),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(181),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(183),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(181),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(181),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(181),
    [anon_sym_icmp_DOTtype] = ACTIONS(181),
    [anon_sym_icmp_DOTcode] = ACTIONS(181),
    [anon_sym_ip_DOThdr_len] = ACTIONS(181),
    [anon_sym_ip_DOTlen] = ACTIONS(181),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(181),
    [anon_sym_ip_DOTttl] = ACTIONS(181),
    [anon_sym_tcp_DOTflags] = ACTIONS(183),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(181),
    [anon_sym_tcp_DOTdstport] = ACTIONS(181),
    [anon_sym_udp_DOTdstport] = ACTIONS(181),
    [anon_sym_udp_DOTsrcport] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(181),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(181),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(181),
    [anon_sym_ip_DOTsrc] = ACTIONS(183),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(181),
    [anon_sym_ip_DOTdst] = ACTIONS(183),
    [anon_sym_http_DOTcookie] = ACTIONS(181),
    [anon_sym_http_DOThost] = ACTIONS(181),
    [anon_sym_http_DOTreferer] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(183),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(183),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(181),
    [anon_sym_http_DOTuser_agent] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(181),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(183),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(181),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(181),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(181),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(181),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(181),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(181),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(183),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(181),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(181),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(181),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(181),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(181),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(181),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(181),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(181),
    [anon_sym_icmp] = ACTIONS(183),
    [anon_sym_ip] = ACTIONS(183),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(181),
    [anon_sym_tcp] = ACTIONS(183),
    [anon_sym_udp] = ACTIONS(183),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(181),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(183),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(183),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(183),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(183),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(183),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(181),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(181),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(181),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(181),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(181),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(181),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(181),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(181),
    [anon_sym_ssl] = ACTIONS(181),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(181),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(181),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(181),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(181),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(181),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(181),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(181),
    [anon_sym_sip] = ACTIONS(181),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(181),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(181),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(181),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(181),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(181),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(181),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(181),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(181),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(181),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_and] = ACTIONS(185),
    [anon_sym_xor] = ACTIONS(185),
    [anon_sym_CARET_CARET] = ACTIONS(185),
    [anon_sym_or] = ACTIONS(185),
    [anon_sym_PIPE_PIPE] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_lookup_json_string] = ACTIONS(185),
    [anon_sym_lower] = ACTIONS(185),
    [anon_sym_regex_replace] = ACTIONS(185),
    [anon_sym_remove_bytes] = ACTIONS(185),
    [anon_sym_to_string] = ACTIONS(185),
    [anon_sym_upper] = ACTIONS(185),
    [anon_sym_url_decode] = ACTIONS(185),
    [anon_sym_uuidv4] = ACTIONS(185),
    [anon_sym_len] = ACTIONS(185),
    [anon_sym_ends_with] = ACTIONS(185),
    [anon_sym_starts_with] = ACTIONS(185),
    [anon_sym_any] = ACTIONS(185),
    [anon_sym_all] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(185),
    [anon_sym_not] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(185),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(185),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(185),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(185),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(185),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(187),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(185),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(185),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(185),
    [anon_sym_icmp_DOTtype] = ACTIONS(185),
    [anon_sym_icmp_DOTcode] = ACTIONS(185),
    [anon_sym_ip_DOThdr_len] = ACTIONS(185),
    [anon_sym_ip_DOTlen] = ACTIONS(185),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(185),
    [anon_sym_ip_DOTttl] = ACTIONS(185),
    [anon_sym_tcp_DOTflags] = ACTIONS(187),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(185),
    [anon_sym_tcp_DOTdstport] = ACTIONS(185),
    [anon_sym_udp_DOTdstport] = ACTIONS(185),
    [anon_sym_udp_DOTsrcport] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(185),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(185),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(185),
    [anon_sym_ip_DOTsrc] = ACTIONS(187),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(185),
    [anon_sym_ip_DOTdst] = ACTIONS(187),
    [anon_sym_http_DOTcookie] = ACTIONS(185),
    [anon_sym_http_DOThost] = ACTIONS(185),
    [anon_sym_http_DOTreferer] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(187),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(187),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(185),
    [anon_sym_http_DOTuser_agent] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(185),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(187),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(185),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(185),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(185),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(185),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(185),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(185),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(187),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(185),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(185),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(185),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(185),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(185),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(185),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(185),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(185),
    [anon_sym_icmp] = ACTIONS(187),
    [anon_sym_ip] = ACTIONS(187),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(185),
    [anon_sym_tcp] = ACTIONS(187),
    [anon_sym_udp] = ACTIONS(187),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(185),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(187),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(187),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(187),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(187),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(187),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(185),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(185),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(185),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(185),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(185),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(185),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(185),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(185),
    [anon_sym_ssl] = ACTIONS(185),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(185),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(185),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(185),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(185),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(185),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(185),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(185),
    [anon_sym_sip] = ACTIONS(185),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(185),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(185),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(185),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(185),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(185),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(185),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(185),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(185),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(185),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(189),
    [anon_sym_xor] = ACTIONS(189),
    [anon_sym_CARET_CARET] = ACTIONS(189),
    [anon_sym_or] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_lookup_json_string] = ACTIONS(189),
    [anon_sym_lower] = ACTIONS(189),
    [anon_sym_regex_replace] = ACTIONS(189),
    [anon_sym_remove_bytes] = ACTIONS(189),
    [anon_sym_to_string] = ACTIONS(189),
    [anon_sym_upper] = ACTIONS(189),
    [anon_sym_url_decode] = ACTIONS(189),
    [anon_sym_uuidv4] = ACTIONS(189),
    [anon_sym_len] = ACTIONS(189),
    [anon_sym_ends_with] = ACTIONS(189),
    [anon_sym_starts_with] = ACTIONS(189),
    [anon_sym_any] = ACTIONS(189),
    [anon_sym_all] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(189),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_not] = ACTIONS(189),
    [anon_sym_BANG] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(189),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(189),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(189),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(189),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(189),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(191),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(189),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(189),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(189),
    [anon_sym_icmp_DOTtype] = ACTIONS(189),
    [anon_sym_icmp_DOTcode] = ACTIONS(189),
    [anon_sym_ip_DOThdr_len] = ACTIONS(189),
    [anon_sym_ip_DOTlen] = ACTIONS(189),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(189),
    [anon_sym_ip_DOTttl] = ACTIONS(189),
    [anon_sym_tcp_DOTflags] = ACTIONS(191),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(189),
    [anon_sym_tcp_DOTdstport] = ACTIONS(189),
    [anon_sym_udp_DOTdstport] = ACTIONS(189),
    [anon_sym_udp_DOTsrcport] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(189),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(189),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(189),
    [anon_sym_ip_DOTsrc] = ACTIONS(191),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(189),
    [anon_sym_ip_DOTdst] = ACTIONS(191),
    [anon_sym_http_DOTcookie] = ACTIONS(189),
    [anon_sym_http_DOThost] = ACTIONS(189),
    [anon_sym_http_DOTreferer] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(191),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(191),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(189),
    [anon_sym_http_DOTuser_agent] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(189),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(191),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(189),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(189),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(189),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(189),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(189),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(189),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(191),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(189),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(189),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(189),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(189),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(189),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(189),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(189),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(189),
    [anon_sym_icmp] = ACTIONS(191),
    [anon_sym_ip] = ACTIONS(191),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(189),
    [anon_sym_tcp] = ACTIONS(191),
    [anon_sym_udp] = ACTIONS(191),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(189),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(191),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(191),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(191),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(191),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(191),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(189),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(189),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(189),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(189),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(189),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(189),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(189),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(189),
    [anon_sym_ssl] = ACTIONS(189),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(189),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(189),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(189),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(189),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(189),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(189),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(189),
    [anon_sym_sip] = ACTIONS(189),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(189),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(189),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(189),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(189),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(189),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(189),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(189),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(189),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(189),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_and] = ACTIONS(193),
    [anon_sym_xor] = ACTIONS(193),
    [anon_sym_CARET_CARET] = ACTIONS(193),
    [anon_sym_or] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_lookup_json_string] = ACTIONS(193),
    [anon_sym_lower] = ACTIONS(193),
    [anon_sym_regex_replace] = ACTIONS(193),
    [anon_sym_remove_bytes] = ACTIONS(193),
    [anon_sym_to_string] = ACTIONS(193),
    [anon_sym_upper] = ACTIONS(193),
    [anon_sym_url_decode] = ACTIONS(193),
    [anon_sym_uuidv4] = ACTIONS(193),
    [anon_sym_len] = ACTIONS(193),
    [anon_sym_ends_with] = ACTIONS(193),
    [anon_sym_starts_with] = ACTIONS(193),
    [anon_sym_any] = ACTIONS(193),
    [anon_sym_all] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(193),
    [anon_sym_not] = ACTIONS(193),
    [anon_sym_BANG] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(193),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(193),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(193),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(193),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(193),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(195),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(193),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(193),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(193),
    [anon_sym_icmp_DOTtype] = ACTIONS(193),
    [anon_sym_icmp_DOTcode] = ACTIONS(193),
    [anon_sym_ip_DOThdr_len] = ACTIONS(193),
    [anon_sym_ip_DOTlen] = ACTIONS(193),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(193),
    [anon_sym_ip_DOTttl] = ACTIONS(193),
    [anon_sym_tcp_DOTflags] = ACTIONS(195),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(193),
    [anon_sym_tcp_DOTdstport] = ACTIONS(193),
    [anon_sym_udp_DOTdstport] = ACTIONS(193),
    [anon_sym_udp_DOTsrcport] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(193),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(193),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(193),
    [anon_sym_ip_DOTsrc] = ACTIONS(195),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(193),
    [anon_sym_ip_DOTdst] = ACTIONS(195),
    [anon_sym_http_DOTcookie] = ACTIONS(193),
    [anon_sym_http_DOThost] = ACTIONS(193),
    [anon_sym_http_DOTreferer] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(195),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(195),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(193),
    [anon_sym_http_DOTuser_agent] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(193),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(195),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(193),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(193),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(193),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(193),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(193),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(193),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(195),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(193),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(193),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(193),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(193),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(193),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(193),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(193),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(193),
    [anon_sym_icmp] = ACTIONS(195),
    [anon_sym_ip] = ACTIONS(195),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(193),
    [anon_sym_tcp] = ACTIONS(195),
    [anon_sym_udp] = ACTIONS(195),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(193),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(195),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(195),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(195),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(195),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(195),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(193),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(193),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(193),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(193),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(193),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(193),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(193),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(193),
    [anon_sym_ssl] = ACTIONS(193),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(193),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(193),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(193),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(193),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(193),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(193),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(193),
    [anon_sym_sip] = ACTIONS(193),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(193),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(193),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(193),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(193),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(193),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(193),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(193),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(193),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(193),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_and] = ACTIONS(197),
    [anon_sym_xor] = ACTIONS(197),
    [anon_sym_CARET_CARET] = ACTIONS(197),
    [anon_sym_or] = ACTIONS(197),
    [anon_sym_PIPE_PIPE] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_lookup_json_string] = ACTIONS(197),
    [anon_sym_lower] = ACTIONS(197),
    [anon_sym_regex_replace] = ACTIONS(197),
    [anon_sym_remove_bytes] = ACTIONS(197),
    [anon_sym_to_string] = ACTIONS(197),
    [anon_sym_upper] = ACTIONS(197),
    [anon_sym_url_decode] = ACTIONS(197),
    [anon_sym_uuidv4] = ACTIONS(197),
    [anon_sym_len] = ACTIONS(197),
    [anon_sym_ends_with] = ACTIONS(197),
    [anon_sym_starts_with] = ACTIONS(197),
    [anon_sym_any] = ACTIONS(197),
    [anon_sym_all] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(197),
    [anon_sym_not] = ACTIONS(197),
    [anon_sym_BANG] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(197),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(197),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(197),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(197),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(197),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(199),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(197),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(197),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(197),
    [anon_sym_icmp_DOTtype] = ACTIONS(197),
    [anon_sym_icmp_DOTcode] = ACTIONS(197),
    [anon_sym_ip_DOThdr_len] = ACTIONS(197),
    [anon_sym_ip_DOTlen] = ACTIONS(197),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(197),
    [anon_sym_ip_DOTttl] = ACTIONS(197),
    [anon_sym_tcp_DOTflags] = ACTIONS(199),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(197),
    [anon_sym_tcp_DOTdstport] = ACTIONS(197),
    [anon_sym_udp_DOTdstport] = ACTIONS(197),
    [anon_sym_udp_DOTsrcport] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(197),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(197),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(197),
    [anon_sym_ip_DOTsrc] = ACTIONS(199),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(197),
    [anon_sym_ip_DOTdst] = ACTIONS(199),
    [anon_sym_http_DOTcookie] = ACTIONS(197),
    [anon_sym_http_DOThost] = ACTIONS(197),
    [anon_sym_http_DOTreferer] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(199),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(199),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(197),
    [anon_sym_http_DOTuser_agent] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(197),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(199),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(197),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(197),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(197),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(197),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(197),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(197),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(199),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(197),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(197),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(197),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(197),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(197),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(197),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(197),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(197),
    [anon_sym_icmp] = ACTIONS(199),
    [anon_sym_ip] = ACTIONS(199),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(197),
    [anon_sym_tcp] = ACTIONS(199),
    [anon_sym_udp] = ACTIONS(199),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(197),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(199),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(199),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(199),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(199),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(199),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(197),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(197),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(197),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(197),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(197),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(197),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(197),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(197),
    [anon_sym_ssl] = ACTIONS(197),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(197),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(197),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(197),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(197),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(197),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(197),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(197),
    [anon_sym_sip] = ACTIONS(197),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(197),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(197),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(197),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(197),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(197),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(197),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(197),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(197),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(197),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_and] = ACTIONS(201),
    [anon_sym_xor] = ACTIONS(201),
    [anon_sym_CARET_CARET] = ACTIONS(201),
    [anon_sym_or] = ACTIONS(201),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_lookup_json_string] = ACTIONS(201),
    [anon_sym_lower] = ACTIONS(201),
    [anon_sym_regex_replace] = ACTIONS(201),
    [anon_sym_remove_bytes] = ACTIONS(201),
    [anon_sym_to_string] = ACTIONS(201),
    [anon_sym_upper] = ACTIONS(201),
    [anon_sym_url_decode] = ACTIONS(201),
    [anon_sym_uuidv4] = ACTIONS(201),
    [anon_sym_len] = ACTIONS(201),
    [anon_sym_ends_with] = ACTIONS(201),
    [anon_sym_starts_with] = ACTIONS(201),
    [anon_sym_any] = ACTIONS(201),
    [anon_sym_all] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(201),
    [anon_sym_not] = ACTIONS(201),
    [anon_sym_BANG] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(201),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(201),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(201),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(201),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(201),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(203),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(201),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(201),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(201),
    [anon_sym_icmp_DOTtype] = ACTIONS(201),
    [anon_sym_icmp_DOTcode] = ACTIONS(201),
    [anon_sym_ip_DOThdr_len] = ACTIONS(201),
    [anon_sym_ip_DOTlen] = ACTIONS(201),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(201),
    [anon_sym_ip_DOTttl] = ACTIONS(201),
    [anon_sym_tcp_DOTflags] = ACTIONS(203),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(201),
    [anon_sym_tcp_DOTdstport] = ACTIONS(201),
    [anon_sym_udp_DOTdstport] = ACTIONS(201),
    [anon_sym_udp_DOTsrcport] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(201),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(201),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(201),
    [anon_sym_ip_DOTsrc] = ACTIONS(203),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(201),
    [anon_sym_ip_DOTdst] = ACTIONS(203),
    [anon_sym_http_DOTcookie] = ACTIONS(201),
    [anon_sym_http_DOThost] = ACTIONS(201),
    [anon_sym_http_DOTreferer] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(203),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(203),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(201),
    [anon_sym_http_DOTuser_agent] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(201),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(203),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(201),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(201),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(201),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(201),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(201),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(201),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(203),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(201),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(201),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(201),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(201),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(201),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(201),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(201),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(201),
    [anon_sym_icmp] = ACTIONS(203),
    [anon_sym_ip] = ACTIONS(203),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(201),
    [anon_sym_tcp] = ACTIONS(203),
    [anon_sym_udp] = ACTIONS(203),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(201),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(203),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(203),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(203),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(203),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(203),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(201),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(201),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(201),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(201),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(201),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(201),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(201),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(201),
    [anon_sym_ssl] = ACTIONS(201),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(201),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(201),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(201),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(201),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(201),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(201),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(201),
    [anon_sym_sip] = ACTIONS(201),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(201),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(201),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(201),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(201),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(201),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(201),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(201),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(201),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(201),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_and] = ACTIONS(205),
    [anon_sym_xor] = ACTIONS(205),
    [anon_sym_CARET_CARET] = ACTIONS(205),
    [anon_sym_or] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_lookup_json_string] = ACTIONS(205),
    [anon_sym_lower] = ACTIONS(205),
    [anon_sym_regex_replace] = ACTIONS(205),
    [anon_sym_remove_bytes] = ACTIONS(205),
    [anon_sym_to_string] = ACTIONS(205),
    [anon_sym_upper] = ACTIONS(205),
    [anon_sym_url_decode] = ACTIONS(205),
    [anon_sym_uuidv4] = ACTIONS(205),
    [anon_sym_len] = ACTIONS(205),
    [anon_sym_ends_with] = ACTIONS(205),
    [anon_sym_starts_with] = ACTIONS(205),
    [anon_sym_any] = ACTIONS(205),
    [anon_sym_all] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_not] = ACTIONS(205),
    [anon_sym_BANG] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(205),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(205),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(205),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(205),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(205),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(207),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(205),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(205),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(205),
    [anon_sym_icmp_DOTtype] = ACTIONS(205),
    [anon_sym_icmp_DOTcode] = ACTIONS(205),
    [anon_sym_ip_DOThdr_len] = ACTIONS(205),
    [anon_sym_ip_DOTlen] = ACTIONS(205),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(205),
    [anon_sym_ip_DOTttl] = ACTIONS(205),
    [anon_sym_tcp_DOTflags] = ACTIONS(207),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(205),
    [anon_sym_tcp_DOTdstport] = ACTIONS(205),
    [anon_sym_udp_DOTdstport] = ACTIONS(205),
    [anon_sym_udp_DOTsrcport] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(205),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(205),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(205),
    [anon_sym_ip_DOTsrc] = ACTIONS(207),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(205),
    [anon_sym_ip_DOTdst] = ACTIONS(207),
    [anon_sym_http_DOTcookie] = ACTIONS(205),
    [anon_sym_http_DOThost] = ACTIONS(205),
    [anon_sym_http_DOTreferer] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(207),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(207),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(205),
    [anon_sym_http_DOTuser_agent] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(205),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(207),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(205),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(205),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(205),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(205),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(205),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(205),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(207),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(205),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(205),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(205),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(205),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(205),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(205),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(205),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(205),
    [anon_sym_icmp] = ACTIONS(207),
    [anon_sym_ip] = ACTIONS(207),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(205),
    [anon_sym_tcp] = ACTIONS(207),
    [anon_sym_udp] = ACTIONS(207),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(205),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(207),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(207),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(207),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(207),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(207),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(205),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(205),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(205),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(205),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(205),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(205),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(205),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(205),
    [anon_sym_ssl] = ACTIONS(205),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(205),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(205),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(205),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(205),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(205),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(205),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(205),
    [anon_sym_sip] = ACTIONS(205),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(205),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(205),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(205),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(205),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(205),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(205),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(205),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(205),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(205),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(151),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_xor] = ACTIONS(171),
    [anon_sym_CARET_CARET] = ACTIONS(171),
    [anon_sym_or] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_lookup_json_string] = ACTIONS(209),
    [anon_sym_lower] = ACTIONS(209),
    [anon_sym_regex_replace] = ACTIONS(209),
    [anon_sym_remove_bytes] = ACTIONS(209),
    [anon_sym_to_string] = ACTIONS(209),
    [anon_sym_upper] = ACTIONS(209),
    [anon_sym_url_decode] = ACTIONS(209),
    [anon_sym_uuidv4] = ACTIONS(209),
    [anon_sym_len] = ACTIONS(209),
    [anon_sym_ends_with] = ACTIONS(209),
    [anon_sym_starts_with] = ACTIONS(209),
    [anon_sym_any] = ACTIONS(209),
    [anon_sym_all] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(209),
    [anon_sym_not] = ACTIONS(209),
    [anon_sym_BANG] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(209),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(209),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(209),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(209),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(209),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(213),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(209),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(209),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(209),
    [anon_sym_icmp_DOTtype] = ACTIONS(209),
    [anon_sym_icmp_DOTcode] = ACTIONS(209),
    [anon_sym_ip_DOThdr_len] = ACTIONS(209),
    [anon_sym_ip_DOTlen] = ACTIONS(209),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(209),
    [anon_sym_ip_DOTttl] = ACTIONS(209),
    [anon_sym_tcp_DOTflags] = ACTIONS(213),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(209),
    [anon_sym_tcp_DOTdstport] = ACTIONS(209),
    [anon_sym_udp_DOTdstport] = ACTIONS(209),
    [anon_sym_udp_DOTsrcport] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(209),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(209),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(209),
    [anon_sym_ip_DOTsrc] = ACTIONS(213),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(209),
    [anon_sym_ip_DOTdst] = ACTIONS(213),
    [anon_sym_http_DOTcookie] = ACTIONS(209),
    [anon_sym_http_DOThost] = ACTIONS(209),
    [anon_sym_http_DOTreferer] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(213),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(213),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(209),
    [anon_sym_http_DOTuser_agent] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(209),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(213),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(209),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(209),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(209),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(209),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(209),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(209),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(213),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(209),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(209),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(209),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(209),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(209),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(209),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(209),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(209),
    [anon_sym_icmp] = ACTIONS(213),
    [anon_sym_ip] = ACTIONS(213),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(209),
    [anon_sym_tcp] = ACTIONS(213),
    [anon_sym_udp] = ACTIONS(213),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(209),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(213),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(213),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(213),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(213),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(213),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(209),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(209),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(209),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(209),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(209),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(209),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(209),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(209),
    [anon_sym_ssl] = ACTIONS(209),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(209),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(209),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(209),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(209),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(209),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(209),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(209),
    [anon_sym_sip] = ACTIONS(209),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(209),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(209),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(209),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(209),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(209),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(209),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(209),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(209),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(209),
  },
  [30] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_lookup_json_string] = ACTIONS(215),
    [anon_sym_lower] = ACTIONS(215),
    [anon_sym_regex_replace] = ACTIONS(215),
    [anon_sym_remove_bytes] = ACTIONS(215),
    [anon_sym_to_string] = ACTIONS(215),
    [anon_sym_upper] = ACTIONS(215),
    [anon_sym_url_decode] = ACTIONS(215),
    [anon_sym_uuidv4] = ACTIONS(215),
    [anon_sym_len] = ACTIONS(215),
    [anon_sym_ends_with] = ACTIONS(215),
    [anon_sym_starts_with] = ACTIONS(215),
    [anon_sym_any] = ACTIONS(215),
    [anon_sym_all] = ACTIONS(215),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [anon_sym_not] = ACTIONS(215),
    [anon_sym_BANG] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(215),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(215),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(215),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(215),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(215),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(217),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(215),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(215),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(215),
    [anon_sym_icmp_DOTtype] = ACTIONS(215),
    [anon_sym_icmp_DOTcode] = ACTIONS(215),
    [anon_sym_ip_DOThdr_len] = ACTIONS(215),
    [anon_sym_ip_DOTlen] = ACTIONS(215),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(215),
    [anon_sym_ip_DOTttl] = ACTIONS(215),
    [anon_sym_tcp_DOTflags] = ACTIONS(217),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(215),
    [anon_sym_tcp_DOTdstport] = ACTIONS(215),
    [anon_sym_udp_DOTdstport] = ACTIONS(215),
    [anon_sym_udp_DOTsrcport] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(215),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(215),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(215),
    [anon_sym_ip_DOTsrc] = ACTIONS(217),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(215),
    [anon_sym_ip_DOTdst] = ACTIONS(217),
    [anon_sym_http_DOTcookie] = ACTIONS(215),
    [anon_sym_http_DOThost] = ACTIONS(215),
    [anon_sym_http_DOTreferer] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(217),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(217),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(215),
    [anon_sym_http_DOTuser_agent] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(215),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(217),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(215),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(215),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(215),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(215),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(215),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(215),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(217),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(215),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(215),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(215),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(215),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(215),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(215),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(215),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(215),
    [anon_sym_icmp] = ACTIONS(217),
    [anon_sym_ip] = ACTIONS(217),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(215),
    [anon_sym_tcp] = ACTIONS(217),
    [anon_sym_udp] = ACTIONS(217),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(215),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(217),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(217),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(217),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(217),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(217),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(215),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(215),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(215),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(215),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(215),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(215),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(215),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(215),
    [anon_sym_ssl] = ACTIONS(215),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(215),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(215),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(215),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(215),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(215),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(215),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(215),
    [anon_sym_sip] = ACTIONS(215),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(215),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(215),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(215),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(215),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(215),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(215),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(215),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(215),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(215),
  },
  [31] = {
    [anon_sym_in] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_eq] = ACTIONS(219),
    [anon_sym_ne] = ACTIONS(219),
    [anon_sym_lt] = ACTIONS(219),
    [anon_sym_le] = ACTIONS(219),
    [anon_sym_gt] = ACTIONS(219),
    [anon_sym_ge] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_GT_EQ] = ACTIONS(219),
    [anon_sym_contains] = ACTIONS(219),
    [anon_sym_matches] = ACTIONS(219),
    [anon_sym_strictwildcard] = ACTIONS(219),
    [anon_sym_wildcard] = ACTIONS(219),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_concat] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_lookup_json_string] = ACTIONS(219),
    [anon_sym_lower] = ACTIONS(219),
    [anon_sym_regex_replace] = ACTIONS(219),
    [anon_sym_remove_bytes] = ACTIONS(219),
    [anon_sym_to_string] = ACTIONS(219),
    [anon_sym_upper] = ACTIONS(219),
    [anon_sym_url_decode] = ACTIONS(219),
    [anon_sym_uuidv4] = ACTIONS(219),
    [sym_number] = ACTIONS(219),
    [sym_string] = ACTIONS(219),
    [anon_sym_http_DOTcookie] = ACTIONS(219),
    [anon_sym_http_DOThost] = ACTIONS(219),
    [anon_sym_http_DOTreferer] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(221),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(221),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(219),
    [anon_sym_http_DOTuser_agent] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(219),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(219),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(219),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(219),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(219),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(219),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(219),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(221),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(219),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(219),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(219),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(219),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(219),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(219),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(219),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(219),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(219),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(219),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(219),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(221),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(219),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(219),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(219),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(219),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(219),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(219),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(219),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(219),
    [anon_sym_icmp] = ACTIONS(219),
    [anon_sym_ip] = ACTIONS(221),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(219),
    [anon_sym_tcp] = ACTIONS(219),
    [anon_sym_udp] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(219),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(221),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(221),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(221),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(221),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(221),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(219),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(219),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(219),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(219),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(219),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(219),
  },
  [32] = {
    [anon_sym_in] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [anon_sym_eq] = ACTIONS(223),
    [anon_sym_ne] = ACTIONS(223),
    [anon_sym_lt] = ACTIONS(223),
    [anon_sym_le] = ACTIONS(223),
    [anon_sym_gt] = ACTIONS(223),
    [anon_sym_ge] = ACTIONS(223),
    [anon_sym_EQ_EQ] = ACTIONS(223),
    [anon_sym_BANG_EQ] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_LT_EQ] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(223),
    [anon_sym_contains] = ACTIONS(223),
    [anon_sym_matches] = ACTIONS(223),
    [anon_sym_strictwildcard] = ACTIONS(223),
    [anon_sym_wildcard] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(223),
    [anon_sym_concat] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_lookup_json_string] = ACTIONS(223),
    [anon_sym_lower] = ACTIONS(223),
    [anon_sym_regex_replace] = ACTIONS(223),
    [anon_sym_remove_bytes] = ACTIONS(223),
    [anon_sym_to_string] = ACTIONS(223),
    [anon_sym_upper] = ACTIONS(223),
    [anon_sym_url_decode] = ACTIONS(223),
    [anon_sym_uuidv4] = ACTIONS(223),
    [sym_number] = ACTIONS(223),
    [sym_string] = ACTIONS(223),
    [anon_sym_http_DOTcookie] = ACTIONS(223),
    [anon_sym_http_DOThost] = ACTIONS(223),
    [anon_sym_http_DOTreferer] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(225),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(225),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(223),
    [anon_sym_http_DOTuser_agent] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(223),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(223),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(223),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(223),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(223),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(223),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(223),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(225),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(223),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(223),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(223),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(223),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(223),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(223),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(223),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(223),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(223),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(223),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(223),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(225),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(223),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(223),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(223),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(223),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(223),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(223),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(223),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(223),
    [anon_sym_icmp] = ACTIONS(223),
    [anon_sym_ip] = ACTIONS(225),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(223),
    [anon_sym_tcp] = ACTIONS(223),
    [anon_sym_udp] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(223),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(225),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(225),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(225),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(225),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(225),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(223),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(223),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(223),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(223),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(223),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(223),
  },
  [33] = {
    [anon_sym_in] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [anon_sym_eq] = ACTIONS(227),
    [anon_sym_ne] = ACTIONS(227),
    [anon_sym_lt] = ACTIONS(227),
    [anon_sym_le] = ACTIONS(227),
    [anon_sym_gt] = ACTIONS(227),
    [anon_sym_ge] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(227),
    [anon_sym_contains] = ACTIONS(227),
    [anon_sym_matches] = ACTIONS(227),
    [anon_sym_strictwildcard] = ACTIONS(227),
    [anon_sym_wildcard] = ACTIONS(227),
    [anon_sym_TILDE] = ACTIONS(227),
    [anon_sym_concat] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_lookup_json_string] = ACTIONS(227),
    [anon_sym_lower] = ACTIONS(227),
    [anon_sym_regex_replace] = ACTIONS(227),
    [anon_sym_remove_bytes] = ACTIONS(227),
    [anon_sym_to_string] = ACTIONS(227),
    [anon_sym_upper] = ACTIONS(227),
    [anon_sym_url_decode] = ACTIONS(227),
    [anon_sym_uuidv4] = ACTIONS(227),
    [sym_number] = ACTIONS(227),
    [sym_string] = ACTIONS(227),
    [anon_sym_http_DOTcookie] = ACTIONS(227),
    [anon_sym_http_DOThost] = ACTIONS(227),
    [anon_sym_http_DOTreferer] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(229),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(229),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(227),
    [anon_sym_http_DOTuser_agent] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(227),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(227),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(227),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(227),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(227),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(227),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(227),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(229),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(227),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(227),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(227),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(227),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(227),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(227),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(227),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(227),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(227),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(227),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(227),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(229),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(227),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(227),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(227),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(227),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(227),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(227),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(227),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(227),
    [anon_sym_icmp] = ACTIONS(227),
    [anon_sym_ip] = ACTIONS(229),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(227),
    [anon_sym_tcp] = ACTIONS(227),
    [anon_sym_udp] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(227),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(229),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(229),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(229),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(229),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(229),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(227),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(227),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(227),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(227),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(227),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(227),
  },
  [34] = {
    [anon_sym_in] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [anon_sym_eq] = ACTIONS(231),
    [anon_sym_ne] = ACTIONS(231),
    [anon_sym_lt] = ACTIONS(231),
    [anon_sym_le] = ACTIONS(231),
    [anon_sym_gt] = ACTIONS(231),
    [anon_sym_ge] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_contains] = ACTIONS(231),
    [anon_sym_matches] = ACTIONS(231),
    [anon_sym_strictwildcard] = ACTIONS(231),
    [anon_sym_wildcard] = ACTIONS(231),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_concat] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_lookup_json_string] = ACTIONS(231),
    [anon_sym_lower] = ACTIONS(231),
    [anon_sym_regex_replace] = ACTIONS(231),
    [anon_sym_remove_bytes] = ACTIONS(231),
    [anon_sym_to_string] = ACTIONS(231),
    [anon_sym_upper] = ACTIONS(231),
    [anon_sym_url_decode] = ACTIONS(231),
    [anon_sym_uuidv4] = ACTIONS(231),
    [sym_number] = ACTIONS(231),
    [sym_string] = ACTIONS(231),
    [anon_sym_http_DOTcookie] = ACTIONS(231),
    [anon_sym_http_DOThost] = ACTIONS(231),
    [anon_sym_http_DOTreferer] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(233),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(233),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(231),
    [anon_sym_http_DOTuser_agent] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(231),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(231),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(231),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(231),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(231),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(231),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(231),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(233),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(231),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(231),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(231),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(231),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(231),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(231),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(231),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(231),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(231),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(231),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(231),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(233),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(231),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(231),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(231),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(231),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(231),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(231),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(231),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(231),
    [anon_sym_icmp] = ACTIONS(231),
    [anon_sym_ip] = ACTIONS(233),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(231),
    [anon_sym_tcp] = ACTIONS(231),
    [anon_sym_udp] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(231),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(233),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(233),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(233),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(233),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(233),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(231),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(231),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(231),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(231),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(231),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(231),
  },
  [35] = {
    [anon_sym_in] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [anon_sym_eq] = ACTIONS(235),
    [anon_sym_ne] = ACTIONS(235),
    [anon_sym_lt] = ACTIONS(235),
    [anon_sym_le] = ACTIONS(235),
    [anon_sym_gt] = ACTIONS(235),
    [anon_sym_ge] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_BANG_EQ] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_GT_EQ] = ACTIONS(235),
    [anon_sym_contains] = ACTIONS(235),
    [anon_sym_matches] = ACTIONS(235),
    [anon_sym_strictwildcard] = ACTIONS(235),
    [anon_sym_wildcard] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(235),
    [anon_sym_concat] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_lookup_json_string] = ACTIONS(235),
    [anon_sym_lower] = ACTIONS(235),
    [anon_sym_regex_replace] = ACTIONS(235),
    [anon_sym_remove_bytes] = ACTIONS(235),
    [anon_sym_to_string] = ACTIONS(235),
    [anon_sym_upper] = ACTIONS(235),
    [anon_sym_url_decode] = ACTIONS(235),
    [anon_sym_uuidv4] = ACTIONS(235),
    [sym_number] = ACTIONS(235),
    [sym_string] = ACTIONS(235),
    [anon_sym_http_DOTcookie] = ACTIONS(235),
    [anon_sym_http_DOThost] = ACTIONS(235),
    [anon_sym_http_DOTreferer] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(237),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(237),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(235),
    [anon_sym_http_DOTuser_agent] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(235),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(235),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(235),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(235),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(235),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(235),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(235),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(237),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(235),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(235),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(235),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(235),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(235),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(235),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(235),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(235),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(235),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(235),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(235),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(237),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(235),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(235),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(235),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(235),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(235),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(235),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(235),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(235),
    [anon_sym_icmp] = ACTIONS(235),
    [anon_sym_ip] = ACTIONS(237),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(235),
    [anon_sym_tcp] = ACTIONS(235),
    [anon_sym_udp] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(235),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(237),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(237),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(237),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(237),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(237),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(235),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(235),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(235),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(235),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(235),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(235),
  },
  [36] = {
    [anon_sym_in] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
    [anon_sym_eq] = ACTIONS(239),
    [anon_sym_ne] = ACTIONS(239),
    [anon_sym_lt] = ACTIONS(239),
    [anon_sym_le] = ACTIONS(239),
    [anon_sym_gt] = ACTIONS(239),
    [anon_sym_ge] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(239),
    [anon_sym_BANG_EQ] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_LT_EQ] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_GT_EQ] = ACTIONS(239),
    [anon_sym_contains] = ACTIONS(239),
    [anon_sym_matches] = ACTIONS(239),
    [anon_sym_strictwildcard] = ACTIONS(239),
    [anon_sym_wildcard] = ACTIONS(239),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_concat] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_lookup_json_string] = ACTIONS(239),
    [anon_sym_lower] = ACTIONS(239),
    [anon_sym_regex_replace] = ACTIONS(239),
    [anon_sym_remove_bytes] = ACTIONS(239),
    [anon_sym_to_string] = ACTIONS(239),
    [anon_sym_upper] = ACTIONS(239),
    [anon_sym_url_decode] = ACTIONS(239),
    [anon_sym_uuidv4] = ACTIONS(239),
    [sym_number] = ACTIONS(239),
    [sym_string] = ACTIONS(239),
    [anon_sym_http_DOTcookie] = ACTIONS(239),
    [anon_sym_http_DOThost] = ACTIONS(239),
    [anon_sym_http_DOTreferer] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(241),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(241),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(239),
    [anon_sym_http_DOTuser_agent] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(239),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(239),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(239),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(239),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(239),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(239),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(239),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(241),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(239),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(239),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(239),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(239),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(239),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(239),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(239),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(239),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(239),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(239),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(239),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(241),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(239),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(239),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(239),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(239),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(239),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(239),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(239),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(239),
    [anon_sym_icmp] = ACTIONS(239),
    [anon_sym_ip] = ACTIONS(241),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(239),
    [anon_sym_tcp] = ACTIONS(239),
    [anon_sym_udp] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(239),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(241),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(241),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(241),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(241),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(241),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(239),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(239),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(239),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(239),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(239),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(239),
  },
  [37] = {
    [anon_sym_in] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_eq] = ACTIONS(243),
    [anon_sym_ne] = ACTIONS(243),
    [anon_sym_lt] = ACTIONS(243),
    [anon_sym_le] = ACTIONS(243),
    [anon_sym_gt] = ACTIONS(243),
    [anon_sym_ge] = ACTIONS(243),
    [anon_sym_EQ_EQ] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_contains] = ACTIONS(243),
    [anon_sym_matches] = ACTIONS(243),
    [anon_sym_strictwildcard] = ACTIONS(243),
    [anon_sym_wildcard] = ACTIONS(243),
    [anon_sym_TILDE] = ACTIONS(243),
    [anon_sym_concat] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_lookup_json_string] = ACTIONS(243),
    [anon_sym_lower] = ACTIONS(243),
    [anon_sym_regex_replace] = ACTIONS(243),
    [anon_sym_remove_bytes] = ACTIONS(243),
    [anon_sym_to_string] = ACTIONS(243),
    [anon_sym_upper] = ACTIONS(243),
    [anon_sym_url_decode] = ACTIONS(243),
    [anon_sym_uuidv4] = ACTIONS(243),
    [sym_number] = ACTIONS(243),
    [sym_string] = ACTIONS(243),
    [anon_sym_http_DOTcookie] = ACTIONS(243),
    [anon_sym_http_DOThost] = ACTIONS(243),
    [anon_sym_http_DOTreferer] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(245),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(245),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(243),
    [anon_sym_http_DOTuser_agent] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(243),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(243),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(243),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(243),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(243),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(243),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(243),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(245),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(243),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(243),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(243),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(243),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(243),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(243),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(243),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(243),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(243),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(243),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(243),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(245),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(243),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(243),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(243),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(243),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(243),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(243),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(243),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(243),
    [anon_sym_icmp] = ACTIONS(243),
    [anon_sym_ip] = ACTIONS(245),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(243),
    [anon_sym_tcp] = ACTIONS(243),
    [anon_sym_udp] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(243),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(245),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(245),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(245),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(245),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(245),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(243),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(243),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(243),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(243),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(243),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(243),
  },
  [38] = {
    [anon_sym_in] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [anon_sym_eq] = ACTIONS(247),
    [anon_sym_ne] = ACTIONS(247),
    [anon_sym_lt] = ACTIONS(247),
    [anon_sym_le] = ACTIONS(247),
    [anon_sym_gt] = ACTIONS(247),
    [anon_sym_ge] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(247),
    [anon_sym_contains] = ACTIONS(247),
    [anon_sym_matches] = ACTIONS(247),
    [anon_sym_strictwildcard] = ACTIONS(247),
    [anon_sym_wildcard] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(247),
    [anon_sym_concat] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_lookup_json_string] = ACTIONS(247),
    [anon_sym_lower] = ACTIONS(247),
    [anon_sym_regex_replace] = ACTIONS(247),
    [anon_sym_remove_bytes] = ACTIONS(247),
    [anon_sym_to_string] = ACTIONS(247),
    [anon_sym_upper] = ACTIONS(247),
    [anon_sym_url_decode] = ACTIONS(247),
    [anon_sym_uuidv4] = ACTIONS(247),
    [sym_number] = ACTIONS(247),
    [sym_string] = ACTIONS(247),
    [anon_sym_http_DOTcookie] = ACTIONS(247),
    [anon_sym_http_DOThost] = ACTIONS(247),
    [anon_sym_http_DOTreferer] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(249),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(249),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(247),
    [anon_sym_http_DOTuser_agent] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(247),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(247),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(247),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(247),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(247),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(247),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(247),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(249),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(247),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(247),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(247),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(247),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(247),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(247),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(247),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(247),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(247),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(247),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(247),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(249),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(247),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(247),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(247),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(247),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(247),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(247),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(247),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(247),
    [anon_sym_icmp] = ACTIONS(247),
    [anon_sym_ip] = ACTIONS(249),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(247),
    [anon_sym_tcp] = ACTIONS(247),
    [anon_sym_udp] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(247),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(249),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(249),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(249),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(249),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(249),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(247),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(247),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(247),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(247),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(247),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(247),
  },
  [39] = {
    [anon_sym_in] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [anon_sym_eq] = ACTIONS(251),
    [anon_sym_ne] = ACTIONS(251),
    [anon_sym_lt] = ACTIONS(251),
    [anon_sym_le] = ACTIONS(251),
    [anon_sym_gt] = ACTIONS(251),
    [anon_sym_ge] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(251),
    [anon_sym_BANG_EQ] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(251),
    [anon_sym_contains] = ACTIONS(251),
    [anon_sym_matches] = ACTIONS(251),
    [anon_sym_strictwildcard] = ACTIONS(251),
    [anon_sym_wildcard] = ACTIONS(251),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_concat] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_lookup_json_string] = ACTIONS(251),
    [anon_sym_lower] = ACTIONS(251),
    [anon_sym_regex_replace] = ACTIONS(251),
    [anon_sym_remove_bytes] = ACTIONS(251),
    [anon_sym_to_string] = ACTIONS(251),
    [anon_sym_upper] = ACTIONS(251),
    [anon_sym_url_decode] = ACTIONS(251),
    [anon_sym_uuidv4] = ACTIONS(251),
    [sym_number] = ACTIONS(251),
    [sym_string] = ACTIONS(251),
    [anon_sym_http_DOTcookie] = ACTIONS(251),
    [anon_sym_http_DOThost] = ACTIONS(251),
    [anon_sym_http_DOTreferer] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(253),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(253),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(251),
    [anon_sym_http_DOTuser_agent] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(251),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(251),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(251),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(251),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(251),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(251),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(251),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(253),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(251),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(251),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(251),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(251),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(251),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(251),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(251),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(251),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(251),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(251),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(251),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(253),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(251),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(251),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(251),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(251),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(251),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(251),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(251),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(251),
    [anon_sym_icmp] = ACTIONS(251),
    [anon_sym_ip] = ACTIONS(253),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(251),
    [anon_sym_tcp] = ACTIONS(251),
    [anon_sym_udp] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(251),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(253),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(253),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(253),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(253),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(253),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(251),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(251),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(251),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(251),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(251),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(251),
  },
  [40] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(147),
    [sym_stringlike_field] = STATE(62),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [aux_sym_string_func_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [sym_string] = ACTIONS(257),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
  },
  [41] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(238),
    [sym_stringlike_field] = STATE(173),
    [sym_string_field] = STATE(31),
    [sym_bytes_field] = STATE(173),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_cf_DOTrandom_seed] = ACTIONS(273),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [42] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(251),
    [sym_stringlike_field] = STATE(173),
    [sym_string_field] = STATE(31),
    [sym_bytes_field] = STATE(173),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_cf_DOTrandom_seed] = ACTIONS(273),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [43] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(147),
    [sym_stringlike_field] = STATE(62),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [aux_sym_string_func_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [sym_string] = ACTIONS(257),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
  },
  [44] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(147),
    [sym_stringlike_field] = STATE(62),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [aux_sym_string_func_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [sym_string] = ACTIONS(257),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
  },
  [45] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(157),
    [sym_stringlike_field] = STATE(176),
    [sym_string_field] = STATE(31),
    [sym_bytes_field] = STATE(176),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_cf_DOTrandom_seed] = ACTIONS(273),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [46] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(147),
    [sym_stringlike_field] = STATE(62),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [aux_sym_string_func_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_lookup_json_string] = ACTIONS(286),
    [anon_sym_lower] = ACTIONS(289),
    [anon_sym_regex_replace] = ACTIONS(292),
    [anon_sym_remove_bytes] = ACTIONS(295),
    [anon_sym_to_string] = ACTIONS(298),
    [anon_sym_upper] = ACTIONS(289),
    [anon_sym_url_decode] = ACTIONS(289),
    [anon_sym_uuidv4] = ACTIONS(301),
    [sym_string] = ACTIONS(304),
    [anon_sym_http_DOTcookie] = ACTIONS(307),
    [anon_sym_http_DOThost] = ACTIONS(307),
    [anon_sym_http_DOTreferer] = ACTIONS(307),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(307),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(307),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(310),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(310),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(307),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(307),
    [anon_sym_http_DOTuser_agent] = ACTIONS(307),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(307),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(307),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(307),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(307),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(307),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(307),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(307),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(310),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(307),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(307),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(307),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(307),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(307),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(307),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(307),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(307),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(307),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(307),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(307),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(310),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(307),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(307),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(307),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(307),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(307),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(307),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(307),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(307),
    [anon_sym_icmp] = ACTIONS(307),
    [anon_sym_ip] = ACTIONS(310),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(307),
    [anon_sym_tcp] = ACTIONS(307),
    [anon_sym_udp] = ACTIONS(307),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(307),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(307),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(307),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(313),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(316),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(316),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(316),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(316),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(316),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(319),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(319),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(319),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(319),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(319),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(319),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(319),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(319),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(319),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(319),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(319),
  },
  [47] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(147),
    [sym_stringlike_field] = STATE(62),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [aux_sym_string_func_repeat1] = STATE(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [sym_string] = ACTIONS(257),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
  },
  [48] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(147),
    [sym_stringlike_field] = STATE(62),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [aux_sym_string_func_repeat1] = STATE(44),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [sym_string] = ACTIONS(257),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
  },
  [49] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(197),
    [sym_stringlike_field] = STATE(190),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [sym_string] = ACTIONS(322),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [50] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(147),
    [sym_stringlike_field] = STATE(62),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(178),
    [sym_array_string_field] = STATE(181),
    [aux_sym_string_func_repeat1] = STATE(40),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(7),
    [anon_sym_lookup_json_string] = ACTIONS(11),
    [anon_sym_lower] = ACTIONS(13),
    [anon_sym_regex_replace] = ACTIONS(15),
    [anon_sym_remove_bytes] = ACTIONS(17),
    [anon_sym_to_string] = ACTIONS(19),
    [anon_sym_upper] = ACTIONS(13),
    [anon_sym_url_decode] = ACTIONS(13),
    [anon_sym_uuidv4] = ACTIONS(21),
    [sym_string] = ACTIONS(257),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(49),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(49),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(49),
  },
  [51] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(237),
    [sym_stringlike_field] = STATE(190),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [sym_string] = ACTIONS(322),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [52] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(177),
    [sym_stringlike_field] = STATE(192),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [53] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(152),
    [sym_stringlike_field] = STATE(155),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [54] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(235),
    [sym_stringlike_field] = STATE(236),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [55] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(243),
    [sym_stringlike_field] = STATE(244),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [56] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(212),
    [sym_stringlike_field] = STATE(236),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [57] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(105),
    [sym_stringlike_field] = STATE(97),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [58] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(213),
    [sym_stringlike_field] = STATE(155),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [59] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(106),
    [sym_stringlike_field] = STATE(97),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [60] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(239),
    [sym_stringlike_field] = STATE(192),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [61] = {
    [sym_string_func] = STATE(31),
    [sym_string_array] = STATE(113),
    [sym__string_array_expansion] = STATE(250),
    [sym_stringlike_field] = STATE(244),
    [sym_string_field] = STATE(31),
    [sym_map_string_array_field] = STATE(218),
    [sym_array_string_field] = STATE(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(259),
    [anon_sym_lookup_json_string] = ACTIONS(261),
    [anon_sym_lower] = ACTIONS(263),
    [anon_sym_regex_replace] = ACTIONS(265),
    [anon_sym_remove_bytes] = ACTIONS(267),
    [anon_sym_to_string] = ACTIONS(269),
    [anon_sym_upper] = ACTIONS(263),
    [anon_sym_url_decode] = ACTIONS(263),
    [anon_sym_uuidv4] = ACTIONS(271),
    [anon_sym_http_DOTcookie] = ACTIONS(41),
    [anon_sym_http_DOThost] = ACTIONS(41),
    [anon_sym_http_DOTreferer] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(43),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_http_DOTuser_agent] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(41),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(43),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(41),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(43),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(41),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(41),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(41),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(41),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(41),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(41),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(41),
    [anon_sym_icmp] = ACTIONS(41),
    [anon_sym_ip] = ACTIONS(43),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(41),
    [anon_sym_tcp] = ACTIONS(41),
    [anon_sym_udp] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(41),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(41),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(45),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(47),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(47),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(275),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(275),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(275),
  },
  [62] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(324),
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_lookup_json_string] = ACTIONS(324),
    [anon_sym_lower] = ACTIONS(324),
    [anon_sym_regex_replace] = ACTIONS(324),
    [anon_sym_remove_bytes] = ACTIONS(324),
    [anon_sym_to_string] = ACTIONS(324),
    [anon_sym_upper] = ACTIONS(324),
    [anon_sym_url_decode] = ACTIONS(324),
    [anon_sym_uuidv4] = ACTIONS(324),
    [sym_string] = ACTIONS(324),
    [anon_sym_http_DOTcookie] = ACTIONS(324),
    [anon_sym_http_DOThost] = ACTIONS(324),
    [anon_sym_http_DOTreferer] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(328),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(328),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(324),
    [anon_sym_http_DOTuser_agent] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(324),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(324),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(324),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(324),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(324),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(324),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(324),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(328),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(324),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(324),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(324),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(324),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(324),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(324),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(324),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(324),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(324),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(324),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(324),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(328),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(324),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(324),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(324),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(324),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(324),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(324),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(324),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(324),
    [anon_sym_icmp] = ACTIONS(324),
    [anon_sym_ip] = ACTIONS(328),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(324),
    [anon_sym_tcp] = ACTIONS(324),
    [anon_sym_udp] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(324),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(328),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(328),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(328),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(328),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(328),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(324),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(324),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(324),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(324),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(324),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(324),
  },
  [63] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_concat] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_lookup_json_string] = ACTIONS(284),
    [anon_sym_lower] = ACTIONS(284),
    [anon_sym_regex_replace] = ACTIONS(284),
    [anon_sym_remove_bytes] = ACTIONS(284),
    [anon_sym_to_string] = ACTIONS(284),
    [anon_sym_upper] = ACTIONS(284),
    [anon_sym_url_decode] = ACTIONS(284),
    [anon_sym_uuidv4] = ACTIONS(284),
    [sym_string] = ACTIONS(284),
    [anon_sym_http_DOTcookie] = ACTIONS(284),
    [anon_sym_http_DOThost] = ACTIONS(284),
    [anon_sym_http_DOTreferer] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTfull_uri] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTmethod] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTuri] = ACTIONS(330),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath] = ACTIONS(330),
    [anon_sym_http_DOTrequest_DOTuri_DOTpath_DOTextension] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTuri_DOTquery] = ACTIONS(284),
    [anon_sym_http_DOTuser_agent] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTversion] = ACTIONS(284),
    [anon_sym_http_DOTx_forwarded_for] = ACTIONS(284),
    [anon_sym_ip_DOTsrc_DOTlat] = ACTIONS(284),
    [anon_sym_ip_DOTsrc_DOTlon] = ACTIONS(284),
    [anon_sym_ip_DOTsrc_DOTcity] = ACTIONS(284),
    [anon_sym_ip_DOTsrc_DOTpostal_code] = ACTIONS(284),
    [anon_sym_ip_DOTsrc_DOTmetro_code] = ACTIONS(284),
    [anon_sym_ip_DOTsrc_DOTregion] = ACTIONS(330),
    [anon_sym_ip_DOTsrc_DOTregion_code] = ACTIONS(284),
    [anon_sym_ip_DOTsrc_DOTtimezone_DOTname] = ACTIONS(284),
    [anon_sym_ip_DOTgeoip_DOTcontinent] = ACTIONS(284),
    [anon_sym_ip_DOTgeoip_DOTcountry] = ACTIONS(284),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_1_iso_code] = ACTIONS(284),
    [anon_sym_ip_DOTgeoip_DOTsubdivision_2_iso_code] = ACTIONS(284),
    [anon_sym_ip_DOTsrc_DOTcontinent] = ACTIONS(284),
    [anon_sym_ip_DOTsrc_DOTcountry] = ACTIONS(284),
    [anon_sym_ip_DOTsrc_DOTsubdivision_1_iso_code] = ACTIONS(284),
    [anon_sym_ip_DOTsrc_DOTsubdivision_2_iso_code] = ACTIONS(284),
    [anon_sym_raw_DOThttp_DOTrequest_DOTfull_uri] = ACTIONS(284),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri] = ACTIONS(330),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTpath] = ACTIONS(284),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTquery] = ACTIONS(284),
    [anon_sym_cf_DOTbot_management_DOTja3_hash] = ACTIONS(284),
    [anon_sym_cf_DOTverified_bot_category] = ACTIONS(284),
    [anon_sym_cf_DOThostname_DOTmetadata] = ACTIONS(284),
    [anon_sym_cf_DOTworker_DOTupstream_zone] = ACTIONS(284),
    [anon_sym_cf_DOTcolo_DOTname] = ACTIONS(284),
    [anon_sym_cf_DOTcolo_DOTregion] = ACTIONS(284),
    [anon_sym_icmp] = ACTIONS(284),
    [anon_sym_ip] = ACTIONS(330),
    [anon_sym_ip_DOTdst_DOTcountry] = ACTIONS(284),
    [anon_sym_tcp] = ACTIONS(284),
    [anon_sym_udp] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTbody_DOTraw] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTbody_DOTmime] = ACTIONS(284),
    [anon_sym_cf_DOTresponse_DOTerror_type] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTcookies] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs] = ACTIONS(330),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs] = ACTIONS(330),
    [anon_sym_http_DOTrequest_DOTheaders] = ACTIONS(330),
    [anon_sym_http_DOTrequest_DOTbody_DOTform] = ACTIONS(330),
    [anon_sym_http_DOTresponse_DOTheaders] = ACTIONS(330),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(284),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames] = ACTIONS(284),
    [anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTheaders_DOTnames] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTheaders_DOTvalues] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTaccepted_languages] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames] = ACTIONS(284),
    [anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues] = ACTIONS(284),
    [anon_sym_http_DOTresponse_DOTheaders_DOTnames] = ACTIONS(284),
    [anon_sym_http_DOTresponse_DOTheaders_DOTvalues] = ACTIONS(284),
  },
  [64] = {
    [sym_bool_func] = STATE(15),
    [sym_array_func] = STATE(20),
    [sym_number_array] = STATE(108),
    [sym_bool_array] = STATE(110),
    [sym_boollike_field] = STATE(236),
    [sym_numberlike_field] = STATE(236),
    [sym_number_field] = STATE(78),
    [sym_ip_field] = STATE(236),
    [sym_array_number_field] = STATE(117),
    [sym_bool_field] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_len] = ACTIONS(332),
    [anon_sym_ends_with] = ACTIONS(334),
    [anon_sym_starts_with] = ACTIONS(334),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_all] = ACTIONS(27),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(33),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(33),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(33),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(33),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(33),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(35),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(33),
    [anon_sym_icmp_DOTtype] = ACTIONS(33),
    [anon_sym_icmp_DOTcode] = ACTIONS(33),
    [anon_sym_ip_DOThdr_len] = ACTIONS(33),
    [anon_sym_ip_DOTlen] = ACTIONS(33),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(33),
    [anon_sym_ip_DOTttl] = ACTIONS(33),
    [anon_sym_tcp_DOTflags] = ACTIONS(35),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(33),
    [anon_sym_tcp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTsrcport] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(33),
    [anon_sym_ip_DOTsrc] = ACTIONS(37),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(39),
    [anon_sym_ip_DOTdst] = ACTIONS(39),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(336),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ssl] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(53),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(53),
    [anon_sym_sip] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(53),
  },
  [65] = {
    [sym_bool_func] = STATE(15),
    [sym_array_func] = STATE(20),
    [sym_number_array] = STATE(131),
    [sym_bool_array] = STATE(132),
    [sym_boollike_field] = STATE(236),
    [sym_numberlike_field] = STATE(236),
    [sym_number_field] = STATE(78),
    [sym_ip_field] = STATE(236),
    [sym_array_number_field] = STATE(117),
    [sym_bool_field] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_len] = ACTIONS(332),
    [anon_sym_ends_with] = ACTIONS(334),
    [anon_sym_starts_with] = ACTIONS(334),
    [anon_sym_any] = ACTIONS(27),
    [anon_sym_all] = ACTIONS(27),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTsec] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTtimestamp_DOTmsec] = ACTIONS(33),
    [anon_sym_ip_DOTgeoip_DOTasnum] = ACTIONS(33),
    [anon_sym_ip_DOTsrc_DOTasnum] = ACTIONS(33),
    [anon_sym_cf_DOTbot_management_DOTscore] = ACTIONS(33),
    [anon_sym_cf_DOTedge_DOTserver_port] = ACTIONS(33),
    [anon_sym_cf_DOTthreat_score] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore] = ACTIONS(35),
    [anon_sym_cf_DOTwaf_DOTscore_DOTsqli] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTxss] = ACTIONS(33),
    [anon_sym_cf_DOTwaf_DOTscore_DOTrce] = ACTIONS(33),
    [anon_sym_icmp_DOTtype] = ACTIONS(33),
    [anon_sym_icmp_DOTcode] = ACTIONS(33),
    [anon_sym_ip_DOThdr_len] = ACTIONS(33),
    [anon_sym_ip_DOTlen] = ACTIONS(33),
    [anon_sym_ip_DOTopt_DOTtype] = ACTIONS(33),
    [anon_sym_ip_DOTttl] = ACTIONS(33),
    [anon_sym_tcp_DOTflags] = ACTIONS(35),
    [anon_sym_tcp_DOTsrcport] = ACTIONS(33),
    [anon_sym_tcp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTdstport] = ACTIONS(33),
    [anon_sym_udp_DOTsrcport] = ACTIONS(33),
    [anon_sym_http_DOTrequest_DOTbody_DOTsize] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOTcode] = ACTIONS(33),
    [anon_sym_http_DOTresponse_DOT1xxx_code] = ACTIONS(33),
    [anon_sym_ip_DOTsrc] = ACTIONS(37),
    [anon_sym_cf_DOTedge_DOTserver_ip] = ACTIONS(39),
    [anon_sym_ip_DOTdst] = ACTIONS(39),
    [anon_sym_cf_DOTbot_management_DOTdetection_ids] = ACTIONS(336),
    [anon_sym_ip_DOTgeoip_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ip_DOTsrc_DOTis_in_european_union] = ACTIONS(53),
    [anon_sym_ssl] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTverified_bot] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTjs_detection_DOTpassed] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTcorporate_proxy] = ACTIONS(53),
    [anon_sym_cf_DOTbot_management_DOTstatic_resource] = ACTIONS(53),
    [anon_sym_cf_DOTclient_DOTbot] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_revoked] = ACTIONS(53),
    [anon_sym_cf_DOTtls_client_auth_DOTcert_verified] = ACTIONS(53),
    [anon_sym_sip] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTack] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTcwr] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTecn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTfin] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTpush] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTreset] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTsyn] = ACTIONS(53),
    [anon_sym_tcp_DOTflags_DOTurg] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTheaders_DOTtruncated] = ACTIONS(53),
    [anon_sym_http_DOTrequest_DOTbody_DOTtruncated] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_http_DOTrequest_DOTcookies,
    ACTIONS(332), 1,
      anon_sym_len,
    ACTIONS(336), 1,
      anon_sym_cf_DOTbot_management_DOTdetection_ids,
    ACTIONS(338), 1,
      anon_sym_concat,
    ACTIONS(340), 1,
      anon_sym_lookup_json_string,
    ACTIONS(344), 1,
      anon_sym_regex_replace,
    ACTIONS(346), 1,
      anon_sym_remove_bytes,
    ACTIONS(348), 1,
      anon_sym_to_string,
    ACTIONS(350), 1,
      anon_sym_uuidv4,
    STATE(116), 1,
      sym_array_string_field,
    STATE(117), 1,
      sym_array_number_field,
    STATE(137), 1,
      sym_number_array,
    STATE(140), 1,
      sym_bool_array,
    STATE(143), 1,
      sym_string_array,
    STATE(234), 1,
      sym_map_string_array_field,
    ACTIONS(352), 2,
      anon_sym_ends_with,
      anon_sym_starts_with,
    ACTIONS(342), 3,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_url_decode,
    ACTIONS(47), 5,
      anon_sym_http_DOTrequest_DOTuri_DOTargs,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs,
      anon_sym_http_DOTrequest_DOTheaders,
      anon_sym_http_DOTrequest_DOTbody_DOTform,
      anon_sym_http_DOTresponse_DOTheaders,
    ACTIONS(275), 11,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_http_DOTrequest_DOTheaders_DOTnames,
      anon_sym_http_DOTrequest_DOTheaders_DOTvalues,
      anon_sym_http_DOTrequest_DOTaccepted_languages,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues,
      anon_sym_http_DOTresponse_DOTheaders_DOTnames,
      anon_sym_http_DOTresponse_DOTheaders_DOTvalues,
  [78] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_http_DOTrequest_DOTcookies,
    ACTIONS(338), 1,
      anon_sym_concat,
    ACTIONS(340), 1,
      anon_sym_lookup_json_string,
    ACTIONS(344), 1,
      anon_sym_regex_replace,
    ACTIONS(346), 1,
      anon_sym_remove_bytes,
    ACTIONS(348), 1,
      anon_sym_to_string,
    ACTIONS(350), 1,
      anon_sym_uuidv4,
    STATE(116), 1,
      sym_array_string_field,
    STATE(163), 1,
      sym_string_array,
    STATE(218), 1,
      sym_map_string_array_field,
    STATE(239), 1,
      sym__string_array_expansion,
    ACTIONS(342), 3,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_url_decode,
    ACTIONS(47), 5,
      anon_sym_http_DOTrequest_DOTuri_DOTargs,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs,
      anon_sym_http_DOTrequest_DOTheaders,
      anon_sym_http_DOTrequest_DOTbody_DOTform,
      anon_sym_http_DOTresponse_DOTheaders,
    ACTIONS(275), 11,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_http_DOTrequest_DOTheaders_DOTnames,
      anon_sym_http_DOTrequest_DOTheaders_DOTvalues,
      anon_sym_http_DOTrequest_DOTaccepted_languages,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues,
      anon_sym_http_DOTresponse_DOTheaders_DOTnames,
      anon_sym_http_DOTresponse_DOTheaders_DOTvalues,
  [140] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_http_DOTrequest_DOTcookies,
    ACTIONS(338), 1,
      anon_sym_concat,
    ACTIONS(340), 1,
      anon_sym_lookup_json_string,
    ACTIONS(344), 1,
      anon_sym_regex_replace,
    ACTIONS(346), 1,
      anon_sym_remove_bytes,
    ACTIONS(348), 1,
      anon_sym_to_string,
    ACTIONS(350), 1,
      anon_sym_uuidv4,
    STATE(106), 1,
      sym__string_array_expansion,
    STATE(116), 1,
      sym_array_string_field,
    STATE(163), 1,
      sym_string_array,
    STATE(218), 1,
      sym_map_string_array_field,
    ACTIONS(342), 3,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_url_decode,
    ACTIONS(47), 5,
      anon_sym_http_DOTrequest_DOTuri_DOTargs,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs,
      anon_sym_http_DOTrequest_DOTheaders,
      anon_sym_http_DOTrequest_DOTbody_DOTform,
      anon_sym_http_DOTresponse_DOTheaders,
    ACTIONS(275), 11,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_http_DOTrequest_DOTheaders_DOTnames,
      anon_sym_http_DOTrequest_DOTheaders_DOTvalues,
      anon_sym_http_DOTrequest_DOTaccepted_languages,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues,
      anon_sym_http_DOTresponse_DOTheaders_DOTnames,
      anon_sym_http_DOTresponse_DOTheaders_DOTvalues,
  [202] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_http_DOTrequest_DOTcookies,
    ACTIONS(338), 1,
      anon_sym_concat,
    ACTIONS(340), 1,
      anon_sym_lookup_json_string,
    ACTIONS(344), 1,
      anon_sym_regex_replace,
    ACTIONS(346), 1,
      anon_sym_remove_bytes,
    ACTIONS(348), 1,
      anon_sym_to_string,
    ACTIONS(350), 1,
      anon_sym_uuidv4,
    STATE(116), 1,
      sym_array_string_field,
    STATE(163), 1,
      sym_string_array,
    STATE(212), 1,
      sym__string_array_expansion,
    STATE(218), 1,
      sym_map_string_array_field,
    ACTIONS(342), 3,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_url_decode,
    ACTIONS(47), 5,
      anon_sym_http_DOTrequest_DOTuri_DOTargs,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs,
      anon_sym_http_DOTrequest_DOTheaders,
      anon_sym_http_DOTrequest_DOTbody_DOTform,
      anon_sym_http_DOTresponse_DOTheaders,
    ACTIONS(275), 11,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_http_DOTrequest_DOTheaders_DOTnames,
      anon_sym_http_DOTrequest_DOTheaders_DOTvalues,
      anon_sym_http_DOTrequest_DOTaccepted_languages,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues,
      anon_sym_http_DOTresponse_DOTheaders_DOTnames,
      anon_sym_http_DOTresponse_DOTheaders_DOTvalues,
  [264] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_http_DOTrequest_DOTcookies,
    ACTIONS(338), 1,
      anon_sym_concat,
    ACTIONS(340), 1,
      anon_sym_lookup_json_string,
    ACTIONS(344), 1,
      anon_sym_regex_replace,
    ACTIONS(346), 1,
      anon_sym_remove_bytes,
    ACTIONS(348), 1,
      anon_sym_to_string,
    ACTIONS(350), 1,
      anon_sym_uuidv4,
    STATE(116), 1,
      sym_array_string_field,
    STATE(163), 1,
      sym_string_array,
    STATE(218), 1,
      sym_map_string_array_field,
    STATE(250), 1,
      sym__string_array_expansion,
    ACTIONS(342), 3,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_url_decode,
    ACTIONS(47), 5,
      anon_sym_http_DOTrequest_DOTuri_DOTargs,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs,
      anon_sym_http_DOTrequest_DOTheaders,
      anon_sym_http_DOTrequest_DOTbody_DOTform,
      anon_sym_http_DOTresponse_DOTheaders,
    ACTIONS(275), 11,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_http_DOTrequest_DOTheaders_DOTnames,
      anon_sym_http_DOTrequest_DOTheaders_DOTvalues,
      anon_sym_http_DOTrequest_DOTaccepted_languages,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues,
      anon_sym_http_DOTresponse_DOTheaders_DOTnames,
      anon_sym_http_DOTresponse_DOTheaders_DOTvalues,
  [326] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_http_DOTrequest_DOTcookies,
    ACTIONS(338), 1,
      anon_sym_concat,
    ACTIONS(340), 1,
      anon_sym_lookup_json_string,
    ACTIONS(344), 1,
      anon_sym_regex_replace,
    ACTIONS(346), 1,
      anon_sym_remove_bytes,
    ACTIONS(348), 1,
      anon_sym_to_string,
    ACTIONS(350), 1,
      anon_sym_uuidv4,
    STATE(116), 1,
      sym_array_string_field,
    STATE(163), 1,
      sym_string_array,
    STATE(214), 1,
      sym__string_array_expansion,
    STATE(218), 1,
      sym_map_string_array_field,
    ACTIONS(342), 3,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_url_decode,
    ACTIONS(47), 5,
      anon_sym_http_DOTrequest_DOTuri_DOTargs,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs,
      anon_sym_http_DOTrequest_DOTheaders,
      anon_sym_http_DOTrequest_DOTbody_DOTform,
      anon_sym_http_DOTresponse_DOTheaders,
    ACTIONS(275), 11,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_http_DOTrequest_DOTheaders_DOTnames,
      anon_sym_http_DOTrequest_DOTheaders_DOTvalues,
      anon_sym_http_DOTrequest_DOTaccepted_languages,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues,
      anon_sym_http_DOTresponse_DOTheaders_DOTnames,
      anon_sym_http_DOTresponse_DOTheaders_DOTvalues,
  [388] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_http_DOTrequest_DOTcookies,
    ACTIONS(338), 1,
      anon_sym_concat,
    ACTIONS(340), 1,
      anon_sym_lookup_json_string,
    ACTIONS(344), 1,
      anon_sym_regex_replace,
    ACTIONS(346), 1,
      anon_sym_remove_bytes,
    ACTIONS(348), 1,
      anon_sym_to_string,
    ACTIONS(350), 1,
      anon_sym_uuidv4,
    STATE(116), 1,
      sym_array_string_field,
    STATE(163), 1,
      sym_string_array,
    STATE(218), 1,
      sym_map_string_array_field,
    STATE(237), 1,
      sym__string_array_expansion,
    ACTIONS(342), 3,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_url_decode,
    ACTIONS(47), 5,
      anon_sym_http_DOTrequest_DOTuri_DOTargs,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs,
      anon_sym_http_DOTrequest_DOTheaders,
      anon_sym_http_DOTrequest_DOTbody_DOTform,
      anon_sym_http_DOTresponse_DOTheaders,
    ACTIONS(275), 11,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_http_DOTrequest_DOTheaders_DOTnames,
      anon_sym_http_DOTrequest_DOTheaders_DOTvalues,
      anon_sym_http_DOTrequest_DOTaccepted_languages,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues,
      anon_sym_http_DOTresponse_DOTheaders_DOTnames,
      anon_sym_http_DOTresponse_DOTheaders_DOTvalues,
  [450] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_http_DOTrequest_DOTcookies,
    ACTIONS(338), 1,
      anon_sym_concat,
    ACTIONS(340), 1,
      anon_sym_lookup_json_string,
    ACTIONS(344), 1,
      anon_sym_regex_replace,
    ACTIONS(346), 1,
      anon_sym_remove_bytes,
    ACTIONS(348), 1,
      anon_sym_to_string,
    ACTIONS(350), 1,
      anon_sym_uuidv4,
    STATE(116), 1,
      sym_array_string_field,
    STATE(163), 1,
      sym_string_array,
    STATE(218), 1,
      sym_map_string_array_field,
    STATE(238), 1,
      sym__string_array_expansion,
    ACTIONS(342), 3,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_url_decode,
    ACTIONS(47), 5,
      anon_sym_http_DOTrequest_DOTuri_DOTargs,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs,
      anon_sym_http_DOTrequest_DOTheaders,
      anon_sym_http_DOTrequest_DOTbody_DOTform,
      anon_sym_http_DOTresponse_DOTheaders,
    ACTIONS(275), 11,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_http_DOTrequest_DOTheaders_DOTnames,
      anon_sym_http_DOTrequest_DOTheaders_DOTvalues,
      anon_sym_http_DOTrequest_DOTaccepted_languages,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues,
      anon_sym_http_DOTresponse_DOTheaders_DOTnames,
      anon_sym_http_DOTresponse_DOTheaders_DOTvalues,
  [512] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_http_DOTrequest_DOTcookies,
    ACTIONS(338), 1,
      anon_sym_concat,
    ACTIONS(340), 1,
      anon_sym_lookup_json_string,
    ACTIONS(344), 1,
      anon_sym_regex_replace,
    ACTIONS(346), 1,
      anon_sym_remove_bytes,
    ACTIONS(348), 1,
      anon_sym_to_string,
    ACTIONS(350), 1,
      anon_sym_uuidv4,
    STATE(116), 1,
      sym_array_string_field,
    STATE(163), 1,
      sym_string_array,
    STATE(213), 1,
      sym__string_array_expansion,
    STATE(218), 1,
      sym_map_string_array_field,
    ACTIONS(342), 3,
      anon_sym_lower,
      anon_sym_upper,
      anon_sym_url_decode,
    ACTIONS(47), 5,
      anon_sym_http_DOTrequest_DOTuri_DOTargs,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs,
      anon_sym_http_DOTrequest_DOTheaders,
      anon_sym_http_DOTrequest_DOTbody_DOTform,
      anon_sym_http_DOTresponse_DOTheaders,
    ACTIONS(275), 11,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_http_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTnames,
      anon_sym_raw_DOThttp_DOTrequest_DOTuri_DOTargs_DOTvalues,
      anon_sym_http_DOTrequest_DOTheaders_DOTnames,
      anon_sym_http_DOTrequest_DOTheaders_DOTvalues,
      anon_sym_http_DOTrequest_DOTaccepted_languages,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTnames,
      anon_sym_http_DOTrequest_DOTbody_DOTform_DOTvalues,
      anon_sym_http_DOTresponse_DOTheaders_DOTnames,
      anon_sym_http_DOTresponse_DOTheaders_DOTvalues,
  [574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_in,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 15,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_lt,
      anon_sym_le,
      anon_sym_gt,
      anon_sym_ge,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_strictwildcard,
      anon_sym_wildcard,
      anon_sym_TILDE,
  [602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_in,
    ACTIONS(364), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(362), 15,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_lt,
      anon_sym_le,
      anon_sym_gt,
      anon_sym_ge,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_strictwildcard,
      anon_sym_wildcard,
      anon_sym_TILDE,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(366), 12,
      anon_sym_in,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_lt,
      anon_sym_le,
      anon_sym_gt,
      anon_sym_ge,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(370), 12,
      anon_sym_in,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_lt,
      anon_sym_le,
      anon_sym_gt,
      anon_sym_ge,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(374), 12,
      anon_sym_in,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_lt,
      anon_sym_le,
      anon_sym_gt,
      anon_sym_ge,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(378), 11,
      anon_sym_in,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_lt,
      anon_sym_le,
      anon_sym_gt,
      anon_sym_ge,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_in,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 10,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_lt,
      anon_sym_le,
      anon_sym_gt,
      anon_sym_ge,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_in,
    ACTIONS(392), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(390), 10,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_lt,
      anon_sym_le,
      anon_sym_gt,
      anon_sym_ge,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [763] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_len,
    ACTIONS(336), 1,
      anon_sym_cf_DOTbot_management_DOTdetection_ids,
    STATE(117), 1,
      sym_array_number_field,
    ACTIONS(352), 2,
      anon_sym_ends_with,
      anon_sym_starts_with,
    STATE(167), 2,
      sym_number_array,
      sym_bool_array,
  [784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(171), 2,
      anon_sym_xor,
      anon_sym_CARET_CARET,
    ACTIONS(211), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 6,
      anon_sym_in,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
  [815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_in,
    ACTIONS(400), 4,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(404), 1,
      sym_ipv4,
    STATE(87), 3,
      sym__ip,
      sym_ip_range,
      aux_sym_ip_set_repeat1,
  [843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      sym_ipv4,
    STATE(87), 3,
      sym__ip,
      sym_ip_range,
      aux_sym_ip_set_repeat1,
  [858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_ipv4,
    STATE(88), 3,
      sym__ip,
      sym_ip_range,
      aux_sym_ip_set_repeat1,
  [870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_string_func_repeat2,
    ACTIONS(415), 2,
      sym_number,
      sym_string,
  [894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_string_func_repeat2,
    ACTIONS(415), 2,
      sym_number,
      sym_string,
  [908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(421), 3,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_string_func_repeat2,
    ACTIONS(415), 2,
      sym_number,
      sym_string,
  [934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_string_func_repeat2,
    ACTIONS(429), 2,
      sym_number,
      sym_string,
  [958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_string_func_repeat2,
    ACTIONS(415), 2,
      sym_number,
      sym_string,
  [969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    ACTIONS(434), 1,
      sym_string,
    STATE(99), 1,
      aux_sym_string_set_repeat1,
  [982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    ACTIONS(438), 1,
      sym_string,
    STATE(99), 1,
      aux_sym_string_set_repeat1,
  [995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      sym_number,
    STATE(100), 1,
      aux_sym_number_set_repeat1,
  [1008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      sym_ip_list,
    STATE(11), 1,
      sym_ip_set,
  [1021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_ipv4,
    STATE(18), 2,
      sym__ip,
      sym_ip_range,
  [1032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 3,
      anon_sym_RPAREN,
      sym_number,
      sym_string,
  [1041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(452), 1,
      sym_number,
    STATE(100), 1,
      aux_sym_number_set_repeat1,
  [1054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_string_func_repeat2,
    ACTIONS(415), 2,
      sym_number,
      sym_string,
  [1065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_string_func_repeat2,
    ACTIONS(415), 2,
      sym_number,
      sym_string,
  [1076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
  [1086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
  [1096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_number_set,
  [1106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
  [1116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_number,
    STATE(104), 1,
      aux_sym_number_set_repeat1,
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
    STATE(191), 1,
      sym_number_set,
  [1136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
  [1146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
  [1156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(478), 1,
      anon_sym_LBRACK,
  [1166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(482), 1,
      anon_sym_LBRACK,
  [1176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(486), 1,
      anon_sym_LBRACK,
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
  [1196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
  [1206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
  [1216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
  [1226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
  [1236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
  [1246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
  [1256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(518), 1,
      anon_sym_LBRACK,
  [1266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
  [1276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(191), 1,
      sym_string_set,
  [1294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_string,
    ACTIONS(530), 1,
      anon_sym_STAR,
  [1304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_string,
    STATE(98), 1,
      aux_sym_string_set_repeat1,
  [1314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LBRACK,
    ACTIONS(534), 1,
      anon_sym_LBRACK_STAR_RBRACK,
  [1324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(534), 1,
      anon_sym_LBRACK_STAR_RBRACK,
  [1334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_string_set,
  [1344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      sym_number,
  [1351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LBRACK,
  [1358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACK,
  [1365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_LBRACK_STAR_RBRACK,
  [1372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
  [1379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
  [1386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LBRACK_STAR_RBRACK,
  [1393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [1400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
  [1407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LBRACK_STAR_RBRACK,
  [1414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
  [1421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
  [1428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
  [1435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LBRACK,
  [1442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
  [1449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      aux_sym_ip_range_token1,
  [1456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACK,
  [1463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
  [1470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [1477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym_number,
  [1484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
  [1491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [1498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LBRACK,
  [1505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
  [1512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
  [1519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_COMMA,
  [1526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_COMMA,
  [1533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
  [1540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
  [1547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACK_STAR_RBRACK,
  [1554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LBRACK,
  [1561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
  [1568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [1575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LBRACK_STAR_RBRACK,
  [1582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
  [1589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_number,
  [1596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_number,
  [1603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
  [1610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_string,
  [1617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
  [1624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
  [1631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_number,
  [1638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
  [1645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
  [1652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
  [1659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym_string,
  [1666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_RBRACK,
  [1673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LBRACK,
  [1680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym_string,
  [1687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LBRACK,
  [1694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LBRACK_STAR_RBRACK,
  [1701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_string,
  [1708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym_string,
  [1715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACK,
  [1722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
  [1729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LBRACK,
  [1736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COMMA,
  [1743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
  [1750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
  [1757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
  [1764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_LPAREN,
  [1771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
  [1778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
  [1785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_COMMA,
  [1792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LPAREN,
  [1799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
  [1806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
  [1813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_LPAREN,
  [1820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
  [1827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
  [1834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_string,
  [1841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_string,
  [1848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_string,
  [1855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_string,
  [1862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
  [1869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
  [1876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
  [1883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
  [1890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
  [1897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
  [1904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
  [1911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_RBRACK,
  [1918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LBRACK,
  [1925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
  [1932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
  [1939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
  [1946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
  [1953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
  [1960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LBRACK,
  [1967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
  [1974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_string,
  [1981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_string,
  [1988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_string,
  [1995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
  [2002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
  [2009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_string,
  [2016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_string,
  [2023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_string,
  [2030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
  [2037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
  [2044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_LBRACK,
  [2051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
  [2058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
  [2065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COMMA,
  [2072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COMMA,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_COMMA,
  [2086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COMMA,
  [2093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
  [2100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
  [2107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_COMMA,
  [2114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_COMMA,
  [2121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
  [2128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_string,
  [2135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
  [2142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
  [2149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
  [2156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COMMA,
  [2163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_COMMA,
  [2170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
  [2177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(66)] = 0,
  [SMALL_STATE(67)] = 78,
  [SMALL_STATE(68)] = 140,
  [SMALL_STATE(69)] = 202,
  [SMALL_STATE(70)] = 264,
  [SMALL_STATE(71)] = 326,
  [SMALL_STATE(72)] = 388,
  [SMALL_STATE(73)] = 450,
  [SMALL_STATE(74)] = 512,
  [SMALL_STATE(75)] = 574,
  [SMALL_STATE(76)] = 602,
  [SMALL_STATE(77)] = 630,
  [SMALL_STATE(78)] = 652,
  [SMALL_STATE(79)] = 674,
  [SMALL_STATE(80)] = 696,
  [SMALL_STATE(81)] = 717,
  [SMALL_STATE(82)] = 740,
  [SMALL_STATE(83)] = 763,
  [SMALL_STATE(84)] = 784,
  [SMALL_STATE(85)] = 803,
  [SMALL_STATE(86)] = 815,
  [SMALL_STATE(87)] = 828,
  [SMALL_STATE(88)] = 843,
  [SMALL_STATE(89)] = 858,
  [SMALL_STATE(90)] = 870,
  [SMALL_STATE(91)] = 880,
  [SMALL_STATE(92)] = 894,
  [SMALL_STATE(93)] = 908,
  [SMALL_STATE(94)] = 920,
  [SMALL_STATE(95)] = 934,
  [SMALL_STATE(96)] = 944,
  [SMALL_STATE(97)] = 958,
  [SMALL_STATE(98)] = 969,
  [SMALL_STATE(99)] = 982,
  [SMALL_STATE(100)] = 995,
  [SMALL_STATE(101)] = 1008,
  [SMALL_STATE(102)] = 1021,
  [SMALL_STATE(103)] = 1032,
  [SMALL_STATE(104)] = 1041,
  [SMALL_STATE(105)] = 1054,
  [SMALL_STATE(106)] = 1065,
  [SMALL_STATE(107)] = 1076,
  [SMALL_STATE(108)] = 1086,
  [SMALL_STATE(109)] = 1096,
  [SMALL_STATE(110)] = 1106,
  [SMALL_STATE(111)] = 1116,
  [SMALL_STATE(112)] = 1126,
  [SMALL_STATE(113)] = 1136,
  [SMALL_STATE(114)] = 1146,
  [SMALL_STATE(115)] = 1156,
  [SMALL_STATE(116)] = 1166,
  [SMALL_STATE(117)] = 1176,
  [SMALL_STATE(118)] = 1186,
  [SMALL_STATE(119)] = 1196,
  [SMALL_STATE(120)] = 1206,
  [SMALL_STATE(121)] = 1216,
  [SMALL_STATE(122)] = 1226,
  [SMALL_STATE(123)] = 1236,
  [SMALL_STATE(124)] = 1246,
  [SMALL_STATE(125)] = 1256,
  [SMALL_STATE(126)] = 1266,
  [SMALL_STATE(127)] = 1276,
  [SMALL_STATE(128)] = 1284,
  [SMALL_STATE(129)] = 1294,
  [SMALL_STATE(130)] = 1304,
  [SMALL_STATE(131)] = 1314,
  [SMALL_STATE(132)] = 1324,
  [SMALL_STATE(133)] = 1334,
  [SMALL_STATE(134)] = 1344,
  [SMALL_STATE(135)] = 1351,
  [SMALL_STATE(136)] = 1358,
  [SMALL_STATE(137)] = 1365,
  [SMALL_STATE(138)] = 1372,
  [SMALL_STATE(139)] = 1379,
  [SMALL_STATE(140)] = 1386,
  [SMALL_STATE(141)] = 1393,
  [SMALL_STATE(142)] = 1400,
  [SMALL_STATE(143)] = 1407,
  [SMALL_STATE(144)] = 1414,
  [SMALL_STATE(145)] = 1421,
  [SMALL_STATE(146)] = 1428,
  [SMALL_STATE(147)] = 1435,
  [SMALL_STATE(148)] = 1442,
  [SMALL_STATE(149)] = 1449,
  [SMALL_STATE(150)] = 1456,
  [SMALL_STATE(151)] = 1463,
  [SMALL_STATE(152)] = 1470,
  [SMALL_STATE(153)] = 1477,
  [SMALL_STATE(154)] = 1484,
  [SMALL_STATE(155)] = 1491,
  [SMALL_STATE(156)] = 1498,
  [SMALL_STATE(157)] = 1505,
  [SMALL_STATE(158)] = 1512,
  [SMALL_STATE(159)] = 1519,
  [SMALL_STATE(160)] = 1526,
  [SMALL_STATE(161)] = 1533,
  [SMALL_STATE(162)] = 1540,
  [SMALL_STATE(163)] = 1547,
  [SMALL_STATE(164)] = 1554,
  [SMALL_STATE(165)] = 1561,
  [SMALL_STATE(166)] = 1568,
  [SMALL_STATE(167)] = 1575,
  [SMALL_STATE(168)] = 1582,
  [SMALL_STATE(169)] = 1589,
  [SMALL_STATE(170)] = 1596,
  [SMALL_STATE(171)] = 1603,
  [SMALL_STATE(172)] = 1610,
  [SMALL_STATE(173)] = 1617,
  [SMALL_STATE(174)] = 1624,
  [SMALL_STATE(175)] = 1631,
  [SMALL_STATE(176)] = 1638,
  [SMALL_STATE(177)] = 1645,
  [SMALL_STATE(178)] = 1652,
  [SMALL_STATE(179)] = 1659,
  [SMALL_STATE(180)] = 1666,
  [SMALL_STATE(181)] = 1673,
  [SMALL_STATE(182)] = 1680,
  [SMALL_STATE(183)] = 1687,
  [SMALL_STATE(184)] = 1694,
  [SMALL_STATE(185)] = 1701,
  [SMALL_STATE(186)] = 1708,
  [SMALL_STATE(187)] = 1715,
  [SMALL_STATE(188)] = 1722,
  [SMALL_STATE(189)] = 1729,
  [SMALL_STATE(190)] = 1736,
  [SMALL_STATE(191)] = 1743,
  [SMALL_STATE(192)] = 1750,
  [SMALL_STATE(193)] = 1757,
  [SMALL_STATE(194)] = 1764,
  [SMALL_STATE(195)] = 1771,
  [SMALL_STATE(196)] = 1778,
  [SMALL_STATE(197)] = 1785,
  [SMALL_STATE(198)] = 1792,
  [SMALL_STATE(199)] = 1799,
  [SMALL_STATE(200)] = 1806,
  [SMALL_STATE(201)] = 1813,
  [SMALL_STATE(202)] = 1820,
  [SMALL_STATE(203)] = 1827,
  [SMALL_STATE(204)] = 1834,
  [SMALL_STATE(205)] = 1841,
  [SMALL_STATE(206)] = 1848,
  [SMALL_STATE(207)] = 1855,
  [SMALL_STATE(208)] = 1862,
  [SMALL_STATE(209)] = 1869,
  [SMALL_STATE(210)] = 1876,
  [SMALL_STATE(211)] = 1883,
  [SMALL_STATE(212)] = 1890,
  [SMALL_STATE(213)] = 1897,
  [SMALL_STATE(214)] = 1904,
  [SMALL_STATE(215)] = 1911,
  [SMALL_STATE(216)] = 1918,
  [SMALL_STATE(217)] = 1925,
  [SMALL_STATE(218)] = 1932,
  [SMALL_STATE(219)] = 1939,
  [SMALL_STATE(220)] = 1946,
  [SMALL_STATE(221)] = 1953,
  [SMALL_STATE(222)] = 1960,
  [SMALL_STATE(223)] = 1967,
  [SMALL_STATE(224)] = 1974,
  [SMALL_STATE(225)] = 1981,
  [SMALL_STATE(226)] = 1988,
  [SMALL_STATE(227)] = 1995,
  [SMALL_STATE(228)] = 2002,
  [SMALL_STATE(229)] = 2009,
  [SMALL_STATE(230)] = 2016,
  [SMALL_STATE(231)] = 2023,
  [SMALL_STATE(232)] = 2030,
  [SMALL_STATE(233)] = 2037,
  [SMALL_STATE(234)] = 2044,
  [SMALL_STATE(235)] = 2051,
  [SMALL_STATE(236)] = 2058,
  [SMALL_STATE(237)] = 2065,
  [SMALL_STATE(238)] = 2072,
  [SMALL_STATE(239)] = 2079,
  [SMALL_STATE(240)] = 2086,
  [SMALL_STATE(241)] = 2093,
  [SMALL_STATE(242)] = 2100,
  [SMALL_STATE(243)] = 2107,
  [SMALL_STATE(244)] = 2114,
  [SMALL_STATE(245)] = 2121,
  [SMALL_STATE(246)] = 2128,
  [SMALL_STATE(247)] = 2135,
  [SMALL_STATE(248)] = 2142,
  [SMALL_STATE(249)] = 2149,
  [SMALL_STATE(250)] = 2156,
  [SMALL_STATE(251)] = 2163,
  [SMALL_STATE(252)] = 2170,
  [SMALL_STATE(253)] = 2177,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ip, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ip, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_range, 3, 0, 13),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ip_range, 3, 0, 13),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3, 0, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_expression, 3, 0, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_expression, 3, 0, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_expression, 3, 0, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_expression, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_expression, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boollike_field, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boollike_field, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3, 0, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3, 0, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 3, 0, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 3, 0, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_func, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_func, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boollike_field, 4, 0, 7),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boollike_field, 4, 0, 7),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_func, 6, 0, 18),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_func, 6, 0, 18),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_func, 5, 0, 12),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_func, 5, 0, 12),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_set, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ip_set, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_set, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_set, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_func, 7, 0, 19),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_func, 7, 0, 19),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_field, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_field, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_operator, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_operator, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringlike_field, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringlike_field, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_func, 4, 0, 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_func, 4, 0, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_func, 4, 0, 6),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_func, 4, 0, 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_field, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_field, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_func, 5, 0, 10),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_func, 5, 0, 10),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_func, 6, 0, 16),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_func, 6, 0, 16),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringlike_field, 4, 0, 7),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringlike_field, 4, 0, 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_func, 6, 0, 12),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_func, 6, 0, 12),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_func, 8, 0, 21),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_func, 8, 0, 21),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_func_repeat1, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_func_repeat1, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_func_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberlike_field, 4, 0, 7),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberlike_field, 4, 0, 7),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberlike_field, 1, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberlike_field, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_field, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_field, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_func, 4, 0, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_func, 4, 0, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_field, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ip_set_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ip_set_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_array_expansion, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_func_repeat2, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_array_expansion, 5, 0, 8),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_func_repeat2, 2, 0, 0),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_func_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_set_repeat1, 2, 0, 0),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_set_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_set_repeat1, 2, 0, 0),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_set_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 8, 0, 20),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array, 8, 0, 20),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_string_field, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_string_field, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_number_field, 1, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_number_field, 1, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 1, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_array, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_array, 1, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4, 0, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array, 4, 0, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4, 0, 5),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array, 4, 0, 5),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_array, 4, 0, 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_array, 4, 0, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4, 0, 8),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array, 4, 0, 8),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 5, 0, 9),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array, 5, 0, 9),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 5, 0, 11),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array, 5, 0, 11),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 6, 0, 14),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array, 6, 0, 14),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 6, 0, 15),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array, 6, 0, 15),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_array, 6, 0, 17),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_array, 6, 0, 17),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytes_field, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_string_array_field, 1, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [548] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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

TS_PUBLIC const TSLanguage *tree_sitter_cloudflare(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
