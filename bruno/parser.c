#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_meta = 1,
  anon_sym_get = 2,
  anon_sym_post = 3,
  anon_sym_put = 4,
  anon_sym_delete = 5,
  anon_sym_patch = 6,
  anon_sym_options = 7,
  anon_sym_head = 8,
  anon_sym_connect = 9,
  anon_sym_trace = 10,
  anon_sym_query = 11,
  anon_sym_headers = 12,
  anon_sym_auth_COLONawsv4 = 13,
  anon_sym_auth_COLONbasic = 14,
  anon_sym_auth_COLONbearer = 15,
  anon_sym_auth_COLONdigest = 16,
  anon_sym_auth_COLONoauth2 = 17,
  anon_sym_body = 18,
  anon_sym_body_COLONjson = 19,
  anon_sym_body_COLONtext = 20,
  anon_sym_body_COLONxml = 21,
  anon_sym_body_COLONsparql = 22,
  anon_sym_body_COLONgraphql = 23,
  anon_sym_body_COLONgraphql_COLONvars = 24,
  anon_sym_body_COLONform_DASHurlencoded = 25,
  anon_sym_body_COLONmultipart_DASHform = 26,
  anon_sym_vars = 27,
  anon_sym_vars_COLONsecret = 28,
  anon_sym_vars_COLONpre_DASHrequest = 29,
  anon_sym_vars_COLONpost_DASHresponse = 30,
  anon_sym_assert = 31,
  anon_sym_script_COLONpre_DASHrequest = 32,
  anon_sym_script_COLONpost_DASHresponse = 33,
  anon_sym_params_COLONquery = 34,
  anon_sym_params_COLONpath = 35,
  anon_sym_tests = 36,
  anon_sym_docs = 37,
  anon_sym_LBRACE = 38,
  anon_sym_RBRACE = 39,
  anon_sym_LBRACK = 40,
  anon_sym_COMMA = 41,
  anon_sym_RBRACK = 42,
  sym_array_value = 43,
  anon_sym_COLON = 44,
  sym_assert_key = 45,
  sym_key = 46,
  sym_value = 47,
  sym_rawtext = 48,
  sym_source_file = 49,
  sym_meta = 50,
  sym_http = 51,
  sym_http_verb = 52,
  sym_query = 53,
  sym_headers = 54,
  sym_auths = 55,
  sym_authawsv4 = 56,
  sym_authbasic = 57,
  sym_authbearer = 58,
  sym_authdigest = 59,
  sym_authoauth2 = 60,
  sym_bodies = 61,
  sym_bodyforms = 62,
  sym_body = 63,
  sym_bodyjson = 64,
  sym_bodytext = 65,
  sym_bodyxml = 66,
  sym_bodysparql = 67,
  sym_bodygraphql = 68,
  sym_bodygraphqlvars = 69,
  sym_bodyformurlencoded = 70,
  sym_bodyformmultipart = 71,
  sym_varsandassert = 72,
  sym_vars = 73,
  sym_vars_secret = 74,
  sym_varsreq = 75,
  sym_varsres = 76,
  sym_assert = 77,
  sym_script = 78,
  sym_scriptreq = 79,
  sym_scriptres = 80,
  sym_params = 81,
  sym_params_query = 82,
  sym_params_path = 83,
  sym_tests = 84,
  sym_docs = 85,
  sym_textblock = 86,
  sym_array = 87,
  sym_dictionary = 88,
  sym_dictionary_pair = 89,
  sym_assert_dictionary = 90,
  sym_assert_dictionary_pair = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_array_repeat1 = 93,
  aux_sym_dictionary_repeat1 = 94,
  aux_sym_assert_dictionary_repeat1 = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_meta] = "keyword",
  [anon_sym_get] = "get",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_delete] = "delete",
  [anon_sym_patch] = "patch",
  [anon_sym_options] = "options",
  [anon_sym_head] = "head",
  [anon_sym_connect] = "connect",
  [anon_sym_trace] = "trace",
  [anon_sym_query] = "keyword",
  [anon_sym_headers] = "keyword",
  [anon_sym_auth_COLONawsv4] = "keyword",
  [anon_sym_auth_COLONbasic] = "keyword",
  [anon_sym_auth_COLONbearer] = "keyword",
  [anon_sym_auth_COLONdigest] = "keyword",
  [anon_sym_auth_COLONoauth2] = "keyword",
  [anon_sym_body] = "keyword",
  [anon_sym_body_COLONjson] = "keyword",
  [anon_sym_body_COLONtext] = "keyword",
  [anon_sym_body_COLONxml] = "keyword",
  [anon_sym_body_COLONsparql] = "keyword",
  [anon_sym_body_COLONgraphql] = "keyword",
  [anon_sym_body_COLONgraphql_COLONvars] = "keyword",
  [anon_sym_body_COLONform_DASHurlencoded] = "keyword",
  [anon_sym_body_COLONmultipart_DASHform] = "keyword",
  [anon_sym_vars] = "keyword",
  [anon_sym_vars_COLONsecret] = "keyword",
  [anon_sym_vars_COLONpre_DASHrequest] = "keyword",
  [anon_sym_vars_COLONpost_DASHresponse] = "keyword",
  [anon_sym_assert] = "keyword",
  [anon_sym_script_COLONpre_DASHrequest] = "keyword",
  [anon_sym_script_COLONpost_DASHresponse] = "keyword",
  [anon_sym_params_COLONquery] = "keyword",
  [anon_sym_params_COLONpath] = "keyword",
  [anon_sym_tests] = "keyword",
  [anon_sym_docs] = "keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_array_value] = "array_value",
  [anon_sym_COLON] = ":",
  [sym_assert_key] = "assert_key",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_rawtext] = "rawtext",
  [sym_source_file] = "source_file",
  [sym_meta] = "meta",
  [sym_http] = "http",
  [sym_http_verb] = "keyword",
  [sym_query] = "query",
  [sym_headers] = "headers",
  [sym_auths] = "auths",
  [sym_authawsv4] = "authawsv4",
  [sym_authbasic] = "authbasic",
  [sym_authbearer] = "authbearer",
  [sym_authdigest] = "authdigest",
  [sym_authoauth2] = "authoauth2",
  [sym_bodies] = "bodies",
  [sym_bodyforms] = "bodyforms",
  [sym_body] = "body",
  [sym_bodyjson] = "bodyjson",
  [sym_bodytext] = "bodytext",
  [sym_bodyxml] = "bodyxml",
  [sym_bodysparql] = "bodysparql",
  [sym_bodygraphql] = "bodygraphql",
  [sym_bodygraphqlvars] = "bodygraphqlvars",
  [sym_bodyformurlencoded] = "bodyformurlencoded",
  [sym_bodyformmultipart] = "bodyformmultipart",
  [sym_varsandassert] = "varsandassert",
  [sym_vars] = "vars",
  [sym_vars_secret] = "vars_secret",
  [sym_varsreq] = "varsreq",
  [sym_varsres] = "varsres",
  [sym_assert] = "assert",
  [sym_script] = "script",
  [sym_scriptreq] = "scriptreq",
  [sym_scriptres] = "scriptres",
  [sym_params] = "params",
  [sym_params_query] = "params_query",
  [sym_params_path] = "params_path",
  [sym_tests] = "tests",
  [sym_docs] = "docs",
  [sym_textblock] = "textblock",
  [sym_array] = "array",
  [sym_dictionary] = "dictionary",
  [sym_dictionary_pair] = "dictionary_pair",
  [sym_assert_dictionary] = "assert_dictionary",
  [sym_assert_dictionary_pair] = "assert_dictionary_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_assert_dictionary_repeat1] = "assert_dictionary_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_connect] = anon_sym_connect,
  [anon_sym_trace] = anon_sym_trace,
  [anon_sym_query] = anon_sym_meta,
  [anon_sym_headers] = anon_sym_meta,
  [anon_sym_auth_COLONawsv4] = anon_sym_meta,
  [anon_sym_auth_COLONbasic] = anon_sym_meta,
  [anon_sym_auth_COLONbearer] = anon_sym_meta,
  [anon_sym_auth_COLONdigest] = anon_sym_meta,
  [anon_sym_auth_COLONoauth2] = anon_sym_meta,
  [anon_sym_body] = anon_sym_meta,
  [anon_sym_body_COLONjson] = anon_sym_meta,
  [anon_sym_body_COLONtext] = anon_sym_meta,
  [anon_sym_body_COLONxml] = anon_sym_meta,
  [anon_sym_body_COLONsparql] = anon_sym_meta,
  [anon_sym_body_COLONgraphql] = anon_sym_meta,
  [anon_sym_body_COLONgraphql_COLONvars] = anon_sym_meta,
  [anon_sym_body_COLONform_DASHurlencoded] = anon_sym_meta,
  [anon_sym_body_COLONmultipart_DASHform] = anon_sym_meta,
  [anon_sym_vars] = anon_sym_meta,
  [anon_sym_vars_COLONsecret] = anon_sym_meta,
  [anon_sym_vars_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_vars_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_assert] = anon_sym_meta,
  [anon_sym_script_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_script_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_params_COLONquery] = anon_sym_meta,
  [anon_sym_params_COLONpath] = anon_sym_meta,
  [anon_sym_tests] = anon_sym_meta,
  [anon_sym_docs] = anon_sym_meta,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_array_value] = sym_array_value,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_assert_key] = sym_assert_key,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_rawtext] = sym_rawtext,
  [sym_source_file] = sym_source_file,
  [sym_meta] = sym_meta,
  [sym_http] = sym_http,
  [sym_http_verb] = anon_sym_meta,
  [sym_query] = sym_query,
  [sym_headers] = sym_headers,
  [sym_auths] = sym_auths,
  [sym_authawsv4] = sym_authawsv4,
  [sym_authbasic] = sym_authbasic,
  [sym_authbearer] = sym_authbearer,
  [sym_authdigest] = sym_authdigest,
  [sym_authoauth2] = sym_authoauth2,
  [sym_bodies] = sym_bodies,
  [sym_bodyforms] = sym_bodyforms,
  [sym_body] = sym_body,
  [sym_bodyjson] = sym_bodyjson,
  [sym_bodytext] = sym_bodytext,
  [sym_bodyxml] = sym_bodyxml,
  [sym_bodysparql] = sym_bodysparql,
  [sym_bodygraphql] = sym_bodygraphql,
  [sym_bodygraphqlvars] = sym_bodygraphqlvars,
  [sym_bodyformurlencoded] = sym_bodyformurlencoded,
  [sym_bodyformmultipart] = sym_bodyformmultipart,
  [sym_varsandassert] = sym_varsandassert,
  [sym_vars] = sym_vars,
  [sym_vars_secret] = sym_vars_secret,
  [sym_varsreq] = sym_varsreq,
  [sym_varsres] = sym_varsres,
  [sym_assert] = sym_assert,
  [sym_script] = sym_script,
  [sym_scriptreq] = sym_scriptreq,
  [sym_scriptres] = sym_scriptres,
  [sym_params] = sym_params,
  [sym_params_query] = sym_params_query,
  [sym_params_path] = sym_params_path,
  [sym_tests] = sym_tests,
  [sym_docs] = sym_docs,
  [sym_textblock] = sym_textblock,
  [sym_array] = sym_array,
  [sym_dictionary] = sym_dictionary,
  [sym_dictionary_pair] = sym_dictionary_pair,
  [sym_assert_dictionary] = sym_assert_dictionary,
  [sym_assert_dictionary_pair] = sym_assert_dictionary_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_assert_dictionary_repeat1] = aux_sym_assert_dictionary_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_headers] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONawsv4] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONbasic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONbearer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONdigest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONoauth2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONjson] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONtext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONxml] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONsparql] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONgraphql] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONgraphql_COLONvars] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONform_DASHurlencoded] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONmultipart_DASHform] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONsecret] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONpre_DASHrequest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONpost_DASHresponse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script_COLONpre_DASHrequest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script_COLONpost_DASHresponse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_params_COLONquery] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_params_COLONpath] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tests] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_docs] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_array_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_assert_key] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_rawtext] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_http] = {
    .visible = true,
    .named = true,
  },
  [sym_http_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_headers] = {
    .visible = true,
    .named = true,
  },
  [sym_auths] = {
    .visible = true,
    .named = true,
  },
  [sym_authawsv4] = {
    .visible = true,
    .named = true,
  },
  [sym_authbasic] = {
    .visible = true,
    .named = true,
  },
  [sym_authbearer] = {
    .visible = true,
    .named = true,
  },
  [sym_authdigest] = {
    .visible = true,
    .named = true,
  },
  [sym_authoauth2] = {
    .visible = true,
    .named = true,
  },
  [sym_bodies] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyforms] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyjson] = {
    .visible = true,
    .named = true,
  },
  [sym_bodytext] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyxml] = {
    .visible = true,
    .named = true,
  },
  [sym_bodysparql] = {
    .visible = true,
    .named = true,
  },
  [sym_bodygraphql] = {
    .visible = true,
    .named = true,
  },
  [sym_bodygraphqlvars] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyformurlencoded] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyformmultipart] = {
    .visible = true,
    .named = true,
  },
  [sym_varsandassert] = {
    .visible = true,
    .named = true,
  },
  [sym_vars] = {
    .visible = true,
    .named = true,
  },
  [sym_vars_secret] = {
    .visible = true,
    .named = true,
  },
  [sym_varsreq] = {
    .visible = true,
    .named = true,
  },
  [sym_varsres] = {
    .visible = true,
    .named = true,
  },
  [sym_assert] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptreq] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptres] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_params_query] = {
    .visible = true,
    .named = true,
  },
  [sym_params_path] = {
    .visible = true,
    .named = true,
  },
  [sym_tests] = {
    .visible = true,
    .named = true,
  },
  [sym_docs] = {
    .visible = true,
    .named = true,
  },
  [sym_textblock] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_dictionary_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assert_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_tag = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_tag] = "tag",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_tag, 0},
  [1] =
    {field_tag, 0, .inherited = true},
  [2] =
    {field_tag, 0, .inherited = true},
    {field_tag, 1, .inherited = true},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(206);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == ':') ADVANCE(252);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'g') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(15);
      if (lookahead == 'q') ADVANCE(193);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead == '}') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '}') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(255);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\r') SKIP(2);
      if (lookahead == '}') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(254);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '\r') SKIP(3);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == ']') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(251);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(140);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(146);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(223);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(219);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(121);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(136);
      if (lookahead == 'j') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(241);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'q') ADVANCE(196);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 122:
      if (lookahead == 'q') ADVANCE(85);
      END_STATE();
    case 123:
      if (lookahead == 'q') ADVANCE(86);
      END_STATE();
    case 124:
      if (lookahead == 'q') ADVANCE(197);
      END_STATE();
    case 125:
      if (lookahead == 'q') ADVANCE(198);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 199:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 200:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 201:
      if (lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 202:
      if (lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 203:
      if (lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 204:
      if (lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(240);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_auth_COLONawsv4);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_auth_COLONbasic);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_auth_COLONbearer);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_auth_COLONdigest);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_body_COLONjson);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_body_COLONtext);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_body_COLONxml);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_body_COLONsparql);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql);
      if (lookahead == ':') ADVANCE(200);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql_COLONvars);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_body_COLONform_DASHurlencoded);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_body_COLONmultipart_DASHform);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_vars);
      if (lookahead == ':') ADVANCE(112);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_vars_COLONsecret);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_vars_COLONpre_DASHrequest);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_vars_COLONpost_DASHresponse);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_script_COLONpre_DASHrequest);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_script_COLONpost_DASHresponse);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_params_COLONquery);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_params_COLONpath);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_tests);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(255);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_array_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ':') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(257);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 256},
  [93] = {.lex_state = 256},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_connect] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_headers] = ACTIONS(1),
    [anon_sym_auth_COLONawsv4] = ACTIONS(1),
    [anon_sym_auth_COLONbasic] = ACTIONS(1),
    [anon_sym_auth_COLONbearer] = ACTIONS(1),
    [anon_sym_auth_COLONdigest] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_body_COLONjson] = ACTIONS(1),
    [anon_sym_body_COLONtext] = ACTIONS(1),
    [anon_sym_body_COLONxml] = ACTIONS(1),
    [anon_sym_body_COLONsparql] = ACTIONS(1),
    [anon_sym_body_COLONgraphql] = ACTIONS(1),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(1),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(1),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(1),
    [anon_sym_vars] = ACTIONS(1),
    [anon_sym_vars_COLONsecret] = ACTIONS(1),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_params_COLONquery] = ACTIONS(1),
    [anon_sym_params_COLONpath] = ACTIONS(1),
    [anon_sym_tests] = ACTIONS(1),
    [anon_sym_docs] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_rawtext] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(94),
    [sym_meta] = STATE(24),
    [sym_http] = STATE(24),
    [sym_http_verb] = STATE(66),
    [sym_query] = STATE(24),
    [sym_headers] = STATE(24),
    [sym_auths] = STATE(24),
    [sym_authawsv4] = STATE(7),
    [sym_authbasic] = STATE(7),
    [sym_authbearer] = STATE(7),
    [sym_authdigest] = STATE(7),
    [sym_authoauth2] = STATE(7),
    [sym_bodies] = STATE(24),
    [sym_bodyforms] = STATE(37),
    [sym_body] = STATE(37),
    [sym_bodyjson] = STATE(37),
    [sym_bodytext] = STATE(37),
    [sym_bodyxml] = STATE(37),
    [sym_bodysparql] = STATE(37),
    [sym_bodygraphql] = STATE(37),
    [sym_bodygraphqlvars] = STATE(37),
    [sym_bodyformurlencoded] = STATE(41),
    [sym_bodyformmultipart] = STATE(41),
    [sym_varsandassert] = STATE(24),
    [sym_vars] = STATE(43),
    [sym_vars_secret] = STATE(43),
    [sym_varsreq] = STATE(43),
    [sym_varsres] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_script] = STATE(24),
    [sym_scriptreq] = STATE(5),
    [sym_scriptres] = STATE(5),
    [sym_params] = STATE(43),
    [sym_params_query] = STATE(6),
    [sym_params_path] = STATE(6),
    [sym_tests] = STATE(24),
    [sym_docs] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_meta] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_post] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(7),
    [anon_sym_patch] = ACTIONS(7),
    [anon_sym_options] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_connect] = ACTIONS(7),
    [anon_sym_trace] = ACTIONS(7),
    [anon_sym_query] = ACTIONS(11),
    [anon_sym_headers] = ACTIONS(13),
    [anon_sym_auth_COLONawsv4] = ACTIONS(15),
    [anon_sym_auth_COLONbasic] = ACTIONS(17),
    [anon_sym_auth_COLONbearer] = ACTIONS(19),
    [anon_sym_auth_COLONdigest] = ACTIONS(21),
    [anon_sym_auth_COLONoauth2] = ACTIONS(23),
    [anon_sym_body] = ACTIONS(25),
    [anon_sym_body_COLONjson] = ACTIONS(27),
    [anon_sym_body_COLONtext] = ACTIONS(29),
    [anon_sym_body_COLONxml] = ACTIONS(31),
    [anon_sym_body_COLONsparql] = ACTIONS(33),
    [anon_sym_body_COLONgraphql] = ACTIONS(35),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(37),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(39),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(41),
    [anon_sym_vars] = ACTIONS(43),
    [anon_sym_vars_COLONsecret] = ACTIONS(45),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(47),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(49),
    [anon_sym_assert] = ACTIONS(51),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(53),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(55),
    [anon_sym_params_COLONquery] = ACTIONS(57),
    [anon_sym_params_COLONpath] = ACTIONS(59),
    [anon_sym_tests] = ACTIONS(61),
    [anon_sym_docs] = ACTIONS(63),
  },
  [2] = {
    [sym_meta] = STATE(24),
    [sym_http] = STATE(24),
    [sym_http_verb] = STATE(66),
    [sym_query] = STATE(24),
    [sym_headers] = STATE(24),
    [sym_auths] = STATE(24),
    [sym_authawsv4] = STATE(7),
    [sym_authbasic] = STATE(7),
    [sym_authbearer] = STATE(7),
    [sym_authdigest] = STATE(7),
    [sym_authoauth2] = STATE(7),
    [sym_bodies] = STATE(24),
    [sym_bodyforms] = STATE(37),
    [sym_body] = STATE(37),
    [sym_bodyjson] = STATE(37),
    [sym_bodytext] = STATE(37),
    [sym_bodyxml] = STATE(37),
    [sym_bodysparql] = STATE(37),
    [sym_bodygraphql] = STATE(37),
    [sym_bodygraphqlvars] = STATE(37),
    [sym_bodyformurlencoded] = STATE(41),
    [sym_bodyformmultipart] = STATE(41),
    [sym_varsandassert] = STATE(24),
    [sym_vars] = STATE(43),
    [sym_vars_secret] = STATE(43),
    [sym_varsreq] = STATE(43),
    [sym_varsres] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_script] = STATE(24),
    [sym_scriptreq] = STATE(5),
    [sym_scriptres] = STATE(5),
    [sym_params] = STATE(43),
    [sym_params_query] = STATE(6),
    [sym_params_path] = STATE(6),
    [sym_tests] = STATE(24),
    [sym_docs] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_meta] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_post] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(7),
    [anon_sym_patch] = ACTIONS(7),
    [anon_sym_options] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_connect] = ACTIONS(7),
    [anon_sym_trace] = ACTIONS(7),
    [anon_sym_query] = ACTIONS(11),
    [anon_sym_headers] = ACTIONS(13),
    [anon_sym_auth_COLONawsv4] = ACTIONS(15),
    [anon_sym_auth_COLONbasic] = ACTIONS(17),
    [anon_sym_auth_COLONbearer] = ACTIONS(19),
    [anon_sym_auth_COLONdigest] = ACTIONS(21),
    [anon_sym_auth_COLONoauth2] = ACTIONS(23),
    [anon_sym_body] = ACTIONS(25),
    [anon_sym_body_COLONjson] = ACTIONS(27),
    [anon_sym_body_COLONtext] = ACTIONS(29),
    [anon_sym_body_COLONxml] = ACTIONS(31),
    [anon_sym_body_COLONsparql] = ACTIONS(33),
    [anon_sym_body_COLONgraphql] = ACTIONS(35),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(37),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(39),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(41),
    [anon_sym_vars] = ACTIONS(43),
    [anon_sym_vars_COLONsecret] = ACTIONS(45),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(47),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(49),
    [anon_sym_assert] = ACTIONS(51),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(53),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(55),
    [anon_sym_params_COLONquery] = ACTIONS(57),
    [anon_sym_params_COLONpath] = ACTIONS(59),
    [anon_sym_tests] = ACTIONS(61),
    [anon_sym_docs] = ACTIONS(63),
  },
  [3] = {
    [sym_meta] = STATE(24),
    [sym_http] = STATE(24),
    [sym_http_verb] = STATE(66),
    [sym_query] = STATE(24),
    [sym_headers] = STATE(24),
    [sym_auths] = STATE(24),
    [sym_authawsv4] = STATE(7),
    [sym_authbasic] = STATE(7),
    [sym_authbearer] = STATE(7),
    [sym_authdigest] = STATE(7),
    [sym_authoauth2] = STATE(7),
    [sym_bodies] = STATE(24),
    [sym_bodyforms] = STATE(37),
    [sym_body] = STATE(37),
    [sym_bodyjson] = STATE(37),
    [sym_bodytext] = STATE(37),
    [sym_bodyxml] = STATE(37),
    [sym_bodysparql] = STATE(37),
    [sym_bodygraphql] = STATE(37),
    [sym_bodygraphqlvars] = STATE(37),
    [sym_bodyformurlencoded] = STATE(41),
    [sym_bodyformmultipart] = STATE(41),
    [sym_varsandassert] = STATE(24),
    [sym_vars] = STATE(43),
    [sym_vars_secret] = STATE(43),
    [sym_varsreq] = STATE(43),
    [sym_varsres] = STATE(43),
    [sym_assert] = STATE(43),
    [sym_script] = STATE(24),
    [sym_scriptreq] = STATE(5),
    [sym_scriptres] = STATE(5),
    [sym_params] = STATE(43),
    [sym_params_query] = STATE(6),
    [sym_params_path] = STATE(6),
    [sym_tests] = STATE(24),
    [sym_docs] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_meta] = ACTIONS(69),
    [anon_sym_get] = ACTIONS(72),
    [anon_sym_post] = ACTIONS(72),
    [anon_sym_put] = ACTIONS(72),
    [anon_sym_delete] = ACTIONS(72),
    [anon_sym_patch] = ACTIONS(72),
    [anon_sym_options] = ACTIONS(72),
    [anon_sym_head] = ACTIONS(75),
    [anon_sym_connect] = ACTIONS(72),
    [anon_sym_trace] = ACTIONS(72),
    [anon_sym_query] = ACTIONS(78),
    [anon_sym_headers] = ACTIONS(81),
    [anon_sym_auth_COLONawsv4] = ACTIONS(84),
    [anon_sym_auth_COLONbasic] = ACTIONS(87),
    [anon_sym_auth_COLONbearer] = ACTIONS(90),
    [anon_sym_auth_COLONdigest] = ACTIONS(93),
    [anon_sym_auth_COLONoauth2] = ACTIONS(96),
    [anon_sym_body] = ACTIONS(99),
    [anon_sym_body_COLONjson] = ACTIONS(102),
    [anon_sym_body_COLONtext] = ACTIONS(105),
    [anon_sym_body_COLONxml] = ACTIONS(108),
    [anon_sym_body_COLONsparql] = ACTIONS(111),
    [anon_sym_body_COLONgraphql] = ACTIONS(114),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(117),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(120),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(123),
    [anon_sym_vars] = ACTIONS(126),
    [anon_sym_vars_COLONsecret] = ACTIONS(129),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(132),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(135),
    [anon_sym_assert] = ACTIONS(138),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(141),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(144),
    [anon_sym_params_COLONquery] = ACTIONS(147),
    [anon_sym_params_COLONpath] = ACTIONS(150),
    [anon_sym_tests] = ACTIONS(153),
    [anon_sym_docs] = ACTIONS(156),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(161), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(159), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [43] = 2,
    ACTIONS(165), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(163), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [86] = 2,
    ACTIONS(169), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(167), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [129] = 2,
    ACTIONS(173), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(171), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [172] = 2,
    ACTIONS(177), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(175), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [215] = 2,
    ACTIONS(181), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(179), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [258] = 2,
    ACTIONS(185), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(183), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [301] = 2,
    ACTIONS(189), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(187), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [344] = 2,
    ACTIONS(193), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(191), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [387] = 2,
    ACTIONS(197), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(195), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [430] = 2,
    ACTIONS(201), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(199), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [473] = 2,
    ACTIONS(205), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(203), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [516] = 2,
    ACTIONS(209), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(207), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [559] = 2,
    ACTIONS(213), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(211), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [602] = 2,
    ACTIONS(217), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(215), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [645] = 2,
    ACTIONS(221), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(219), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [688] = 2,
    ACTIONS(225), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(223), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [731] = 2,
    ACTIONS(229), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(227), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [774] = 2,
    ACTIONS(233), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(231), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [817] = 2,
    ACTIONS(237), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(235), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [860] = 2,
    ACTIONS(241), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(239), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [903] = 2,
    ACTIONS(245), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(243), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [946] = 2,
    ACTIONS(249), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(247), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [989] = 2,
    ACTIONS(253), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(251), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1032] = 2,
    ACTIONS(257), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(255), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1075] = 2,
    ACTIONS(261), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(259), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1118] = 2,
    ACTIONS(265), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(263), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1161] = 2,
    ACTIONS(269), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(267), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1204] = 2,
    ACTIONS(273), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(271), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1247] = 2,
    ACTIONS(277), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(275), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1290] = 2,
    ACTIONS(281), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(279), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1333] = 2,
    ACTIONS(285), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(283), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1376] = 2,
    ACTIONS(289), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(287), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1419] = 2,
    ACTIONS(293), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(291), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1462] = 2,
    ACTIONS(297), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(295), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1505] = 2,
    ACTIONS(301), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(299), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1548] = 2,
    ACTIONS(305), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(303), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1591] = 2,
    ACTIONS(309), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(307), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1634] = 2,
    ACTIONS(313), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(311), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1677] = 2,
    ACTIONS(317), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(315), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1720] = 2,
    ACTIONS(321), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(319), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1763] = 2,
    ACTIONS(325), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(323), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1806] = 2,
    ACTIONS(329), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(327), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1849] = 2,
    ACTIONS(333), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(331), 34,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONoauth2,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_tests,
      anon_sym_docs,
  [1892] = 3,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(337), 1,
      sym_key,
    STATE(48), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1903] = 3,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 1,
      sym_assert_key,
    STATE(49), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1914] = 3,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      sym_assert_key,
    STATE(49), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1925] = 3,
    ACTIONS(347), 1,
      sym_assert_key,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1936] = 3,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 1,
      sym_key,
    STATE(48), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1947] = 3,
    ACTIONS(353), 1,
      sym_key,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(52), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1958] = 2,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 2,
      anon_sym_RBRACK,
      sym_array_value,
  [1966] = 3,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    ACTIONS(363), 1,
      sym_array_value,
    STATE(57), 1,
      aux_sym_array_repeat1,
  [1976] = 3,
    ACTIONS(363), 1,
      sym_array_value,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_array_repeat1,
  [1986] = 3,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
    ACTIONS(369), 1,
      sym_array_value,
    STATE(57), 1,
      aux_sym_array_repeat1,
  [1996] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_dictionary,
  [2003] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_dictionary,
  [2010] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_dictionary,
  [2017] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_dictionary,
  [2024] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_textblock,
  [2031] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_textblock,
  [2038] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_dictionary,
  [2045] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_dictionary,
  [2052] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_dictionary,
  [2059] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_dictionary,
  [2066] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_dictionary,
  [2073] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_dictionary,
  [2080] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_textblock,
  [2087] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_dictionary,
  [2094] = 2,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      sym_rawtext,
  [2101] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_dictionary,
  [2108] = 2,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_array,
  [2115] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_dictionary,
  [2122] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_dictionary,
  [2129] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_dictionary,
  [2136] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_textblock,
  [2143] = 2,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_assert_dictionary,
  [2150] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_textblock,
  [2157] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_textblock,
  [2164] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_textblock,
  [2171] = 1,
    ACTIONS(367), 2,
      anon_sym_RBRACK,
      sym_array_value,
  [2176] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_textblock,
  [2183] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_textblock,
  [2190] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_textblock,
  [2197] = 2,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_textblock,
  [2204] = 1,
    ACTIONS(384), 2,
      anon_sym_RBRACE,
      sym_key,
  [2209] = 1,
    ACTIONS(386), 2,
      anon_sym_RBRACE,
      sym_assert_key,
  [2214] = 2,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_dictionary,
  [2221] = 1,
    ACTIONS(388), 1,
      anon_sym_COLON,
  [2225] = 1,
    ACTIONS(390), 1,
      sym_value,
  [2229] = 1,
    ACTIONS(392), 1,
      sym_value,
  [2233] = 1,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
  [2237] = 1,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
  [2241] = 1,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
  [2245] = 1,
    ACTIONS(400), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 215,
  [SMALL_STATE(10)] = 258,
  [SMALL_STATE(11)] = 301,
  [SMALL_STATE(12)] = 344,
  [SMALL_STATE(13)] = 387,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 473,
  [SMALL_STATE(16)] = 516,
  [SMALL_STATE(17)] = 559,
  [SMALL_STATE(18)] = 602,
  [SMALL_STATE(19)] = 645,
  [SMALL_STATE(20)] = 688,
  [SMALL_STATE(21)] = 731,
  [SMALL_STATE(22)] = 774,
  [SMALL_STATE(23)] = 817,
  [SMALL_STATE(24)] = 860,
  [SMALL_STATE(25)] = 903,
  [SMALL_STATE(26)] = 946,
  [SMALL_STATE(27)] = 989,
  [SMALL_STATE(28)] = 1032,
  [SMALL_STATE(29)] = 1075,
  [SMALL_STATE(30)] = 1118,
  [SMALL_STATE(31)] = 1161,
  [SMALL_STATE(32)] = 1204,
  [SMALL_STATE(33)] = 1247,
  [SMALL_STATE(34)] = 1290,
  [SMALL_STATE(35)] = 1333,
  [SMALL_STATE(36)] = 1376,
  [SMALL_STATE(37)] = 1419,
  [SMALL_STATE(38)] = 1462,
  [SMALL_STATE(39)] = 1505,
  [SMALL_STATE(40)] = 1548,
  [SMALL_STATE(41)] = 1591,
  [SMALL_STATE(42)] = 1634,
  [SMALL_STATE(43)] = 1677,
  [SMALL_STATE(44)] = 1720,
  [SMALL_STATE(45)] = 1763,
  [SMALL_STATE(46)] = 1806,
  [SMALL_STATE(47)] = 1849,
  [SMALL_STATE(48)] = 1892,
  [SMALL_STATE(49)] = 1903,
  [SMALL_STATE(50)] = 1914,
  [SMALL_STATE(51)] = 1925,
  [SMALL_STATE(52)] = 1936,
  [SMALL_STATE(53)] = 1947,
  [SMALL_STATE(54)] = 1958,
  [SMALL_STATE(55)] = 1966,
  [SMALL_STATE(56)] = 1976,
  [SMALL_STATE(57)] = 1986,
  [SMALL_STATE(58)] = 1996,
  [SMALL_STATE(59)] = 2003,
  [SMALL_STATE(60)] = 2010,
  [SMALL_STATE(61)] = 2017,
  [SMALL_STATE(62)] = 2024,
  [SMALL_STATE(63)] = 2031,
  [SMALL_STATE(64)] = 2038,
  [SMALL_STATE(65)] = 2045,
  [SMALL_STATE(66)] = 2052,
  [SMALL_STATE(67)] = 2059,
  [SMALL_STATE(68)] = 2066,
  [SMALL_STATE(69)] = 2073,
  [SMALL_STATE(70)] = 2080,
  [SMALL_STATE(71)] = 2087,
  [SMALL_STATE(72)] = 2094,
  [SMALL_STATE(73)] = 2101,
  [SMALL_STATE(74)] = 2108,
  [SMALL_STATE(75)] = 2115,
  [SMALL_STATE(76)] = 2122,
  [SMALL_STATE(77)] = 2129,
  [SMALL_STATE(78)] = 2136,
  [SMALL_STATE(79)] = 2143,
  [SMALL_STATE(80)] = 2150,
  [SMALL_STATE(81)] = 2157,
  [SMALL_STATE(82)] = 2164,
  [SMALL_STATE(83)] = 2171,
  [SMALL_STATE(84)] = 2176,
  [SMALL_STATE(85)] = 2183,
  [SMALL_STATE(86)] = 2190,
  [SMALL_STATE(87)] = 2197,
  [SMALL_STATE(88)] = 2204,
  [SMALL_STATE(89)] = 2209,
  [SMALL_STATE(90)] = 2214,
  [SMALL_STATE(91)] = 2221,
  [SMALL_STATE(92)] = 2225,
  [SMALL_STATE(93)] = 2229,
  [SMALL_STATE(94)] = 2233,
  [SMALL_STATE(95)] = 2237,
  [SMALL_STATE(96)] = 2241,
  [SMALL_STATE(97)] = 2245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(65),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(96),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(96),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(67),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(68),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(69),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(58),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(71),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(90),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(75),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(78),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(80),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(81),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(82),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(84),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(86),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(70),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(60),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(64),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(73),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(74),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(76),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(77),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(79),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(85),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(87),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(59),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(61),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(62),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 3), SHIFT_REPEAT(63),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auths, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auths, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authawsv4, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authawsv4, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbasic, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbasic, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbearer, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbearer, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authdigest, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authdigest, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authoauth2, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authoauth2, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyjson, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyjson, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodytext, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodytext, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyxml, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyxml, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodysparql, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodysparql, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphql, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphql, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphqlvars, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphqlvars, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformurlencoded, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformurlencoded, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_secret, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars_secret, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsreq, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsreq, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsres, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsres, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptreq, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptreq, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptres, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptres, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params_query, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params_query, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params_path, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params_path, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tests, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tests, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodies, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodies, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 2, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 2, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyforms, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyforms, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsandassert, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsandassert, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformmultipart, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformmultipart, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_pair, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary_pair, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [394] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_verb, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_rawtext = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_rawtext] = sym_rawtext,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_rawtext] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bruno_external_scanner_create(void);
void tree_sitter_bruno_external_scanner_destroy(void *);
bool tree_sitter_bruno_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bruno_external_scanner_serialize(void *, char *);
void tree_sitter_bruno_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bruno(void) {
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
      tree_sitter_bruno_external_scanner_create,
      tree_sitter_bruno_external_scanner_destroy,
      tree_sitter_bruno_external_scanner_scan,
      tree_sitter_bruno_external_scanner_serialize,
      tree_sitter_bruno_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
